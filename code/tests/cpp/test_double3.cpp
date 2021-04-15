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

TEMPER_TEST( TestAssignment_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 vec;

	vec.x = 1.0;
	vec.y = 1.0;
	vec.z = 1.0;
	TEMPER_CHECK_TRUE( vec.x == 1.0 );
	TEMPER_CHECK_TRUE( vec.y == 1.0 );
	TEMPER_CHECK_TRUE( vec.z == 1.0 );

	vec.x = 0.0;
	vec.y = 1.0;
	vec.z = 2.0;
	TEMPER_CHECK_TRUE( vec.x == 0.0 );
	TEMPER_CHECK_TRUE( vec.y == 1.0 );
	TEMPER_CHECK_TRUE( vec.z == 2.0 );
}

// also tests equality operators
TEMPER_TEST( TestCtor_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 vec;

	// single value
	vec = double3( 1.0 );
	TEMPER_CHECK_TRUE( vec == double3( 1.0 ) );
	TEMPER_CHECK_TRUE( vec != double3( 0.000000, 1.000000, 2.000000 ) );

	// all values set
	vec = double3( 0.000000, 1.000000, 2.000000 );
	TEMPER_CHECK_TRUE( vec == double3( 0.000000, 1.000000, 2.000000 ) );
	TEMPER_CHECK_TRUE( vec != double3( 1.0 ) );

	// copy ctors of other vector types
	double2 other2 = { 10.000000, 11.000000 };
	vec = double3( other2 );
	TEMPER_CHECK_TRUE( doubleeq( vec.x, 10.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.y, 11.0 ) );

	double3 other3 = { 10.000000, 11.000000, 14.000000 };
	vec = double3( other3 );
	TEMPER_CHECK_TRUE( doubleeq( vec.x, 10.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.y, 11.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.z, 14.0 ) );

	double4 other4 = { 10.000000, 11.000000, 14.000000, 15.000000 };
	vec = double3( other4 );
	TEMPER_CHECK_TRUE( doubleeq( vec.x, 10.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.y, 11.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.z, 14.0 ) );

}

TEMPER_TEST( TestArray_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 a = double3( 0.000000, 1.000000, 2.000000 );

	TEMPER_CHECK_TRUE( a.x == 0.0 );
	TEMPER_CHECK_TRUE( a.y == 1.0 );
	TEMPER_CHECK_TRUE( a.z == 2.0 );
}

TEMPER_TEST( TestIncrement_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 vec;

	// prefix
	vec = double3( 0.000000, 0.000000, 0.000000 );
	++vec;
	TEMPER_CHECK_TRUE( vec == double3( 1.000000, 1.000000, 1.000000 ) );

	// postfix
	vec = double3( 0.000000, 0.000000, 0.000000 );
	vec++;
	TEMPER_CHECK_TRUE( vec == double3( 1.000000, 1.000000, 1.000000 ) );
}

TEMPER_TEST( TestDecrement_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 vec;

	// prefix
	vec = double3( 1.000000, 1.000000, 1.000000 );
	--vec;
	TEMPER_CHECK_TRUE( vec == double3( 0.000000, 0.000000, 0.000000 ) );

	// postfix
	vec = double3( 1.000000, 1.000000, 1.000000 );
	vec--;
	TEMPER_CHECK_TRUE( vec == double3( 0.000000, 0.000000, 0.000000 ) );
}

TEMPER_TEST( TestArithmeticAddition_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 a = double3( 6.0 );
	double3 b = double3( 2.000000, 3.000000, 4.000000 );

	double3 c = a + b;

	TEMPER_CHECK_TRUE( c == double3( 8.000000, 9.000000, 10.000000 ) );
}

TEMPER_TEST( TestArithmeticSubtraction_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 a = double3( 6.0 );
	double3 b = double3( 2.000000, 3.000000, 4.000000 );

	double3 c = a - b;

	TEMPER_CHECK_TRUE( c == double3( 4.000000, 3.000000, 2.000000 ) );
}

TEMPER_TEST( TestArithmeticMultiplication_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 a = double3( 6.0 );
	double3 b = double3( 2.000000, 3.000000, 4.000000 );

	double3 c = a * b;

	TEMPER_CHECK_TRUE( c == double3( 12.000000, 18.000000, 24.000000 ) );
}

TEMPER_TEST( TestArithmeticDivision_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 a = double3( 6.0 );
	double3 b = double3( 2.000000, 2.000000, 3.000000 );

	double3 c = a / b;

	TEMPER_CHECK_TRUE( c == double3( 3.000000, 3.000000, 2.000000 ) );
}

TEMPER_TEST( TestRelational_double3, TEMPER_FLAG_SHOULD_RUN )
{
	bool3 allTrue = bool3( true );

	double3 vec0 = double3( 0.0 );
	double3 vec1 = double3( 1.0 );
	double3 vec2 = double3( 2.0 );
	double3 vec3 = double3( 3.0 );

	bool3 test0  = vec0 <= vec0;
	bool3 test1  = vec0 >= vec0;
	bool3 test2  = vec0 <  vec1;
	bool3 test3  = vec0 <  vec2;
	bool3 test4  = vec0 <  vec3;

	bool3 test5  = vec1 >  vec0;
	bool3 test6  = vec1 <= vec1;
	bool3 test7  = vec1 >= vec1;
	bool3 test8  = vec1 <  vec2;
	bool3 test9  = vec1 <  vec3;

	bool3 test10 = vec2 >  vec0;
	bool3 test11 = vec2 >  vec1;
	bool3 test12 = vec2 <= vec2;
	bool3 test13 = vec2 >= vec2;
	bool3 test14 = vec2 <  vec3;

	bool3 test15 = vec3 >  vec0;
	bool3 test16 = vec3 >  vec1;
	bool3 test17 = vec3 >  vec2;
	bool3 test18 = vec3 <= vec3;
	bool3 test19 = vec3 >= vec3;

	TEMPER_CHECK_TRUE( test0  == allTrue );
	TEMPER_CHECK_TRUE( test1  == allTrue );
	TEMPER_CHECK_TRUE( test2  == allTrue );
	TEMPER_CHECK_TRUE( test3  == allTrue );
	TEMPER_CHECK_TRUE( test4  == allTrue );

	TEMPER_CHECK_TRUE( test5  == allTrue );
	TEMPER_CHECK_TRUE( test6  == allTrue );
	TEMPER_CHECK_TRUE( test7  == allTrue );
	TEMPER_CHECK_TRUE( test8  == allTrue );
	TEMPER_CHECK_TRUE( test9  == allTrue );

	TEMPER_CHECK_TRUE( test10 == allTrue );
	TEMPER_CHECK_TRUE( test11 == allTrue );
	TEMPER_CHECK_TRUE( test12 == allTrue );
	TEMPER_CHECK_TRUE( test13 == allTrue );
	TEMPER_CHECK_TRUE( test14 == allTrue );

	TEMPER_CHECK_TRUE( test15 == allTrue );
	TEMPER_CHECK_TRUE( test16 == allTrue );
	TEMPER_CHECK_TRUE( test17 == allTrue );
	TEMPER_CHECK_TRUE( test18 == allTrue );
	TEMPER_CHECK_TRUE( test19 == allTrue );
}

TEMPER_TEST( TestLength_Scalar_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 vec = double3( 2.0 );

	TEMPER_CHECK_TRUE( doubleeq( lengthsqr( vec ), 12.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( length( vec ), 3.46410161514 ) );
}

TEMPER_TEST( TestNormalized_Scalar_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 vec = double3( 5.000000, 4.000000, 3.000000 );
	vec = normalized( vec );

	TEMPER_CHECK_TRUE( doubleeq( length( vec ), 1.0 ) );
}

TEMPER_TEST( TestDot_Scalar_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 a = double3( 0.000000, 1.000000, 0.000000 );
	double3 b = double3( 0.000000, -1.000000, 0.000000 );

	TEMPER_CHECK_TRUE( doubleeq( dot( a, b ), -1.0 ) );
}

TEMPER_TEST( TestCross_Scalar_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 left    = double3( -1.000000, 0.000000, 0.000000 );
	double3 forward = double3( 0.000000, 0.000000, 1.000000 );
	double3 up      = double3( 0.000000, 1.000000, 0.000000 );

	TEMPER_CHECK_TRUE( cross( left, forward ) == up );
}

TEMPER_TEST( TestAngle_Scalar_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 right = double3( 1.000000, 0.000000, 0.000000 );
	double3 up    = double3( 0.000000, 1.000000, 0.000000 );

	TEMPER_CHECK_TRUE( doubleeq( angle( up, right ), 90.0 ) );
}

TEMPER_TEST( TestDistance_Scalar_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double answerDistanceSqr = 105.0;
	double answerDistance    = 10.246951;

	double3 a = double3( 7.000000, 4.000000, 3.000000 );
	double3 b = double3( 17.000000, 6.000000, 2.000000 );

	double distSqr = distancesqr( a, b );
	double dist    = distance( a, b );

	TEMPER_CHECK_TRUE( doubleeq( distSqr, answerDistanceSqr ) );
	TEMPER_CHECK_TRUE( doubleeq( dist, answerDistance ) );
}

TEMPER_TEST( TestSaturate_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 answer = double3( 0.000000, 1.000000, 1.000000 );

	double3 vec = double3( -1.000000, 2.000000, 4.000000 );
	double3 clamped = saturate( vec );

	TEMPER_CHECK_TRUE( clamped == answer );
}

TEMPER_TEST( TestLerp_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 answer = double3( 0.500000, 0.500000, 0.000000 );

	double3 a = double3( 0.000000, 1.000000, 0.000000 );
	double3 b = double3( 1.000000, 0.000000, 0.000000 );
	double3 lerped = lerp( a, b, 0.5 );

	TEMPER_CHECK_TRUE( lerped == answer );
}

TEMPER_TEST( TestStep_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 answer = double3( 1.000000, 1.000000, 0.000000 );

	double3 a = double3( 1.000000, 2.000000, 3.000000 );
	double3 b = double3( 4.000000, 3.000000, 2.000000 );

	TEMPER_CHECK_TRUE( step( a, b ) == answer );
}

TEMPER_TEST( TestSmoothstep_double3, TEMPER_FLAG_SHOULD_RUN )
{
	double3 answerInRangeSmoothstep   = double3( 0.104000, 0.104000, 0.104000 );
	double3 answerClampedSmoothstep   = double3( 1.000000, 1.000000, 1.000000 );
	double3 answerInRangeSmootherstep = double3( 0.057920, 0.057920, 0.057920 );
	double3 answerClampedSmootherstep = double3( 1.000000, 1.000000, 1.000000 );
	double3 answer;

	double3 low  = double3( 0.000000, 0.000000, 0.000000 );
	double3 high = double3( 1.000000, 1.000000, 1.000000 );

	answer = smoothstep( low, high, double3( 0.200000, 0.200000, 0.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerInRangeSmoothstep );

	answer = smoothstep( low, high, double3( 1.200000, 1.200000, 1.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerClampedSmoothstep );

	answer = smootherstep( low, high, double3( 0.200000, 0.200000, 0.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerInRangeSmootherstep );

	answer = smootherstep( low, high, double3( 1.200000, 1.200000, 1.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerClampedSmootherstep );
}
