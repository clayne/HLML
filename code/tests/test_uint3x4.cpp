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

#include "../../code/out/gen/hlml_functions_matrix.h"

#include <temper/temper.h>

TEMPER_TEST( TestAssignment_uint3x4 ) {
	uint3x4 mat;

	// fill single value
	mat = uint3x4( 999 );
	TEMPER_EXPECT_TRUE( mat[0] == uint4( 999, 0, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint4( 0, 999, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint4( 0, 0, 999, 0 ) );

	// row filling
	mat = uint3x4(
		uint4( 0, 1, 2, 3 ),
		uint4( 4, 5, 6, 7 ),
		uint4( 8, 9, 10, 11 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint4( 0, 1, 2, 3 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint4( 4, 5, 6, 7 ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint4( 8, 9, 10, 11 ) );

	// all values filled
	mat = uint3x4(
		12, 11, 10, 9, 
		8, 7, 6, 5, 
		4, 3, 2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint4( 12, 11, 10, 9 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint4( 8, 7, 6, 5 ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint4( 4, 3, 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_uint3x4 ) {
	uint3x4 answer = uint3x4(
		7, 7, 7, 7,
		8, 8, 8, 8,
		15, 15, 15, 15
	);

	uint3x4 a = uint3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	uint3x4 b = uint3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);
	uint3x4 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_uint3x4 ) {
	uint3x4 answer = uint3x4(
		5, 5, 5, 5,
		4, 4, 4, 4,
		9, 9, 9, 9
	);

	uint3x4 a = uint3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	uint3x4 b = uint3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);
	uint3x4 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_uint3x4 ) {
	uint3x3 answer = uint3x3(
		72, 72, 72,
		72, 72, 72,
		144, 144, 144
	);

	uint3x4 a = uint3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	uint4x3 b = uint4x3(
		1, 1, 1,
		2, 2, 2,
		3, 3, 3,
		6, 6, 6
	);
	uint3x3 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_uint3x4 ) {
	uint3x4 answer = uint3x4(
		6, 6, 6, 6,
		3, 3, 3, 3,
		4, 4, 4, 4
	);

	uint3x4 a = uint3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	uint3x4 b = uint3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);
	uint3x4 c = a / b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_uint3x4 ) {
	uint3x4 mat;

	// prefix
	mat = uint3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == uint3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	) );

	// postfix
	mat = uint3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == uint3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_uint3x4 ) {
	uint3x4 mat;

	// prefix
	mat = uint3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == uint3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	) );

	// postfix
	mat = uint3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == uint3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_uint3x4 ) {
	uint3x4 mat0 = uint3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	uint3x4 mat1 = uint3x4(
		2, 2, 2, 2,
		2, 2, 2, 2,
		2, 2, 2, 2
	);
	uint3x4 mat2 = uint3x4(
		3, 3, 3, 3,
		3, 3, 3, 3,
		3, 3, 3, 3
	);
	uint3x4 mat3 = uint3x4(
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	);

	bool3x4 test0 = mat0 <= mat0;
	bool3x4 test1 = mat0 >= mat0;
	bool3x4 test2 = mat0 < mat1;

	bool3x4 test3 = mat1 <= mat1;
	bool3x4 test4 = mat1 >= mat1;
	bool3x4 test5 = mat1 < mat2;
	bool3x4 test6 = mat1 > mat0;

	bool3x4 test7 = mat2 <= mat2;
	bool3x4 test8 = mat2 >= mat2;
	bool3x4 test9 = mat2 < mat3;
	bool3x4 test10 = mat2 > mat1;

	bool3x4 test11 = mat3 <= mat3;
	bool3x4 test12 = mat3 >= mat3;
	bool3x4 test13 = mat3 > mat2;

	TEMPER_EXPECT_TRUE( test0 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test1 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test2 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test3 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test4 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test5 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test6 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test7 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test8 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test9 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test10 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test11 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test12 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_EXPECT_TRUE( test13 == bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_uint3x4 ) {
	uint3x4 mat;

	TEMPER_EXPECT_TRUE( mat[0] == uint4( 1, 0, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint4( 0, 1, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint4( 0, 0, 1, 0 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseAnd_uint3x4 ) {
	uint3x4 a  = uint3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	uint3x4 b  = uint3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	uint3x4 answer = a & b;

	TEMPER_EXPECT_TRUE( answer == uint3x4(
		5, 5, 5, 5,
		5, 5, 5, 5,
		5, 5, 5, 5
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseOr_uint3x4 ) {
	uint3x4 a  = uint3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	uint3x4 b  = uint3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	uint3x4 answer = a | b;

	TEMPER_EXPECT_TRUE( answer == uint3x4(
		23, 23, 23, 23,
		23, 23, 23, 23,
		23, 23, 23, 23
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseXor_uint3x4 ) {
	uint3x4 a  = uint3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	uint3x4 b  = uint3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	uint3x4 answer = a ^ b;

	TEMPER_EXPECT_TRUE( answer == uint3x4(
		18, 18, 18, 18,
		18, 18, 18, 18,
		18, 18, 18, 18
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseShiftLeft_uint3x4 ) {
	uint3x4 a  = uint3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	uint3x4 b  = uint3x4(
		2, 2, 2, 2,
		2, 2, 2, 2,
		2, 2, 2, 2
	);

	uint3x4 answer = a << b;

	TEMPER_EXPECT_TRUE( answer == uint3x4(
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseShiftRight_uint3x4 ) {
	uint3x4 a  = uint3x4(
		16, 16, 16, 16,
		16, 16, 16, 16,
		16, 16, 16, 16
	);
	uint3x4 b  = uint3x4(
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	);

	uint3x4 answer = a >> b;

	TEMPER_EXPECT_TRUE( answer == uint3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseUnary_uint3x4 ) {
	uint3x4 a = uint3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);

	uint3x4 answer = ~a;

	TEMPER_EXPECT_TRUE( answer == uint3x4( (uint32_t) -1, (uint32_t) -1, (uint32_t) -1, (uint32_t) -1,
(uint32_t) -1, (uint32_t) -1, (uint32_t) -1, (uint32_t) -1,
(uint32_t) -1, (uint32_t) -1, (uint32_t) -1, (uint32_t) -1
 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_uint3x4 ) {
	uint3x4 id = uint3x4(
		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0
	);

	uint3x4 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_uint3x4 ) {
	uint3x4 mat = uint3x4(
		0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11
	);
	uint4x3 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == uint4x3(
		0, 4, 8,
		1, 5, 9,
		2, 6, 10,
		3, 7, 11
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranslate_uint3x4 ) {
	uint3x4 mat;
	uint3x4 translated = uint3x4(
		1, 0, 0, 2,
		0, 1, 0, 3,
		0, 0, 1, 4
	);

	uint3 translation = uint3( 2, 3, 4 );
	mat = translate( mat, translation );

	TEMPER_EXPECT_TRUE( mat == translated );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_uint3x4 ) {
	uint3x4 mat;
	uint3x4 scaled = scale( mat, uint3( 2, 2, 2 ) );

	TEMPER_EXPECT_TRUE( scaled == uint3x4(
		2, 0, 0, 0,
		0, 2, 0, 0,
		0, 0, 2, 0
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_uint3x4 ) {
	TEMPER_RUN_TEST( TestAssignment_uint3x4 );

	TEMPER_RUN_TEST( TestArithmeticAddition_uint3x4 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_uint3x4 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_uint3x4 );
	TEMPER_RUN_TEST( TestArithmeticDivision_uint3x4 );

	TEMPER_RUN_TEST( TestIncrement_uint3x4 );
	TEMPER_RUN_TEST( TestDecrement_uint3x4 );

	TEMPER_RUN_TEST( TestRelational_uint3x4 );

	TEMPER_RUN_TEST( TestBitwiseAnd_uint3x4 );
	TEMPER_RUN_TEST( TestBitwiseOr_uint3x4 );
	TEMPER_RUN_TEST( TestBitwiseXor_uint3x4 );
	TEMPER_RUN_TEST( TestBitwiseUnary_uint3x4 );
	TEMPER_RUN_TEST( TestBitwiseShiftLeft_uint3x4 );
	TEMPER_RUN_TEST( TestBitwiseShiftRight_uint3x4 );
	TEMPER_RUN_TEST( TestArray_uint3x4 );

	TEMPER_RUN_TEST( TestIdentity_uint3x4 );
	TEMPER_RUN_TEST( TestTranspose_uint3x4 );

	TEMPER_RUN_TEST( TestTranslate_uint3x4 );
	TEMPER_RUN_TEST( TestScale_uint3x4 );

};
