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

#include "defines.h"
#include "allocator.h"
#include "string_builder.h"

#include "GeneratorVector.h"
#include "GeneratorMatrix.h"

#include "GeneratorScalarTests.h"
#include "GeneratorVectorTests.h"
#include "GeneratorMatrixTests.h"
#include "GeneratorQuaternionTests.h"

#include "gen_common.h"
#include "gen_common_sse.h"

#include "gen_funcs_vector.h"
#include "gen_funcs_vector_sse.h"
#include "gen_funcs_matrix.h"
#include "gen_funcs_matrix_sse.h"
#include "gen_funcs_quaternion.h"

#include "os_helpers.h"

#include "FileIO.h"

#include "timer.h"

#include <stdio.h>
#include <assert.h>

static bool32 GenerateTypeHeader( void ) {
	char headerFilePath[1024] = { 0 };
	snprintf( headerFilePath, 1024, "%s%s", GEN_OUT_FOLDER_PATH, GEN_HEADER_TYPES );

	stringBuilder_t sb = String_Create( 2 * KB_TO_BYTES );

	String_Append( &sb, GEN_FILE_HEADER );
	String_Append( &sb,
		"#pragma once\n"
		"\n"
		"#include <stdint.h>\n"
		"\n"
		"// ensure that a bool is 4 bytes\n"
		"typedef uint32_t bool32_t;\n" );

	bool32 result = FS_WriteEntireFile( headerFilePath, sb.str, sb.length );

	Mem_Reset();

	return result;
}

static bool32 GenerateVectors( void ) {
	GeneratorVector gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			printf( "Generating %s%d...", typeString, componentIndex );

			if ( !gen.Generate( type, componentIndex ) ) {
				return false;
			}

			printf( "OK.\n" );
		}
	}

	return true;
}

static bool32 GenerateMatrices( void ) {
	GeneratorMatrix gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				printf( "Generating %s%dx%d...", typeString, row, col );

				if ( !gen.Generate( type, row, col ) ) {
					return false;
				}

				printf( "OK.\n" );
			}
		}
	}

	return true;
}

static bool32 GenerateFunctionsScalar( void ) {
	char fileNameHeader[1024];
	snprintf( fileNameHeader, 1024, "%s%s", GEN_OUT_GEN_FOLDER_PATH, GEN_HEADER_FUNCTIONS_SCALAR );

	stringBuilder_t sb = String_Create( 8 * KB_TO_BYTES );

	String_Append( &sb, GEN_FILE_HEADER );
	String_Append( &sb,
		"#pragma once\n"
		"\n"
		"#include \"../" GEN_HEADER_CONSTANTS "\"\n"
		"\n"
		"#include <math.h>\n"
		"#include <stdint.h>\n"
		"\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		const char* memberTypeString = Gen_GetMemberTypeString( type );

		printf( "Generating %s...", memberTypeString );

		String_Append( &sb, "// " );
		String_Append( &sb, memberTypeString );
		String_Append( &sb, "\n" );

		// scalar only funcs
		Gen_Floateq( type, &sb );

		Gen_Sign( type, &sb );

		Gen_Radians( type, &sb );
		Gen_Degrees( type, &sb );

		Gen_MinMax( type, &sb );
		Gen_Clamp( type, &sb );

		// generic/scalar/vector funcs
		Gen_Saturate( type, 1, &sb );

		Gen_Lerp( type, 1, &sb );

		Gen_Step( type, 1, &sb );
		Gen_Smoothstep( type, 1, &sb );

		String_Append( &sb, "\n" );

		printf( "OK.\n" );
	}

	bool32 wroteHeader = FS_WriteEntireFile( fileNameHeader, sb.str, sb.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateFunctionsVector( void ) {
	char filePathHeader[64] = { 0 };
	snprintf( filePathHeader, 64, "%s%s", GEN_OUT_GEN_FOLDER_PATH, GEN_HEADER_FUNCTIONS_VECTOR );

	stringBuilder_t contentHeader = String_Create( 32 * KB_TO_BYTES );

	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader,
		"#pragma once\n"
		"\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			String_Appendf( &contentHeader, "#include \"%s%d.h\"\n", typeString, componentIndex );
		}

		String_Appendf( &contentHeader, "\n" );
	}

	String_Appendf( &contentHeader, "#include \"" GEN_HEADER_FUNCTIONS_SCALAR "\"\n" );
	String_Appendf( &contentHeader, "#include \"" GEN_HEADER_OPERATORS_VECTOR "\"\n" );
	String_Appendf( &contentHeader, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			printf( "Algebra %s%d...", typeString, componentIndex );

			String_Appendf( &contentHeader, "// %s%d\n", typeString, componentIndex );

			// generic/scalar funcs
			Gen_Saturate( type, componentIndex, &contentHeader );
			Gen_Lerp( type, componentIndex, &contentHeader );

			Gen_Step( type, componentIndex, &contentHeader );
			Gen_Smoothstep( type, componentIndex, &contentHeader );

			// generic/scalar/vector funcs
			Gen_VectorLength( type, componentIndex, &contentHeader );
			Gen_VectorNormalize( type, componentIndex, &contentHeader );
			Gen_VectorDot( type, componentIndex, &contentHeader );
			Gen_VectorCross( type, componentIndex, &contentHeader );
			Gen_VectorAngle( type, componentIndex, &contentHeader );
			Gen_VectorDistance( type, componentIndex, &contentHeader );
			Gen_VectorPack( type, componentIndex, &contentHeader );
			Gen_VectorUnpack( type, componentIndex, &contentHeader );

			String_Append( &contentHeader, "\n" );

			printf( "OK.\n" );
		}
	}

	bool32 wroteHeader = FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateFunctionsMatrix( void ) {
	char filePathHeader[64] = { 0 };
	snprintf( filePathHeader, 64, "%s%s", GEN_OUT_GEN_FOLDER_PATH, GEN_HEADER_FUNCTIONS_MATRIX );

	stringBuilder_t contentHeader = String_Create( 128 * KB_TO_BYTES );
	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader,
		"#pragma once\n"
		"\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				String_Appendf( &contentHeader, "#include \"%s%dx%d.h\"\n", typeString, row, col );
			}
		}

		String_Appendf( &contentHeader, "\n" );
	}

	String_Appendf( &contentHeader, "#include \"" GEN_HEADER_FUNCTIONS_VECTOR "\"\n" );
	String_Appendf( &contentHeader, "#include \"" GEN_HEADER_OPERATORS_MATRIX "\"\n" );
	String_Appendf( &contentHeader, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				printf( "Basic functions %s...", fullTypeName );

				String_Appendf( &contentHeader, "// %s\n", fullTypeName );

				Gen_MatrixIdentity( type, row, col, &contentHeader );
				Gen_MatrixTranspose( type, row, col, &contentHeader );

				Gen_MatrixDeterminant( type, row, col, &contentHeader );
				Gen_MatrixInverse( type, row, col, &contentHeader );

				Gen_MatrixCompMulDiv( type, row, col, &contentHeader );

				Gen_MatrixTranslate( type, row, col, &contentHeader );
				Gen_MatrixRotate( type, row, col, &contentHeader );
				Gen_MatrixScale( type, row, col, &contentHeader );

				Gen_MatrixOrtho( type, row, col, &contentHeader );
				Gen_MatrixPerspective( type, row, col, &contentHeader );
				Gen_MatrixLookAt( type, row, col, &contentHeader );

				String_Append( &contentHeader, "\n" );

				printf( "OK.\n" );
			}
		}
	}

	bool32 wroteHeader = FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateFunctionsQuaternion( void ) {

	char filePathHeader[64] = { 0 };
	snprintf(filePathHeader, 64, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_QUATERNION);

	stringBuilder_t contentHeader = String_Create(10 * KB_TO_BYTES);
	String_Append(&contentHeader, GEN_FILE_HEADER);
	String_Append(&contentHeader,
		"#pragma once\n"
		"\n");

	String_Appendf( &contentHeader, "#include \"" GEN_HEADER_FUNCTIONS_VECTOR "\"\n" );
	String_Appendf( &contentHeader, "#include \"" GEN_HEADER_OPERATORS_MATRIX "\"\n" );

	for (u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++) {
		genType_t type = (genType_t)typeIndex;
		if (Gen_TypeIsFloatingPoint(type) == false) {
			continue;
		}

		const char* typeString = Gen_GetTypeString(type);
		String_Appendf(&contentHeader, "#include \"%s%d.h\"\n", typeString, 4);
	}

	String_Appendf(&contentHeader, "\n");

	for (u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++) {
		genType_t type = (genType_t)typeIndex;
		if (Gen_TypeIsFloatingPoint(type) == false) {
			continue;
		}

		char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
		Gen_GetFullTypeName(type, 1, 4, fullTypeName);

		printf("Basic functions %s...", fullTypeName);

		String_Appendf(&contentHeader, "// %s\n", fullTypeName);

		Gen_QuaternionMultiply(type, &contentHeader);
		Gen_QuaternionMultiplyScalar(type, &contentHeader);
		Gen_QuaternionLength(type, &contentHeader);
		Gen_QuaternionNormalize(type, &contentHeader);
		Gen_QuaternionConjugate(type, &contentHeader);
		Gen_QuaternionInverse(type, &contentHeader);
		Gen_QuaternionRotationAxis(type, &contentHeader);
		Gen_QuaternionLerp(type, &contentHeader);
		Gen_QuaternionSlerp(type, &contentHeader);

		String_Append(&contentHeader, "\n");

		printf("OK.\n");
	}

	const bool32 wroteHeader = FS_WriteEntireFile(filePathHeader, contentHeader.str, contentHeader.length);

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateFunctionsScalarSSE( void ) {
	char filePathHeader[64] = { 0 };
	snprintf( filePathHeader, 64, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_SCALAR_SSE );

	stringBuilder_t contentHeader = String_Create( 4 * KB_TO_BYTES );
	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader,
		"#pragma once\n"
		"\n"
		"// HLML includes\n"
		"#include \"../hlml_constants_sse.h\"\n"
		"\n"
		"// others\n"
		"#include <xmmintrin.h>\n"
		"#include <assert.h>\n"
		"\n"
	);

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( !Gen_TypeSupportsSSE( type ) ) {
			continue;
		}

		const char* memberTypeString = Gen_GetMemberTypeString( type );

		printf( "SIMD vector functions %s...", memberTypeString );

		String_Appendf( &contentHeader, "// %s\n", memberTypeString );

		Gen_SSE_Radians( type, &contentHeader );
		Gen_SSE_Degrees( type, &contentHeader );

		Gen_SSE_Lerp( type, 1, &contentHeader );

		String_Append( &contentHeader, "\n" );

		printf( "OK.\n" );
	}

	bool32 wroteHeader = FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateFunctionsVectorSSE( void ) {
	char filePathHeader[64] = { 0 };
	snprintf( filePathHeader, 64, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_VECTOR_SSE );

	stringBuilder_t contentHeader = String_Create( 16 * KB_TO_BYTES );

	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader,
		"#pragma once\n"
		"\n"
		"// HLML includes\n"
		"#include \"" GEN_FILENAME_FUNCTIONS_VECTOR_SSE ".h\"\n"
		"#include \"../" GEN_HEADER_CONSTANTS_SSE "\"\n"
		"\n"
		"#include <immintrin.h>\n"
		"\n"
	);

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( !Gen_TypeSupportsSSE( type ) ) {
			continue;
		}

		const char* registerName = Gen_SSE_GetRegisterName( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
			Gen_GetFullTypeName( type, 1, componentIndex, fullTypeName );

			printf( "SIMD vector functions %s...", fullTypeName );

			char sseTypeName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
			Gen_SSE_GetFullTypeName( fullTypeName, sseTypeName );

			String_Appendf( &contentHeader, "// %s\n", fullTypeName );
			String_Appendf( &contentHeader, "struct %s\n", sseTypeName );
			String_Append(  &contentHeader, "{\n" );
			for ( u32 i = 0; i < componentIndex; i++ ) {
				String_Appendf( &contentHeader, "\t\t\t%s %c;\n", registerName, GEN_COMPONENT_NAMES_VECTOR[i] );
			}
			String_Append(  &contentHeader, "};\n" );
			String_Append(  &contentHeader, "\n" );

			Gen_SSE_VectorDot( type, componentIndex, &contentHeader );
			Gen_SSE_VectorCross( type, componentIndex, &contentHeader );
			Gen_SSE_VectorLength( type, componentIndex, &contentHeader );
			Gen_SSE_VectorNormalize( type, componentIndex, &contentHeader );
			Gen_SSE_VectorDistance( type, componentIndex, &contentHeader );
			// Gen_SSE_VectorAngle( type, componentIndex, &contentHeader );

			String_Append( &contentHeader, "\n" );

			printf( "OK.\n" );
		}
	}

	bool32 wroteHeader = FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateFunctionsMatrixSSE( void ) {
	char filePathHeader[64] = { 0 };
	snprintf( filePathHeader, 64, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_MATRIX_SSE );

	stringBuilder_t contentHeader = String_Create( 80 * KB_TO_BYTES );

	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader,
		"#pragma once\n"
		"\n"
		"#include <immintrin.h>\n"
		"\n"
		"#include \"" GEN_FILENAME_FUNCTIONS_VECTOR_SSE ".h\"\n"
		"\n"
	);

	Gen_SSE_MacroNegate( GEN_TYPE_FLOAT, &contentHeader );

	// generate type forward declarations
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( !Gen_TypeSupportsSSE( type ) ) {
			continue;
		}

		const char* registerName = Gen_SSE_GetRegisterName( type );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				char sseTypeName[GEN_STRING_LENGTH_SSE_INPUT_NAME];
				Gen_SSE_GetFullTypeName( fullTypeName, sseTypeName );

				String_Appendf( &contentHeader, "// %s\n", fullTypeName );
				String_Appendf( &contentHeader, "struct %s\n", sseTypeName );
				String_Append(  &contentHeader, "{\n" );
				String_Appendf( &contentHeader, "\t%s m[%d][%d];\n", registerName, row, col );
				String_Append(  &contentHeader, "};\n" );
				String_Append(  &contentHeader, "\n" );
			}
		}
	}
	String_Appendf( &contentHeader, "\n" );

	// generate functions
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( !Gen_TypeSupportsSSE( type ) ) {
			continue;
		}

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				printf( "SIMD matrix functions %s...", fullTypeName );

				Gen_SSE_MatrixIdentity( type, row, col, &contentHeader );
				Gen_SSE_MatrixTranspose( type, row, col, &contentHeader );

				Gen_SSE_MatrixDeterminant( type, row, col, &contentHeader );
				Gen_SSE_MatrixInverse( type, row, col, &contentHeader );

				for ( u32 opIndex = 0; opIndex < GEN_OP_ARITHMETIC_COUNT; opIndex++ ) {
					genOpArithmetic_t op = (genOpArithmetic_t) opIndex;
					Gen_SSE_MatrixArithmeticComponentWise( type, row, col, op, &contentHeader );
				}

				Gen_SSE_MatrixMultiply( type, row, col, &contentHeader );

				Gen_SSE_MatrixTranslate( type, row, col, &contentHeader );
				// Gen_SSE_MatrixRotate( type, row, col, &contentHeader );
				Gen_SSE_MatrixScale( type, row, col, &contentHeader );

				String_Append( &contentHeader, "\n" );

				printf( "OK.\n" );
			}
		}
	}

	bool32 wroteHeader = FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateOperatorsVector( void ) {
	char filePathHeader[64] = { 0 };
	snprintf( filePathHeader, 64, "%s%s", GEN_OUT_GEN_FOLDER_PATH, GEN_HEADER_OPERATORS_VECTOR );

	stringBuilder_t contentHeader = String_Create( 128 * KB_TO_BYTES );
	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader, "#pragma once\n" );
	String_Append( &contentHeader, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			String_Appendf( &contentHeader, "#include \"%s%d.h\"\n", typeString, componentIndex );
		}

		String_Append( &contentHeader, "\n" );
	}

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
			Gen_GetFullTypeName( type, 1, componentIndex, fullTypeName );

			printf( "Vector operators %s...", fullTypeName );

			String_Appendf( &contentHeader, "// %s\n", fullTypeName );

			Gen_VectorOperatorsArithmetic( type, componentIndex, &contentHeader );
			Gen_OperatorsIncrement( type, 1, componentIndex, &contentHeader );
			Gen_OperatorsRelational( type, 1, componentIndex, &contentHeader );
			Gen_OperatorsBitwise( type, 1, componentIndex, &contentHeader );

			String_Append( &contentHeader, "\n" );

			printf( "OK.\n" );
		}
	}

	bool32 wroteHeader = FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateOperatorsMatrix( void ) {
	char filePathHeader[64];
	snprintf( filePathHeader, 64, "%s%s", GEN_OUT_GEN_FOLDER_PATH, GEN_HEADER_OPERATORS_MATRIX );

	stringBuilder_t contentHeader = String_Create( 512 * KB_TO_BYTES );
	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader, "#pragma once\n" );
	String_Append( &contentHeader, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				String_Appendf( &contentHeader, "#include \"%s%dx%d.h\"\n", typeString, row, col );
			}
		}

		String_Append( &contentHeader, "\n" );
	}

	String_Append( &contentHeader, "#include \"" GEN_HEADER_FUNCTIONS_VECTOR "\"\n" );
	String_Append( &contentHeader, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		for ( u32 components = GEN_COMPONENT_COUNT_MIN; components <= GEN_COMPONENT_COUNT_MAX; components++ ) {
			char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
			Gen_GetFullTypeName( type, components, components, fullTypeName );

			String_Appendf( &contentHeader, "%s inverse( const %s& mat );\n", fullTypeName, fullTypeName );
		}

		String_Append( &contentHeader, "\n" );
	}

	// header and inl code
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[64];
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				printf( "Matrix operators %s...", fullTypeName );

				String_Appendf( &contentHeader, "// %s\n", fullTypeName );

				Gen_MatrixOperatorsArithmetic( type, row, col, &contentHeader );
				Gen_OperatorsIncrement( type, row, col, &contentHeader );
				Gen_OperatorsRelational( type, row, col, &contentHeader );
				Gen_OperatorsBitwise( type, row, col, &contentHeader );

				String_Append( &contentHeader, "\n" );

				printf( "OK.\n" );
			}
		}
	}

	bool32 wroteHeader = FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );

	Mem_Reset();

	return wroteHeader;
}

static bool32 GenerateTestsScalar( void ) {
	GeneratorScalarTest gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		const char* typeString = Gen_GetTypeString( type );

		printf( "Generating test_scalar_%s.cpp...", typeString );

		if ( !gen.Generate( type ) ) {
			return false;
		}

		printf( "OK.\n" );
	}

	return true;
}

static bool32 GenerateTestsVector( void ) {
	GeneratorVectorTests gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			printf( "Generating test_%s%d.cpp...", typeString, componentIndex );

			if ( !gen.Generate( type, componentIndex ) ) {
				return false;
			}

			printf( "OK.\n" );
		}
	}

	return true;
}

static bool32 GenerateTestsMatrix( void ) {
	GeneratorMatrixTests gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				printf( "Generating test_%s%dx%d.cpp...", typeString, row, col );

				if ( !gen.Generate( type, row, col ) ) {
					return false;
				}

				printf( "OK.\n" );
			}
		}
	}

	return true;
}

static bool32 GenerateTestsQuaternion(void) {
	GeneratorQuaternionTests gen;

	for (u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++) {
		genType_t type = (genType_t)typeIndex;

		if (Gen_TypeIsFloatingPoint(type) == false) {
			continue;
		}

		const char* typeString = Gen_GetTypeString(type);

		printf("Generating test_quaternion_%s.cpp...", typeString);

		if (!gen.Generate(type)) {
			return false;
		}

		printf("OK.\n");
	}

	return true;
}

static bool32 GenerateTestsMain( void ) {
	char filePathMain[1024] = { 0 };
	snprintf( filePathMain, 1024, "%smain.cpp", GEN_TESTS_FOLDER_PATH );

	stringBuilder_t sb = String_Create( 8 * KB_TO_BYTES );

	String_Append( &sb, GEN_FILE_HEADER );

	String_Append( &sb, "#include <temper/temper.h>\n" );
	String_Append( &sb, "\n" );

	String_Append( &sb, "static void OnSuiteEnd( void* userdata )\n" );
	String_Append( &sb, "{\n" );
	String_Append( &sb, "\t( (void) userdata );\n" );
	String_Append( &sb, "\tprintf( \"\\n\" );\n" );
	String_Append( &sb, "}\n" );
	String_Append( &sb, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		for ( u32 row = 1; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = 1; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME] = { 0 };
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				String_Appendf( &sb, "TEMPER_SUITE_EXTERN( Test_%s );\n", fullTypeName );
			}
			String_Append( &sb, "\n" );
		}
	}

	String_Append( &sb, "TEMPER_DEFS();\n" );
	String_Append( &sb, "\n" );

	String_Append( &sb, "int main( int argc, char** argv )\n" );
	String_Append( &sb, "{\n" );
	String_Append( &sb, "\tTEMPER_SET_COMMAND_LINE_ARGS( argc, argv );\n" );
	String_Append( &sb, "\n" );
	String_Append( &sb, "\tTEMPER_SET_SUITE_END_CALLBACK( OnSuiteEnd, nullptr );\n" );
	String_Append( &sb, "\n" );

	// run the scalar tests first
	// the vector/matrix functions make heavy use of these per-component
	// so if these fail, the problem might be easier to diagnose
	String_Append( &sb, "\t// scalar tests\n" );
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		String_Appendf( &sb, "\tTEMPER_RUN_SUITE( Test_%s );\n", Gen_GetMemberTypeString( type ) );
	}

	String_Append( &sb, "\n" );

	// now do vector and matrix types
	String_Appendf( &sb, "\t// vector/matrix tests\n" );
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = (genType_t) typeIndex;

		for ( u32 row = 1; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME] = { 0 };
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				String_Appendf( &sb, "\tTEMPER_RUN_SUITE( Test_%s );\n", fullTypeName );
			}
			String_Appendf( &sb, "\n" );
		}
	}
	String_Append( &sb, "\tTEMPER_SHOW_STATS();\n" );
	String_Append( &sb, "\n" );
	String_Append( &sb, "\treturn TEMPER_EXIT_CODE();\n" );
	String_Append( &sb, "}" );
	String_Append( &sb, "\n" );

	bool32 result = FS_WriteEntireFile( filePathMain, sb.str, sb.length );

	Mem_Reset();

	return result;
}

// DM: running doxygen on MacOS isn't supported yet because I don't have access to a Mac
// when I get access to one, I'll get it working
#ifdef _WIN32
static bool32 GenerateDoxygenPages( void ) {
	printf( "Generating doxygen documentation..." );

	const char* doxygenPath = NULL;
#if defined( _WIN32 )
	doxygenPath = "doxygen/windows/doxygen.exe";
#elif defined( __linux__ )
	doxygenPath = "doxygen/linux/doxygen";
#elif defined( __APPLE__ )
	doxygenPath = "doxygen/macos/doxygen";
#endif // defined( _WIN32 )

	const char* args[] = {
		"doxygen/config"
	};

	process_t doxygenProc = OS_StartProcess( doxygenPath, args, _countof( args ) );

	if ( !doxygenProc.ptr ) {
		return false;
	}

	if ( OS_WaitForProcess( doxygenProc ) != 0 ) {
		return false;
	}

	printf( "OK.\n" );

	return true;
}
#endif // _WIN32

#define FAIL_IF( x, msg ) \
	do { \
		if ( x ) { \
			printf( "ERROR: " ); \
			printf( msg ); \
			return EXIT_FAILURE; \
		} \
	} while ( 0 )

int main( int argc, char** argv ) {
	UNUSED( argc );
	UNUSED( argv );

	printf( "HLML Generator.\n" );
	printf( "(c) Dan Moody 2019 - Present.\n" );
	printf( "\n" );
	printf( "Generating...\n" );
	printf( "\n" );

	FS_CleanFolder( GEN_OUT_GEN_FOLDER_PATH );

	printf( "\n" );

	Mem_Init( 2 * MB_TO_BYTES );

	Time_Init();

	FAIL_IF( !FS_CreateFolder( GEN_OUT_GEN_FOLDER_PATH ), "Failed to create folder \"" GEN_OUT_GEN_FOLDER_PATH "\".\n" );
	FAIL_IF( !FS_CreateFolder( GEN_TESTS_FOLDER_PATH ),   "Failed to create folder \"" GEN_TESTS_FOLDER_PATH "\".\n" );

	float64 start = Time_NowMS();

	printf( "======= Generating core headers. =======\n" );
	FAIL_IF( !GenerateTypeHeader(), "Failed generating \"" GEN_HEADER_TYPES "\".\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating types. =======\n" );
	FAIL_IF( !GenerateVectors(),  "Failed generating a vector implementation.\n" );
	FAIL_IF( !GenerateMatrices(), "Failed generating a vector implementation.\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating functions. =======\n" );
	FAIL_IF( !GenerateFunctionsScalar(),     "Failed generating main scalar functions.\n" );
	FAIL_IF( !GenerateFunctionsVector(),     "Failed generating main vector functions.\n" );
	FAIL_IF( !GenerateFunctionsMatrix(),     "Failed generating main matrix functions.\n" );
	FAIL_IF( !GenerateFunctionsQuaternion(), "Failed generating main quaternion functions.\n" );
	FAIL_IF( !GenerateFunctionsScalarSSE(),  "Failed generating main scalar SSE functions.\n" );
	FAIL_IF( !GenerateFunctionsVectorSSE(),  "Failed generating main vector SSE functions.\n" );
	FAIL_IF( !GenerateFunctionsMatrixSSE(),  "Failed generating main matrix SSE functions.\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating operators. =======\n" );
	FAIL_IF( !GenerateOperatorsVector(), "Failed generating vector operators.\n" );
	FAIL_IF( !GenerateOperatorsMatrix(), "Failed generating matrix operators.\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating tests. =======\n" );
	FAIL_IF( !GenerateTestsScalar(), "Failed generating scalar tests.\n" );
	FAIL_IF( !GenerateTestsVector(), "Failed generating vector tests.\n" );
	FAIL_IF( !GenerateTestsMatrix(), "Failed generating matrix tests.\n" );
	FAIL_IF( !GenerateTestsQuaternion(), "Failed generating matrix tests.\n" );
	FAIL_IF( !GenerateTestsMain(),   "Failed generating \"" GEN_TESTS_FOLDER_PATH "/main.cpp\".\n" );
	printf( "======= Done. =======\n\n" );

	float64 end = Time_NowMS();

	printf( "Code generation time taken: %f ms\n", end - start );

	printf( "\n" );

	// DM: temporarily turning off documentation generation for all non-windows configs
	// because GitHub has a limit on LFS space, which the doxygen executable for linux exceeds
	// TODO(DM): turn this back on when a solution for that gets found
#ifdef _WIN32
	printf( "======= Generating doxygen documentation pages. =======\n" );
	FAIL_IF( !GenerateDoxygenPages(), "Failed generated doxygen pages.\n" );
	printf( "======= Done. =======\n\n" );
#endif

	printf( "Generation finished.\n" );

	Mem_Shutdown();

	return 0;
}

#undef FAIL_IF
