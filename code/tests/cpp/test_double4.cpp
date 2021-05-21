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

TEMPER_TEST( TestAssignment_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 vec;

	vec.x = 1.0;
	vec.y = 1.0;
	vec.z = 1.0;
	vec.w = 1.0;
	TEMPER_CHECK_TRUE( vec.x == 1.0 );
	TEMPER_CHECK_TRUE( vec.y == 1.0 );
	TEMPER_CHECK_TRUE( vec.z == 1.0 );
	TEMPER_CHECK_TRUE( vec.w == 1.0 );

	vec.x = 0.0;
	vec.y = 1.0;
	vec.z = 2.0;
	vec.w = 3.0;
	TEMPER_CHECK_TRUE( vec.x == 0.0 );
	TEMPER_CHECK_TRUE( vec.y == 1.0 );
	TEMPER_CHECK_TRUE( vec.z == 2.0 );
	TEMPER_CHECK_TRUE( vec.w == 3.0 );
}

// also tests equality operators
TEMPER_TEST( TestCtor_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 vec;

	// single value
	vec = double4( 1.0 );
	TEMPER_CHECK_TRUE( vec == double4( 1.0 ) );
	TEMPER_CHECK_TRUE( vec != double4( 0.000000, 1.000000, 2.000000, 3.000000 ) );

	// all values set
	vec = double4( 0.000000, 1.000000, 2.000000, 3.000000 );
	TEMPER_CHECK_TRUE( vec == double4( 0.000000, 1.000000, 2.000000, 3.000000 ) );
	TEMPER_CHECK_TRUE( vec != double4( 1.0 ) );

	// copy ctors of other vector types
	double2 other2 = { 10.000000, 11.000000 };
	vec = double4( other2 );
	TEMPER_CHECK_TRUE( doubleeq( vec.x, 10.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.y, 11.0 ) );

	double3 other3 = { 10.000000, 11.000000, 14.000000 };
	vec = double4( other3 );
	TEMPER_CHECK_TRUE( doubleeq( vec.x, 10.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.y, 11.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.z, 14.0 ) );

	double4 other4 = { 10.000000, 11.000000, 14.000000, 15.000000 };
	vec = double4( other4 );
	TEMPER_CHECK_TRUE( doubleeq( vec.x, 10.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.y, 11.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.z, 14.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( vec.w, 15.0 ) );

}

TEMPER_TEST( TestArray_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 a = double4( 0.000000, 1.000000, 2.000000, 3.000000 );

	TEMPER_CHECK_TRUE( a.x == 0.0 );
	TEMPER_CHECK_TRUE( a.y == 1.0 );
	TEMPER_CHECK_TRUE( a.z == 2.0 );
	TEMPER_CHECK_TRUE( a.w == 3.0 );
}

TEMPER_TEST( TestIncrement_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 vec;

	// prefix
	vec = double4( 0.000000, 0.000000, 0.000000, 0.000000 );
	++vec;
	TEMPER_CHECK_TRUE( vec == double4( 1.000000, 1.000000, 1.000000, 1.000000 ) );

	// postfix
	vec = double4( 0.000000, 0.000000, 0.000000, 0.000000 );
	vec++;
	TEMPER_CHECK_TRUE( vec == double4( 1.000000, 1.000000, 1.000000, 1.000000 ) );
}

TEMPER_TEST( TestDecrement_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 vec;

	// prefix
	vec = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	--vec;
	TEMPER_CHECK_TRUE( vec == double4( 0.000000, 0.000000, 0.000000, 0.000000 ) );

	// postfix
	vec = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	vec--;
	TEMPER_CHECK_TRUE( vec == double4( 0.000000, 0.000000, 0.000000, 0.000000 ) );
}

TEMPER_TEST( TestArithmeticAddition_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 a = double4( 6.0 );
	double4 b = double4( 2.000000, 3.000000, 4.000000, 5.000000 );

	double4 c = a + b;

	TEMPER_CHECK_TRUE( c == double4( 8.000000, 9.000000, 10.000000, 11.000000 ) );
}

TEMPER_TEST( TestArithmeticSubtraction_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 a = double4( 6.0 );
	double4 b = double4( 2.000000, 3.000000, 4.000000, 5.000000 );

	double4 c = a - b;

	TEMPER_CHECK_TRUE( c == double4( 4.000000, 3.000000, 2.000000, 1.000000 ) );
}

TEMPER_TEST( TestArithmeticMultiplication_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 a = double4( 6.0 );
	double4 b = double4( 2.000000, 3.000000, 4.000000, 5.000000 );

	double4 c = a * b;

	TEMPER_CHECK_TRUE( c == double4( 12.000000, 18.000000, 24.000000, 30.000000 ) );
}

TEMPER_TEST( TestArithmeticDivision_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 a = double4( 6.0 );
	double4 b = double4( 2.000000, 2.000000, 3.000000, 6.000000 );

	double4 c = a / b;

	TEMPER_CHECK_TRUE( c == double4( 3.000000, 3.000000, 2.000000, 1.000000 ) );
}

TEMPER_TEST( TestRelational_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 vec0 = double4( 0.0 );
	double4 vec1 = double4( 1.0 );
	double4 vec2 = double4( 2.0 );
	double4 vec3 = double4( 3.0 );

	bool4 test0  = vec0 <= vec0;
	bool4 test1  = vec0 >= vec0;
	bool4 test2  = vec0 <  vec1;
	bool4 test3  = vec0 <  vec2;
	bool4 test4  = vec0 <  vec3;

	bool4 test5  = vec1 >  vec0;
	bool4 test6  = vec1 <= vec1;
	bool4 test7  = vec1 >= vec1;
	bool4 test8  = vec1 <  vec2;
	bool4 test9  = vec1 <  vec3;

	bool4 test10 = vec2 >  vec0;
	bool4 test11 = vec2 >  vec1;
	bool4 test12 = vec2 <= vec2;
	bool4 test13 = vec2 >= vec2;
	bool4 test14 = vec2 <  vec3;

	bool4 test15 = vec3 >  vec0;
	bool4 test16 = vec3 >  vec1;
	bool4 test17 = vec3 >  vec2;
	bool4 test18 = vec3 <= vec3;
	bool4 test19 = vec3 >= vec3;

	TEMPER_CHECK_TRUE( all( test0 ) );
	TEMPER_CHECK_TRUE( all( test1 ) );
	TEMPER_CHECK_TRUE( all( test2 ) );
	TEMPER_CHECK_TRUE( all( test3 ) );
	TEMPER_CHECK_TRUE( all( test4 ) );

	TEMPER_CHECK_TRUE( all( test5 ) );
	TEMPER_CHECK_TRUE( all( test6 ) );
	TEMPER_CHECK_TRUE( all( test7 ) );
	TEMPER_CHECK_TRUE( all( test8 ) );
	TEMPER_CHECK_TRUE( all( test9 ) );

	TEMPER_CHECK_TRUE( all( test10 ) );
	TEMPER_CHECK_TRUE( all( test11 ) );
	TEMPER_CHECK_TRUE( all( test12 ) );
	TEMPER_CHECK_TRUE( all( test13 ) );
	TEMPER_CHECK_TRUE( all( test14 ) );

	TEMPER_CHECK_TRUE( all( test15 ) );
	TEMPER_CHECK_TRUE( all( test16 ) );
	TEMPER_CHECK_TRUE( all( test17 ) );
	TEMPER_CHECK_TRUE( all( test18 ) );
	TEMPER_CHECK_TRUE( all( test19 ) );
}

TEMPER_TEST( TestLength_Scalar_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 vec = double4( 2.0 );

	TEMPER_CHECK_TRUE( doubleeq( lengthsqr( vec ), 16.0 ) );
	TEMPER_CHECK_TRUE( doubleeq( length( vec ), 4.0 ) );
}

TEMPER_TEST( TestNormalized_Scalar_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 vec = double4( 5.000000, 4.000000, 3.000000, 2.000000 );
	vec = normalized( vec );

	TEMPER_CHECK_TRUE( doubleeq( length( vec ), 1.0 ) );
}

TEMPER_TEST( TestDot_Scalar_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 a = double4( 0.000000, 1.000000, 0.000000, 0.000000 );
	double4 b = double4( 0.000000, -1.000000, 0.000000, 0.000000 );

	TEMPER_CHECK_TRUE( doubleeq( dot( a, b ), -1.0 ) );
}

TEMPER_TEST( TestCross_Scalar_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 left    = double4( -1.000000, 0.000000, 0.000000, 0.000000 );
	double4 forward = double4( 0.000000, 0.000000, 1.000000, 0.000000 );
	double4 up      = double4( 0.000000, 1.000000, 0.000000, 0.000000 );

	TEMPER_CHECK_TRUE( cross( left, forward ) == up );
}

TEMPER_TEST( TestAngle_Scalar_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 right = double4( 1.000000, 0.000000, 0.000000, 0.000000 );
	double4 up    = double4( 0.000000, 1.000000, 0.000000, 0.000000 );

	TEMPER_CHECK_TRUE( doubleeq( angle( up, right ), 90.0 ) );
}

TEMPER_TEST( TestSaturate_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 answer = double4( 0.000000, 1.000000, 1.000000, 1.000000 );

	double4 vec = double4( -1.000000, 2.000000, 4.000000, 6.000000 );
	double4 clamped = saturate( vec );

	TEMPER_CHECK_TRUE( clamped == answer );
}

TEMPER_TEST( TestLerp_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 answer = double4( 0.500000, 0.500000, 0.000000, 0.000000 );

	double4 a = double4( 0.000000, 1.000000, 0.000000, 0.000000 );
	double4 b = double4( 1.000000, 0.000000, 0.000000, 0.000000 );
	double4 lerped = lerp( a, b, 0.5 );

	TEMPER_CHECK_TRUE( lerped == answer );
}

TEMPER_TEST( TestStep_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 answer = double4( 1.000000, 1.000000, 0.000000, 0.000000 );

	double4 a = double4( 1.000000, 2.000000, 3.000000, 4.000000 );
	double4 b = double4( 4.000000, 3.000000, 2.000000, 1.000000 );

	TEMPER_CHECK_TRUE( step( a, b ) == answer );
}

TEMPER_TEST( TestSmoothstep_double4, TEMPER_FLAG_SHOULD_RUN )
{
	double4 answerInRangeSmoothstep   = double4( 0.104000, 0.104000, 0.104000, 0.104000 );
	double4 answerClampedSmoothstep   = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	double4 answerInRangeSmootherstep = double4( 0.057920, 0.057920, 0.057920, 0.057920 );
	double4 answerClampedSmootherstep = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	double4 answer;

	double4 low  = double4( 0.000000, 0.000000, 0.000000, 0.000000 );
	double4 high = double4( 1.000000, 1.000000, 1.000000, 1.000000 );

	answer = smoothstep( low, high, double4( 0.200000, 0.200000, 0.200000, 0.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerInRangeSmoothstep );

	answer = smoothstep( low, high, double4( 1.200000, 1.200000, 1.200000, 1.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerClampedSmoothstep );

	answer = smootherstep( low, high, double4( 0.200000, 0.200000, 0.200000, 0.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerInRangeSmootherstep );

	answer = smootherstep( low, high, double4( 1.200000, 1.200000, 1.200000, 1.200000 ) );
	TEMPER_CHECK_TRUE( answer == answerClampedSmootherstep );
}

