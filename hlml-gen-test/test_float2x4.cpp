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

#include "../out/gen/hlml_functions_matrix.h"

#include <temper.h>

TEMPER_TEST( TestAssignment_float2x4 ) {
	float2x4 mat;

	// fill single value
	mat = float2x4( 999.0f );
	TEMPER_EXPECT_TRUE( mat[0] == float4( 999.0f, 0.0f, 0.0f, 0.0f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 0.0f, 999.0f, 0.0f, 0.0f ) );

	// row filling
	mat = float2x4(
		float4( 0, 1, 2, 3 ),
		float4( 4, 5, 6, 7 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == float4( 0, 1, 2, 3 ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 4, 5, 6, 7 ) );

	// all values filled
	mat = float2x4(
		8, 7, 6, 5, 
		4, 3, 2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == float4( 8, 7, 6, 5 ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 4, 3, 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_float2x4 ) {
	float2x4 a = float2x4(
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f,6.0f
	);
	float2x4 b = float2x4(
		2.0f, 3.0f, 4.0f, 4.0f,
		6.0f, 6.0f, 8.0f, 8.0f
	);
	float2x4 c = a + b;

	TEMPER_EXPECT_TRUE( c == float2x4(
		8.0f, 9.0f, 10.0f, 10.0f,
		12.0f, 12.0f, 14.0f, 14.0f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_float2x4 ) {
	float2x4 a = float2x4(
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f,6.0f
	);
	float2x4 b = float2x4(
		2.0f, 3.0f, 4.0f, 4.0f,
		6.0f, 6.0f, 8.0f, 8.0f
	);
	float2x4 c = a - b;

	TEMPER_EXPECT_TRUE( c == float2x4(
		4.0f, 3.0f, 2.0f, 2.0f,
		0.0f, 0.0f, -2.0f, -2.0f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_float2x4 ) {
	float2x4 a = float2x4(
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f,6.0f
	);
	float2x4 b = float2x4(
		2.0f, 3.0f, 4.0f, 4.0f,
		6.0f, 6.0f, 8.0f, 8.0f
	);
	float2x4 c = a * b;

	TEMPER_EXPECT_TRUE( c == float2x4(
		0.0f, 1.0f, 2.0f, 3.0f,
		1.0f, 2.0f, 3.0f, 4.0f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_float2x4 ) {
	float2x4 a = float2x4(
		2.0f, 3.0f, 4.0f, 4.0f,
		6.0f, 6.0f, 8.0f, 8.0f
	);
	float2x4 b = float2x4(
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f, 6.0f, 
		6.0f,6.0f
	);
	float2x4 c = b / a;

	TEMPER_EXPECT_TRUE( c == float2x4(
		3.000000f, 2.000000f, 1.500000f, 1.500000f,
		1.000000f, 1.000000f, 0.750000f, 0.750000f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_float2x4 ) {
	float2x4 mat;

	TEMPER_EXPECT_TRUE( mat[0] == float4( 1.0f, 0.0f, 0.0f, 0.0f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 0.0f, 1.0f, 0.0f, 0.0f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_float2x4 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestIdentity_float2x4 ) {
	float2x4 id = float2x4(
		1.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f, 0.0f
	);

	float2x4 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_float2x4 ) {
	float2x4 mat = float2x4(
		0.0f, 1.0f, 2.0f, 3.0f,
		4.0f, 5.0f, 6.0f, 7.0f
	);
	float4x2 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == float4x2(
		0.0f, 4.0f,
		1.0f, 5.0f,
		2.0f, 6.0f,
		3.0f, 7.0f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranslate_float2x4 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestRotate_float2x4 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestScale_float2x4 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestOrtho_float2x4 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestPerspective_float2x4 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestLookAt_float2x4 ) {
	TEMPER_FAIL();
}

TEMPER_SUITE( Test_float2x4 ) {
	TEMPER_RUN_TEST( TestAssignment_float2x4 );

	TEMPER_RUN_TEST( TestArithmeticAddition_float2x4 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_float2x4 );
	TEMPER_SKIP_TEST( TestArithmeticMultiplication_float2x4, "Give me a minute to think about how to structure this one." );
	TEMPER_RUN_TEST( TestArithmeticDivision_float2x4 );

	TEMPER_RUN_TEST( TestArray_float2x4 );
	TEMPER_SKIP_TEST( TestRelational_float2x4, "TODO" );

	TEMPER_RUN_TEST( TestIdentity_float2x4 );
	TEMPER_RUN_TEST( TestTranspose_float2x4 );
	TEMPER_SKIP_TEST( TestTranslate_float2x4, "TODO" );
	TEMPER_SKIP_TEST( TestRotate_float2x4, "TODO" );
	TEMPER_SKIP_TEST( TestScale_float2x4, "TODO" );

	TEMPER_SKIP_TEST( TestOrtho_float2x4, "TODO" );
	TEMPER_SKIP_TEST( TestPerspective_float2x4, "TODO" );
	TEMPER_SKIP_TEST( TestLookAt_float2x4, "TODO" );
};
