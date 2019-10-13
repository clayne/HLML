/*
===========================================================================

HLML Generator.
Copyright (c) Dan Moody 2018 - Present.

This file is part of the HLML Generator.

The HLML Generator is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

The HLML Generator is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with The HLML Generator.  If not, see <http://www.gnu.org/licenses/>.

===========================================================================
*/
#include "gen_funcs_matrix.h"

#include "gen_doc_common.h"
#include "gen_doc_matrix.h"

#include <assert.h>

static void MatrixOperatorMul( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	u32 numRhsRows = numCols;
	u32 numRhsCols = numRows;

	const char* typeString = Gen_GetTypeString( type );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	char rhsTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	char returnTypeName[GEN_STRING_LENGTH_TYPE_NAME];

	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );
	snprintf( rhsTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numCols, numRows );
	snprintf( returnTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numRows );

	// main operator
	Doc_MatrixMultiplication( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s operator*( const %s& lhs, const %s& rhs )\n", returnTypeName, fullTypeName, rhsTypeName );
	String_Append(  sbHeader, "{\n" );
	// generate row vars
	for ( u32 row = 0; row < numRows; row++ ) {
		String_Appendf( sbHeader, "\t%s%d row%d = lhs[%d];\n", typeString, numCols, row, row );
	}

	String_Append( sbHeader, "\n" );

	// generate col vars
	for ( u32 col = 0; col < numRhsCols; col++ ) {
		String_Appendf( sbHeader, "\t%s%d col%d = { ", typeString, numCols, col );
		for ( u32 rhsRow = 0; rhsRow < numRhsRows; rhsRow++ ) {
			String_Appendf( sbHeader, "rhs[%d].%c", rhsRow, GEN_COMPONENT_NAMES_VECTOR[col] );

			if ( rhsRow != numCols - 1 ) {
				String_Append( sbHeader, ", " );
			}
		}

		String_Append( sbHeader, " };\n" );
	}
	String_Append( sbHeader, "\n" );

	// now do the row/col dot products
	String_Appendf( sbHeader, "\treturn %s(\n", returnTypeName );

	for ( u32 row = 0; row < numRows; row++ ) {
		for ( u32 col = 0; col < numRows; col++ ) {
			String_Append( sbHeader, "\t\t" );

			for ( u32 rhsRow = 0; rhsRow < numRhsRows; rhsRow++ ) {
				char rhsComponent = GEN_COMPONENT_NAMES_VECTOR[rhsRow];

				String_Appendf( sbHeader, "row%d.%c * col%d.%c", row, rhsComponent, col, rhsComponent );

				if ( rhsRow != numRhsRows - 1 ) {
					String_Append( sbHeader, " + " );
				} else {
					if ( col + ( row * numRows ) != ( numRows * numRows ) - 1 ) {
						String_Append( sbHeader, "," );
					}

					String_Append( sbHeader, "\n" );
				}
			}
		}

		if ( row != numRows - 1 ) {
			String_Append( sbHeader, "\n" );
		}
	}
	String_Append( sbHeader, "\t);\n" );
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );

	// compound operator
	if ( numRows == numCols ) {
		String_Appendf( sbHeader, "inline %s operator*=( %s& lhs, const %s& rhs )\n", returnTypeName, fullTypeName, rhsTypeName );
		String_Append(  sbHeader, "{\n" );
		String_Append(  sbHeader, "\treturn ( lhs = lhs * rhs );\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}
}

static void MatrixOperatorDiv( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	const char* typeString = Gen_GetTypeString( type );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	// main operator
	Doc_MatrixDivision( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s operator/( const %s& lhs, const %s& rhs )\n", fullTypeName, fullTypeName, fullTypeName );
	String_Append(  sbHeader, "{\n" );
	String_Append(  sbHeader, "\treturn lhs * inverse( rhs );\n" );
	String_Append(  sbHeader, "}\n" );
	String_Append(  sbHeader, "\n" );

	// compound operator
	Doc_MatrixDivisionCompound( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s operator/=( %s& lhs, const %s& rhs )\n", fullTypeName, fullTypeName, fullTypeName );
	String_Append(  sbHeader, "{\n" );
	String_Append(  sbHeader, "\treturn ( lhs = lhs / rhs );\n" );
	String_Append(  sbHeader, "}\n" );
	String_Append(  sbHeader, "\n" );
}

static void MatrixMulVector( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	const char* typeString = Gen_GetTypeString( type );
	const char* memberTypeString = Gen_GetMemberTypeString( type );

	char vectorTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( vectorTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%d", typeString, numCols );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	// main operator
	{
		Doc_ComponentWiseArithmeticRhsType( sbHeader, vectorTypeName, fullTypeName, GEN_OP_ARITHMETIC_MUL );
		String_Appendf( sbHeader, "inline %s operator*( const %s& lhs, const %s& rhs )\n", vectorTypeName, fullTypeName, vectorTypeName );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", vectorTypeName );
		for ( u32 row = 0; row < numRows; row++ ) {
			String_Appendf( sbHeader, "\t\t(%s) dot( lhs[%d], rhs )", memberTypeString, row );

			if ( row != numRows - 1 ) {
				String_Append( sbHeader, "," );
			}

			String_Append( sbHeader, "\n" );
		}
		String_Append( sbHeader, "\t);\n" );
		String_Append( sbHeader, "}\n" );
		String_Append( sbHeader, "\n" );
	}

	// compound operator
	{
		Doc_OperatorCompoundComponentWiseArithmeticRhsType( sbHeader, vectorTypeName, fullTypeName, GEN_OP_ARITHMETIC_MUL );
		String_Appendf( sbHeader, "inline %s operator*=( %s& lhs, const %s& rhs )\n", vectorTypeName, vectorTypeName, fullTypeName );
		String_Append(  sbHeader, "{\n" );
		String_Append(  sbHeader, "\treturn ( lhs = rhs * lhs );\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}
}


void Gen_GetParmListMatrix( const genType_t type, const u32 numRows, const u32 numCols, const float values[GEN_COMPONENT_COUNT_MAX][GEN_COMPONENT_COUNT_MAX], char* outString ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	char valueStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];

	int pos = 0;

	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "(\n" );

	for ( u32 row = 0; row < numRows; row++ ) {
		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t\t" );

		for ( u32 col = 0; col < numCols; col++ ) {
			const float value = values[row][col];

			Gen_GetNumericLiteral( type, value, valueStr );

			pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "%s", valueStr );

			if ( row + col != ( numRows - 1 ) + ( numCols - 1 ) ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "," );
			}

			if ( col != numCols - 1 ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, " " );
			}
		}

		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\n" );
	}

	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t)" );
}

void Gen_GetParmListMatrixIdentity( const genType_t type, const u32 numRows, const u32 numCols, char* outString ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	const float values[] = { 1.0f, 1.0f, 1.0f, 1.0f };

	Gen_GetParmListMatrixDiagonal( type, numRows, numCols, values, GEN_MIN( numRows, numCols ), outString );
}

void Gen_GetParmListMatrixDiagonal( const genType_t type, const u32 numRows, const u32 numCols, const float* values, const u32 numValues, char* outString ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	assert( numValues <= 4 );

	char valueStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];

	int pos = 0;

	u32 valueIndex = 0;

	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "(\n" );
	for ( u32 row = 0; row < numRows; row++ ) {
		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t\t" );

		for ( u32 col = 0; col < numCols; col++ ) {
			if ( row == col ) {
				Gen_GetNumericLiteral( type, values[valueIndex++], valueStr );

				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "%s", valueStr );
			} else {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "%s", Gen_GetDefaultLiteralValue( type ) );
			}

			if ( row + col != ( numRows - 1 ) + ( numCols - 1 ) ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "," );
			}

			if ( col != numCols - 1 ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, " " );
			}
		}

		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\n" );
	}
	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t)" );
}

void Gen_GetParmListMatrixSingleValue( const genType_t type, const u32 numRows, const u32 numCols, const float value, char* outString ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	char valueStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	Gen_GetNumericLiteral( type, value, valueStr );

	int pos = 0;

	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "(\n" );
	for ( u32 row = 0; row < numRows; row++ ) {
		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t\t" );

		for ( u32 col = 0; col < numCols; col++ ) {
			pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "%s", valueStr );

			if ( row + col != ( numRows - 1 ) + ( numCols - 1 ) ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "," );
			}

			if ( col != numCols - 1 ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, " " );
			}
		}

		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\n" );
	}
	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t)" );
}

void Gen_GetParmListMatrixSingleValueStr( const u32 numRows, const u32 numCols, const char* valueStr, char* outString ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	int pos = 0;

	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "(\n" );
	for ( u32 row = 0; row < numRows; row++ ) {
		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t\t" );

		for ( u32 col = 0; col < numCols; col++ ) {
			pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "%s", valueStr );

			if ( row + col != ( numRows - 1 ) + ( numCols - 1 ) ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "," );
			}

			if ( col != numCols - 1 ) {
				pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, " " );
			}
		}

		pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\n" );
	}
	pos += snprintf( outString + pos, GEN_STRING_LENGTH_PARM_LIST_MATRIX, "\t)" );
}


void Gen_MatrixOperatorsArithmetic( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( type == GEN_TYPE_BOOL ) {
		return;
	}

	Gen_OperatorComponentWiseArithmeticScalar( type, numRows, numCols, GEN_OP_ARITHMETIC_ADD, sbHeader );
	Gen_OperatorComponentWiseArithmeticRhsType( type, numRows, numCols, GEN_OP_ARITHMETIC_ADD, sbHeader );

	Gen_OperatorComponentWiseArithmeticScalar( type, numRows, numCols, GEN_OP_ARITHMETIC_SUB, sbHeader );
	Gen_OperatorComponentWiseArithmeticRhsType( type, numRows, numCols, GEN_OP_ARITHMETIC_SUB, sbHeader );

	Gen_OperatorComponentWiseArithmeticScalar( type, numRows, numCols, GEN_OP_ARITHMETIC_MUL, sbHeader );
	MatrixOperatorMul( type, numRows, numCols, sbHeader );

	Gen_OperatorComponentWiseArithmeticScalar( type, numRows, numCols, GEN_OP_ARITHMETIC_DIV, sbHeader );

	const bool32 isSquare = numRows == numCols;

	// TODO(DM): pseudo-inverse
	if ( isSquare && Gen_TypeIsFloatingPoint( type ) ) {
		MatrixOperatorDiv( type, numRows, numCols, sbHeader );
	} else {
		Gen_OperatorComponentWiseArithmeticRhsType( type, numRows, numCols, GEN_OP_ARITHMETIC_DIV, sbHeader );
	}

	if ( isSquare ) {
		MatrixMulVector( type, numRows, numCols, sbHeader );
	}
}

void Gen_MatrixIdentity( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", Gen_GetTypeString( type ), numRows, numCols );

	char zeroStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char oneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];

	Gen_GetNumericLiteral( type, 0, zeroStr, 1 );
	Gen_GetNumericLiteral( type, 1, oneStr, 1 );

	Doc_MatrixIdentity( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline void identity( %s& mat )\n", fullTypeName );
	String_Append(  sbHeader, "{\n" );
	for ( u32 row = 0; row < numRows; row++ ) {
		String_Appendf( sbHeader, "\tmat[%d] = { ", row );
		for ( u32 col = 0; col < numCols; col++ ) {
			String_Appendf( sbHeader, "%s", ( row == col ) ? oneStr : zeroStr );

			if ( col != numCols - 1 ) {
				String_Append( sbHeader, ", " );
			}
		}
		String_Append( sbHeader, " };\n" );
	}
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );
}

void Gen_MatrixTranspose( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	const char* typeString = Gen_GetTypeString( type );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	char transposeTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( transposeTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numCols, numRows );

	Doc_MatrixTranpose( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s transpose( const %s& mat )\n", transposeTypeName, fullTypeName );
	String_Append(  sbHeader, "{\n" );
	String_Appendf( sbHeader, "\treturn %s(\n", transposeTypeName );

	for ( u32 col = 0; col < numCols; col++ ) {
		String_Append( sbHeader, "\t\t" );

		for ( u32 row = 0; row < numRows; row++ ) {
			String_Appendf( sbHeader, "mat[%d][%d]", row, col );

			if ( row + col != ( numRows - 1 ) + ( numCols - 1 ) ) {
				String_Append( sbHeader, "," );
			}

			if ( row != numRows - 1 ) {
				String_Append( sbHeader, " " );
			} else {
				String_Append( sbHeader, "\n" );
			}
		}
	}
	String_Append( sbHeader, "\t);\n" );
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );
}

void Gen_MatrixInverse( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( !Gen_TypeIsFloatingPoint( type ) ) {
		return;
	}

	// true inverse can only be done for NxN matrices
	// only pseudo-inverse can be done for NxM matrices where N != M
	if ( numRows != numCols ) {
		return;
	}

	char oneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	Gen_GetNumericLiteral( type, 1, oneStr, 1 );

	const char* typeString = Gen_GetTypeString( type );
	const char* memberTypeString = Gen_GetMemberTypeString( type );

	char vectorTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( vectorTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%d", typeString, numCols );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	Doc_MatrixInverse( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s inverse( const %s& mat )\n", fullTypeName, fullTypeName );
	String_Append(  sbHeader, "{\n" );

	switch ( numRows ) {
		case 2: {
			String_Appendf( sbHeader, "\tconst %s invdet = %s / determinant( mat );\n", memberTypeString, oneStr );
			String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
			String_Append(  sbHeader, "\t\t mat[1][1] * invdet, -mat[0][1] * invdet,\n" );
			String_Append(  sbHeader, "\t\t-mat[1][0] * invdet,  mat[0][0] * invdet\n" );
			String_Append(  sbHeader, "\t);\n" );
			break;
		}

		case 3: {
			String_Appendf( sbHeader, "\tconst %s invdet = %s / determinant( mat );\n", memberTypeString, oneStr );
			String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
			String_Append(  sbHeader, "\t\t ( mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1] ) * invdet,\n" );
			String_Append(  sbHeader, "\t\t-( mat[0][1] * mat[2][2] - mat[0][2] * mat[2][1] ) * invdet,\n" );
			String_Append(  sbHeader, "\t\t ( mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1] ) * invdet,\n" );
			String_Append(  sbHeader, "\n" );
			String_Append(  sbHeader, "\t\t-( mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0] ) * invdet,\n" );
			String_Append(  sbHeader, "\t\t ( mat[0][0] * mat[2][2] - mat[0][2] * mat[2][0] ) * invdet,\n" );
			String_Append(  sbHeader, "\t\t-( mat[0][0] * mat[1][2] - mat[0][2] * mat[1][0] ) * invdet,\n" );
			String_Append(  sbHeader, "\n" );
			String_Append(  sbHeader, "\t\t ( mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0] ) * invdet,\n" );
			String_Append(  sbHeader, "\t\t-( mat[0][0] * mat[2][1] - mat[0][1] * mat[2][0] ) * invdet,\n" );
			String_Append(  sbHeader, "\t\t ( mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0] ) * invdet\n" );
			String_Append(  sbHeader, "\t);\n" );
			break;
		}

		case 4: {
			String_Append(  sbHeader, "\t// uses the glm version, which is basically just an optimised version of the adjugate formula\n" );
			String_Appendf( sbHeader, "\t%s sub00 = mat[2][2] * mat[3][3] - mat[3][2] * mat[2][3];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub01 = mat[1][2] * mat[3][3] - mat[1][3] * mat[2][3];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub02 = mat[1][2] * mat[2][3] - mat[1][3] * mat[2][2];\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s sub03 = mat[2][1] * mat[3][3] - mat[2][3] * mat[3][1];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub04 = mat[1][1] * mat[3][3] - mat[1][3] * mat[3][1];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub05 = mat[1][1] * mat[2][3] - mat[1][3] * mat[2][1];\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s sub06 = mat[2][1] * mat[3][2] - mat[2][2] * mat[3][1];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub07 = mat[1][1] * mat[3][2] - mat[1][2] * mat[3][1];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub08 = mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1];\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s sub09 = mat[2][0] * mat[3][3] - mat[3][0] * mat[2][3];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub10 = mat[1][0] * mat[3][3] - mat[3][0] * mat[1][3];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub11 = mat[1][0] * mat[2][3] - mat[2][0] * mat[1][3];\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s sub12 = mat[2][0] * mat[3][2] - mat[2][2] * mat[3][0];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub13 = mat[1][0] * mat[3][2] - mat[1][2] * mat[3][0];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub14 = mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0];\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s sub15 = mat[2][0] * mat[3][1] - mat[2][1] * mat[3][0];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub16 = mat[1][0] * mat[3][1] - mat[1][1] * mat[3][0];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub17 = mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0];\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s fac0 = %s( sub00, sub00, sub01, sub02 );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s fac1 = %s( sub03, sub03, sub04, sub05 );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s fac2 = %s( sub06, sub06, sub07, sub08 );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s fac3 = %s( sub09, sub09, sub10, sub11 );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s fac4 = %s( sub12, sub12, sub13, sub14 );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s fac5 = %s( sub15, sub15, sub16, sub17 );\n", vectorTypeName, vectorTypeName );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s vec0 = %s( mat[1][0], mat[0][0], mat[0][0], mat[0][0] );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s vec1 = %s( mat[1][1], mat[0][1], mat[0][1], mat[0][1] );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s vec2 = %s( mat[1][2], mat[0][2], mat[0][2], mat[0][2] );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s vec3 = %s( mat[1][3], mat[0][3], mat[0][3], mat[0][3] );\n", vectorTypeName, vectorTypeName );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s inv0 = vec1 * fac0 - vec2 * fac1 + vec3 * fac2;\n", vectorTypeName );
			String_Appendf( sbHeader, "\t%s inv1 = vec0 * fac0 - vec2 * fac3 + vec3 * fac4;\n", vectorTypeName );
			String_Appendf( sbHeader, "\t%s inv2 = vec0 * fac1 - vec1 * fac3 + vec3 * fac5;\n", vectorTypeName );
			String_Appendf( sbHeader, "\t%s inv3 = vec0 * fac2 - vec1 * fac4 + vec2 * fac5;\n", vectorTypeName );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s sign0 = %s(  1, -1,  1, -1 );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s sign1 = %s( -1,  1, -1,  1 );\n", vectorTypeName, vectorTypeName );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s result = %s(\n", fullTypeName, fullTypeName );
			String_Append(  sbHeader, "\t\tinv0 * sign0,\n" );
			String_Append(  sbHeader, "\t\tinv1 * sign1,\n" );
			String_Append(  sbHeader, "\t\tinv2 * sign0,\n" );
			String_Append(  sbHeader, "\t\tinv3 * sign1\n" );
			String_Append(  sbHeader, "\t);\n" );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s col0 = %s( result[0][0], result[1][0], result[2][0], result[3][0] );\n", vectorTypeName, vectorTypeName );
			String_Appendf( sbHeader, "\t%s dot0 = mat[0] * col0;\n", vectorTypeName );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\tconst %s dot1 = ( dot0.x + dot0.y ) + ( dot0.z + dot0.w );\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\tconst %s invdet = %s / dot1;\n", memberTypeString, oneStr );
			String_Append(  sbHeader, "\n" );
			String_Append(  sbHeader, "\treturn result * invdet;\n" );
			break;
		}
	}
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );
}

void Gen_MatrixDeterminant( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( type == GEN_TYPE_BOOL || type == GEN_TYPE_UINT ) {
		return;
	}

	if ( numRows != numCols ) {
		return;
	}

	const char* typeString = Gen_GetTypeString( type );
	const char* memberTypeString = Gen_GetMemberTypeString( type );

	char vectorTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( vectorTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%d", typeString, numCols );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	Doc_MatrixDeterminant( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s determinant( const %s& mat )\n", memberTypeString, fullTypeName );
	String_Appendf( sbHeader, "{\n" );
	switch ( numRows ) {
		case 2: {
			String_Append( sbHeader, "\treturn mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1];\n" );
			break;
		}

		case 3: {
			String_Append( sbHeader, "\treturn\n" );
			String_Append( sbHeader, "\t\t+ mat[0][0] * ( mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2] )\n" );
			String_Append( sbHeader, "\t\t- mat[0][1] * ( mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2] )\n" );
			String_Append( sbHeader, "\t\t+ mat[0][2] * ( mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1] );\n" );
			break;
		}

		case 4: {
			String_Append(  sbHeader, "\t// using glm's method where you basically take determinants from each sub matrix and cache the repeat occurences\n" );
			String_Appendf( sbHeader, "\t%s sub00 = mat[2][2] * mat[3][3] - mat[3][2] * mat[2][3];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub01 = mat[2][1] * mat[3][3] - mat[2][3] * mat[3][1];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub02 = mat[2][1] * mat[3][2] - mat[3][1] * mat[2][2];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub03 = mat[2][0] * mat[3][3] - mat[3][0] * mat[2][3];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub04 = mat[2][0] * mat[3][2] - mat[3][0] * mat[2][2];\n", memberTypeString );
			String_Appendf( sbHeader, "\t%s sub05 = mat[2][0] * mat[3][1] - mat[3][0] * mat[2][1];\n", memberTypeString );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s cofactor = %s(\n", vectorTypeName, vectorTypeName );
			String_Append(  sbHeader, "\t\t ( ( ( mat[1][1] * sub00 ) - ( mat[1][2] * sub01 ) ) + ( mat[1][3] * sub02 ) ),\n" );
			String_Append(  sbHeader, "\t\t-( ( ( mat[1][0] * sub00 ) - ( mat[1][2] * sub03 ) ) + ( mat[1][3] * sub04 ) ),\n" );
			String_Append(  sbHeader, "\t\t ( ( ( mat[1][0] * sub01 ) - ( mat[1][1] * sub03 ) ) + ( mat[1][3] * sub05 ) ),\n" );
			String_Append(  sbHeader, "\t\t-( ( ( mat[1][0] * sub02 ) - ( mat[1][1] * sub04 ) ) + ( mat[1][2] * sub05 ) )\n" );
			String_Append(  sbHeader, "\t);\n" );
			String_Append(  sbHeader, "\n" );
			String_Append(  sbHeader, "\treturn\n" );
			String_Append(  sbHeader, "\t\tmat[0][0] * cofactor.x + mat[0][1] * cofactor.y +\n" );
			String_Append(  sbHeader, "\t\tmat[0][2] * cofactor.z + mat[0][3] * cofactor.w;\n" );
			break;
		}
	}
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );
}

void Gen_MatrixCompMulDiv( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( type == GEN_TYPE_BOOL ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	// comp_mul
	{
		char opStr = GEN_OPERATORS_ARITHMETIC[GEN_OP_ARITHMETIC_MUL];

		Doc_ComponentWiseArithmeticRhsType( sbHeader, fullTypeName, fullTypeName, GEN_OP_ARITHMETIC_MUL );
		String_Appendf( sbHeader, "inline %s comp_mul( const %s& lhs, const %s& rhs )\n", fullTypeName, fullTypeName, fullTypeName );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		for ( u32 i = 0; i < numRows; i++ ) {
			String_Appendf( sbHeader, "\t\tlhs[%d] %c rhs[%d]", i, opStr, i );

			if ( i != numRows - 1 ) {
				String_Append( sbHeader, "," );
			}

			String_Append( sbHeader, "\n" );
		}
		String_Append( sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}

	// comp_div
	{
		char opStr = GEN_OPERATORS_ARITHMETIC[GEN_OP_ARITHMETIC_DIV];

		Doc_ComponentWiseArithmeticRhsType( sbHeader, fullTypeName, fullTypeName, GEN_OP_ARITHMETIC_DIV );
		String_Appendf( sbHeader, "inline %s comp_div( const %s& lhs, const %s& rhs )\n", fullTypeName, fullTypeName, fullTypeName );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		for ( u32 i = 0; i < numRows; i++ ) {
			String_Appendf( sbHeader, "\t\tlhs[%d] %c rhs[%d]", i, opStr, i );

			if ( i != numRows - 1 ) {
				String_Append( sbHeader, "," );
			}

			String_Append( sbHeader, "\n" );
		}
		String_Append( sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}
}

void Gen_MatrixTranslate( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( type == GEN_TYPE_BOOL ) {
		return;
	}

	if ( numRows < 3 || numCols < numRows ) {
		return;
	}

	u32 vecComponents = numCols - 1;

	const char* typeString = Gen_GetTypeString( type );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	Doc_MatrixTranslate( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s translate( const %s& mat, const %s%d& vec )\n", fullTypeName, fullTypeName, typeString, vecComponents );
	String_Append(  sbHeader, "{\n" );
	String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
	String_Append(  sbHeader, "\t\t" );
	for ( u32 row = 0; row < numRows; row++ ) {
		for ( u32 col = 0; col < numCols; col++ ) {
			String_Appendf( sbHeader, "mat[%d][%d]", row, col );

			if ( col != numCols - 1 ) {
				String_Append( sbHeader, ", " );
			} else {
				if ( col == vecComponents && row < vecComponents ) {
					String_Appendf( sbHeader, " + vec.%c", GEN_COMPONENT_NAMES_VECTOR[row] );
				}

				if ( row != numRows - 1 ) {
					String_Append( sbHeader, "," );
				}
			}
		}
		String_Append( sbHeader, "\n" );

		if ( row != numRows - 1 ) {
			String_Append( sbHeader, "\t\t" );
		}
	}
	String_Append( sbHeader, "\t);\n" );
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );
}

void Gen_MatrixRotate( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( !Gen_TypeIsFloatingPoint( type ) ) {
		return;
	}

	if ( numRows < 3 ) {
		return;
	}

	if ( numRows != numCols ) {
		return;
	}

	u32 numRotateVectorComponents = 3;

	const char* typeString = Gen_GetTypeString( type );

	char vectorTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( vectorTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%d", typeString, numRotateVectorComponents );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	char oneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	Gen_GetNumericLiteral( type, 1, oneStr, 1 );

	stringBuilder_t parmListStr = String_Create( 64 );
	String_Appendf( &parmListStr, "const %s& mat, const %s rad", fullTypeName, typeString );
	if ( numCols > 3 ) {
		String_Appendf( &parmListStr, ", const %s& axis", vectorTypeName );
	}

	const char* cosFuncStr = Gen_GetFuncNameCos( type );
	const char* sinFuncStr = Gen_GetFuncNameSin( type );

	Doc_MatrixRotate( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s rotate( %s )\n", fullTypeName, parmListStr.str );
	String_Append(  sbHeader, "{\n" );
	String_Appendf( sbHeader, "\tconst %s c = %s( rad );\n", typeString, cosFuncStr );
	String_Appendf( sbHeader, "\tconst %s s = %s( rad );\n", typeString, sinFuncStr );
	String_Append(  sbHeader, "\n" );

	switch ( numCols ) {
		case 3: {
			String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
			String_Append(  sbHeader, "\t\tmat[0] * c + mat[1] * -s,\n" );
			String_Append(  sbHeader, "\t\tmat[0] * s + mat[1] * c,\n" );
			String_Append(  sbHeader, "\t\tmat[2]\n" );
			String_Append(  sbHeader, "\t);\n" );
			break;
		}

		case 4: {
			String_Appendf( sbHeader, "\t%s u = normalized( axis );\n", vectorTypeName );
			String_Appendf( sbHeader, "\t%s ic = %s - c;\n", typeString, oneStr );
			String_Append(  sbHeader, "\n" );
			String_Appendf( sbHeader, "\t%s rotation = mat;\n", fullTypeName );
			String_Append(  sbHeader, "\trotation[0][0] = c + u.x * ic;\n" );
			String_Append(  sbHeader, "\trotation[0][1] = u.x * u.y * ic - u.z * s;\n" );
			String_Append(  sbHeader, "\trotation[0][2] = u.x * u.z * ic + u.y * s;\n" );
			String_Append(  sbHeader, "\n" );
			String_Append(  sbHeader, "\trotation[1][0] = u.y * u.x * ic + u.z * s;\n" );
			String_Append(  sbHeader, "\trotation[1][1] = c + u.y * ic;\n" );
			String_Append(  sbHeader, "\trotation[1][2] = u.y * u.z * ic - u.x * s;\n" );
			String_Append(  sbHeader, "\n" );
			String_Append(  sbHeader, "\trotation[2][0] = u.z * u.x * ic - u.y * s;\n" );
			String_Append(  sbHeader, "\trotation[2][1] = u.z * u.y * ic + u.x * s;\n" );
			String_Append(  sbHeader, "\trotation[2][2] = c + u.z * ic;\n" );
			String_Append(  sbHeader, "\n" );
			String_Append(  sbHeader, "\treturn mat * rotation;\n" );
			break;
		}

		default:
			assert( false );	// should never make it here!
			break;
	}
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );
}

void Gen_MatrixScale( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( type == GEN_TYPE_BOOL ) {
		return;
	}

	if ( numCols < 3 && numCols < numRows ) {
		return;
	}

	const char* typeString = Gen_GetTypeString( type );
	const char* memberTypeString = Gen_GetMemberTypeString( type );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	const u32 numScaleComponents = 3;

	char scaleVectorString[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( scaleVectorString, GEN_STRING_LENGTH_TYPE_NAME, "%s%d", typeString, numScaleComponents );

	// non-uniform
	Doc_MatrixScaleNonUniform( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s scale( const %s& mat, const %s& vec )\n", fullTypeName, fullTypeName, scaleVectorString );
	String_Append(  sbHeader, "{\n" );
	String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );

	for ( u32 row = 0; row < numRows; row++ ) {
		for ( u32 col = 0; col < numCols; col++ ) {
			String_Appendf( sbHeader, "\t\tmat[%d][%d]", row, col );

			if ( row == col && col < numScaleComponents ) {
				String_Appendf( sbHeader, " * vec.%c", GEN_COMPONENT_NAMES_VECTOR[row] );
			}

			if ( row + col != ( numRows - 1 ) + ( numCols - 1 ) ) {
				String_Append( sbHeader, ",\n" );
			} else {
				String_Append( sbHeader, "\n" );
			}
		}

		if ( row != numRows - 1 ) {
			String_Append( sbHeader, "\n" );
		}
	}
	String_Append( sbHeader, "\t);\n" );
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );

	// uniform
	Doc_MatrixScaleUniform( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline %s scale( const %s& mat, const %s scalar )\n", fullTypeName, fullTypeName, memberTypeString );
	String_Append(  sbHeader, "{\n" );
	String_Appendf( sbHeader, "\treturn scale( mat, %s( ", scaleVectorString );
	for ( u32 col = 0; col < numScaleComponents; col++ ) {
		String_Append( sbHeader, "scalar" );

		if ( col != numScaleComponents - 1 ) {
			String_Append( sbHeader, ", " );
		}
	}
	String_Append( sbHeader, " ) );\n" );
	String_Append( sbHeader, "}\n" );
	String_Append( sbHeader, "\n" );
}

void Gen_MatrixOrtho( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( !Gen_TypeIsFloatingPoint( type ) ) {
		return;
	}

	if ( numRows < 4 || numCols < 4 ) {
		return;
	}

	const char* typeString = Gen_GetTypeString( type );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	char minusTwoStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char minusOneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char zeroStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char oneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char twoStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];

	Gen_GetNumericLiteral( type, -2, minusTwoStr, 1 );
	Gen_GetNumericLiteral( type, -1, minusOneStr, 1 );
	Gen_GetNumericLiteral( type,  0, zeroStr, 1 );
	Gen_GetNumericLiteral( type,  1, oneStr, 1 );
	Gen_GetNumericLiteral( type,  2, twoStr, 1 );

	genHand_t hand;
	genClipSpace_t range;

	const char* handStr;
	const char* rangeStr;

	// left-hand, zero to one
	{
		hand = GEN_HAND_LEFT;
		range = GEN_CLIP_SPACE_ZERO_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixOrtho( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s ortho_lh_zo( const %s left, const %s right, const %s top, const %s bottom, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString, typeString, typeString );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip-space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s right_minus_left = right - left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s right_plus_left = right + left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_minus_bottom = top - bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_plus_bottom = top + bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_minus_near = zfar - znear;\n", typeString );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / right_minus_left, %s, %s, -right_plus_left / right_minus_left,\n", twoStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / top_minus_bottom, %s, -top_plus_bottom / top_minus_bottom,\n", zeroStr, twoStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s / far_minus_near, -znear / far_minus_near,\n", zeroStr, zeroStr, oneStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, zeroStr, oneStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}

	// left-hand, minus-one to one
	{
		hand = GEN_HAND_LEFT;
		range = GEN_CLIP_SPACE_MINUS_ONE_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixOrtho( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s ortho_lh_no( const %s left, const %s right, const %s top, const %s bottom, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString, typeString, typeString );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip-space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s right_minus_left = right - left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s right_plus_left = right + left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_minus_bottom = top - bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_plus_bottom = top + bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_minus_near = zfar - znear;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_plus_near = zfar + znear;\n", typeString );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / right_minus_left, %s, %s, -right_plus_left / right_minus_left,\n", twoStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / top_minus_bottom, %s, -top_plus_bottom / top_minus_bottom,\n", zeroStr, twoStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s / far_minus_near, -far_plus_near / far_minus_near,\n", zeroStr, zeroStr, twoStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, zeroStr, oneStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}
	
	// right-hand, zero to one
	{
		hand = GEN_HAND_RIGHT;
		range = GEN_CLIP_SPACE_ZERO_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixOrtho( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s ortho_rh_zo( const %s left, const %s right, const %s top, const %s bottom, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString, typeString, typeString );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip-space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s right_minus_left = right - left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s right_plus_left = right + left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_minus_bottom = top - bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_plus_bottom = top + bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_minus_near = zfar - znear;\n", typeString );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / right_minus_left, %s, %s, -right_plus_left / right_minus_left,\n", twoStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / top_minus_bottom, %s, -top_plus_bottom / top_minus_bottom,\n", zeroStr, twoStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s / far_minus_near, -znear / far_minus_near,\n", zeroStr, zeroStr, minusOneStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, zeroStr, oneStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}

	// right-hand, minus-one to one
	{
		hand = GEN_HAND_RIGHT;
		range = GEN_CLIP_SPACE_MINUS_ONE_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixOrtho( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s ortho_rh_no( const %s left, const %s right, const %s top, const %s bottom, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString, typeString, typeString );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip-space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s right_minus_left = right - left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s right_plus_left = right + left;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_minus_bottom = top - bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s top_plus_bottom = top + bottom;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_minus_near = zfar - znear;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_plus_near = zfar + znear;\n", typeString );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / right_minus_left, %s, %s, -right_plus_left / right_minus_left,\n", twoStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / top_minus_bottom, %s, -top_plus_bottom / top_minus_bottom,\n", zeroStr, twoStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s / far_minus_near, -far_plus_near / far_minus_near,\n", zeroStr, zeroStr, minusTwoStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, zeroStr, oneStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}
}

void Gen_MatrixPerspective( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( !Gen_TypeIsFloatingPoint( type ) ) {
		return;
	}

	if ( numRows != 4 || numCols != 4 ) {
		return;
	}

	const char* typeString = Gen_GetTypeString( type );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	char minusOneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char zeroStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char halfStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char oneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	char twoStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];

	Gen_GetNumericLiteral( type, -1.0f, minusOneStr, 1 );
	Gen_GetNumericLiteral( type,  0.0f, zeroStr, 1 );
	Gen_GetNumericLiteral( type,  0.5f, halfStr, 1 );
	Gen_GetNumericLiteral( type,  1.0f, oneStr, 1 );
	Gen_GetNumericLiteral( type,  2.0f, twoStr, 1 );

	const char* tanFuncStr = Gen_GetFuncNameTan( type );

	genHand_t hand;
	genClipSpace_t range;

	const char* handStr;
	const char* rangeStr;

	// left-handed, zero to one
	{
		hand = GEN_HAND_LEFT;
		range = GEN_CLIP_SPACE_ZERO_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixPerspective( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s perspective_lh_zo( const %s fovdeg, const %s aspect, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString );
		String_Appendf( sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s far_minus_near = zfar - znear;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s tan_half_fov = %s( fovdeg * %s );\n", typeString, tanFuncStr, halfStr );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / ( aspect * tan_half_fov ), %s, %s, %s,\n", oneStr, zeroStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / tan_half_fov, %s, %s,\n", zeroStr, oneStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, zfar / far_minus_near, -( zfar * znear ) / far_minus_near,\n", zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, oneStr, zeroStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}

	// left-handed, minus-one to one
	{
		hand = GEN_HAND_LEFT;
		range = GEN_CLIP_SPACE_MINUS_ONE_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixPerspective( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s perspective_lh_no( const %s fovdeg, const %s aspect, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s far_minus_near = zfar - znear;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_plus_near = zfar + znear;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s tan_half_fov = %s( fovdeg * %s );\n", typeString, tanFuncStr, halfStr );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / ( aspect * tan_half_fov ), %s, %s, %s,\n", oneStr, zeroStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / tan_half_fov, %s, %s,\n", zeroStr, oneStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, far_plus_near / far_minus_near, -( %s * zfar * znear ) / far_minus_near,\n", zeroStr, zeroStr, twoStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, oneStr, zeroStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}

	// right-handed, zero to one
	{
		hand = GEN_HAND_RIGHT;
		range = GEN_CLIP_SPACE_ZERO_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixPerspective( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s perspective_rh_zo( const %s fovdeg, const %s aspect, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s tan_half_fov = %s( fovdeg * %s );\n", typeString, tanFuncStr, halfStr );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / ( aspect * tan_half_fov ), %s, %s, %s,\n", oneStr, zeroStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / tan_half_fov, %s, %s,\n", zeroStr, oneStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, zfar / ( znear - zfar ), -( zfar * znear ) / ( zfar - znear ),\n", zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, minusOneStr, zeroStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}

	// right-handed, minus-one to one
	{
		hand = GEN_HAND_RIGHT;
		range = GEN_CLIP_SPACE_MINUS_ONE_TO_ONE;

		handStr = Gen_GetHandString( hand );
		rangeStr = Gen_GetClipSpaceRangeString( range );

		Doc_MatrixPerspective( sbHeader, fullTypeName, hand, range );
		String_Appendf( sbHeader, "inline %s perspective_rh_no( const %s fovdeg, const %s aspect, const %s znear, const %s zfar )\n",
			fullTypeName, typeString, typeString, typeString, typeString );
		String_Append(  sbHeader, "{\n" );
		String_Appendf( sbHeader, "\t// %s-handed, clip space range: %s\n", handStr, rangeStr );
		String_Appendf( sbHeader, "\tconst %s far_minus_near = zfar - znear;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s far_plus_near = zfar + znear;\n", typeString );
		String_Appendf( sbHeader, "\tconst %s tan_half_fov = %s( fovdeg * %s );\n", typeString, tanFuncStr, halfStr );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Appendf( sbHeader, "\t\t%s / ( aspect * tan_half_fov ), %s, %s, %s,\n", oneStr, zeroStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s / tan_half_fov, %s, %s,\n", zeroStr, oneStr, zeroStr, zeroStr );
		String_Appendf( sbHeader, "\t\t%s, %s, -far_plus_near / far_minus_near, -( %s * zfar * znear ) / far_minus_near,\n", zeroStr, zeroStr, twoStr );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, minusOneStr, zeroStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}
}

void Gen_MatrixLookAt( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader ) {
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );

	if ( !Gen_TypeIsFloatingPoint( type ) ) {
		return;
	}

	if ( numRows != 4 || numCols != 4 ) {
		return;
	}

	u32 numVecComponents = 3;

	const char* typeString = Gen_GetTypeString( type );

	char zeroStr[GEN_STRING_LENGTH_NUMERIC_LITERAL] = { 0 };
	char oneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL] = { 0 };

	Gen_GetNumericLiteral( type, 0.0f, zeroStr, 1 );
	Gen_GetNumericLiteral( type, 1.0f, oneStr, 1 );

	char vectorTypeString[GEN_STRING_LENGTH_TYPE_NAME] = { 0 };
	snprintf( vectorTypeString, GEN_STRING_LENGTH_TYPE_NAME, "%s%d", typeString, numVecComponents );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME] = { 0 };
	snprintf( fullTypeName, GEN_STRING_LENGTH_TYPE_NAME, "%s%dx%d", typeString, numRows, numCols );

	// left-handed
	{
		Doc_MatrixLookAt( sbHeader, fullTypeName, GEN_HAND_LEFT );
		String_Appendf( sbHeader, "inline %s lookat_lh( const %s& eye, const %s& target, const %s& up )\n",
			fullTypeName, vectorTypeString, vectorTypeString, vectorTypeString );
		String_Append(  sbHeader, "{\n" );
		String_Append(  sbHeader, "\t// left handed\n" );
		String_Appendf( sbHeader, "\tconst %s forward = normalized( target - eye );\n", vectorTypeString );
		String_Appendf( sbHeader, "\tconst %s right = normalized( cross( up, forward ) );\n", vectorTypeString );
		String_Appendf( sbHeader, "\tconst %s up1 = cross( forward, right );\n", vectorTypeString );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Append(  sbHeader, "\t\tright.x,   right.y,   right.z,   -dot( right, eye ),\n" );
		String_Append(  sbHeader, "\t\tup1.x,     up1.y,     up1.z,     -dot( up1, eye ),\n" );
		String_Append(  sbHeader, "\t\tforward.x, forward.y, forward.z, -dot( forward, eye ),\n" );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, zeroStr, oneStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}

	// right-handed
	{
		Doc_MatrixLookAt( sbHeader, fullTypeName, GEN_HAND_RIGHT );
		String_Appendf( sbHeader, "inline %s lookat_rh( const %s& eye, const %s& target, const %s& up )\n",
			fullTypeName, vectorTypeString, vectorTypeString, vectorTypeString );
		String_Append(  sbHeader, "{\n" );
		String_Append(  sbHeader, "\t// right handed\n" );
		String_Appendf( sbHeader, "\tconst %s forward = normalized( target - eye );\n", vectorTypeString );
		String_Appendf( sbHeader, "\tconst %s right = normalized( cross( forward, up ) );\n", vectorTypeString );
		String_Appendf( sbHeader, "\tconst %s up1 = cross( right, forward );\n", vectorTypeString );
		String_Append(  sbHeader, "\n" );
		String_Appendf( sbHeader, "\treturn %s(\n", fullTypeName );
		String_Append(  sbHeader, "\t\t right.x,    right.y,    right.z,   -dot( right, eye ),\n" );
		String_Append(  sbHeader, "\t\t up1.x,      up1.y,      up1.z,     -dot( up1, eye ),\n" );
		String_Append(  sbHeader, "\t\t-forward.x, -forward.y, -forward.z,  dot( forward, eye ),\n" );
		String_Appendf( sbHeader, "\t\t%s, %s, %s, %s\n", zeroStr, zeroStr, zeroStr, oneStr );
		String_Append(  sbHeader, "\t);\n" );
		String_Append(  sbHeader, "}\n" );
		String_Append(  sbHeader, "\n" );
	}
}
