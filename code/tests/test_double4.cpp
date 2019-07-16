/*
===========================================================================

hlml.
Copyright (c) Dan Moody 2019 - Present.

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

// GENERATED FILE.  DO NOT EDIT.

#include "../../code/out/gen/hlml_functions_vector.h"

#include <temper/temper.h>

// also tests equality operators
TEMPER_TEST( TestAssignment_double4 )
{
	double4 a;

	a = double4( 1.000000 );
	TEMPER_EXPECT_TRUE( a == double4( 1.000000 ) );
	TEMPER_EXPECT_TRUE( a != double4( 0.000000, 1.000000, 2.000000, 3.000000 ) );

	a = double4( 0.000000, 1.000000, 2.000000, 3.000000 );
	TEMPER_EXPECT_TRUE( a == double4( 0.000000, 1.000000, 2.000000, 3.000000 ) );
	TEMPER_EXPECT_TRUE( a != double4( 1.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_double4 )
{
	double4 a = double4( 0.000000, 1.000000, 2.000000, 3.000000 );

	TEMPER_EXPECT_TRUE( a[0] == 0.000000 );
	TEMPER_EXPECT_TRUE( a[1] == 1.000000 );
	TEMPER_EXPECT_TRUE( a[2] == 2.000000 );
	TEMPER_EXPECT_TRUE( a[3] == 3.000000 );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_double4 )
{
	double4 a = double4( 6.000000 );
	double4 b = double4( 2.000000, 3.000000, 4.000000, 5.000000 );

	double4 c = a + b;

	TEMPER_EXPECT_TRUE( c == double4( 8.000000, 9.000000, 10.000000, 11.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_double4 )
{
	double4 a = double4( 6.000000 );
	double4 b = double4( 2.000000, 3.000000, 4.000000, 5.000000 );

	double4 c = a - b;

	TEMPER_EXPECT_TRUE( c == double4( 4.000000, 3.000000, 2.000000, 1.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_double4 )
{
	double4 a = double4( 6.000000 );
	double4 b = double4( 2.000000, 3.000000, 4.000000, 5.000000 );

	double4 c = a * b;

	TEMPER_EXPECT_TRUE( c == double4( 12.000000, 18.000000, 24.000000, 30.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_double4 )
{
	double4 a = double4( 6.000000 );
	double4 b = double4( 2.000000, 2.000000, 3.000000, 6.000000 );

	double4 c = a / b;

	TEMPER_EXPECT_TRUE( c == double4( 3.000000, 3.000000, 2.000000, 1.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_double4 )
{
	double4 vec;

	// prefix
	vec = double4( 0.000000, 0.000000, 0.000000, 0.000000 );
	++vec;
	TEMPER_EXPECT_TRUE( vec == double4( 1.000000, 1.000000, 1.000000, 1.000000 ) );

	// postfix
	vec = double4( 0.000000, 0.000000, 0.000000, 0.000000 );
	vec++;
	TEMPER_EXPECT_TRUE( vec == double4( 1.000000, 1.000000, 1.000000, 1.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_double4 )
{
	double4 vec;

	// prefix
	vec = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	--vec;
	TEMPER_EXPECT_TRUE( vec == double4( 0.000000, 0.000000, 0.000000, 0.000000 ) );

	// postfix
	vec = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	vec--;
	TEMPER_EXPECT_TRUE( vec == double4( 0.000000, 0.000000, 0.000000, 0.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_double4 )
{
	bool4 allTrue = bool4( true );

	double4 vec0 = double4( 0.000000 );
	double4 vec1 = double4( 1.000000 );
	double4 vec2 = double4( 2.000000 );
	double4 vec3 = double4( 3.000000 );

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

TEMPER_TEST( TestLength_double4 )
{
	double4 vec = double4( 2.000000 );

	TEMPER_EXPECT_TRUE( doubleeq( lengthsqr( vec ), 16.0 ) );
	TEMPER_EXPECT_TRUE( doubleeq( length( vec ), 4.0 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestNormalized_double4 )
{
	double4 vec = double4( 2.000000, 3.000000, 4.000000, 5.000000 );
	vec = normalized( vec );

	TEMPER_EXPECT_TRUE( length( vec ) == 1.000000 );

	TEMPER_PASS();
}

TEMPER_TEST( TestDot_double4 )
{
	// scalar
	double4 a = double4( 0.000000, 1.000000, 0.000000, 0.000000 );
	double4 b = double4( 0.000000, -1.000000, 0.000000, 0.000000 );

	TEMPER_EXPECT_TRUE( doubleeq( dot( a, b ), -1.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestCross_double4 )
{
	double4 left = double4( -1.000000, 0.000000, 0.000000, 0.000000 );
	double4 forward = double4( 0.000000, 0.000000, 1.000000, 0.000000 );
	double4 up = double4( 0.000000, 1.000000, 0.000000, 0.000000 );

	TEMPER_EXPECT_TRUE( cross( left, forward ) == up );

	TEMPER_PASS();
}

TEMPER_TEST( TestAngle_double4 )
{
	double4 right = double4( 1.000000, 0.000000, 0.000000, 0.000000 );
	double4 up =    double4( 0.000000, 1.000000, 0.000000, 0.000000 );
	double answer = angle( up, right );

	TEMPER_EXPECT_TRUE( doubleeq( answer, 90.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestSaturate_double4 )
{
	double4 answer = double4( 0.000000, 1.000000, 1.000000, 1.000000 );

	double4 vec = double4( -1.000000, 2.000000, 4.000000, 6.000000 );
	double4 clamped = saturate( vec );

	TEMPER_EXPECT_TRUE( clamped == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestLerp_double4 )
{
	double4 answer = double4( 0.500000, 0.500000, 0.000000, 0.000000 );

	double4 a = double4( 0.000000, 1.000000, 0.000000, 0.000000 );
	double4 b = double4( 1.000000, 0.000000, 0.000000, 0.000000 );
	double4 lerped = lerp( a, b, 0.500000 );

	TEMPER_EXPECT_TRUE( lerped == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestStep_double4 )
{
	double4 answer = double4( 1.000000, 1.000000, 0.000000, 0.000000 );

	double4 a = double4( 1.000000, 2.000000, 3.000000, 4.000000 );
	double4 b = double4( 4.000000, 3.000000, 2.000000, 1.000000 );

	TEMPER_EXPECT_TRUE( step( a, b ) == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestSmoothstep_double4 )
{
	double4 answerInRangeSmoothstep   = double4( 0.104000, 0.104000, 0.104000, 0.104000 );
	double4 answerClampedSmoothstep   = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	double4 answerInRangeSmootherstep = double4( 0.057920, 0.057920, 0.057920, 0.057920 );
	double4 answerClampedSmootherstep = double4( 1.000000, 1.000000, 1.000000, 1.000000 );
	double4 answer;

	double4 low  = double4( 0.000000, 0.000000, 0.000000, 0.000000 );
	double4 high = double4( 1.000000, 1.000000, 1.000000, 1.000000 );

	answer = smoothstep( low, high, double4( 0.200000, 0.200000, 0.200000, 0.200000 ) );
	TEMPER_EXPECT_TRUE( answer == answerInRangeSmoothstep );

	answer = smoothstep( low, high, double4( 1.200000, 1.200000, 1.200000, 1.200000 ) );
	TEMPER_EXPECT_TRUE( answer == answerClampedSmoothstep );

	answer = smootherstep( low, high, double4( 0.200000, 0.200000, 0.200000, 0.200000 ) );
	TEMPER_EXPECT_TRUE( answer == answerInRangeSmootherstep );

	answer = smootherstep( low, high, double4( 1.200000, 1.200000, 1.200000, 1.200000 ) );
	TEMPER_EXPECT_TRUE( answer == answerClampedSmootherstep );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_double4 )
{
	TEMPER_RUN_TEST( TestAssignment_double4 );
	TEMPER_RUN_TEST( TestArray_double4 );
	TEMPER_RUN_TEST( TestArithmeticAddition_double4 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_double4 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_double4 );
	TEMPER_RUN_TEST( TestArithmeticDivision_double4 );
	TEMPER_RUN_TEST( TestIncrement_double4 );
	TEMPER_RUN_TEST( TestDecrement_double4 );
	TEMPER_RUN_TEST( TestRelational_double4 );
	TEMPER_RUN_TEST( TestRelational_double4 );
	TEMPER_RUN_TEST( TestLength_double4 );
	TEMPER_RUN_TEST( TestNormalized_double4 );
	TEMPER_RUN_TEST( TestDot_double4 );
	TEMPER_RUN_TEST( TestCross_double4 );
	TEMPER_RUN_TEST( TestAngle_double4 );
	TEMPER_RUN_TEST( TestSaturate_double4 );
	TEMPER_RUN_TEST( TestLerp_double4 );
	TEMPER_RUN_TEST( TestStep_double4 );
	TEMPER_RUN_TEST( TestSmoothstep_double4 );
}
