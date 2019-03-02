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

TEMPER_TEST( TestAssignment_uint2x3 ) {
	uint2x3 mat;

	// fill single value
	mat = uint2x3( 999 );
	TEMPER_EXPECT_TRUE( mat[0] == uint3( 999, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 0, 999, 0 ) );

	// row filling
	mat = uint2x3(
		uint3( 0, 1, 2 ),
		uint3( 3, 4, 5 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint3( 0, 1, 2 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 3, 4, 5 ) );

	// all values filled
	mat = uint2x3(
		6, 5, 4, 
		3, 2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint3( 6, 5, 4 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 3, 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_uint2x3 ) {
	uint2x3 a = uint2x3(
		6, 6, 
		6, 6, 
		6,6
	);
	uint2x3 b = uint2x3(
		2, 3, 4,
		6, 6, 8
	);
	uint2x3 c = a + b;

	TEMPER_EXPECT_TRUE( c == uint2x3(
		8, 9, 10,
		12, 12, 14
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_uint2x3 ) {
	uint2x3 a = uint2x3(
		6, 6, 
		6, 6, 
		6,6
	);
	uint2x3 b = uint2x3(
		2, 3, 4,
		6, 6, 8
	);
	uint2x3 c = a - b;

	TEMPER_EXPECT_TRUE( c == uint2x3(
		4, 3, 2,
		0, 0, 4294967294
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_uint2x3 ) {
	uint2x3 a = uint2x3(
		6, 6, 
		6, 6, 
		6,6
	);
	uint2x3 b = uint2x3(
		2, 3, 4,
		6, 6, 8
	);
	uint2x3 c = a * b;

	TEMPER_EXPECT_TRUE( c == uint2x3(
		0, 1, 2,
		1, 2, 3
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_uint2x3 ) {
	uint2x3 a = uint2x3(
		2, 3, 4,
		6, 6, 8
	);
	uint2x3 b = uint2x3(
		6, 6, 
		6, 6, 
		6,6
	);
	uint2x3 c = b / a;

	TEMPER_EXPECT_TRUE( c == uint2x3(
		3, 2, 1,
		1, 1, 0
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_uint2x3 ) {
	uint2x3 mat;

	TEMPER_EXPECT_TRUE( mat[0] == uint3( 1, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 0, 1, 0 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_uint2x3 ) {
	uint2x3 mat0 = uint2x3(
		1, 1, 1,
		1, 1, 1
	);
	uint2x3 mat1 = uint2x3(
		2, 2, 2,
		2, 2, 2
	);
	uint2x3 mat2 = uint2x3(
		3, 3, 3,
		3, 3, 3
	);
	uint2x3 mat3 = uint2x3(
		4, 4, 4,
		4, 4, 4
	);

	bool2x3 test0 = mat0 <= mat0;
	bool2x3 test1 = mat0 >= mat0;
	bool2x3 test2 = mat0 < mat1;

	bool2x3 test3 = mat1 <= mat1;
	bool2x3 test4 = mat1 >= mat1;
	bool2x3 test5 = mat1 < mat2;
	bool2x3 test6 = mat1 > mat0;

	bool2x3 test7 = mat2 <= mat2;
	bool2x3 test8 = mat2 >= mat2;
	bool2x3 test9 = mat2 < mat3;
	bool2x3 test10 = mat2 > mat1;

	bool2x3 test11 = mat3 <= mat3;
	bool2x3 test12 = mat3 >= mat3;
	bool2x3 test13 = mat3 > mat2;

	TEMPER_EXPECT_TRUE( test0 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test1 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test2 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test3 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test4 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test5 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test6 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test7 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test8 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test9 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test10 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test11 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test12 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test13 == bool2x3(
		true, true, true,
		true, true, true
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_uint2x3 ) {
	uint2x3 id = uint2x3(
		1, 0, 0,
		0, 1, 0
	);

	uint2x3 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_uint2x3 ) {
	uint2x3 mat = uint2x3(
		0, 1, 2,
		3, 4, 5
	);
	uint3x2 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == uint3x2(
		0, 3,
		1, 4,
		2, 5
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_uint2x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestOrtho_uint2x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestPerspective_uint2x3 ) {
	TEMPER_FAIL();
}

TEMPER_TEST( TestLookAt_uint2x3 ) {
	TEMPER_FAIL();
}

TEMPER_SUITE( Test_uint2x3 ) {
	TEMPER_RUN_TEST( TestAssignment_uint2x3 );

	TEMPER_RUN_TEST( TestArithmeticAddition_uint2x3 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_uint2x3 );
	TEMPER_SKIP_TEST( TestArithmeticMultiplication_uint2x3, "Give me a minute to think about how to structure this one." );
	TEMPER_RUN_TEST( TestArithmeticDivision_uint2x3 );

	TEMPER_RUN_TEST( TestArray_uint2x3 );
	TEMPER_RUN_TEST( TestRelational_uint2x3 );

	TEMPER_RUN_TEST( TestIdentity_uint2x3 );
	TEMPER_RUN_TEST( TestTranspose_uint2x3 );

	TEMPER_SKIP_TEST( TestScale_uint2x3, "TODO" );

	TEMPER_SKIP_TEST( TestOrtho_uint2x3, "TODO" );
	TEMPER_SKIP_TEST( TestPerspective_uint2x3, "TODO" );
	TEMPER_SKIP_TEST( TestLookAt_uint2x3, "TODO" );
};
