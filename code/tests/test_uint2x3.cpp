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
	uint2x3 answer = uint2x3(
		7, 7, 7,
		8, 8, 8
	);

	uint2x3 a = uint2x3(
		6, 6, 6,
		6, 6, 6
	);
	uint2x3 b = uint2x3(
		1, 1, 1,
		2, 2, 2
	);
	uint2x3 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_uint2x3 ) {
	uint2x3 answer = uint2x3(
		5, 5, 5,
		4, 4, 4
	);

	uint2x3 a = uint2x3(
		6, 6, 6,
		6, 6, 6
	);
	uint2x3 b = uint2x3(
		1, 1, 1,
		2, 2, 2
	);
	uint2x3 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_uint2x3 ) {
	uint2x2 answer = uint2x2(
		36, 36,
		36, 36
	);

	uint2x3 a = uint2x3(
		6, 6, 6,
		6, 6, 6
	);
	uint3x2 b = uint3x2(
		1, 1,
		2, 2,
		3, 3
	);
	uint2x2 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_uint2x3 ) {
	uint2x3 answer = uint2x3(
		6, 6, 6,
		3, 3, 3
	);

	uint2x3 a = uint2x3(
		6, 6, 6,
		6, 6, 6
	);
	uint2x3 b = uint2x3(
		1, 1, 1,
		2, 2, 2
	);
	uint2x3 c = a / b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_uint2x3 ) {
	uint2x3 mat;

	// prefix
	mat = uint2x3(
		0, 0, 0,
		0, 0, 0
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == uint2x3(
		1, 1, 1,
		1, 1, 1
	) );

	// postfix
	mat = uint2x3(
		0, 0, 0,
		0, 0, 0
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == uint2x3(
		1, 1, 1,
		1, 1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_uint2x3 ) {
	uint2x3 mat;

	// prefix
	mat = uint2x3(
		1, 1, 1,
		1, 1, 1
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == uint2x3(
		0, 0, 0,
		0, 0, 0
	) );

	// postfix
	mat = uint2x3(
		1, 1, 1,
		1, 1, 1
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == uint2x3(
		0, 0, 0,
		0, 0, 0
	) );

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

TEMPER_TEST( TestArray_uint2x3 ) {
	uint2x3 mat;

	TEMPER_EXPECT_TRUE( mat[0] == uint3( 1, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 0, 1, 0 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseAnd_uint2x3 ) {
	uint2x3 a  = uint2x3(
		21, 21, 21,
		21, 21, 21
	);
	uint2x3 b  = uint2x3(
		7, 7, 7,
		7, 7, 7
	);

	uint2x3 answer = a & b;

	TEMPER_EXPECT_TRUE( answer == uint2x3(
		5, 5, 5,
		5, 5, 5
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseOr_uint2x3 ) {
	uint2x3 a  = uint2x3(
		21, 21, 21,
		21, 21, 21
	);
	uint2x3 b  = uint2x3(
		7, 7, 7,
		7, 7, 7
	);

	uint2x3 answer = a | b;

	TEMPER_EXPECT_TRUE( answer == uint2x3(
		23, 23, 23,
		23, 23, 23
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseXor_uint2x3 ) {
	uint2x3 a  = uint2x3(
		21, 21, 21,
		21, 21, 21
	);
	uint2x3 b  = uint2x3(
		7, 7, 7,
		7, 7, 7
	);

	uint2x3 answer = a ^ b;

	TEMPER_EXPECT_TRUE( answer == uint2x3(
		18, 18, 18,
		18, 18, 18
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseShiftLeft_uint2x3 ) {
	uint2x3 a  = uint2x3(
		1, 1, 1,
		1, 1, 1
	);
	uint2x3 b  = uint2x3(
		2, 2, 2,
		2, 2, 2
	);

	uint2x3 answer = a << b;

	TEMPER_EXPECT_TRUE( answer == uint2x3(
		4, 4, 4,
		4, 4, 4
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseShiftRight_uint2x3 ) {
	uint2x3 a  = uint2x3(
		16, 16, 16,
		16, 16, 16
	);
	uint2x3 b  = uint2x3(
		4, 4, 4,
		4, 4, 4
	);

	uint2x3 answer = a >> b;

	TEMPER_EXPECT_TRUE( answer == uint2x3(
		1, 1, 1,
		1, 1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseUnary_uint2x3 ) {
	uint2x3 a = uint2x3(
		0, 0, 0,
		0, 0, 0
	);

	uint2x3 answer = ~a;

	TEMPER_EXPECT_TRUE( answer == uint2x3( (uint32_t) -1, (uint32_t) -1, (uint32_t) -1,
(uint32_t) -1, (uint32_t) -1, (uint32_t) -1
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
	uint2x3 mat;
	uint2x3 scaled = scale( mat, uint3( 2, 2, 2 ) );

	TEMPER_EXPECT_TRUE( scaled == uint2x3(
		2, 0, 0,
		0, 2, 0
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_uint2x3 ) {
	TEMPER_RUN_TEST( TestAssignment_uint2x3 );

	TEMPER_RUN_TEST( TestArithmeticAddition_uint2x3 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_uint2x3 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_uint2x3 );
	TEMPER_RUN_TEST( TestArithmeticDivision_uint2x3 );

	TEMPER_RUN_TEST( TestIncrement_uint2x3 );
	TEMPER_RUN_TEST( TestDecrement_uint2x3 );

	TEMPER_RUN_TEST( TestRelational_uint2x3 );

	TEMPER_RUN_TEST( TestBitwiseAnd_uint2x3 );
	TEMPER_RUN_TEST( TestBitwiseOr_uint2x3 );
	TEMPER_RUN_TEST( TestBitwiseXor_uint2x3 );
	TEMPER_RUN_TEST( TestBitwiseUnary_uint2x3 );
	TEMPER_RUN_TEST( TestBitwiseShiftLeft_uint2x3 );
	TEMPER_RUN_TEST( TestBitwiseShiftRight_uint2x3 );
	TEMPER_RUN_TEST( TestArray_uint2x3 );

	TEMPER_RUN_TEST( TestIdentity_uint2x3 );
	TEMPER_RUN_TEST( TestTranspose_uint2x3 );


};
