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

#include "../out/gen/hlml_functions_vector.h"

#include <temper.h>

// also tests equality operators
TEMPER_TEST( TestAssignment_float4 ) {
	float4 a;

	a = float4( 1.000000f );
	TEMPER_EXPECT_TRUE( a == float4( 1.000000f ) );
	TEMPER_EXPECT_TRUE( a != float4( 0.000000f, 1.000000f, 2.000000f, 3.000000f ) );

	a = float4( 0.000000f, 1.000000f, 2.000000f, 3.000000f );
	TEMPER_EXPECT_TRUE( a == float4( 0.000000f, 1.000000f, 2.000000f, 3.000000f ) );
	TEMPER_EXPECT_TRUE( a != float4( 1.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_float4 ) {
	float4 a = float4( 2.000000f );
	float4 b = float4( 2.000000f, 3.000000f, 4.000000f, 5.000000f );
	float4 c = a + b;

	TEMPER_EXPECT_TRUE( c == float4( 4.000000f, 5.000000f, 6.000000f, 7.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_float4 ) {
	float4 a = float4( 2.000000f );
	float4 b = float4( 2.000000f, 3.000000f, 4.000000f, 5.000000f );
	float4 c = a - b;

	TEMPER_EXPECT_TRUE( c == float4( 0.000000f, -1.000000f, -2.000000f, -3.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_float4 ) {
	float4 a = float4( 2.000000f );
	float4 b = float4( 2.000000f, 3.000000f, 4.000000f, 5.000000f );
	float4 c = a * b;

	TEMPER_EXPECT_TRUE( c == float4( 4.000000f, 6.000000f, 8.000000f, 10.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_float4 ) {
	float4 a = float4( 2.000000f );
	float4 b = float4( 2.000000f, 3.000000f, 4.000000f, 5.000000f );
	float4 c = a / b;

	TEMPER_EXPECT_TRUE( c == float4( 1.000000, 0.666667, 0.500000, 0.400000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_float4 ) {
	float4 a = float4( 0.000000f, 1.000000f, 2.000000f, 3.000000f );

	TEMPER_EXPECT_TRUE( a[0] == 0.000000f );
	TEMPER_EXPECT_TRUE( a[1] == 1.000000f );
	TEMPER_EXPECT_TRUE( a[2] == 2.000000f );
	TEMPER_EXPECT_TRUE( a[3] == 3.000000f );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_float4 ) {
	float4 vec0 = float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f );
	float4 vec1 = float4( 1.000000f, 1.000000f, 1.000000f, 1.000000f );
	float4 vec2 = float4( 2.000000f, 2.000000f, 2.000000f, 2.000000f );
	float4 vec3 = float4( 3.000000f, 3.000000f, 3.000000f, 3.000000f );

	bool4 test0 = vec0 <= vec0;
	bool4 test1 = vec0 >= vec0;
	bool4 test2 = vec0 < vec1;

	bool4 test3 = vec1 <= vec1;
	bool4 test4 = vec1 >= vec1;
	bool4 test5 = vec1 < vec2;
	bool4 test6 = vec1 > vec0;

	bool4 test7 = vec2 <= vec2;
	bool4 test8 = vec2 >= vec2;
	bool4 test9 = vec2 < vec3;
	bool4 test10 = vec2 > vec1;

	bool4 test11 = vec3 <= vec3;
	bool4 test12 = vec3 >= vec3;
	bool4 test13 = vec3 > vec2;

	TEMPER_EXPECT_TRUE( test0 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test1 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test2 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test3 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test4 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test5 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test6 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test7 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test8 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test9 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test10 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test11 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test12 == bool4( true ) );
	TEMPER_EXPECT_TRUE( test13 == bool4( true ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestLength_float4 ) {
	float4 vec = float4( 2.000000f );

	TEMPER_EXPECT_TRUE( floateq( lengthsqr( vec ), 16.0f ) );
	TEMPER_EXPECT_TRUE( floateq( length( vec ), 4.0f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestNormalized_float4 ) {
	float4 vec = float4( 2.000000f, 3.000000f, 4.000000f, 5.000000f );
	vec = normalized( vec );

	TEMPER_EXPECT_TRUE( length( vec ) == 1.000000f );

	TEMPER_PASS();
}

TEMPER_TEST( TestDot_float4 ) {
	float4 a = float4( 0.000000f, 0.000000f, 0.000000f, 1.000000f );
	float4 b = float4( 0.000000f, 0.000000f, 0.000000f, -1.000000f );

	TEMPER_EXPECT_TRUE( dot( a, b ) == -1.0f );

	TEMPER_PASS();
}

TEMPER_TEST( TestCross_float4 ) {
	float4 left = float4( -1.000000f, 0.000000f, 0.000000f, 0.000000f );
	float4 forward = float4( 0.000000f, 0.000000f, 1.000000f, 0.000000f );
	float4 up = float4( 0.000000f, 1.000000f, 0.000000f, 0.000000f );

	TEMPER_EXPECT_TRUE( cross( left, forward ) == up );

	TEMPER_PASS();
}

TEMPER_TEST( TestAngle_float4 ) {
	float4 right = float4( 1.000000f, 0.000000f, 0.000000f, 0.000000f );
	float4 up = float4( 0.000000f, 1.000000f, 0.000000f, 0.000000f );
	float answer = angle( up, right );

	TEMPER_EXPECT_TRUE( floateq( answer, 90.000000f ) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_float4 ) {
	TEMPER_RUN_TEST( TestAssignment_float4 );
	TEMPER_RUN_TEST( TestArray_float4 );

	TEMPER_RUN_TEST( TestArithmeticAddition_float4 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_float4 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_float4 );
	TEMPER_RUN_TEST( TestArithmeticDivision_float4 );

	TEMPER_RUN_TEST( TestRelational_float4 );

	TEMPER_RUN_TEST( TestLength_float4 );
	TEMPER_RUN_TEST( TestNormalized_float4 );
	TEMPER_RUN_TEST( TestDot_float4 );
	TEMPER_RUN_TEST( TestCross_float4 );
	TEMPER_RUN_TEST( TestAngle_float4 );
};
