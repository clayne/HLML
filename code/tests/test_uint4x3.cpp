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

TEMPER_TEST( TestAssignment_uint4x3 )
{
	uint4x3 mat;

	// fill single value
	mat = uint4x3( 999U );
	TEMPER_EXPECT_TRUE( mat[0] == uint3( 999U, 0U, 0U ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 0U, 999U, 0U ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint3( 0U, 0U, 999U ) );
	TEMPER_EXPECT_TRUE( mat[3] == uint3( 0U, 0U, 0U ) );

	// row filling
	mat = uint4x3(
		uint3( 0U, 1U, 2U ),
		uint3( 4U, 5U, 6U ),
		uint3( 8U, 9U, 10U ),
		uint3( 12U, 13U, 14U )
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint3( 0U, 1U, 2U ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 4U, 5U, 6U ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint3( 8U, 9U, 10U ) );
	TEMPER_EXPECT_TRUE( mat[3] == uint3( 12U, 13U, 14U ) );

	// all values filled
	mat = uint4x3(
		16U, 15U, 14U,
		12U, 11U, 10U,
		8U, 7U, 6U,
		4U, 3U, 2U
	);
	TEMPER_EXPECT_TRUE( mat[0] == uint3( 16U, 15U, 14U ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 12U, 11U, 10U ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint3( 8U, 7U, 6U ) );
	TEMPER_EXPECT_TRUE( mat[3] == uint3( 4U, 3U, 2U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticAddition_uint4x3 )
{
	// scalar
	uint4x3 answer = uint4x3(
		7U, 7U, 7U,
		8U, 8U, 8U,
		15U, 15U, 15U,
		24U, 24U, 24U
	);

	uint4x3 a = uint4x3(
		6U, 6U, 6U,
		6U, 6U, 6U,
		12U, 12U, 12U,
		18U, 18U, 18U
	);
	uint4x3 b = uint4x3(
		1U, 1U, 1U,
		2U, 2U, 2U,
		3U, 3U, 3U,
		6U, 6U, 6U
	);
	uint4x3 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticSubtraction_uint4x3 )
{
	// scalar
	uint4x3 answer = uint4x3(
		5U, 5U, 5U,
		4U, 4U, 4U,
		9U, 9U, 9U,
		12U, 12U, 12U
	);

	uint4x3 a = uint4x3(
		6U, 6U, 6U,
		6U, 6U, 6U,
		12U, 12U, 12U,
		18U, 18U, 18U
	);
	uint4x3 b = uint4x3(
		1U, 1U, 1U,
		2U, 2U, 2U,
		3U, 3U, 3U,
		6U, 6U, 6U
	);
	uint4x3 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticMultiplication_uint4x3 )
{
	// scalar
	uint4x3 answer = uint4x3(
		6U, 6U, 6U,
		12U, 12U, 12U,
		36U, 36U, 36U,
		108U, 108U, 108U
	);

	uint4x3 a = uint4x3(
		6U, 6U, 6U,
		6U, 6U, 6U,
		12U, 12U, 12U,
		18U, 18U, 18U
	);
	uint4x3 b = uint4x3(
		1U, 1U, 1U,
		2U, 2U, 2U,
		3U, 3U, 3U,
		6U, 6U, 6U
	);
	uint4x3 c = comp_mul( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticDivision_uint4x3 )
{
	// scalar
	uint4x3 answer = uint4x3(
		6U, 6U, 6U,
		3U, 3U, 3U,
		4U, 4U, 4U,
		3U, 3U, 3U
	);

	uint4x3 a = uint4x3(
		6U, 6U, 6U,
		6U, 6U, 6U,
		12U, 12U, 12U,
		18U, 18U, 18U
	);
	uint4x3 b = uint4x3(
		1U, 1U, 1U,
		2U, 2U, 2U,
		3U, 3U, 3U,
		6U, 6U, 6U
	);
	uint4x3 c = comp_div( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestMultiplyMatrix_uint4x3 )
{
	// scalar
	uint4x4 answer = uint4x4(
		36U, 36U, 36U, 36U,
		36U, 36U, 36U, 36U,
		72U, 72U, 72U, 72U,
		108U, 108U, 108U, 108U
	);

	uint4x3 a = uint4x3(
		6U, 6U, 6U,
		6U, 6U, 6U,
		12U, 12U, 12U,
		18U, 18U, 18U
	);
	uint3x4 b = uint3x4(
		1U, 1U, 1U, 1U,
		2U, 2U, 2U, 2U,
		3U, 3U, 3U, 3U
	);
	uint4x4 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_uint4x3 )
{
	uint4x3 mat;

	// prefix
	mat = uint4x3(
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == uint4x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	) );

	// postfix
	mat = uint4x3(
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == uint4x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_uint4x3 )
{
	uint4x3 mat;

	// prefix
	mat = uint4x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == uint4x3(
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	) );

	// postfix
	mat = uint4x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == uint4x3(
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_uint4x3 )
{
	bool4x3 allTrue = bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	);

	uint4x3 mat0 = uint4x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	);
	uint4x3 mat1 = uint4x3(
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	);
	uint4x3 mat2 = uint4x3(
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U
	);
	uint4x3 mat3 = uint4x3(
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	);

	bool4x3 test0  = mat0 <= mat0;
	bool4x3 test1  = mat0 >= mat0;
	bool4x3 test2  = mat0 <  mat1;
	bool4x3 test3  = mat0 <  mat2;
	bool4x3 test4  = mat0 <  mat3;

	bool4x3 test5  = mat1 >  mat0;
	bool4x3 test6  = mat1 <= mat1;
	bool4x3 test7  = mat1 >= mat1;
	bool4x3 test8  = mat1 <  mat2;
	bool4x3 test9  = mat1 <  mat3;

	bool4x3 test10 = mat2 >  mat0;
	bool4x3 test11 = mat2 >  mat1;
	bool4x3 test12 = mat2 <= mat2;
	bool4x3 test13 = mat2 >= mat2;
	bool4x3 test14 = mat2 <  mat3;

	bool4x3 test15 = mat3 >  mat0;
	bool4x3 test16 = mat3 >  mat1;
	bool4x3 test17 = mat3 >  mat2;
	bool4x3 test18 = mat3 <= mat3;
	bool4x3 test19 = mat3 >= mat3;

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

TEMPER_TEST( TestArray_uint4x3 )
{
	uint4x3 mat;

	TEMPER_EXPECT_TRUE( mat[0] == uint3( 1U, 0U, 0U ) );
	TEMPER_EXPECT_TRUE( mat[1] == uint3( 0U, 1U, 0U ) );
	TEMPER_EXPECT_TRUE( mat[2] == uint3( 0U, 0U, 1U ) );
	TEMPER_EXPECT_TRUE( mat[3] == uint3( 0U, 0U, 0U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_uint4x3 )
{
	uint4x3 a  = uint4x3(
		21U, 21U, 21U,
		21U, 21U, 21U,
		21U, 21U, 21U,
		21U, 21U, 21U
	);
	uint4x3 b  = uint4x3(
		7U, 7U, 7U,
		7U, 7U, 7U,
		7U, 7U, 7U,
		7U, 7U, 7U
	);

	uint4x3 answer = a & b;

	TEMPER_EXPECT_TRUE( answer == uint4x3(
		5U, 5U, 5U,
		5U, 5U, 5U,
		5U, 5U, 5U,
		5U, 5U, 5U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_uint4x3 )
{
	uint4x3 a  = uint4x3(
		21U, 21U, 21U,
		21U, 21U, 21U,
		21U, 21U, 21U,
		21U, 21U, 21U
	);
	uint4x3 b  = uint4x3(
		7U, 7U, 7U,
		7U, 7U, 7U,
		7U, 7U, 7U,
		7U, 7U, 7U
	);

	uint4x3 answer = a | b;

	TEMPER_EXPECT_TRUE( answer == uint4x3(
		23U, 23U, 23U,
		23U, 23U, 23U,
		23U, 23U, 23U,
		23U, 23U, 23U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_uint4x3 )
{
	uint4x3 a  = uint4x3(
		21U, 21U, 21U,
		21U, 21U, 21U,
		21U, 21U, 21U,
		21U, 21U, 21U
	);
	uint4x3 b  = uint4x3(
		7U, 7U, 7U,
		7U, 7U, 7U,
		7U, 7U, 7U,
		7U, 7U, 7U
	);

	uint4x3 answer = a ^ b;

	TEMPER_EXPECT_TRUE( answer == uint4x3(
		18U, 18U, 18U,
		18U, 18U, 18U,
		18U, 18U, 18U,
		18U, 18U, 18U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_uint4x3 )
{
	uint4x3 a  = uint4x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	);
	uint4x3 b  = uint4x3(
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	);

	uint4x3 answer = a << b;

	TEMPER_EXPECT_TRUE( answer == uint4x3(
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_uint4x3 )
{
	uint4x3 a  = uint4x3(
		16U, 16U, 16U,
		16U, 16U, 16U,
		16U, 16U, 16U,
		16U, 16U, 16U
	);
	uint4x3 b  = uint4x3(
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	);

	uint4x3 answer = a >> b;

	TEMPER_EXPECT_TRUE( answer == uint4x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Unary_uint4x3 )
{
	uint4x3 a = uint4x3(
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	);

	uint4x3 answer = ~a;

	TEMPER_EXPECT_TRUE( answer == uint4x3(
		(uint32_t) -1, (uint32_t) -1, (uint32_t) -1,
		(uint32_t) -1, (uint32_t) -1, (uint32_t) -1,
		(uint32_t) -1, (uint32_t) -1, (uint32_t) -1,
		(uint32_t) -1, (uint32_t) -1, (uint32_t) -1
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_uint4x3 )
{
	// scalar
	uint4x3 id = uint4x3(
		1U, 0, 0,
		0, 1U, 0,
		0, 0, 1U,
		0, 0, 0
	);

	uint4x3 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_uint4x3 )
{
	uint4x3 mat = uint4x3(
		0U, 1U, 2U,
		4U, 5U, 6U,
		8U, 9U, 10U,
		12U, 13U, 14U
	);
	uint3x4 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == uint3x4(
		0U, 4U, 8U, 12U,
		1U, 5U, 9U, 13U,
		2U, 6U, 10U, 14U
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_uint4x3 )
{
	uint4x3 mat;
	uint4x3 scaled = scale( mat, uint3( 2U, 2U, 2U ) );

	TEMPER_EXPECT_TRUE( scaled == uint4x3(
		2U, 0, 0,
		0, 2U, 0,
		0, 0, 2U,
		0, 0, 0
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_uint4x3 )
{
	TEMPER_RUN_TEST( TestAssignment_uint4x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticAddition_uint4x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticSubtraction_uint4x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticMultiplication_uint4x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticDivision_uint4x3 );
	TEMPER_RUN_TEST( TestMultiplyMatrix_uint4x3 );
	TEMPER_RUN_TEST( TestIncrement_uint4x3 );
	TEMPER_RUN_TEST( TestDecrement_uint4x3 );
	TEMPER_RUN_TEST( TestRelational_uint4x3 );
	TEMPER_RUN_TEST( TestArray_uint4x3 );
	TEMPER_RUN_TEST( TestBitwise_And_uint4x3 );
	TEMPER_RUN_TEST( TestBitwise_Or_uint4x3 );
	TEMPER_RUN_TEST( TestBitwise_Xor_uint4x3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftLeft_uint4x3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftRight_uint4x3 );
	TEMPER_RUN_TEST( TestBitwise_Unary_uint4x3 );
	TEMPER_RUN_TEST( TestIdentity_uint4x3 );
	TEMPER_RUN_TEST( TestTranspose_uint4x3 );
	TEMPER_RUN_TEST( TestScale_uint4x3 );
}
