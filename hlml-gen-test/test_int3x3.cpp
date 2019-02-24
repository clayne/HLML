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

TEMPER_TEST( TestAssignment_int3x3 ) {
	int3x3 mat;

	// fill single value
	mat = int3x3( 999 );
	TEMPER_EXPECT_TRUE( mat[0] == int3( 999, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 0, 999, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 0, 0, 999 ) );

	// row filling
	mat = int3x3(
		int3( 0, 1, 2 ),
		int3( 3, 4, 5 ),
		int3( 6, 7, 8 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == int3( 0, 1, 2 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 3, 4, 5 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 6, 7, 8 ) );

	// all values filled
	mat = int3x3(
		9, 8, 7, 
		6, 5, 4, 
		3, 2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == int3( 9, 8, 7 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 6, 5, 4 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 3, 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_int3x3 ) {
	int3x3 a = int3x3(
		6, 6, 6, 
		6, 6, 6, 
		6,6,6
	);
	int3x3 b = int3x3(
		2, 3, 4,
		6, 6, 8,
		10, 10, 12
	);
	int3x3 c = a + b;

	TEMPER_EXPECT_TRUE( c == int3x3(
		8, 9, 10,
		12, 12, 14,
		16, 16, 18
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_int3x3 ) {
	int3x3 a = int3x3(
		6, 6, 6, 
		6, 6, 6, 
		6,6,6
	);
	int3x3 b = int3x3(
		2, 3, 4,
		6, 6, 8,
		10, 10, 12
	);
	int3x3 c = a - b;

	TEMPER_EXPECT_TRUE( c == int3x3(
		4, 3, 2,
		0, 0, -2,
		-4, -4, -6
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_int3x3 ) {
	int3x3 a = int3x3(
		6, 6, 6, 
		6, 6, 6, 
		6,6,6
	);
	int3x3 b = int3x3(
		2, 3, 4,
		6, 6, 8,
		10, 10, 12
	);
	int3x3 c = a * b;

	TEMPER_EXPECT_TRUE( c == int3x3(
		0, 1, 2,
		1, 2, 3,
		2, 3, 4
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_int3x3 ) {
	int3x3 a = int3x3(
		2, 3, 4,
		6, 6, 8,
		10, 10, 12
	);
	int3x3 b = int3x3(
		6, 6, 6, 
		6, 6, 6, 
		6,6,6
	);
	int3x3 c = b / a;

	TEMPER_EXPECT_TRUE( c == int3x3(
		3, 2, 1,
		1, 1, 0,
		0, 0, 0
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_int3x3 ) {
	int3x3 mat;

	TEMPER_EXPECT_TRUE( mat[0] == int3( 1, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 0, 1, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 0, 0, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestIdentity_int3x3 ) {
	int3x3 id = int3x3(
		1, 0, 0,
		0, 1, 0,
		0, 0, 1
	);

	int3x3 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_int3x3 ) {
	int3x3 mat = int3x3(
		0, 1, 2,
		3, 4, 5,
		6, 7, 8
	);
	int3x3 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == int3x3(
		0, 3, 6,
		1, 4, 7,
		2, 5, 8
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestInverse_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestDeterminant_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestTranslate_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestRotate_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestScale_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestOrtho_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestPerspective_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestLookAt_int3x3 ) {
	TEMPER_FAIL();
}

TEMPER_SUITE( Test_int3x3 ) {
	TEMPER_RUN_TEST( TestAssignment_int3x3 );

	TEMPER_RUN_TEST( TestArithmeticAddition_int3x3 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_int3x3 );
	TEMPER_SKIP_TEST( TestArithmeticMultiplication_int3x3, "Give me a minute to think about how to structure this one." );
	TEMPER_RUN_TEST( TestArithmeticDivision_int3x3 );

	TEMPER_RUN_TEST( TestArray_int3x3 );
	TEMPER_SKIP_TEST( TestRelational_int3x3, "TODO" );

	TEMPER_RUN_TEST( TestIdentity_int3x3 );
	TEMPER_RUN_TEST( TestTranspose_int3x3 );
	TEMPER_SKIP_TEST( TestDeterminant_int3x3, "TODO" );

	TEMPER_SKIP_TEST( TestTranslate_int3x3, "TODO" );
	TEMPER_SKIP_TEST( TestRotate_int3x3, "TODO" );
	TEMPER_SKIP_TEST( TestScale_int3x3, "TODO" );

	TEMPER_SKIP_TEST( TestOrtho_int3x3, "TODO" );
	TEMPER_SKIP_TEST( TestPerspective_int3x3, "TODO" );
	TEMPER_SKIP_TEST( TestLookAt_int3x3, "TODO" );
};
