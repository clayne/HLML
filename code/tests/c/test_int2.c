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

TEMPER_TEST( TestAssignment_int2 )
{
	int2 vec;

	vec.x = 1;
	vec.y = 1;
	TEMPER_EXPECT_TRUE( vec.x == 1 );
	TEMPER_EXPECT_TRUE( vec.y == 1 );

	vec.x = 0;
	vec.y = 1;
	TEMPER_EXPECT_TRUE( vec.x == 0 );
	TEMPER_EXPECT_TRUE( vec.y == 1 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_int2 )
{
	int2 a = (int2)	{ 6, 6 };
	int2 b = (int2)	{ 2, 3 };
	int2 c = int2_comp_addv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 8 );
	TEMPER_EXPECT_TRUE( c.y == 9 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_int2 )
{
	int2 a = (int2)	{ 6, 6 };
	int2 b = (int2)	{ 2, 3 };
	int2 c = int2_comp_subv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 4 );
	TEMPER_EXPECT_TRUE( c.y == 3 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_int2 )
{
	int2 a = (int2)	{ 6, 6 };
	int2 b = (int2)	{ 2, 3 };
	int2 c = int2_comp_mulv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 12 );
	TEMPER_EXPECT_TRUE( c.y == 18 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_int2 )
{
	int2 a = (int2)	{ 6, 6 };
	int2 b = (int2)	{ 2, 2 };
	int2 c = int2_comp_divv( &a, &b );

	TEMPER_EXPECT_TRUE( c.x == 3 );
	TEMPER_EXPECT_TRUE( c.y == 3 );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_int2 )
{
	bool2 allTrue = (bool2)	{ true, true };

	int2 vec0 = (int2)	{ 0, 0 };
	int2 vec1 = (int2)	{ 1, 1 };
	int2 vec2 = (int2)	{ 2, 2 };
	int2 vec3 = (int2)	{ 3, 3 };

	bool2 test0  = int2_cmple( &vec0, &vec0 );
	bool2 test1  = int2_cmpge( &vec0, &vec0 );
	bool2 test2  = int2_cmpl( &vec0, &vec1 );
	bool2 test3  = int2_cmpl( &vec0, &vec2 );
	bool2 test4  = int2_cmpl( &vec0, &vec3 );

	bool2 test5  = int2_cmpg( &vec1, &vec0 );
	bool2 test6  = int2_cmple( &vec1, &vec1 );
	bool2 test7  = int2_cmpge( &vec1, &vec1 );
	bool2 test8  = int2_cmpl( &vec1, &vec2 );
	bool2 test9  = int2_cmpl( &vec1, &vec3 );

	bool2 test10 = int2_cmpg( &vec2, &vec0 );
	bool2 test11 = int2_cmpg( &vec2, &vec1 );
	bool2 test12 = int2_cmple( &vec2, &vec2 );
	bool2 test13 = int2_cmpge( &vec2, &vec2 );
	bool2 test14 = int2_cmpl( &vec2, &vec3 );

	bool2 test15 = int2_cmpg( &vec3, &vec0 );
	bool2 test16 = int2_cmpg( &vec3, &vec1 );
	bool2 test17 = int2_cmpg( &vec3, &vec2 );
	bool2 test18 = int2_cmple( &vec3, &vec3 );
	bool2 test19 = int2_cmpge( &vec3, &vec3 );

	TEMPER_EXPECT_TRUE( bool2_cmpe( &test0,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test1,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test2,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test3,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test4,  &allTrue ) );

	TEMPER_EXPECT_TRUE( bool2_cmpe( &test5,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test6,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test7,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test8,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test9,  &allTrue ) );

	TEMPER_EXPECT_TRUE( bool2_cmpe( &test10, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test11, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test12, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test13, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test14, &allTrue ) );

	TEMPER_EXPECT_TRUE( bool2_cmpe( &test15, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test16, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test17, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test18, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2_cmpe( &test19, &allTrue ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_int2 )
{
	int2 answer = (int2) { 5, 5 };

	int2 a = (int2) { 21, 21 };
	int2 b = (int2) { 7, 7 };

	int2 c = int2_comp_and( &a, &b );

	TEMPER_EXPECT_TRUE( int2_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_int2 )
{
	int2 answer = (int2) { 23, 23 };

	int2 a = (int2) { 21, 21 };
	int2 b = (int2) { 7, 7 };

	int2 c = int2_comp_or( &a, &b );

	TEMPER_EXPECT_TRUE( int2_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_int2 )
{
	int2 answer = (int2) { 18, 18 };

	int2 a = (int2) { 21, 21 };
	int2 b = (int2) { 7, 7 };

	int2 c = int2_comp_xor( &a, &b );

	TEMPER_EXPECT_TRUE( int2_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_int2 )
{
	int2 answer = (int2) { 4, 4 };

	int2 a = (int2) { 1, 1 };
	int2 b = (int2) { 2, 2 };

	int2 c = int2_comp_shift_left( &a, &b );

	TEMPER_EXPECT_TRUE( int2_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_int2 )
{
	int2 answer = (int2) { 1, 1 };

	int2 a = (int2) { 16, 16 };
	int2 b = (int2) { 4, 4 };

	int2 c = int2_comp_shift_right( &a, &b );

	TEMPER_EXPECT_TRUE( int2_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Unary_int2 )
{
	int2 answer = (int2) { (int32_t) -1, (int32_t) -1 };

	int2 a = (int2) { 0, 0 };

	int2 b = int2_comp_unary( &a );

	TEMPER_EXPECT_TRUE( int2_cmpe( &b, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestLength_Scalar_int2 )
{
	int2 vec = (int2) { 2, 2 };

	TEMPER_EXPECT_TRUE( floateq( int2_lengthsqr( &vec ), 8.0f ) );
	TEMPER_EXPECT_TRUE( floateq( int2_length( &vec ), 2.82842712475f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDot_Scalar_int2 )
{
	int2 a = (int2) { 0, 1 };
	int2 b = (int2) { 0, -1 };

	TEMPER_EXPECT_TRUE( int2_dot( &a, &b ) == -1 );

	TEMPER_PASS();
}

TEMPER_TEST( TestDistance_Scalar_int2 )
{
	float answerDistanceSqr = 104.0f;
	float answerDistance    = 10.198039f;

	int2 a = (int2) { 7, 4 };
	int2 b = (int2) { 17, 6 };

	float distSqr = int2_distancesqr( &a, &b );
	float dist    = int2_distance( &a, &b );

	TEMPER_EXPECT_TRUE( floateq( distSqr, answerDistanceSqr ) );
	TEMPER_EXPECT_TRUE( floateq( dist, answerDistance ) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_int2 )
{
	TEMPER_RUN_TEST( TestAssignment_int2 );
	TEMPER_RUN_TEST( TestArithmeticAddition_int2 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_int2 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_int2 );
	TEMPER_RUN_TEST( TestArithmeticDivision_int2 );
	TEMPER_RUN_TEST( TestRelational_int2 );
	TEMPER_RUN_TEST( TestBitwise_And_int2 );
	TEMPER_RUN_TEST( TestBitwise_Or_int2 );
	TEMPER_RUN_TEST( TestBitwise_Xor_int2 );
	TEMPER_RUN_TEST( TestBitwise_ShiftLeft_int2 );
	TEMPER_RUN_TEST( TestBitwise_ShiftRight_int2 );
	TEMPER_RUN_TEST( TestBitwise_Unary_int2 );
	TEMPER_RUN_TEST( TestLength_Scalar_int2 );
	TEMPER_RUN_TEST( TestDot_Scalar_int2 );
	TEMPER_RUN_TEST( TestDistance_Scalar_int2 );
}
