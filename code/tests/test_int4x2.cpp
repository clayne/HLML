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

TEMPER_TEST( TestAssignment_int4x2 )
{
	int4x2 mat;

	// fill single value
	mat = int4x2( 999 );
	TEMPER_EXPECT_TRUE( mat[0] == int2( 999, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int2( 0, 999 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int2( 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[3] == int2( 0, 0 ) );

	// row filling
	mat = int4x2(
		int2( 0, 1 ),
		int2( 4, 5 ),
		int2( 8, 9 ),
		int2( 12, 13 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == int2( 0, 1 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int2( 4, 5 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int2( 8, 9 ) );
	TEMPER_EXPECT_TRUE( mat[3] == int2( 12, 13 ) );

	// all values filled
	mat = int4x2(
		16, 15,
		12, 11,
		8, 7,
		4, 3
	);
	TEMPER_EXPECT_TRUE( mat[0] == int2( 16, 15 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int2( 12, 11 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int2( 8, 7 ) );
	TEMPER_EXPECT_TRUE( mat[3] == int2( 4, 3 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticAddition_int4x2 )
{
	// scalar
	int4x2 answer = int4x2(
		7, 7,
		8, 8,
		15, 15,
		24, 24
	);

	int4x2 a = int4x2(
		6, 6,
		6, 6,
		12, 12,
		18, 18
	);
	int4x2 b = int4x2(
		1, 1,
		2, 2,
		3, 3,
		6, 6
	);
	int4x2 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticSubtraction_int4x2 )
{
	// scalar
	int4x2 answer = int4x2(
		5, 5,
		4, 4,
		9, 9,
		12, 12
	);

	int4x2 a = int4x2(
		6, 6,
		6, 6,
		12, 12,
		18, 18
	);
	int4x2 b = int4x2(
		1, 1,
		2, 2,
		3, 3,
		6, 6
	);
	int4x2 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticMultiplication_int4x2 )
{
	// scalar
	int4x2 answer = int4x2(
		6, 6,
		12, 12,
		36, 36,
		108, 108
	);

	int4x2 a = int4x2(
		6, 6,
		6, 6,
		12, 12,
		18, 18
	);
	int4x2 b = int4x2(
		1, 1,
		2, 2,
		3, 3,
		6, 6
	);
	int4x2 c = comp_mul( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticDivision_int4x2 )
{
	// scalar
	int4x2 answer = int4x2(
		6, 6,
		3, 3,
		4, 4,
		3, 3
	);

	int4x2 a = int4x2(
		6, 6,
		6, 6,
		12, 12,
		18, 18
	);
	int4x2 b = int4x2(
		1, 1,
		2, 2,
		3, 3,
		6, 6
	);
	int4x2 c = comp_div( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestMultiplyMatrix_int4x2 )
{
	// scalar
	int4x4 answer = int4x4(
		18, 18, 18, 18,
		18, 18, 18, 18,
		36, 36, 36, 36,
		54, 54, 54, 54
	);

	int4x2 a = int4x2(
		6, 6,
		6, 6,
		12, 12,
		18, 18
	);
	int2x4 b = int2x4(
		1, 1, 1, 1,
		2, 2, 2, 2
	);
	int4x4 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_int4x2 )
{
	int4x2 mat;

	// prefix
	mat = int4x2(
		0, 0,
		0, 0,
		0, 0,
		0, 0
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == int4x2(
		1, 1,
		1, 1,
		1, 1,
		1, 1
	) );

	// postfix
	mat = int4x2(
		0, 0,
		0, 0,
		0, 0,
		0, 0
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == int4x2(
		1, 1,
		1, 1,
		1, 1,
		1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_int4x2 )
{
	int4x2 mat;

	// prefix
	mat = int4x2(
		1, 1,
		1, 1,
		1, 1,
		1, 1
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == int4x2(
		0, 0,
		0, 0,
		0, 0,
		0, 0
	) );

	// postfix
	mat = int4x2(
		1, 1,
		1, 1,
		1, 1,
		1, 1
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == int4x2(
		0, 0,
		0, 0,
		0, 0,
		0, 0
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_int4x2 )
{
	bool4x2 allTrue = bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	);

	int4x2 mat0 = int4x2(
		1, 1,
		1, 1,
		1, 1,
		1, 1
	);
	int4x2 mat1 = int4x2(
		2, 2,
		2, 2,
		2, 2,
		2, 2
	);
	int4x2 mat2 = int4x2(
		3, 3,
		3, 3,
		3, 3,
		3, 3
	);
	int4x2 mat3 = int4x2(
		4, 4,
		4, 4,
		4, 4,
		4, 4
	);

	bool4x2 test0  = mat0 <= mat0;
	bool4x2 test1  = mat0 >= mat0;
	bool4x2 test2  = mat0 <  mat1;
	bool4x2 test3  = mat0 <  mat2;
	bool4x2 test4  = mat0 <  mat3;

	bool4x2 test5  = mat1 >  mat0;
	bool4x2 test6  = mat1 <= mat1;
	bool4x2 test7  = mat1 >= mat1;
	bool4x2 test8  = mat1 <  mat2;
	bool4x2 test9  = mat1 <  mat3;

	bool4x2 test10 = mat2 >  mat0;
	bool4x2 test11 = mat2 >  mat1;
	bool4x2 test12 = mat2 <= mat2;
	bool4x2 test13 = mat2 >= mat2;
	bool4x2 test14 = mat2 <  mat3;

	bool4x2 test15 = mat3 >  mat0;
	bool4x2 test16 = mat3 >  mat1;
	bool4x2 test17 = mat3 >  mat2;
	bool4x2 test18 = mat3 <= mat3;
	bool4x2 test19 = mat3 >= mat3;

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

TEMPER_TEST( TestArray_int4x2 )
{
	int4x2 mat;

	TEMPER_EXPECT_TRUE( mat[0] == int2( 1, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int2( 0, 1 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int2( 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[3] == int2( 0, 0 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_int4x2 )
{
	int4x2 a  = int4x2(
		21, 21,
		21, 21,
		21, 21,
		21, 21
	);
	int4x2 b  = int4x2(
		7, 7,
		7, 7,
		7, 7,
		7, 7
	);

	int4x2 answer = a & b;

	TEMPER_EXPECT_TRUE( answer == int4x2(
		5, 5,
		5, 5,
		5, 5,
		5, 5
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_int4x2 )
{
	int4x2 a  = int4x2(
		21, 21,
		21, 21,
		21, 21,
		21, 21
	);
	int4x2 b  = int4x2(
		7, 7,
		7, 7,
		7, 7,
		7, 7
	);

	int4x2 answer = a | b;

	TEMPER_EXPECT_TRUE( answer == int4x2(
		23, 23,
		23, 23,
		23, 23,
		23, 23
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_int4x2 )
{
	int4x2 a  = int4x2(
		21, 21,
		21, 21,
		21, 21,
		21, 21
	);
	int4x2 b  = int4x2(
		7, 7,
		7, 7,
		7, 7,
		7, 7
	);

	int4x2 answer = a ^ b;

	TEMPER_EXPECT_TRUE( answer == int4x2(
		18, 18,
		18, 18,
		18, 18,
		18, 18
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_int4x2 )
{
	int4x2 a  = int4x2(
		1, 1,
		1, 1,
		1, 1,
		1, 1
	);
	int4x2 b  = int4x2(
		2, 2,
		2, 2,
		2, 2,
		2, 2
	);

	int4x2 answer = a << b;

	TEMPER_EXPECT_TRUE( answer == int4x2(
		4, 4,
		4, 4,
		4, 4,
		4, 4
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_int4x2 )
{
	int4x2 a  = int4x2(
		16, 16,
		16, 16,
		16, 16,
		16, 16
	);
	int4x2 b  = int4x2(
		4, 4,
		4, 4,
		4, 4,
		4, 4
	);

	int4x2 answer = a >> b;

	TEMPER_EXPECT_TRUE( answer == int4x2(
		1, 1,
		1, 1,
		1, 1,
		1, 1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Unary_int4x2 )
{
	int4x2 a = int4x2(
		0, 0,
		0, 0,
		0, 0,
		0, 0
	);

	int4x2 answer = ~a;

	TEMPER_EXPECT_TRUE( answer == int4x2(
		(int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_int4x2 )
{
	// scalar
	int4x2 id = int4x2(
		1, 0,
		0, 1,
		0, 0,
		0, 0
	);

	int4x2 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_int4x2 )
{
	// scalar
	int4x2 mat = int4x2(
		0, 1,
		4, 5,
		8, 9,
		12, 13
	);
	int2x4 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == int2x4(
		0, 4, 8, 12,
		1, 5, 9, 13
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_int4x2 )
{
	TEMPER_RUN_TEST( TestAssignment_int4x2 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticAddition_int4x2 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticSubtraction_int4x2 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticMultiplication_int4x2 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticDivision_int4x2 );
	TEMPER_RUN_TEST( TestMultiplyMatrix_int4x2 );
	TEMPER_RUN_TEST( TestIncrement_int4x2 );
	TEMPER_RUN_TEST( TestDecrement_int4x2 );
	TEMPER_RUN_TEST( TestRelational_int4x2 );
	TEMPER_RUN_TEST( TestArray_int4x2 );
	TEMPER_RUN_TEST( TestBitwise_And_int4x2 );
	TEMPER_RUN_TEST( TestBitwise_Or_int4x2 );
	TEMPER_RUN_TEST( TestBitwise_Xor_int4x2 );
	TEMPER_RUN_TEST( TestBitwise_ShiftLeft_int4x2 );
	TEMPER_RUN_TEST( TestBitwise_ShiftRight_int4x2 );
	TEMPER_RUN_TEST( TestBitwise_Unary_int4x2 );
	TEMPER_RUN_TEST( TestIdentity_int4x2 );
	TEMPER_RUN_TEST( TestTranspose_int4x2 );
}
