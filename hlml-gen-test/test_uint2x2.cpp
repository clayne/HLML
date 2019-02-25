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

TEMPER_TEST( TestAssignment_uint2x2 ) {
	uint2x2 mat;

	// fill single value
	mat = uint2x2( 999 );
	TEMPER_EXPECT_TRUE( mat[0] == uint2( 999, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint2( 0, 999 ) );

	// row filling
	mat = uint2x2(
		uint2( 0, 1 ),
		uint2( 2, 3 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint2( 0, 1 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint2( 2, 3 ) );

	// all values filled
	mat = uint2x2(
		4, 3, 
		2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint2( 4, 3 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint2( 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_uint2x2 ) {
	uint2x2 a = uint2x2(
		6, 6, 
		6,6
	);
	uint2x2 b = uint2x2(
		2, 3,
		6, 6
	);
	uint2x2 c = a + b;

	TEMPER_EXPECT_TRUE( c == uint2x2(
		8, 9,
		12, 12
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_uint2x2 ) {
	uint2x2 a = uint2x2(
		6, 6, 
		6,6
	);
	uint2x2 b = uint2x2(
		2, 3,
		6, 6
	);
	uint2x2 c = a - b;

	TEMPER_EXPECT_TRUE( c == uint2x2(
		4, 3,
		0, 0
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_uint2x2 ) {
	uint2x2 a = uint2x2(
		6, 6, 
		6,6
	);
	uint2x2 b = uint2x2(
		2, 3,
		6, 6
	);
	uint2x2 c = a * b;

	TEMPER_EXPECT_TRUE( c == uint2x2(
		0, 1,
		1, 2
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_uint2x2 ) {
	uint2x2 a = uint2x2(
		2, 3,
		6, 6
	);
	uint2x2 b = uint2x2(
		6, 6, 
		6,6
	);
	uint2x2 c = b / a;

	TEMPER_EXPECT_TRUE( c == uint2x2(
		3, 2,
		1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_uint2x2 ) {
	uint2x2 mat;

	TEMPER_EXPECT_TRUE( mat[0] == uint2( 1, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint2( 0, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_uint2x2 ) {
	uint2x2 mat0 = uint2x2(
		1, 1,
		1, 1
	);
	uint2x2 mat1 = uint2x2(
		2, 2,
		2, 2
	);
	uint2x2 mat2 = uint2x2(
		3, 3,
		3, 3
	);
	uint2x2 mat3 = uint2x2(
		4, 4,
		4, 4
	);

	bool2x2 test0 = mat0 <= mat0;
	bool2x2 test1 = mat0 >= mat0;
	bool2x2 test2 = mat0 < mat1;

	bool2x2 test3 = mat1 <= mat1;
	bool2x2 test4 = mat1 >= mat1;
	bool2x2 test5 = mat1 < mat2;
	bool2x2 test6 = mat1 > mat0;

	bool2x2 test7 = mat2 <= mat2;
	bool2x2 test8 = mat2 >= mat2;
	bool2x2 test9 = mat2 < mat3;
	bool2x2 test10 = mat2 > mat1;

	bool2x2 test11 = mat3 <= mat3;
	bool2x2 test12 = mat3 >= mat3;
	bool2x2 test13 = mat3 > mat2;

	TEMPER_EXPECT_TRUE( test0 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test1 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test2 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test3 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test4 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test5 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test6 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test7 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test8 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test9 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test10 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test11 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test12 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test13 == bool2x2(
		true, true,
		true, true
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_uint2x2 ) {
	uint2x2 id = uint2x2(
		1, 0,
		0, 1
	);

	uint2x2 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_uint2x2 ) {
	uint2x2 mat = uint2x2(
		0, 1,
		2, 3
	);
	uint2x2 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == uint2x2(
		0, 2,
		1, 3
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranslate_uint2x2 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestRotate_uint2x2 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestScale_uint2x2 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestOrtho_uint2x2 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestPerspective_uint2x2 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestLookAt_uint2x2 ) {
	TEMPER_FAIL();
}

TEMPER_SUITE( Test_uint2x2 ) {
	TEMPER_RUN_TEST( TestAssignment_uint2x2 );

	TEMPER_RUN_TEST( TestArithmeticAddition_uint2x2 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_uint2x2 );
	TEMPER_SKIP_TEST( TestArithmeticMultiplication_uint2x2, "Give me a minute to think about how to structure this one." );
	TEMPER_RUN_TEST( TestArithmeticDivision_uint2x2 );

	TEMPER_RUN_TEST( TestArray_uint2x2 );
	TEMPER_RUN_TEST( TestRelational_uint2x2 );

	TEMPER_RUN_TEST( TestIdentity_uint2x2 );
	TEMPER_RUN_TEST( TestTranspose_uint2x2 );
	TEMPER_SKIP_TEST( TestTranslate_uint2x2, "TODO" );
	TEMPER_SKIP_TEST( TestRotate_uint2x2, "TODO" );
	TEMPER_SKIP_TEST( TestScale_uint2x2, "TODO" );

	TEMPER_SKIP_TEST( TestOrtho_uint2x2, "TODO" );
	TEMPER_SKIP_TEST( TestPerspective_uint2x2, "TODO" );
	TEMPER_SKIP_TEST( TestLookAt_uint2x2, "TODO" );
};
