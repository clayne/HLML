#include "GeneratorScalarTests.h"

#include "allocator.h"

#include "FileIO.h"

bool GeneratorScalarTest::Generate( const genType_t type ) {
	const u32 testsCodeBytes = 2 * KB_TO_BYTES;
	const u32 suiteCodeBytes = 2 * KB_TO_BYTES;

	m_codeTests = String_Create( testsCodeBytes );
	m_codeSuite = String_Create( suiteCodeBytes );

	m_type = type;

	m_memberTypeString = Gen_GetMemberTypeString( type );

	stringBuilder_t code = String_Create( testsCodeBytes + suiteCodeBytes );
	String_Append( &code, "#include \"../../" GEN_OUT_GEN_FOLDER_PATH GEN_FILENAME_FUNCTIONS_SCALAR ".h\"\n" );
	String_Append( &code, "\n" );

	String_Append( &code, "#include <temper/temper.h>\n" );
	String_Append( &code, "\n" );

	String_Appendf( &m_codeSuite, "TEMPER_SUITE( Test_%s )\n", m_memberTypeString );
	String_Append(  &m_codeSuite, "{\n" );

	GenerateTestFloateq();

	GenerateTestSign();

	GenerateTestDegreesRadians();

	GenerateTestMinMax();

	GenerateTestClamp();

	GenerateTestSaturate();

	String_Appendf( &m_codeSuite, "}\n" );

	String_Appendf( &code, m_codeTests.str );
	String_Appendf( &code, m_codeSuite.str );

	char filename[1024] = { 0 };
	sprintf( filename, GEN_TESTS_FOLDER_PATH "test_scalar_%s.cpp", m_memberTypeString );

	bool32 result = FS_WriteEntireFile( filename, code.str, code.length );

	if ( !result ) {
		printf( "Can't generate scalar test suite for %s.  That's rough man.\n", m_memberTypeString );
	}

	Mem_Reset();

	return result;
}

void GeneratorScalarTest::GenerateTestFloateq() {
	if ( !Gen_IsFloatingPointType( m_type ) ) {
		return;
	}

	char testName[64] = { 0 };
	snprintf( testName, 64, "TestFloateq_%s", m_memberTypeString );

	// numbers chosen at random
	char aStr[16];
	char bStr[16];
	char cStr[16];
	char dStr[16];

	Gen_GetNumericLiteral( m_type, 5.0f, aStr );
	Gen_GetNumericLiteral( m_type, 5.0f, bStr );
	Gen_GetNumericLiteral( m_type, 5.00002f, cStr );
	Gen_GetNumericLiteral( m_type, 5.0001f, dStr );

	const char* floateqStr = Gen_GetFuncNameFloateq( m_type );

	String_Appendf( &m_codeTests, "TEMPER_TEST( %s )\n", testName );
	String_Append(  &m_codeTests, "{\n" );
	String_Appendf( &m_codeTests, "\t%s a =  %s;\n", m_memberTypeString, aStr );
	String_Appendf( &m_codeTests, "\t%s b =  %s;\n", m_memberTypeString, bStr );
	String_Appendf( &m_codeTests, "\t%s c =  %s;\n", m_memberTypeString, cStr );
	String_Appendf( &m_codeTests, "\t%s d =  %s;\n", m_memberTypeString, dStr );
	String_Append(  &m_codeTests, "\n" );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE(  %s( a, b ) );\n", floateqStr );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( !%s( a, c ) );\n", floateqStr );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( !%s( a, d ) );\n", floateqStr );
	String_Append(  &m_codeTests, "\n" );
	String_Append(  &m_codeTests, "\tTEMPER_PASS();\n" );
	String_Append(  &m_codeTests, "}\n" );
	String_Append(  &m_codeTests, "\n" );

	String_Appendf( &m_codeSuite, "\tTEMPER_RUN_TEST( %s );\n", testName );
}

void GeneratorScalarTest::GenerateTestSign() {
	if ( m_type == GEN_TYPE_BOOL || m_type == GEN_TYPE_UINT ) {
		return;
	}

	char testName[64] = { 0 };
	snprintf( testName, 64, "TestSign_%s", m_memberTypeString );

	char valueSignedStr[16];
	char valueUnsignedStr[16];

	Gen_GetNumericLiteral( m_type, -5, valueSignedStr );
	Gen_GetNumericLiteral( m_type, 9, valueUnsignedStr );

	String_Appendf( &m_codeTests, "TEMPER_TEST( %s )\n", testName );
	String_Append(  &m_codeTests, "{\n" );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( sign( %s ) == -1 );\n", valueSignedStr );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( sign( %s ) ==  1 );\n", valueUnsignedStr );
	String_Append(  &m_codeTests, "\n" );
	String_Append(  &m_codeTests, "\tTEMPER_PASS();\n" );
	String_Append(  &m_codeTests, "}\n" );
	String_Append(  &m_codeTests, "\n" );

	String_Appendf( &m_codeSuite, "\tTEMPER_RUN_TEST( %s );\n", testName );
}

void GeneratorScalarTest::GenerateTestDegreesRadians() {
	if ( !Gen_IsFloatingPointType( m_type ) ) {
		return;
	}

	char testName[64] = { 0 };
	snprintf( testName, 64, "TestDegreesRadians_%s", m_memberTypeString );

	char degreesStr[16];
	Gen_GetNumericLiteral( m_type, 90.0f, degreesStr );

	// DM: must be done this way to avoid floating-point imprecision
	const char* radiansStr = "1.57079637";
	if ( m_type == GEN_TYPE_FLOAT ) {
		radiansStr = "1.57079637f";
	}

	const char* floateqStr = Gen_GetFuncNameFloateq( m_type );

	String_Appendf( &m_codeTests, "TEMPER_TEST( %s )\n", testName );
	String_Append(  &m_codeTests, "{\n" );
	String_Appendf( &m_codeTests, "\t%s deg = %s;\n", m_memberTypeString, degreesStr );
	String_Appendf( &m_codeTests, "\t%s rad = %s;\n", m_memberTypeString, radiansStr );
	String_Append(  &m_codeTests, "\n" );
	String_Appendf( &m_codeTests, "\t%s answerRadians = radians( deg );\n", m_memberTypeString );
	String_Appendf( &m_codeTests, "\t%s answerDegrees = degrees( rad );\n", m_memberTypeString );
	String_Append(  &m_codeTests, "\n" );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( answerRadians, %s ) );\n", floateqStr, radiansStr );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( answerDegrees, %s ) );\n", floateqStr, degreesStr );
	String_Append(  &m_codeTests, "\n" );
	String_Append(  &m_codeTests, "\tTEMPER_PASS();\n" );
	String_Append(  &m_codeTests, "}\n" );
	String_Append(  &m_codeTests, "\n" );

	String_Appendf( &m_codeSuite, "\tTEMPER_RUN_TEST( %s );\n", testName );
}

void GeneratorScalarTest::GenerateTestMinMax() {
	if ( m_type == GEN_TYPE_BOOL ) {
		return;
	}

	char testName[64] = { 0 };
	snprintf( testName, 64, "TestMinMax_%s", m_memberTypeString );

	// numbers picked at random
	char aStr[16];
	char bStr[16];

	Gen_GetNumericLiteral( m_type, 5, aStr );
	Gen_GetNumericLiteral( m_type, 9, bStr );

	const char* floateqStr = Gen_GetFuncNameFloateq( m_type );

	String_Appendf( &m_codeTests, "TEMPER_TEST( %s )\n", testName );
	String_Append(  &m_codeTests, "{\n" );
	String_Appendf( &m_codeTests, "\t%s a = %s;\n", m_memberTypeString, aStr );
	String_Appendf( &m_codeTests, "\t%s b = %s;\n", m_memberTypeString, bStr );
	String_Append(  &m_codeTests, "\n" );
	if ( Gen_IsFloatingPointType( m_type ) ) {
		String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( min( a, b ), a ) );\n", floateqStr );
		String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( max( a, b ), b ) );\n", floateqStr );
	} else {
		String_Append(  &m_codeTests, "\tTEMPER_EXPECT_TRUE( min( a, b ) == a );\n" );
		String_Append(  &m_codeTests, "\tTEMPER_EXPECT_TRUE( max( a, b ) == b );\n" );
	}
	String_Append( &m_codeTests, "\n" );
	String_Append( &m_codeTests, "\tTEMPER_PASS();\n" );
	String_Append( &m_codeTests, "}\n" );
	String_Append( &m_codeTests, "\n" );

	String_Appendf( &m_codeSuite, "\tTEMPER_RUN_TEST( %s );\n", testName );
}

void GeneratorScalarTest::GenerateTestClamp() {
	if ( m_type == GEN_TYPE_BOOL ) {
		return;
	}

	char testName[64] = { 0 };
	snprintf( testName, 64, "TestClamp_%s", m_memberTypeString );

	// numbers picked at random
	char zeroStr[16];
	char elevenStr[16];
	char lowStr[16];
	char highStr[16];

	Gen_GetNumericLiteral( m_type, 0,  zeroStr );
	Gen_GetNumericLiteral( m_type, 11, elevenStr );
	Gen_GetNumericLiteral( m_type, 1,  lowStr );
	Gen_GetNumericLiteral( m_type, 10, highStr );

	const char* floateqStr = Gen_GetFuncNameFloateq( m_type );

	bool isFloatingPointType = Gen_IsFloatingPointType( m_type );

	String_Appendf( &m_codeTests, "TEMPER_TEST( %s )\n", testName );
	String_Append(  &m_codeTests, "{\n" );
	String_Appendf( &m_codeTests, "\t%s a;\n", m_memberTypeString );
	String_Appendf( &m_codeTests, "\t%s low  = %s;\n", m_memberTypeString, lowStr );
	String_Appendf( &m_codeTests, "\t%s high = %s;\n", m_memberTypeString, highStr );
	String_Append(  &m_codeTests, "\n" );
	String_Appendf( &m_codeTests, "\ta = clamp( %s, low, high );\n", zeroStr );
	if ( isFloatingPointType ) {
		String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( a, low ) );\n", floateqStr );
	} else {
		String_Append( &m_codeTests, "\tTEMPER_EXPECT_TRUE( a == low );\n" );
	}
	String_Append( &m_codeTests, "\n" );
	String_Appendf( &m_codeTests, "\ta = clamp( %s, low, high );\n", elevenStr );
		if ( isFloatingPointType ) {
		String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( a, high ) );\n", floateqStr );
	} else {
		String_Append( &m_codeTests, "\tTEMPER_EXPECT_TRUE( a == high );\n" );
	}
	String_Append( &m_codeTests, "\n" );
	String_Append( &m_codeTests, "\tTEMPER_PASS();\n" );
	String_Append( &m_codeTests, "}\n" );
	String_Append( &m_codeTests, "\n" );

	String_Appendf( &m_codeSuite, "\tTEMPER_RUN_TEST( %s );\n", testName );
}

void GeneratorScalarTest::GenerateTestSaturate() {
	if ( !Gen_IsFloatingPointType( m_type ) ) {
		return;
	}

	char testName[64] = { 0 };
	snprintf( testName, 64, "TestSaturate_%s", m_memberTypeString );

	char minusOneStr[16];
	char zeroStr[16];
	char oneStr[16];
	char twoStr[16];

	Gen_GetNumericLiteral( m_type, -1, minusOneStr );
	Gen_GetNumericLiteral( m_type,  0, zeroStr );
	Gen_GetNumericLiteral( m_type,  1, oneStr );
	Gen_GetNumericLiteral( m_type,  2, twoStr );

	const char* floateqStr = Gen_GetFuncNameFloateq( m_type );

	String_Appendf( &m_codeTests, "TEMPER_TEST( %s )\n", testName );
	String_Append(  &m_codeTests, "{\n" );
	String_Appendf( &m_codeTests, "\t%s a;\n", m_memberTypeString );
	String_Append(  &m_codeTests, "\n" );
	String_Appendf( &m_codeTests, "\ta = saturate( %s );\n", minusOneStr );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( a, %s ) );\n", floateqStr, zeroStr );
	String_Append(  &m_codeTests, "\n" );
	String_Appendf( &m_codeTests, "\ta = saturate( %s );\n", twoStr );
	String_Appendf( &m_codeTests, "\tTEMPER_EXPECT_TRUE( %s( a, %s ) );\n", floateqStr, oneStr );
	String_Append(  &m_codeTests, "\n" );
	String_Append(  &m_codeTests, "\tTEMPER_PASS();\n" );
	String_Append(  &m_codeTests, "}\n" );
	String_Append(  &m_codeTests, "\n" );

	String_Appendf( &m_codeSuite, "\tTEMPER_RUN_TEST( %s );\n", testName );
}
