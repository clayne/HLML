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

// also tests equality operators
TEMPER_TEST( TestCtor_int2 )
{
	int2 vec;

	vec = int2( 1 );
	TEMPER_EXPECT_TRUE( vec == int2( 1 ) );
	TEMPER_EXPECT_TRUE( vec != int2( 0, 1 ) );

	vec = int2( 0, 1 );
	TEMPER_EXPECT_TRUE( vec == int2( 0, 1 ) );
	TEMPER_EXPECT_TRUE( vec != int2( 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_int2 )
{
	int2 a = int2( 0, 1 );

	TEMPER_EXPECT_TRUE( a.x == 0 );
	TEMPER_EXPECT_TRUE( a.y == 1 );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_int2 )
{
	int2 vec;

	// prefix
	vec = int2( 0, 0 );
	++vec;
	TEMPER_EXPECT_TRUE( vec == int2( 1, 1 ) );

	// postfix
	vec = int2( 0, 0 );
	vec++;
	TEMPER_EXPECT_TRUE( vec == int2( 1, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_int2 )
{
	int2 vec;

	// prefix
	vec = int2( 1, 1 );
	--vec;
	TEMPER_EXPECT_TRUE( vec == int2( 0, 0 ) );

	// postfix
	vec = int2( 1, 1 );
	vec--;
	TEMPER_EXPECT_TRUE( vec == int2( 0, 0 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_int2 )
{
	int2 a = int2( 6 );
	int2 b = int2( 2, 3 );

	int2 c = a + b;

	TEMPER_EXPECT_TRUE( c == int2( 8, 9 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_int2 )
{
	int2 a = int2( 6 );
	int2 b = int2( 2, 3 );

	int2 c = a - b;

	TEMPER_EXPECT_TRUE( c == int2( 4, 3 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_int2 )
{
	int2 a = int2( 6 );
	int2 b = int2( 2, 3 );

	int2 c = a * b;

	TEMPER_EXPECT_TRUE( c == int2( 12, 18 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_int2 )
{
	int2 a = int2( 6 );
	int2 b = int2( 2, 2 );

	int2 c = a / b;

	TEMPER_EXPECT_TRUE( c == int2( 3, 3 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_int2 )
{
	bool2 allTrue = bool2( true );

	int2 vec0 = int2( 0 );
	int2 vec1 = int2( 1 );
	int2 vec2 = int2( 2 );
	int2 vec3 = int2( 3 );

	bool2 test0  = vec0 <= vec0;
	bool2 test1  = vec0 >= vec0;
	bool2 test2  = vec0 <  vec1;
	bool2 test3  = vec0 <  vec2;
	bool2 test4  = vec0 <  vec3;

	bool2 test5  = vec1 >  vec0;
	bool2 test6  = vec1 <= vec1;
	bool2 test7  = vec1 >= vec1;
	bool2 test8  = vec1 <  vec2;
	bool2 test9  = vec1 <  vec3;

	bool2 test10 = vec2 >  vec0;
	bool2 test11 = vec2 >  vec1;
	bool2 test12 = vec2 <= vec2;
	bool2 test13 = vec2 >= vec2;
	bool2 test14 = vec2 <  vec3;

	bool2 test15 = vec3 >  vec0;
	bool2 test16 = vec3 >  vec1;
	bool2 test17 = vec3 >  vec2;
	bool2 test18 = vec3 <= vec3;
	bool2 test19 = vec3 >= vec3;

	TEMPER_EXPECT_TRUE( test0  == allTrue );
	TEMPER_EXPECT_TRUE( test1  == allTrue );
	TEMPER_EXPECT_TRUE( test2  == allTrue );
	TEMPER_EXPECT_TRUE( test3  == allTrue );
	TEMPER_EXPECT_TRUE( test4  == allTrue );

	TEMPER_EXPECT_TRUE( test5  == allTrue );
	TEMPER_EXPECT_TRUE( test6  == allTrue );
	TEMPER_EXPECT_TRUE( test7  == allTrue );
	TEMPER_EXPECT_TRUE( test8  == allTrue );
	TEMPER_EXPECT_TRUE( test9  == allTrue );

	TEMPER_EXPECT_TRUE( test10 == allTrue );
	TEMPER_EXPECT_TRUE( test11 == allTrue );
	TEMPER_EXPECT_TRUE( test12 == allTrue );
	TEMPER_EXPECT_TRUE( test13 == allTrue );
	TEMPER_EXPECT_TRUE( test14 == allTrue );

	TEMPER_EXPECT_TRUE( test15 == allTrue );
	TEMPER_EXPECT_TRUE( test16 == allTrue );
	TEMPER_EXPECT_TRUE( test17 == allTrue );
	TEMPER_EXPECT_TRUE( test18 == allTrue );
	TEMPER_EXPECT_TRUE( test19 == allTrue );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_int2 )
{
	int2 a  = int2( 21, 21 );
	int2 b  = int2( 7, 7 );

	int2 answer = a & b;

	TEMPER_EXPECT_TRUE( answer == int2( 5, 5 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_int2 )
{
	int2 a  = int2( 21, 21 );
	int2 b  = int2( 7, 7 );

	int2 answer = a | b;

	TEMPER_EXPECT_TRUE( answer == int2( 23, 23 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_int2 )
{
	int2 a  = int2( 21, 21 );
	int2 b  = int2( 7, 7 );

	int2 answer = a ^ b;

	TEMPER_EXPECT_TRUE( answer == int2( 18, 18 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_int2 )
{
	int2 a  = int2( 1, 1 );
	int2 b  = int2( 2, 2 );

	int2 answer = a << b;

	TEMPER_EXPECT_TRUE( answer == int2( 4, 4 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_int2 )
{
	int2 a  = int2( 16, 16 );
	int2 b  = int2( 4, 4 );

	int2 answer = a >> b;

	TEMPER_EXPECT_TRUE( answer == int2( 1, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Unary_int2 )
{
	int2 a = int2( 0, 0 );

	int2 answer = ~a;

	TEMPER_EXPECT_TRUE( answer == int2( (int32_t) -1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestLength_Scalar_int2 )
{
	int2 vec = int2( 2 );

	TEMPER_EXPECT_TRUE( floateq( lengthsqr( vec ), 8.0f ) );
	TEMPER_EXPECT_TRUE( floateq( length( vec ), 2.82842712475f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDot_Scalar_int2 )
{
	int2 a = int2( 0, 1 );
	int2 b = int2( 0, -1 );

	TEMPER_EXPECT_TRUE( dot( a, b ) == -1 );

	TEMPER_PASS();
}

TEMPER_TEST( TestDistance_Scalar_int2 )
{
	float answerDistanceSqr = 104.0f;
	float answerDistance    = 10.198039f;

	int2 a = int2( 7, 4 );
	int2 b = int2( 17, 6 );

	float distSqr = distancesqr( a, b );
	float dist    = distance( a, b );

	TEMPER_EXPECT_TRUE( floateq( distSqr, answerDistanceSqr ) );
	TEMPER_EXPECT_TRUE( floateq( dist, answerDistance ) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_int2 )
{
	TEMPER_RUN_TEST( TestAssignment_int2 );
	TEMPER_RUN_TEST( TestCtor_int2 );
	TEMPER_RUN_TEST( TestArray_int2 );
	TEMPER_RUN_TEST( TestIncrement_int2 );
	TEMPER_RUN_TEST( TestDecrement_int2 );
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
