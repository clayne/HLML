/*
===========================================================================

HLML.

MIT License

Copyright (c) 2019 Dan Moody

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

===========================================================================
*/

// THIS FILE WAS AUTOMATICALLY GENERATED BY A TOOL.
// EDITING THIS FILE MAY CAUSE SIDE EFFECTS.
// DO SO AT YOUR OWN RISK.

TEMPER_TEST( TestAssignment_int3 )
{
	int3 vec;

	vec.x = 1;
	vec.y = 1;
	vec.z = 1;
	TEMPER_EXPECT_TRUE( vec.x == 1 );
	TEMPER_EXPECT_TRUE( vec.y == 1 );
	TEMPER_EXPECT_TRUE( vec.z == 1 );

	vec.x = 0;
	vec.y = 1;
	vec.z = 2;
	TEMPER_EXPECT_TRUE( vec.x == 0 );
	TEMPER_EXPECT_TRUE( vec.y == 1 );
	TEMPER_EXPECT_TRUE( vec.z == 2 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_int3 )
{
	int3 a = (int3)	{ 6, 6, 6 };
	int3 b = (int3)	{ 2, 3, 4 };
	int3 c = int3_comp_addv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 8 );
	TEMPER_EXPECT_TRUE( c.y == 9 );
	TEMPER_EXPECT_TRUE( c.z == 10 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_int3 )
{
	int3 a = (int3)	{ 6, 6, 6 };
	int3 b = (int3)	{ 2, 3, 4 };
	int3 c = int3_comp_subv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 4 );
	TEMPER_EXPECT_TRUE( c.y == 3 );
	TEMPER_EXPECT_TRUE( c.z == 2 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_int3 )
{
	int3 a = (int3)	{ 6, 6, 6 };
	int3 b = (int3)	{ 2, 3, 4 };
	int3 c = int3_comp_mulv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 12 );
	TEMPER_EXPECT_TRUE( c.y == 18 );
	TEMPER_EXPECT_TRUE( c.z == 24 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_int3 )
{
	int3 a = (int3)	{ 6, 6, 6 };
	int3 b = (int3)	{ 2, 2, 3 };
	int3 c = int3_comp_divv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 3 );
	TEMPER_EXPECT_TRUE( c.y == 3 );
	TEMPER_EXPECT_TRUE( c.z == 2 );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_int3 )
{
	bool3 allTrue = (bool3)	{ true, true, true };

	int3 vec0 = (int3)	{ 0, 0, 0 };
	int3 vec1 = (int3)	{ 1, 1, 1 };
	int3 vec2 = (int3)	{ 2, 2, 2 };
	int3 vec3 = (int3)	{ 3, 3, 3 };

	bool3 test0  = int3_cmple( &vec0, &vec0 );
	bool3 test1  = int3_cmpge( &vec0, &vec0 );
	bool3 test2  = int3_cmpl( &vec0, &vec1 );
	bool3 test3  = int3_cmpl( &vec0, &vec2 );
	bool3 test4  = int3_cmpl( &vec0, &vec3 );

	bool3 test5  = int3_cmpg( &vec1, &vec0 );
	bool3 test6  = int3_cmple( &vec1, &vec1 );
	bool3 test7  = int3_cmpge( &vec1, &vec1 );
	bool3 test8  = int3_cmpl( &vec1, &vec2 );
	bool3 test9  = int3_cmpl( &vec1, &vec3 );

	bool3 test10 = int3_cmpg( &vec2, &vec0 );
	bool3 test11 = int3_cmpg( &vec2, &vec1 );
	bool3 test12 = int3_cmple( &vec2, &vec2 );
	bool3 test13 = int3_cmpge( &vec2, &vec2 );
	bool3 test14 = int3_cmpl( &vec2, &vec3 );

	bool3 test15 = int3_cmpg( &vec3, &vec0 );
	bool3 test16 = int3_cmpg( &vec3, &vec1 );
	bool3 test17 = int3_cmpg( &vec3, &vec2 );
	bool3 test18 = int3_cmple( &vec3, &vec3 );
	bool3 test19 = int3_cmpge( &vec3, &vec3 );

	TEMPER_EXPECT_TRUE( bool3_cmpe( &test0,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test1,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test2,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test3,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test4,  &allTrue ) );

	TEMPER_EXPECT_TRUE( bool3_cmpe( &test5,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test6,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test7,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test8,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test9,  &allTrue ) );

	TEMPER_EXPECT_TRUE( bool3_cmpe( &test10, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test11, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test12, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test13, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test14, &allTrue ) );

	TEMPER_EXPECT_TRUE( bool3_cmpe( &test15, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test16, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test17, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test18, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool3_cmpe( &test19, &allTrue ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_int3 )
{
	int3 answer = (int3) { 5, 5, 5 };

	int3 a = (int3) { 21, 21, 21 };
	int3 b = (int3) { 7, 7, 7 };

	int3 c = int3_comp_and( &a, &b );

	TEMPER_EXPECT_TRUE( int3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_int3 )
{
	int3 answer = (int3) { 23, 23, 23 };

	int3 a = (int3) { 21, 21, 21 };
	int3 b = (int3) { 7, 7, 7 };

	int3 c = int3_comp_or( &a, &b );

	TEMPER_EXPECT_TRUE( int3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_int3 )
{
	int3 answer = (int3) { 18, 18, 18 };

	int3 a = (int3) { 21, 21, 21 };
	int3 b = (int3) { 7, 7, 7 };

	int3 c = int3_comp_xor( &a, &b );

	TEMPER_EXPECT_TRUE( int3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_int3 )
{
	int3 answer = (int3) { 4, 4, 4 };

	int3 a = (int3) { 1, 1, 1 };
	int3 b = (int3) { 2, 2, 2 };

	int3 c = int3_comp_shift_left( &a, &b );

	TEMPER_EXPECT_TRUE( int3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_int3 )
{
	int3 answer = (int3) { 1, 1, 1 };

	int3 a = (int3) { 16, 16, 16 };
	int3 b = (int3) { 4, 4, 4 };

	int3 c = int3_comp_shift_right( &a, &b );

	TEMPER_EXPECT_TRUE( int3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Unary_int3 )
{
	int3 answer = (int3) { (int32_t) -1, (int32_t) -1, (int32_t) -1 };

	int3 a = (int3) { 0, 0, 0 };

	int3 b = int3_comp_unary( &a );

	TEMPER_EXPECT_TRUE( int3_cmpe( &b, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestLength_Scalar_int3 )
{
	int3 vec = (int3) { 2, 2, 2 };

	TEMPER_EXPECT_TRUE( floateq( int3_lengthsqr( &vec ), 12.0f ) );
	TEMPER_EXPECT_TRUE( floateq( int3_length( &vec ), 3.46410161514f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDot_Scalar_int3 )
{
	int3 a = (int3) { 0, 1, 0 };
	int3 b = (int3) { 0, -1, 0 };

	TEMPER_EXPECT_TRUE( int3_dot( &a, &b ) == -1 );

	TEMPER_PASS();
}

TEMPER_TEST( TestDistance_Scalar_int3 )
{
	float answerDistanceSqr = 105.0f;
	float answerDistance    = 10.246951f;

	int3 a = (int3) { 7, 4, 3 };
	int3 b = (int3) { 17, 6, 2 };

	float distSqr = int3_distancesqr( &a, &b );
	float dist    = int3_distance( &a, &b );

	TEMPER_EXPECT_TRUE( floateq( distSqr, answerDistanceSqr ) );
	TEMPER_EXPECT_TRUE( floateq( dist, answerDistance ) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_int3 )
{
	TEMPER_RUN_TEST( TestAssignment_int3 );
	TEMPER_RUN_TEST( TestArithmeticAddition_int3 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_int3 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_int3 );
	TEMPER_RUN_TEST( TestArithmeticDivision_int3 );
	TEMPER_RUN_TEST( TestRelational_int3 );
	TEMPER_RUN_TEST( TestBitwise_And_int3 );
	TEMPER_RUN_TEST( TestBitwise_Or_int3 );
	TEMPER_RUN_TEST( TestBitwise_Xor_int3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftLeft_int3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftRight_int3 );
	TEMPER_RUN_TEST( TestBitwise_Unary_int3 );
	TEMPER_RUN_TEST( TestLength_Scalar_int3 );
	TEMPER_RUN_TEST( TestDot_Scalar_int3 );
	TEMPER_RUN_TEST( TestDistance_Scalar_int3 );
}
