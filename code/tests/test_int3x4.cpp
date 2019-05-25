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

TEMPER_TEST( TestAssignment_int3x4 )
{
	int3x4 mat;

	// fill single value
	mat = int3x4( 999 );
	TEMPER_EXPECT_TRUE( mat[0] == int4( 999, 0, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int4( 0, 999, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int4( 0, 0, 999, 0 ) );

	// row filling
	mat = int3x4(
		int4( 0, 1, 2, 3 ),
		int4( 4, 5, 6, 7 ),
		int4( 8, 9, 10, 11 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == int4( 0, 1, 2, 3 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int4( 4, 5, 6, 7 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int4( 8, 9, 10, 11 ) );

	// all values filled
	mat = int3x4(
		16, 15, 14, 13,
		12, 11, 10, 9,
		8, 7, 6, 5
	);
	TEMPER_EXPECT_TRUE( mat[0] == int4( 16, 15, 14, 13 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int4( 12, 11, 10, 9 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int4( 8, 7, 6, 5 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_int3x4 )
{
	int3x4 answer = int3x4(
		7, 7, 7, 7,
		8, 8, 8, 8,
		15, 15, 15, 15
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	int3x4 b = int3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);
	int3x4 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_int3x4 )
{
	int3x4 answer = int3x4(
		5, 5, 5, 5,
		4, 4, 4, 4,
		9, 9, 9, 9
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	int3x4 b = int3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);
	int3x4 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_int3x4 )
{
	int3x3 answer = int3x3(
		72, 72, 72,
		72, 72, 72,
		144, 144, 144
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	int4x3 b = int4x3(
		1, 1, 1,
		2, 2, 2,
		3, 3, 3,
		6, 6, 6
	);
	int3x3 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_int3x4 )
{
	int3x4 answer = int3x4(
		6, 6, 6, 6,
		3, 3, 3, 3,
		4, 4, 4, 4
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);
	int3x4 b = int3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);
	int3x4 c = a / b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_int3x4 )
{
	int3x4 mat;

	// prefix
	mat = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	) );

	// postfix
	mat = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_int3x4 )
{
	int3x4 mat;

	// prefix
	mat = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	) );

	// postfix
	mat = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_int3x4 )
{
	bool3x4 allTrue = bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	);

	int3x4 mat0 = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	int3x4 mat1 = int3x4(
		2, 2, 2, 2,
		2, 2, 2, 2,
		2, 2, 2, 2
	);
	int3x4 mat2 = int3x4(
		3, 3, 3, 3,
		3, 3, 3, 3,
		3, 3, 3, 3
	);
	int3x4 mat3 = int3x4(
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

	TEMPER_EXPECT_TRUE( test0 == allTrue );
	TEMPER_EXPECT_TRUE( test1 == allTrue );
	TEMPER_EXPECT_TRUE( test2 == allTrue );
	TEMPER_EXPECT_TRUE( test3 == allTrue );
	TEMPER_EXPECT_TRUE( test4 == allTrue );
	TEMPER_EXPECT_TRUE( test5 == allTrue );
	TEMPER_EXPECT_TRUE( test6 == allTrue );
	TEMPER_EXPECT_TRUE( test7 == allTrue );
	TEMPER_EXPECT_TRUE( test8 == allTrue );
	TEMPER_EXPECT_TRUE( test9 == allTrue );
	TEMPER_EXPECT_TRUE( test10 == allTrue );
	TEMPER_EXPECT_TRUE( test11 == allTrue );
	TEMPER_EXPECT_TRUE( test12 == allTrue );
	TEMPER_EXPECT_TRUE( test13 == allTrue );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_int3x4 )
{
	int3x4 mat;

	TEMPER_EXPECT_TRUE( mat[0] == int4( 1, 0, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int4( 0, 1, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int4( 0, 0, 1, 0 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseAnd_int3x4 )
{
	int3x4 a  = int3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	int3x4 b  = int3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	int3x4 answer = a & b;

	TEMPER_EXPECT_TRUE( answer == int3x4(
		5, 5, 5, 5,
		5, 5, 5, 5,
		5, 5, 5, 5
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseOr_int3x4 )
{
	int3x4 a  = int3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	int3x4 b  = int3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	int3x4 answer = a | b;

	TEMPER_EXPECT_TRUE( answer == int3x4(
		23, 23, 23, 23,
		23, 23, 23, 23,
		23, 23, 23, 23
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseXor_int3x4 )
{
	int3x4 a  = int3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	int3x4 b  = int3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	int3x4 answer = a ^ b;

	TEMPER_EXPECT_TRUE( answer == int3x4(
		18, 18, 18, 18,
		18, 18, 18, 18,
		18, 18, 18, 18
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseShiftLeft_int3x4 )
{
	int3x4 a  = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	int3x4 b  = int3x4(
		2, 2, 2, 2,
		2, 2, 2, 2,
		2, 2, 2, 2
	);

	int3x4 answer = a << b;

	TEMPER_EXPECT_TRUE( answer == int3x4(
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseShiftRight_int3x4 )
{
	int3x4 a  = int3x4(
		16, 16, 16, 16,
		16, 16, 16, 16,
		16, 16, 16, 16
	);
	int3x4 b  = int3x4(
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	);

	int3x4 answer = a >> b;

	TEMPER_EXPECT_TRUE( answer == int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseUnary_int3x4 )
{
	int3x4 a = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);

	int3x4 answer = ~a;

	TEMPER_EXPECT_TRUE( answer == int3x4( (int32_t) -1, (int32_t) -1, (int32_t) -1, (int32_t) -1,
(int32_t) -1, (int32_t) -1, (int32_t) -1, (int32_t) -1,
(int32_t) -1, (int32_t) -1, (int32_t) -1, (int32_t) -1
 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_int3x4 )
{
	int3x4 id = int3x4(
		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0
	);

	int3x4 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_int3x4 )
{
	int3x4 mat = int3x4(
		0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11
	);
	int4x3 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == int4x3(
		0, 4, 8,
		1, 5, 9,
		2, 6, 10,
		3, 7, 11
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranslate_int3x4 )
{
	int3x4 mat;
	int3x4 translated = int3x4(
		1, 0, 0, 2,
		0, 1, 0, 3,
		0, 0, 1, 4
	);

	int3 translation = int3( 2, 3, 4 );
	mat = translate( mat, translation );

	TEMPER_EXPECT_TRUE( mat == translated );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_int3x4 )
{
	int3x4 mat;
	int3x4 scaled = scale( mat, int3( 2, 2, 2 ) );

	TEMPER_EXPECT_TRUE( scaled == int3x4(
		2, 0, 0, 0,
		0, 2, 0, 0,
		0, 0, 2, 0
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_int3x4 )
{
	TEMPER_RUN_TEST( TestAssignment_int3x4 );

	TEMPER_RUN_TEST( TestArithmeticAddition_int3x4 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_int3x4 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_int3x4 );
	TEMPER_RUN_TEST( TestArithmeticDivision_int3x4 );

	TEMPER_RUN_TEST( TestIncrement_int3x4 );
	TEMPER_RUN_TEST( TestDecrement_int3x4 );

	TEMPER_RUN_TEST( TestRelational_int3x4 );

	TEMPER_RUN_TEST( TestBitwiseAnd_int3x4 );
	TEMPER_RUN_TEST( TestBitwiseOr_int3x4 );
	TEMPER_RUN_TEST( TestBitwiseXor_int3x4 );
	TEMPER_RUN_TEST( TestBitwiseUnary_int3x4 );
	TEMPER_RUN_TEST( TestBitwiseShiftLeft_int3x4 );
	TEMPER_RUN_TEST( TestBitwiseShiftRight_int3x4 );
	TEMPER_RUN_TEST( TestArray_int3x4 );

	TEMPER_RUN_TEST( TestIdentity_int3x4 );
	TEMPER_RUN_TEST( TestTranspose_int3x4 );

	TEMPER_RUN_TEST( TestTranslate_int3x4 );
	TEMPER_RUN_TEST( TestScale_int3x4 );

}
