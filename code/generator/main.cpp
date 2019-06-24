/*
===========================================================================

hlml.
Copyright (c) Dan Moody 2018 - Present.

This file is part of hlml.

hlml is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

hlml is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with hlml.  If not, see <http://www.gnu.org/licenses/>.

===========================================================================
*/

#include "allocator.h"
#include "string_builder.h"

#include "GeneratorVector.h"
#include "GeneratorMatrix.h"

#include "GeneratorScalarTests.h"
#include "GeneratorVectorTests.h"
#include "GeneratorMatrixTests.h"

#include "gen_funcs_vector.h"
#include "gen_funcs_matrix.h"

#include "FileIO.h"

#ifdef _WIN32
#include "time.h"
#endif

#include <stdio.h>
#include <assert.h>

static bool GenerateTypeHeader( void ) {
	char headerFilePath[1024] = { 0 };
	sprintf( headerFilePath, "%s%s", GEN_OUT_FOLDER_PATH, GEN_HEADER_TYPES );

	stringBuilder_t sb = String_Create( 1 * KB_TO_BYTES );

	String_Append( &sb, GEN_FILE_HEADER );
	String_Append( &sb,
		"#include <stdint.h>\n" \
		"\n" \
		"// ensure that a bool is 4 bytes\n" \
		"typedef uint32_t bool32_t;\n" );

	bool32 result = FS_WriteEntireFile( headerFilePath, sb.str, sb.length );

	Mem_Reset();

	return result;
}

static bool GenerateHeaderScalar( void ) {
	char fileNameHeader[1024];
	sprintf( fileNameHeader, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_SCALAR );

	stringBuilder_t sb = String_Create( 8 * KB_TO_BYTES );

	String_Append( &sb, GEN_FILE_HEADER );
	String_Append( &sb,
		"#pragma once\n" \
		"#pragma once\n" \
		"\n" \
		"#include \"../" GEN_HEADER_CONSTANTS "\"\n" \
		"\n" \
		"#include <math.h>\n" \
		"#include <stdint.h>\n" \
		"\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

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
		Gen_Saturate( type, 1, &sb, nullptr );

		Gen_Lerp( type, 1, &sb, nullptr );
		Gen_Smoothstep( type, 1, &sb, nullptr );

		String_Append( &sb, "\n" );

		printf( "OK.\n" );
	}

	bool32 result = FS_WriteEntireFile( fileNameHeader, sb.str, sb.length );

	Mem_Reset();

	return result;
}

static bool GenerateVectors( void ) {
	GeneratorVector gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

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

static bool GenerateMatrices( void ) {
	GeneratorMatrix gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

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

static bool GenerateFunctionsVector( void ) {
	char filePathHeader[64] = { 0 };
	sprintf( filePathHeader, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_VECTOR );

	char filePathInl[64] = { 0 };
	sprintf( filePathInl, "%s%s.inl", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_VECTOR );

	stringBuilder_t contentHeader = String_Create( 16 * KB_TO_BYTES );

	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader, "#pragma once\n" );
	String_Append( &contentHeader, "\n" );

	stringBuilder_t contentInl = String_Create( 16 * KB_TO_BYTES );

	String_Append( &contentInl, GEN_FILE_HEADER );
	String_Append( &contentInl, "#include \"" GEN_FILENAME_OPERATORS_VECTOR ".h\"" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			String_Appendf( &contentHeader, "#include \"%s%d.h\"\n", typeString, componentIndex );
		}
	}

	String_Append( &contentHeader, "\n" );
	String_Append( &contentInl, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			printf( "Algebra %s%d...", typeString, componentIndex );

			String_Appendf( &contentHeader, "// %s%d\n", typeString, componentIndex );
			String_Appendf( &contentInl, "// %s%d\n", typeString, componentIndex );

			// generic/scalar funcs
			Gen_Saturate( type, componentIndex, &contentHeader, &contentInl );
			Gen_Lerp( type, componentIndex, &contentHeader, &contentInl );
			Gen_Smoothstep( type, componentIndex, &contentHeader, &contentInl );

			// generic/scalar/vector funcs
			Gen_VectorLength( type, componentIndex, &contentHeader, &contentInl );
			Gen_VectorNormalize( type, componentIndex, &contentHeader, &contentInl );
			Gen_VectorDot( type, componentIndex, &contentHeader, &contentInl );
			Gen_VectorCross( type, componentIndex, &contentHeader, &contentInl );
			Gen_VectorAngle( type, componentIndex, &contentHeader, &contentInl );
			Gen_VectorDistance( type, componentIndex, &contentHeader, &contentInl );
			Gen_VectorPack( type, componentIndex, &contentHeader, &contentInl );
			Gen_VectorUnpack( type, componentIndex, &contentHeader, &contentInl );

			String_Append( &contentHeader, "\n" );
			String_Append( &contentInl, "\n" );

			printf( "OK.\n" );
		}
	}

	String_Append( &contentHeader, "#include \"" GEN_FILENAME_FUNCTIONS_VECTOR ".inl\"\n" );

	bool32 wroteHeader	= FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );
	bool32 wroteInl		= FS_WriteEntireFile( filePathInl, contentInl.str, contentInl.length );

	Mem_Reset();

	return wroteHeader && wroteInl;
}

static bool GenerateFunctionsMatrix( void ) {
	char filePathHeader[64] = { 0 };
	sprintf( filePathHeader, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_MATRIX );

	char filePathInl[64] = { 0 };
	sprintf( filePathInl, "%s%s.inl", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_FUNCTIONS_MATRIX );

	stringBuilder_t contentHeader = String_Create( 64 * KB_TO_BYTES );
	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader, "#pragma once\n" );
	String_Append( &contentHeader, "\n" );

	stringBuilder_t contentInl = String_Create( 64 * KB_TO_BYTES );
	String_Append( &contentInl, GEN_FILE_HEADER );
	String_Append( &contentInl, "#include \"" GEN_FILENAME_FUNCTIONS_VECTOR ".h\"\n" );
	String_Append( &contentInl, "#include \"" GEN_FILENAME_OPERATORS_MATRIX ".h\"\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				// TODO(DM): only include the header files we actually need
				String_Appendf( &contentHeader, "#include \"%s%dx%d.h\"\n", typeString, row, col );
			}
		}

		String_Appendf( &contentHeader, "\n" );
	}

	String_Appendf( &contentHeader, "\n" );
	String_Appendf( &contentInl, "\n" );

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[32];
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				printf( "Basic functions %s...", fullTypeName );

				String_Appendf( &contentHeader, "// %s\n", fullTypeName );
				String_Appendf( &contentInl, "// %s\n", fullTypeName );

				Gen_MatrixIdentity( type, row, col, &contentHeader, &contentInl );
				Gen_MatrixTranspose( type, row, col, &contentHeader, &contentInl );

				Gen_MatrixInverse( type, row, col, &contentHeader, &contentInl );
				Gen_MatrixDeterminant( type, row, col, &contentHeader, &contentInl );

				Gen_MatrixTranslate( type, row, col, &contentHeader, &contentInl );
				Gen_MatrixRotate( type, row, col, &contentHeader, &contentInl );
				Gen_MatrixScale( type, row, col, &contentHeader, &contentInl );

				Gen_MatrixOrtho( type, row, col, &contentHeader, &contentInl );
				Gen_MatrixPerspective( type, row, col, &contentHeader, &contentInl );
				Gen_MatrixLookAt( type, row, col, &contentHeader, &contentInl );

				String_Append( &contentHeader, "\n" );
				String_Append( &contentInl, "\n" );

				printf( "OK.\n" );
			}
		}
	}

	String_Appendf( &contentHeader, "#include \"" GEN_FILENAME_FUNCTIONS_MATRIX ".inl\"\n" );

	bool32 wroteHeader	= FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );
	bool32 wroteInl		= FS_WriteEntireFile( filePathInl, contentInl.str, contentInl.length );

	Mem_Reset();

	return wroteHeader && wroteInl;
}

static bool GenerateOperatorsVector( void ) {
	char filePathHeader[64] = { 0 };
	sprintf( filePathHeader, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_OPERATORS_VECTOR );

	char filePathInl[64] = { 0 };
	sprintf( filePathInl, "%s%s.inl", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_OPERATORS_VECTOR );

	stringBuilder_t contentHeader = String_Create( 128 * KB_TO_BYTES );
	String_Append( &contentHeader, "#pragma once\n" );
	String_Append( &contentHeader, "\n" );

	stringBuilder_t contentInl = String_Create( 128 * KB_TO_BYTES );
	String_Append( &contentInl, "#include \"" GEN_FILENAME_OPERATORS_VECTOR ".h\"\n" );

	// includes
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			String_Appendf( &contentHeader, "#include \"%s%d.h\"\n", typeString, componentIndex );
		}
	}

	String_Append( &contentHeader, "\n" );
	String_Append( &contentInl, "\n" );

	// header and inl code
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		for ( u32 componentIndex = GEN_COMPONENT_COUNT_MIN; componentIndex <= GEN_COMPONENT_COUNT_MAX; componentIndex++ ) {
			char fullTypeName[32];
			Gen_GetFullTypeName( type, 1, componentIndex, fullTypeName );

			printf( "Vector operators %s...", fullTypeName );

			String_Appendf( &contentHeader, "// %s\n", fullTypeName );
			String_Appendf( &contentInl, "// %s\n", fullTypeName );

			Gen_VectorOperatorsArithmetic( type, componentIndex, &contentHeader, &contentInl );
			Gen_OperatorsIncrement( type, 1, componentIndex, &contentHeader, &contentInl );
			Gen_OperatorsRelational( type, 1, componentIndex, &contentHeader, &contentInl );
			Gen_OperatorsBitwise( type, 1, componentIndex, &contentHeader, &contentInl );

			String_Append( &contentHeader, "\n" );
			String_Append( &contentInl, "\n" );

			printf( "OK.\n" );
		}
	}

	String_Appendf( &contentHeader, "#include \"" GEN_FILENAME_OPERATORS_VECTOR ".inl\"\n" );

	bool32 wroteHeader	= FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );
	bool32 wroteInl		= FS_WriteEntireFile( filePathInl, contentInl.str, contentInl.length );

	Mem_Reset();

	return wroteHeader && wroteInl;
}

static bool GenerateOperatorsMatrix( void ) {
	char filePathHeader[64] = { 0 };
	sprintf( filePathHeader, "%s%s.h", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_OPERATORS_MATRIX );

	char filePathInl[64] = { 0 };
	sprintf( filePathInl, "%s%s.inl", GEN_OUT_GEN_FOLDER_PATH, GEN_FILENAME_OPERATORS_MATRIX );

	stringBuilder_t contentHeader = String_Create( 512 * KB_TO_BYTES );
	String_Append( &contentHeader, GEN_FILE_HEADER );
	String_Append( &contentHeader, "#pragma once\n" );
	String_Append( &contentHeader, "\n" );

	stringBuilder_t contentInl = String_Create( 512 * KB_TO_BYTES );
	String_Append( &contentInl, GEN_FILE_HEADER );
	String_Append( &contentInl, "#include \"" GEN_FILENAME_OPERATORS_VECTOR ".h\"\n" );

	// includes
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		const char* typeString = Gen_GetTypeString( type );

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				String_Appendf( &contentHeader, "#include \"%s%dx%d.h\"\n", typeString, row, col );
			}
		}
	}

	String_Append( &contentHeader, "\n" );
	String_Append( &contentInl, "\n" );

	// header and inl code
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		for ( u32 row = GEN_COMPONENT_COUNT_MIN; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[32];
				Gen_GetFullTypeName( type, row, col, fullTypeName );

				printf( "Matrix operators %s...", fullTypeName );

				String_Appendf( &contentHeader, "// %s\n", fullTypeName );
				String_Appendf( &contentInl, "// %s\n", fullTypeName );

				Gen_MatrixOperatorsArithmetic( type, row, col, &contentHeader, &contentInl );
				Gen_OperatorsIncrement( type, row, col, &contentHeader, &contentInl );
				Gen_OperatorsRelational( type, row, col, &contentHeader, &contentInl );
				Gen_OperatorsBitwise( type, row, col, &contentHeader, &contentInl );

				String_Append( &contentHeader, "\n" );
				String_Append( &contentInl, "\n" );

				printf( "OK.\n" );
			}
		}
	}

	String_Append( &contentHeader, "#include \"" GEN_FILENAME_OPERATORS_MATRIX ".inl\"\n" );

	bool32 wroteHeader	= FS_WriteEntireFile( filePathHeader, contentHeader.str, contentHeader.length );
	bool32 wroteInl		= FS_WriteEntireFile( filePathInl, contentInl.str, contentInl.length );

	Mem_Reset();

	return wroteHeader && wroteInl;
}

static bool GenerateTestsScalar( void ) {
	GeneratorScalarTest gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

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

static bool GenerateTestsVector( void ) {
	GeneratorVectorTests gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

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

static bool GenerateTestsMatrix( void ) {
	GeneratorMatrixTests gen;

	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

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

static bool GenerateTestsMain( void ) {
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
		genType_t type = static_cast<genType_t>( typeIndex );

		for ( u32 row = 1; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = 1; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[16] = { 0 };
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
		genType_t type = static_cast<genType_t>( typeIndex );

		if ( type == GEN_TYPE_BOOL ) {
			continue;
		}

		String_Appendf( &sb, "\tTEMPER_RUN_SUITE( Test_%s );\n", Gen_GetMemberTypeString( type ) );
	}

	String_Append( &sb, "\n" );

	// now do vector and matrix types
	String_Appendf( &sb, "\t// vector/matrix tests\n" );
	for ( u32 typeIndex = 0; typeIndex < GEN_TYPE_COUNT; typeIndex++ ) {
		genType_t type = static_cast<genType_t>( typeIndex );

		for ( u32 row = 1; row <= GEN_COMPONENT_COUNT_MAX; row++ ) {
			for ( u32 col = GEN_COMPONENT_COUNT_MIN; col <= GEN_COMPONENT_COUNT_MAX; col++ ) {
				char fullTypeName[16] = { 0 };
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

	Mem_Init( 2 * MB_TO_BYTES );

#ifdef _WIN32
	Time_Init();

	float64 start = Time_NowMS();
#endif

	FAIL_IF( !FS_CreateFolder( GEN_OUT_GEN_FOLDER_PATH ), "Failed to create folder \"" GEN_OUT_GEN_FOLDER_PATH "\".\n" );
	FAIL_IF( !FS_CreateFolder( GEN_TESTS_FOLDER_PATH ),   "Failed to create folder \"" GEN_TESTS_FOLDER_PATH "\".\n" );

	printf( "======= Generating core headers. =======\n" );
	FAIL_IF( !GenerateTypeHeader(),   "Failed generating \"" GEN_HEADER_TYPES "\".\n" );
	FAIL_IF( !GenerateHeaderScalar(), "Failed generating \"" GEN_FILENAME_FUNCTIONS_SCALAR "\".\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating types. =======\n" );
	FAIL_IF( !GenerateVectors(),  "Failed generating a vector implementation.\n" );
	FAIL_IF( !GenerateMatrices(), "Failed generating a vector implementation.\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating functions. =======\n" );
	FAIL_IF( !GenerateFunctionsVector(), "Failed generating main vector functions header.\n" );
	FAIL_IF( !GenerateFunctionsMatrix(), "Failed generating main matrix functions header.\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating operators. =======\n" );
	FAIL_IF( !GenerateOperatorsVector(), "Failed generating vector operators header.\n" );
	FAIL_IF( !GenerateOperatorsMatrix(), "Failed generating matrix operators header.\n" );
	printf( "======= Done. =======\n\n" );

	printf( "======= Generating tests. =======\n" );
	FAIL_IF( !GenerateTestsScalar(), "Failed generating scalar tests.\n" );
	FAIL_IF( !GenerateTestsVector(), "Failed generating vector tests.\n" );
	FAIL_IF( !GenerateTestsMatrix(), "Failed generating matrix tests.\n" );
	FAIL_IF( !GenerateTestsMain(),   "Failed generating \"" GEN_TESTS_FOLDER_PATH "/main.cpp\".\n" );
	printf( "======= Done. =======\n\n" );

#ifdef _WIN32
	float64 end = Time_NowMS();
#endif

	printf( "Finished.\n" );
#ifdef _WIN32
	printf( "Time taken : %f ms\n", end - start );
#endif

	Mem_Shutdown();

	return 0;
}

#undef FAIL_IF
