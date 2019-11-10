/*
===========================================================================

HLML.

MIT License

Copyright (c) 2019 Dan Moody

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

===========================================================================
*/

// THIS FILE WAS AUTOMATICALLY GENERATED BY A TOOL.
// EDITING THIS FILE MAY CAUSE SIDE EFFECTS.
// DO SO AT YOUR OWN RISK.

static uint2x3 g_matrixMulLHS_uint2x3    = (uint2x3) {
		6U, 6U, 6U,
		6U, 6U, 6U
};

static uint3x2 g_matrixMulRHS_uint2x3    = (uint3x2) {
		1U, 1U,
		2U, 2U,
		3U, 3U
};

static uint2x2 g_matrixMulAnswer_uint2x3 = (uint2x2) {
		36U, 36U,
		36U, 36U
};


TEMPER_TEST( TestAssignment_uint2x3 )
{
	uint2x3 mat;

	mat.rows[0] = (uint3) { 999U, 0U, 0U };
	mat.rows[1] = (uint3) { 0U, 999U, 0U };

	TEMPER_EXPECT_TRUE( mat.rows[0].x == 999U );
	TEMPER_EXPECT_TRUE( mat.rows[0].y == 0U );
	TEMPER_EXPECT_TRUE( mat.rows[0].z == 0U );
	TEMPER_EXPECT_TRUE( mat.rows[1].x == 0U );
	TEMPER_EXPECT_TRUE( mat.rows[1].y == 999U );
	TEMPER_EXPECT_TRUE( mat.rows[1].z == 0U );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Addition_uint2x3 )
{
	uint2x3 answer = (uint2x3) {
		7U, 7U, 7U,
		8U, 8U, 8U
	};

	uint2x3 a = (uint2x3) {
		6U, 6U, 6U,
		6U, 6U, 6U
	};

	uint2x3 b = (uint2x3) {
		1U, 1U, 1U,
		2U, 2U, 2U
	};

	uint2x3 c = uint2x3_comp_addm( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_uint2x3 )
{
	uint2x3 answer = (uint2x3) {
		5U, 5U, 5U,
		4U, 4U, 4U
	};

	uint2x3 a = (uint2x3) {
		6U, 6U, 6U,
		6U, 6U, 6U
	};

	uint2x3 b = (uint2x3) {
		1U, 1U, 1U,
		2U, 2U, 2U
	};

	uint2x3 c = uint2x3_comp_subm( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_uint2x3 )
{
	uint2x3 answer = (uint2x3) {
		6U, 6U, 6U,
		12U, 12U, 12U
	};

	uint2x3 a = (uint2x3) {
		6U, 6U, 6U,
		6U, 6U, 6U
	};

	uint2x3 b = (uint2x3) {
		1U, 1U, 1U,
		2U, 2U, 2U
	};

	uint2x3 c = uint2x3_comp_mulm( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Division_uint2x3 )
{
	uint2x3 answer = (uint2x3) {
		6U, 6U, 6U,
		3U, 3U, 3U
	};

	uint2x3 a = (uint2x3) {
		6U, 6U, 6U,
		6U, 6U, 6U
	};

	uint2x3 b = (uint2x3) {
		1U, 1U, 1U,
		2U, 2U, 2U
	};

	uint2x3 c = uint2x3_comp_divm( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestMultiplyMatrix_Scalar_uint2x3 )
{
	uint2x2 answer = g_matrixMulAnswer_uint2x3;

	uint2x3 a = g_matrixMulLHS_uint2x3;
	uint3x2 b = g_matrixMulRHS_uint2x3;
	uint2x2 c = uint2x3_mulm( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x2_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_uint2x3 )
{
	bool2x3 allTrue = { 		true, true, true,
		true, true, true
 };

	uint2x3 mat0 = (uint2x3) { 		1U, 1U, 1U,
		1U, 1U, 1U
 };
	uint2x3 mat1 = (uint2x3) { 		2U, 2U, 2U,
		2U, 2U, 2U
 };
	uint2x3 mat2 = (uint2x3) { 		3U, 3U, 3U,
		3U, 3U, 3U
 };
	uint2x3 mat3 = (uint2x3) { 		4U, 4U, 4U,
		4U, 4U, 4U
 };

	bool2x3 test0  = uint2x3_cmple( &mat0, &mat0 );
	bool2x3 test1  = uint2x3_cmpge( &mat0, &mat0 );
	bool2x3 test2  = uint2x3_cmpl( &mat0, &mat1 );
	bool2x3 test3  = uint2x3_cmpl( &mat0, &mat2 );
	bool2x3 test4  = uint2x3_cmpl( &mat0, &mat3 );

	bool2x3 test5  = uint2x3_cmpg( &mat1, &mat0 );
	bool2x3 test6  = uint2x3_cmple( &mat1, &mat1 );
	bool2x3 test7  = uint2x3_cmpge( &mat1, &mat1 );
	bool2x3 test8  = uint2x3_cmpl( &mat1, &mat2 );
	bool2x3 test9  = uint2x3_cmpl( &mat1, &mat3 );

	bool2x3 test10 = uint2x3_cmpg( &mat2, &mat0 );
	bool2x3 test11 = uint2x3_cmpg( &mat2, &mat1 );
	bool2x3 test12 = uint2x3_cmple( &mat2, &mat2 );
	bool2x3 test13 = uint2x3_cmpge( &mat2, &mat2 );
	bool2x3 test14 = uint2x3_cmpl( &mat2, &mat3 );

	bool2x3 test15 = uint2x3_cmpg( &mat3, &mat0 );
	bool2x3 test16 = uint2x3_cmpg( &mat3, &mat1 );
	bool2x3 test17 = uint2x3_cmpg( &mat3, &mat2 );
	bool2x3 test18 = uint2x3_cmple( &mat3, &mat3 );
	bool2x3 test19 = uint2x3_cmpge( &mat3, &mat3 );

	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test0,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test1,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test2,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test3,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test4,  &allTrue ) );

	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test5,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test6,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test7,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test8,  &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test9,  &allTrue ) );

	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test10, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test11, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test12, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test13, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test14, &allTrue ) );

	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test15, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test16, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test17, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test18, &allTrue ) );
	TEMPER_EXPECT_TRUE( bool2x3_cmpe( &test19, &allTrue ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_uint2x3 )
{
	uint2x3 answer  = (uint2x3) {
		5U, 5U, 5U,
		5U, 5U, 5U
	};
	uint2x3 a = (uint2x3) {
		21U, 21U, 21U,
		21U, 21U, 21U
	};
	uint2x3 b = (uint2x3) {
		7U, 7U, 7U,
		7U, 7U, 7U
	};
	uint2x3 c = uint2x3_comp_and( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_uint2x3 )
{
	uint2x3 answer  = (uint2x3) {
		23U, 23U, 23U,
		23U, 23U, 23U
	};
	uint2x3 a = (uint2x3) {
		21U, 21U, 21U,
		21U, 21U, 21U
	};
	uint2x3 b = (uint2x3) {
		7U, 7U, 7U,
		7U, 7U, 7U
	};
	uint2x3 c = uint2x3_comp_or( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_uint2x3 )
{
	uint2x3 answer  = (uint2x3) {
		18U, 18U, 18U,
		18U, 18U, 18U
	};
	uint2x3 a = (uint2x3) {
		21U, 21U, 21U,
		21U, 21U, 21U
	};
	uint2x3 b = (uint2x3) {
		7U, 7U, 7U,
		7U, 7U, 7U
	};
	uint2x3 c = uint2x3_comp_xor( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_uint2x3 )
{
	uint2x3 answer  = (uint2x3) {
		4U, 4U, 4U,
		4U, 4U, 4U
	};
	uint2x3 a = (uint2x3) {
		1U, 1U, 1U,
		1U, 1U, 1U
	};
	uint2x3 b = (uint2x3) {
		2U, 2U, 2U,
		2U, 2U, 2U
	};
	uint2x3 c = uint2x3_comp_shift_left( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_uint2x3 )
{
	uint2x3 answer  = (uint2x3) {
		1U, 1U, 1U,
		1U, 1U, 1U
	};
	uint2x3 a = (uint2x3) {
		16U, 16U, 16U,
		16U, 16U, 16U
	};
	uint2x3 b = (uint2x3) {
		4U, 4U, 4U,
		4U, 4U, 4U
	};
	uint2x3 c = uint2x3_comp_shift_right( &a, &b );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &c, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Unary_uint2x3 )
{
	uint2x3 answer = (uint2x3) {
		(uint32_t) -1, (uint32_t) -1, (uint32_t) -1,
		(uint32_t) -1, (uint32_t) -1, (uint32_t) -1
	};
	uint2x3 a = (uint2x3) {
		0U, 0U, 0U,
		0U, 0U, 0U
	};

	uint2x3 b = uint2x3_comp_unary( &a );

	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &b, &answer ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_Scalar_uint2x3 )
{
	uint2x3 id;
	id.rows[0] = (uint3) { 1U, 0U, 0U };
	id.rows[1] = (uint3) { 0U, 1U, 0U };

	uint2x3 mat;
	uint2x3_identity( &mat );
	TEMPER_EXPECT_TRUE( uint2x3_cmpe( &mat, &id ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_Scalar_uint2x3 )
{
	uint3x2 answerTransposed = (uint3x2) {
		0U, 4U,
		1U, 5U,
		2U, 6U
	};

	uint2x3 mat = (uint2x3) {
		0U, 1U, 2U,
		4U, 5U, 6U
	};
	uint3x2 trans = uint2x3_transpose( &mat );

	TEMPER_EXPECT_TRUE( uint3x2_cmpe( &trans, &answerTransposed ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_Scalar_uint2x3 )
{
	uint2 scaleVec = { 2U, 2U };
	uint2x3 mat;
	uint2x3_identity( &mat );

	uint2x3 scaled = uint2x3_scale( &mat, &scaleVec );

	TEMPER_EXPECT_TRUE( scaled.rows[0].x == 2U );
	TEMPER_EXPECT_TRUE( scaled.rows[1].y == 2U );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_uint2x3 )
{
	TEMPER_RUN_TEST( TestAssignment_uint2x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Addition_uint2x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_uint2x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_uint2x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Division_uint2x3 );
	TEMPER_RUN_TEST( TestMultiplyMatrix_Scalar_uint2x3 );
	TEMPER_RUN_TEST( TestRelational_uint2x3 );
	TEMPER_RUN_TEST( TestBitwise_And_uint2x3 );
	TEMPER_RUN_TEST( TestBitwise_Or_uint2x3 );
	TEMPER_RUN_TEST( TestBitwise_Xor_uint2x3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftLeft_uint2x3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftRight_uint2x3 );
	TEMPER_RUN_TEST( TestBitwise_Unary_uint2x3 );
	TEMPER_RUN_TEST( TestIdentity_Scalar_uint2x3 );
	TEMPER_RUN_TEST( TestTranspose_Scalar_uint2x3 );
	TEMPER_RUN_TEST( TestScale_Scalar_uint2x3 );
}
