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
#include "gen_funcs_matrix_sse.h"

#include "gen_common_sse.h"

#include "gen_doc_matrix_sse.h"

#include "defines.h"

#include "string_builder.h"

void Gen_SSE_MatrixIdentity( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	const char* registerName = Gen_SSE_GetRegisterName( type );

	const char* set1FuncStr = Gen_SSE_GetIntrinsicSet1( type );

	char zeroStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	Gen_GetNumericLiteral( type, 0.0f, zeroStr, 1 );

	char oneStr[GEN_STRING_LENGTH_NUMERIC_LITERAL];
	Gen_GetNumericLiteral( type, 1.0f, oneStr, 1 );

	Doc_SSE_MatrixIdentity( sbHeader, fullTypeName, registerName );
	String_Appendf( sbHeader, "inline void identity_sse( %s out_results[%d][%d] );\n", registerName, numRows, numCols );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void identity_sse( %s out_results[%d][%d] )\n", registerName, numRows, numCols );
	String_Append(  sbInl, "{\n" );
	for ( u32 row = 0; row < numRows; row++ ) {
		String_Appendf( sbInl, "\t// row %d\n", row );

		for ( u32 col = 0; col < numCols; col++ ) {
			const char* valueStr = ( row == col ) ? oneStr : zeroStr;

			String_Appendf( sbInl, "\tout_results[%d][%d] = %s( %s );\n", row, col, set1FuncStr, valueStr );
		}

		if ( row != numRows - 1 ) {
			String_Append( sbInl, "\n" );
		}
	}
	String_Append(  sbInl, "}\n" );
	String_Append(  sbInl, "\n" );
}

void Gen_SSE_MatrixTranspose( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	char transposedTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numCols, numRows, transposedTypeName );

	char sseTypeName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( fullTypeName, sseTypeName );

	char sseTransposedName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( transposedTypeName, sseTransposedName );

	const char* registerName = Gen_SSE_GetRegisterName( type );

	Doc_SSE_MatrixTranspose( sbHeader, fullTypeName, numRows, numCols, registerName );
	String_Appendf( sbHeader, "inline void transpose_sse( const %s* in, %s* out );\n", sseTypeName, sseTransposedName );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void transpose_sse( const %s* in, %s* out )\n", sseTypeName, sseTransposedName );
	String_Append(  sbInl, "{\n" );
	String_Append(  sbInl, "\tassert( in );\n" );
	String_Append(  sbInl, "\tassert( out );\n" );
	String_Append(  sbInl, "\n" );
	for ( u32 row = 0; row < numRows; row++ ) {
		for ( u32 col = 0; col < numCols; col++ ) {
			String_Appendf( sbInl, "\tout->m[%d][%d] = in->m[%d][%d];\n", col, row, row, col );
		}

		if ( row != numRows - 1 ) {
			String_Append( sbInl, "\n" );
		}
	}
	String_Append(  sbInl, "}\n" );
	String_Append(  sbInl, "\n" );
}

void Gen_SSE_MatrixDeterminant( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	if ( numRows != numCols ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	char sseTypeName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( fullTypeName, sseTypeName );

	const char* registerName = Gen_SSE_GetRegisterName( type );

	const char* macroNegate = Gen_SSE_GetMacroNameNegate( type );

	char addFuncStr[GEN_STRING_LENGTH_SSE_INTRINSIC];
	char subFuncStr[GEN_STRING_LENGTH_SSE_INTRINSIC];
	char mulFuncStr[GEN_STRING_LENGTH_SSE_INTRINSIC];

	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_ADD, addFuncStr );
	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_SUB, subFuncStr );
	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_MUL, mulFuncStr );

	Doc_SSE_MatrixDeterminant( sbHeader, fullTypeName, numRows, numCols, registerName );
	String_Appendf( sbHeader, "inline void determinant_sse( const %s* in, %s* out_result );\n", sseTypeName, registerName );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void determinant_sse( const %s* in, %s* out_result )\n", sseTypeName, registerName );
	String_Append(  sbInl, "{\n" );
	String_Append(  sbInl, "\tassert( in );\n" );
	String_Append(  sbInl, "\tassert( out_result );\n" );
	String_Append(  sbInl, "\n" );

	switch ( numRows ) {
		case 2:
			// mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1]
			String_Appendf( sbInl, "\t%s mul0 = %s( in->m[0][0], in->m[1][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul1 = %s( in->m[1][0], in->m[0][1] );\n", registerName, mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t*out_result = %s( mul0, mul1 );\n", subFuncStr );
			break;

		case 3:
			/*
			+ mat[0][0] * ( mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2] )
			- mat[0][1] * ( mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2] )
			+ mat[0][2] * ( mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1] )
			*/
			String_Appendf( sbInl, "\t%s mul0a = %s( in->m[1][1], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul0b = %s( in->m[2][1], in->m[1][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub0  = %s( mul0a, mul0b );\n",             registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s mul1a = %s( in->m[1][0], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul1b = %s( in->m[2][0], in->m[1][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub1  = %s( mul1a, mul1b );\n",             registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s mul2a = %s( in->m[1][0], in->m[2][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul2b = %s( in->m[2][0], in->m[1][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub2  = %s( mul2a, mul2b );\n",             registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s mul0  = %s( in->m[0][0], sub0 );\n",        registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul1  = %s( in->m[0][1], sub1 );\n",        registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul2  = %s( in->m[0][2], sub2 );\n",        registerName, mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s add0  = %s( mul0, mul1 );\n",               registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t*out_result = %s( add0, mul2 );\n",            addFuncStr );
			break;

		case 4:
			/*
			sub00 = mat[2][2] * mat[3][3] - mat[3][2] * mat[2][3]
			sub01 = mat[2][1] * mat[3][3] - mat[2][3] * mat[3][1]
			sub02 = mat[2][1] * mat[3][2] - mat[3][1] * mat[2][2]
			sub03 = mat[2][0] * mat[3][3] - mat[3][0] * mat[2][3]
			sub04 = mat[2][0] * mat[3][2] - mat[3][0] * mat[2][2]
			sub05 = mat[2][0] * mat[3][1] - mat[3][0] * mat[2][1]

			cofactor = {
				 ( mat[1][1] * sub00 - mat[1][2] * sub01 + mat[1][3] * sub02 ),
				-( mat[1][0] * sub00 - mat[1][2] * sub03 + mat[1][3] * sub04 ),
				 ( mat[1][0] * sub01 - mat[1][1] * sub03 + mat[1][3] * sub05 ),
				-( mat[1][0] * sub02 - mat[1][1] * sub04 + mat[1][2] * sub05 )
			}

			return
				mat[0][0] * cofactor.x + mat[0][1] * cofactor.y +
				mat[0][2] * cofactor.z + mat[0][3] * cofactor.w
			*/
			String_Appendf( sbInl, "\t%s submul0a      = %s( in->m[2][2], in->m[3][3] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s submul0b      = %s( in->m[3][2], in->m[2][3] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub0          = %s( submul0a, submul0b );\n",           registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s submul1a      = %s( in->m[2][1], in->m[3][3] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s submul1b      = %s( in->m[2][3], in->m[3][1] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub1          = %s( submul1a, submul1b );\n",           registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s submul2a      = %s( in->m[2][1], in->m[3][2] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s submul2b      = %s( in->m[3][1], in->m[2][2] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub2          = %s( submul2a, submul2b );\n",           registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s submul3a      = %s( in->m[2][0], in->m[3][3] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s submul3b      = %s( in->m[3][0], in->m[2][3] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub3          = %s( submul3a, submul3b );\n",           registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s submul4a      = %s( in->m[2][0], in->m[3][2] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s submul4b      = %s( in->m[3][0], in->m[2][2] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub4          = %s( submul4a, submul4b );\n",           registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s submul5a      = %s( in->m[2][0], in->m[3][1] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s submul5b      = %s( in->m[3][0], in->m[2][1] );\n",     registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub5          = %s( submul5a, submul5b );\n",           registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cofactor0mul0 = %s( in->m[1][1], sub0 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor0mul1 = %s( in->m[1][2], sub1 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor0mul2 = %s( in->m[1][3], sub2 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor0sub  = %s( cofactor0mul0, cofactor0mul1 );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s cofactor0     = %s( cofactor0sub, cofactor0mul2 );\n",  registerName, addFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cofactor1mul0 = %s( in->m[1][0], sub0 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor1mul1 = %s( in->m[1][2], sub3 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor1mul2 = %s( in->m[1][3], sub4 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor1sub  = %s( cofactor1mul0, cofactor1mul1 );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s cofactor1     = %s( cofactor1sub, cofactor1mul2 );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tcofactor1 = %s( cofactor1 );\n",                           macroNegate );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cofactor2mul0 = %s( in->m[1][0], sub1 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor2mul1 = %s( in->m[1][1], sub3 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor2mul2 = %s( in->m[1][3], sub5 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor2sub  = %s( cofactor2mul0, cofactor2mul1 );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s cofactor2     = %s( cofactor2sub, cofactor2mul2 );\n",  registerName, addFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cofactor3mul0 = %s( in->m[1][0], sub2 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor3mul1 = %s( in->m[1][1], sub4 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor3mul2 = %s( in->m[1][2], sub5 );\n",            registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cofactor3sub  = %s( cofactor3mul0, cofactor3mul1 );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s cofactor3     = %s( cofactor3sub, cofactor3mul2 );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tcofactor3 = %s( cofactor3 );\n",                           macroNegate );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s finalmul0     = %s( in->m[0][0], cofactor0 );\n",       registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s finalmul1     = %s( in->m[0][1], cofactor1 );\n",       registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s finalmul2     = %s( in->m[0][2], cofactor2 );\n",       registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s finalmul3     = %s( in->m[0][3], cofactor3 );\n",       registerName, mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s final0        = %s( finalmul0, finalmul1 );\n",         registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s final1        = %s( finalmul2, finalmul3 );\n",         registerName, addFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t*out_result = %s( final0, final1 );\n",                    addFuncStr );
			break;
	}

	String_Append( sbInl, "}\n" );
	String_Append( sbInl, "\n" );
}

void Gen_SSE_MatrixInverse( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	if ( numRows != numCols ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	char sseTypeName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( fullTypeName, sseTypeName );

	const char* registerName = Gen_SSE_GetRegisterName( type );

	const char* macroNegate = Gen_SSE_GetMacroNameNegate( type );

	const char* rcpFuncStr = Gen_SSE_GetIntrinsicRcp( type );

	char addFuncStr[GEN_STRING_LENGTH_SSE_INTRINSIC];
	char subFuncStr[GEN_STRING_LENGTH_SSE_INTRINSIC];
	char mulFuncStr[GEN_STRING_LENGTH_SSE_INTRINSIC];

	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_ADD, addFuncStr );
	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_SUB, subFuncStr );
	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_MUL, mulFuncStr );

	Doc_SSE_MatrixInverse( sbHeader, fullTypeName, numRows, numCols, registerName );
	String_Appendf( sbHeader, "inline void inverse_sse( const %s* in, %s* out );\n", sseTypeName, sseTypeName );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void inverse_sse( const %s* in, %s* out )\n", sseTypeName, sseTypeName );
	String_Append(  sbInl, "{\n" );
	String_Append(  sbInl, "\tassert( in );\n" );
	String_Append(  sbInl, "\tassert( out );\n" );
	String_Append(  sbInl, "\n" );

	// more efficient method done for 4x4
	if ( numRows < 4 ) {
		String_Appendf( sbInl, "\t%s determinants;\n", registerName );
		String_Append(  sbInl, "\tdeterminant_sse( in, &determinants );\n" );
		String_Append(  sbInl, "\n" );
		String_Appendf( sbInl, "\tdeterminants = %s( determinants );\n", rcpFuncStr );
		String_Append(  sbInl, "\n" );
	}

	switch ( numRows ) {
		case 2:
			String_Appendf( sbInl, "\t%s neg0 = %s( in->m[0][1] );\n", registerName, macroNegate );
			String_Appendf( sbInl, "\t%s neg1 = %s( in->m[1][0] );\n", registerName, macroNegate );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\tout->m[0][0] = %s( in->m[1][1], determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tout->m[0][1] = %s( neg0, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tout->m[1][0] = %s( neg1, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tout->m[1][1] = %s( in->m[0][0], determinants );\n", mulFuncStr );
			break;

		case 3:
			String_Append(  sbInl, "\t// row 0\n" );
			String_Appendf( sbInl, "\t%s mul00a = %s( in->m[1][1], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul00b = %s( in->m[1][2], in->m[2][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul01a = %s( in->m[0][1], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul01b = %s( in->m[0][2], in->m[2][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul02a = %s( in->m[0][1], in->m[1][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul02b = %s( in->m[0][2], in->m[1][1] );\n", registerName, mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub00 = %s( mul00a, mul00b );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s sub01 = %s( mul01a, mul01b );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s sub02 = %s( mul02a, mul02b );\n", registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\tsub00 = %s( sub00, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub01 = %s( sub01, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub02 = %s( sub02, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub01 = %s( sub01 );\n",               macroNegate );
			String_Append(  sbInl, "\n" );
			String_Append(  sbInl, "\t// row 1\n" );
			String_Appendf( sbInl, "\t%s mul10a = %s( in->m[1][0], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul10b = %s( in->m[1][2], in->m[2][0] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul11a = %s( in->m[0][0], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul11b = %s( in->m[0][2], in->m[2][0] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul12a = %s( in->m[0][0], in->m[1][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul12b = %s( in->m[0][2], in->m[1][0] );\n", registerName, mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub10 = %s( mul10a, mul10b );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s sub11 = %s( mul11a, mul11b );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s sub12 = %s( mul12a, mul12b );\n", registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\tsub10 = %s( sub10, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub11 = %s( sub11, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub12 = %s( sub12, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub10 = %s( sub10 );\n",               macroNegate );
			String_Appendf( sbInl, "\tsub12 = %s( sub12 );\n",               macroNegate );
			String_Append(  sbInl, "\n" );
			String_Append(  sbInl, "\t// row 2\n" );
			String_Appendf( sbInl, "\t%s mul20a = %s( in->m[1][0], in->m[2][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul20b = %s( in->m[1][1], in->m[2][0] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul21a = %s( in->m[0][0], in->m[2][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul21b = %s( in->m[0][1], in->m[2][0] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul22a = %s( in->m[0][0], in->m[1][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s mul22b = %s( in->m[0][1], in->m[1][0] );\n", registerName, mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub20 = %s( mul20a, mul20b );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s sub21 = %s( mul21a, mul21b );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s sub22 = %s( mul22a, mul22b );\n", registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\tsub20 = %s( sub20, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub21 = %s( sub21, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub22 = %s( sub22, determinants );\n", mulFuncStr );
			String_Appendf( sbInl, "\tsub21 = %s( sub21 );\n",               macroNegate );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\tout->m[0][0] = sub00;\n" );
			String_Appendf( sbInl, "\tout->m[0][1] = sub01;\n" );
			String_Appendf( sbInl, "\tout->m[0][2] = sub02;\n" );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\tout->m[1][0] = sub10;\n" );
			String_Appendf( sbInl, "\tout->m[1][1] = sub11;\n" );
			String_Appendf( sbInl, "\tout->m[1][2] = sub12;\n" );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\tout->m[2][0] = sub20;\n" );
			String_Appendf( sbInl, "\tout->m[2][1] = sub21;\n" );
			String_Appendf( sbInl, "\tout->m[2][2] = sub22;\n" );
			break;

		case 4:
			String_Append(  sbInl, "\t// DM: doesn't need to be as complex as the scalar implementation\n" );
			String_Append(  sbInl, "\t// based off: https://github.com/datenwolf/linmath.h/blob/master/linmath.h\n" );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub00mula    = %s( in->m[0][0], in->m[1][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub00mulb    = %s( in->m[1][0], in->m[0][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub00        = %s( sub00mula, sub00mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub01mula    = %s( in->m[0][0], in->m[1][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub01mulb    = %s( in->m[1][0], in->m[0][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub01        = %s( sub01mula, sub01mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub02mula    = %s( in->m[0][0], in->m[1][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub02mulb    = %s( in->m[1][0], in->m[0][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub02        = %s( sub02mula, sub02mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub03mula    = %s( in->m[0][1], in->m[1][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub03mulb    = %s( in->m[1][1], in->m[0][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub03        = %s( sub03mula, sub03mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub04mula    = %s( in->m[0][1], in->m[1][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub04mulb    = %s( in->m[1][1], in->m[0][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub04        = %s( sub04mula, sub04mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s sub05mula    = %s( in->m[0][2], in->m[1][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub05mulb    = %s( in->m[1][2], in->m[0][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s sub05        = %s( sub05mula, sub05mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cof00mula    = %s( in->m[2][0], in->m[3][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof00mulb    = %s( in->m[3][0], in->m[2][1] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof00        = %s( cof00mula, cof00mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cof01mula    = %s( in->m[2][0], in->m[3][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof01mulb    = %s( in->m[3][0], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof01        = %s( cof01mula, cof01mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cof02mula    = %s( in->m[2][0], in->m[3][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof02mulb    = %s( in->m[3][0], in->m[2][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof02        = %s( cof02mula, cof02mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cof03mula    = %s( in->m[2][1], in->m[3][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof03mulb    = %s( in->m[3][1], in->m[2][2] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof03        = %s( cof03mula, cof03mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cof04mula    = %s( in->m[2][1], in->m[3][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof04mulb    = %s( in->m[3][1], in->m[2][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof04        = %s( cof04mula, cof04mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s cof05mula    = %s( in->m[2][2], in->m[3][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof05mulb    = %s( in->m[3][2], in->m[2][3] );\n", registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s cof05        = %s( cof05mula, cof05mulb );\n",     registerName, subFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s detsubmul0   = %s( sub00, cof05 );\n",       registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s detsubmul1   = %s( %s( sub01, cof04 ) );\n", registerName, macroNegate, mulFuncStr );
			String_Appendf( sbInl, "\t%s detsubmul2   = %s( sub02, cof03 );\n",       registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s detsubmul3   = %s( sub03, cof02 );\n",       registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s detsubmul4   = %s( %s( sub04, cof01 ) );\n", registerName, macroNegate, mulFuncStr );
			String_Appendf( sbInl, "\t%s detsubmul5   = %s( sub05, cof00 );\n",       registerName, mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s detadd0      = %s( detsubmul0, detsubmul1 );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s detadd1      = %s( detsubmul2, detsubmul3 );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s detadd2      = %s( detsubmul4, detsubmul5 );\n", registerName, addFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s detadd3      = %s( detadd0, detadd1 );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s det          = %s( detadd2, detadd3 );\n", registerName, addFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s invdet       = %s( det );\n", registerName, rcpFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out00submula = %s( in->m[1][1], cof05 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out00submulb = %s( in->m[1][2], cof04 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out00submulc = %s( in->m[1][3], cof03 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out00subsub  = %s( out00submula, out00submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out00subadd  = %s( out00subsub, out00submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[0][0] = %s( out00subadd, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out01submula = %s( %s( in->m[0][1] ), cof05 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out01submulb = %s( in->m[0][2], cof04 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out01submulc = %s( in->m[0][3], cof03 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out01subadd  = %s( out01submula, out01submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out01subsub  = %s( out01subadd, out01submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[0][1] = %s( out01subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out02submula = %s( in->m[3][1], sub05 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out02submulb = %s( in->m[3][2], sub04 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out02submulc = %s( in->m[3][3], sub03 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out02subsub  = %s( out02submula, out02submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out02subadd  = %s( out02subsub, out02submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[0][2] = %s( out02subadd, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out03submula = %s( %s( in->m[2][1] ), sub05 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out03submulb = %s( in->m[2][2], sub04 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out03submulc = %s( in->m[2][3], sub03 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out03subadd  = %s( out03submula, out03submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out03subsub  = %s( out03subadd, out03submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[0][3] = %s( out03subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out10submula = %s( %s( in->m[1][0] ), cof05 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out10submulb = %s( in->m[1][2], cof02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out10submulc = %s( in->m[1][3], cof01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out10subadd  = %s( out10submula, out10submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out10subsub  = %s( out10subadd, out10submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[1][0] = %s( out10subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out11submula = %s( in->m[0][0], cof05 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out11submulb = %s( in->m[0][2], cof02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out11submulc = %s( in->m[0][3], cof01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out11subsub  = %s( out11submula, out11submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out11subadd  = %s( out11subsub, out11submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[1][1] = %s( out11subadd, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out12submula = %s( %s( in->m[3][0] ), sub05 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out12submulb = %s( in->m[3][2], sub02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out12submulc = %s( in->m[3][3], sub01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out12subadd  = %s( out12submula, out12submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out12subsub  = %s( out12subadd, out12submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[1][2] = %s( out12subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out13submula = %s( in->m[2][0], sub05 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out13submulb = %s( in->m[2][2], sub02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out13submulc = %s( in->m[2][3], sub01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out13subsub  = %s( out13submula, out13submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out13subadd  = %s( out13subsub, out13submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[1][3] = %s( out13subadd, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out20submula = %s( in->m[1][0], cof04 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out20submulb = %s( in->m[1][1], cof02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out20submulc = %s( in->m[1][3], cof00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out20subsub  = %s( out20submula, out20submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out20subadd  = %s( out20subsub, out20submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[2][0] = %s( out20subadd, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out21submula = %s( %s( in->m[0][0] ), cof04 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out21submulb = %s( in->m[0][1], cof02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out21submulc = %s( in->m[0][3], cof00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out21subadd  = %s( out21submula, out21submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out21subsub  = %s( out21subadd, out21submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[2][1] = %s( out21subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out22submula = %s( in->m[3][0], sub04 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out22submulb = %s( in->m[3][1], sub02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out22submulc = %s( in->m[3][3], sub00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out22subsub  = %s( out22submula, out22submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out22subadd  = %s( out22subsub, out22submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[2][2] = %s( out22subadd, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out23submula = %s( %s( in->m[2][0] ), sub04 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out23submulb = %s( in->m[2][1], sub02 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out23submulc = %s( in->m[2][3], sub00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out23subadd  = %s( out23submula, out23submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out23subsub  = %s( out23subadd, out23submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[2][3] = %s( out23subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out30submula = %s( %s( in->m[1][0] ), cof03 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out30submulb = %s( in->m[1][1], cof01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out30submulc = %s( in->m[1][2], cof00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out30subadd  = %s( out30submula, out30submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out30subsub  = %s( out30subadd, out30submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[3][0] = %s( out30subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out31submula = %s( in->m[0][0], cof03 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out31submulb = %s( in->m[0][1], cof01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out31submulc = %s( in->m[0][2], cof00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out31subsub  = %s( out31submula, out31submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out31subadd  = %s( out31subsub, out31submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[3][1] = %s( out31subadd, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out32submula = %s( %s( in->m[3][0] ), sub03 );\n",   registerName, mulFuncStr, macroNegate );
			String_Appendf( sbInl, "\t%s out32submulb = %s( in->m[3][1], sub01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out32submulc = %s( in->m[3][2], sub00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out32subadd  = %s( out32submula, out32submulb );\n", registerName, addFuncStr );
			String_Appendf( sbInl, "\t%s out32subsub  = %s( out32subadd, out32submulc );\n",  registerName, subFuncStr );
			String_Appendf( sbInl, "\tout->m[3][2] = %s( out32subsub, invdet );\n",           mulFuncStr );
			String_Append(  sbInl, "\n" );
			String_Appendf( sbInl, "\t%s out33submula = %s( in->m[2][0], sub03 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out33submulb = %s( in->m[2][1], sub01 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out33submulc = %s( in->m[2][2], sub00 );\n",         registerName, mulFuncStr );
			String_Appendf( sbInl, "\t%s out33subsub  = %s( out33submula, out33submulb );\n", registerName, subFuncStr );
			String_Appendf( sbInl, "\t%s out33subadd  = %s( out33subsub, out33submulc );\n",  registerName, addFuncStr );
			String_Appendf( sbInl, "\tout->m[3][3] = %s( out33subadd, invdet );\n",           mulFuncStr );
			break;
	}

	String_Append(  sbInl, "}\n" );
	String_Append(  sbInl, "\n" );
}

void Gen_SSE_MatrixArithmeticComponentWise( const genType_t type, const u32 numRows, const u32 numCols, const genOpArithmetic_t op, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TEST_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	const char* opStr = GEN_OPERATOR_STRINGS_ARITHMETIC[op];

	char function[32];
	snprintf( function, 32, "comp_%s", opStr );

	char sseTypeName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( fullTypeName, sseTypeName );

	const char* registerName = Gen_SSE_GetRegisterName( type );

	char intrinsicStr[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetIntrinsicArithmetic( type, op, intrinsicStr );

	Doc_SSE_MatrixArithmeticComponentWise( sbHeader, fullTypeName, registerName, op );
	String_Appendf( sbHeader, "inline void comp_%s_sse( const %s* lhs, const %s* rhs, %s* out );\n", opStr, sseTypeName, sseTypeName, sseTypeName );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void comp_%s_sse( const %s* lhs, const %s* rhs, %s* out )\n", opStr, sseTypeName, sseTypeName, sseTypeName );
	String_Append(  sbInl, "{\n" );
	String_Append(  sbInl, "\tassert( lhs );\n" );
	String_Append(  sbInl, "\tassert( rhs );\n" );
	String_Append(  sbInl, "\tassert( out );\n" );
	String_Append(  sbInl, "\n" );
	for ( u32 row = 0; row < numRows; row++ ) {
		String_Appendf( sbInl, "\t// row %d\n", row );

		for ( u32 col = 0; col < numCols; col++ ) {
			String_Appendf( sbInl, "\tout->m[%d][%d] = %s( lhs->m[%d][%d], rhs->m[%d][%d] );\n", row, col, intrinsicStr, row, col, row, col );
		}

		if ( row != numRows - 1 ) {
			String_Append( sbInl, "\n" );
		}
	}
	String_Append(  sbInl, "}\n" );
	String_Append(  sbInl, "\n" );
}

void Gen_SSE_MatrixMultiply( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	const u32 lhsRows = numRows;
	const u32 lhsCols = numCols;

	const u32 rhsRows = numCols;
	const u32 rhsCols = numRows;

	const u32 returnRows = numRows;
	const u32 returnCols = numRows;

	char lhsTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, lhsRows, lhsCols, lhsTypeName );

	char rhsTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, rhsRows, rhsCols, rhsTypeName );

	char returnTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, returnRows, returnCols, returnTypeName );

	char dotVectorTypeString[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, 1, numCols, dotVectorTypeString );

	char sseDotName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( dotVectorTypeString, sseDotName );

	char sseLHSName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( lhsTypeName, sseLHSName );

	char sseRHSName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( rhsTypeName, sseRHSName );

	char sseReturnName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( returnTypeName, sseReturnName );

//	const char* registerName = Gen_SSE_GetRegisterName( type );

	String_Appendf( sbHeader, "inline void mul_sse( const %s* lhs, const %s* rhs, %s* out );\n", sseLHSName, sseRHSName, sseReturnName );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void mul_sse( const %s* lhs, const %s* rhs, %s* out )\n", sseLHSName, sseRHSName, sseReturnName );
	String_Append(  sbInl, "{\n" );
	String_Append(  sbInl, "\tassert( lhs );\n" );
	String_Append(  sbInl, "\tassert( rhs );\n" );
	String_Append(  sbInl, "\tassert( out );\n" );
	String_Append(  sbInl, "\n" );
	String_Appendf( sbInl, "\t%s rhs_transposed;\n", sseLHSName );
	// String_Append(  sbInl, "\n" );
	String_Appendf( sbInl, "\ttranspose_sse( rhs, &rhs_transposed );\n" );
	String_Append(  sbInl, "\n" );
	String_Appendf( sbInl, "\t%s dot_lhs;\n", sseDotName );
	String_Appendf( sbInl, "\t%s dot_rhs;\n", sseDotName );
	String_Append(  sbInl, "\n" );
	for ( u32 row = 0; row < returnRows; row++ ) {
		for ( u32 col = 0; col < returnCols; col++ ) {
			String_Appendf( sbInl, "\tmemcpy( dot_lhs.comp, &lhs->m[%d], sizeof( lhs->m[%d] ) );\n", row, row );
			String_Appendf( sbInl, "\tmemcpy( dot_rhs.comp, &rhs_transposed.m[%d], sizeof( rhs_transposed.m[%d] ) );\n", col, col );
			String_Appendf( sbInl, "\tdot_sse( &dot_lhs, &dot_rhs, &out->m[%d][%d] );\n", row, col );

			if ( col != returnCols - 1 ) {
				String_Append( sbInl, "\n" );
			}
		}

		if ( row != returnRows - 1 ) {
			String_Append( sbInl, "\n" );
		}
	}
	String_Append(  sbInl, "}\n" );
	String_Append(  sbInl, "\n" );
}

void Gen_SSE_MatrixTranslate( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	// rules for generating SSE versions of translate() and scale() function are different from the scalar implementation
	if ( numCols < 3 || numRows != numCols ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	const u32 translateVecComponents = numCols - 1;

	char translateVecTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, 1, translateVecComponents, translateVecTypeName );

	char sseTranslateVecName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetFullTypeName( translateVecTypeName, sseTranslateVecName );

	const char* registerName = Gen_SSE_GetRegisterName( type );

	char addFuncStr[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_ADD, addFuncStr );

	Doc_SSE_MatrixTranslate( sbHeader, fullTypeName, registerName );
	String_Appendf( sbHeader, "inline void translate_sse( const %s* column, const %s* vec, %s* out_column );\n", sseTranslateVecName, sseTranslateVecName, sseTranslateVecName );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void translate_sse( const %s* column, const %s* vec, %s* out_column )\n", sseTranslateVecName, sseTranslateVecName, sseTranslateVecName );
	String_Append(  sbInl, "{\n" );
	String_Append(  sbInl, "\tassert( column );\n" );
	String_Append(  sbInl, "\tassert( vec );\n" );
	String_Append(  sbInl, "\tassert( out_column );\n" );
	String_Append(  sbInl, "\n" );
	for ( u32 i = 0; i < translateVecComponents; i++ ) {
		String_Appendf( sbInl, "\tout_column->comp[%d] = %s( column->comp[%d], vec->comp[%d] );\n", i, addFuncStr, i, i );
	}
	String_Append(  sbInl, "}\n" );
	String_Append(  sbInl, "\n" );
}

void Gen_SSE_MatrixScale( const genType_t type, const u32 numRows, const u32 numCols, stringBuilder_t* sbHeader, stringBuilder_t* sbInl ) {
	assert( numRows <= GEN_COMPONENT_COUNT_MAX );
	assert( numRows >= GEN_COMPONENT_COUNT_MIN );
	assert( numCols <= GEN_COMPONENT_COUNT_MAX );
	assert( numCols >= GEN_COMPONENT_COUNT_MIN );

	if ( !Gen_TypeSupportsSSE( type ) ) {
		return;
	}

	// rules for generating SSE versions of translate() and scale() function are different from the scalar implementation
	if ( numCols < 3 || numRows != numCols ) {
		return;
	}

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	const u32 numScaleComponents = numRows - 1;

	char scaleVecTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, 1, numScaleComponents, scaleVecTypeName );

	char sseScaleVecName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_SSE_GetFullTypeName( scaleVecTypeName, sseScaleVecName );

	char mulFuncStr[GEN_STRING_LENGTH_SSE_INPUT_NAME];
	Gen_SSE_GetIntrinsicArithmetic( type, GEN_OP_ARITHMETIC_MUL, mulFuncStr );

	Doc_SSE_MatrixScale( sbHeader, fullTypeName );
	String_Appendf( sbHeader, "inline void scale_sse( const %s* diagonal, const %s* scale, %s* out_diagonal );\n", sseScaleVecName, sseScaleVecName, sseScaleVecName );
	String_Append(  sbHeader, "\n" );

	String_Appendf( sbInl, "void scale_sse( const %s* diagonal, const %s* scale, %s* out_diagonal )\n", sseScaleVecName, sseScaleVecName, sseScaleVecName );
	String_Append(  sbInl, "{\n" );
	String_Append(  sbInl, "\tassert( diagonal );\n" );
	String_Append(  sbInl, "\tassert( scale );\n" );
	String_Append(  sbInl, "\tassert( out_diagonal );\n" );
	String_Append(  sbInl, "\n" );
	for ( u32 i = 0; i < numScaleComponents; i++ ) {
		String_Appendf( sbInl, "\tout_diagonal->comp[%d] = %s( diagonal->comp[%d], scale->comp[%d] );\n", i, mulFuncStr, i, i );
	}
	String_Append(  sbInl, "}\n" );
	String_Append(  sbInl, "\n" );
}