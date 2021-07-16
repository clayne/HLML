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

static float2x2 g_matrixMulLHS_float2x2    = float2x2( 		6.000000f, 6.000000f,
		6.000000f, 6.000000f
 );

static float2x2 g_matrixMulRHS_float2x2    = float2x2( 		1.000000f, 1.000000f,
		2.000000f, 2.000000f
 );

static float2x2 g_matrixMulAnswer_float2x2 = float2x2( 		18.000000f, 18.000000f,
		18.000000f, 18.000000f
 );


TEMPER_TEST( TestAssignment_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 mat;

	mat.rows[0] = float2( 999.000000f, 0.000000f );
	mat.rows[1] = float2( 0.000000f, 999.000000f );

	TEMPER_CHECK_TRUE( mat.rows[0].x == 999.0f );
	TEMPER_CHECK_TRUE( mat.rows[0].y == 0.0f );
	TEMPER_CHECK_TRUE( mat.rows[1].x == 0.0f );
	TEMPER_CHECK_TRUE( mat.rows[1].y == 999.0f );
}

TEMPER_TEST( TestCtor_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 mat;

	// fill single value
	mat = float2x2( 999.0f );
	TEMPER_CHECK_TRUE( mat[0] == float2( 999.000000f, 0.000000f ) );
	TEMPER_CHECK_TRUE( mat[1] == float2( 0.000000f, 999.000000f ) );

	// row filling
	mat = float2x2(
		float2( 0.000000f, 1.000000f ),
		float2( 4.000000f, 5.000000f )
	);
	TEMPER_CHECK_TRUE( mat[0] == float2( 0.000000f, 1.000000f ) );
	TEMPER_CHECK_TRUE( mat[1] == float2( 4.000000f, 5.000000f ) );

	// all values filled
	mat = float2x2(
		16.000000f, 15.000000f,
		12.000000f, 11.000000f
	);
	TEMPER_CHECK_TRUE( mat[0] == float2( 16.000000f, 15.000000f ) );
	TEMPER_CHECK_TRUE( mat[1] == float2( 12.000000f, 11.000000f ) );
}

TEMPER_TEST( TestArray_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 mat;
	identity( mat );

	TEMPER_CHECK_TRUE( mat[0] == float2( 1.0f, 0.0f ) );
	TEMPER_CHECK_TRUE( mat[1] == float2( 0.0f, 1.0f ) );
}

TEMPER_TEST( TestIncrement_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer;
	float2x2 mat;

	// prefix
	answer = float2x2(
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	);

	mat = float2x2(
		0.000000f, 0.000000f,
		0.000000f, 0.000000f

	);
	++mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = float2x2(
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	);

	mat = float2x2(
		0.000000f, 0.000000f,
		0.000000f, 0.000000f

	);
	mat++;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestDecrement_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer;
	float2x2 mat;

	// prefix
	answer = float2x2(
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	);

	mat = float2x2(
		1.000000f, 1.000000f,
		1.000000f, 1.000000f

	);
	--mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = float2x2(
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	);

	mat = float2x2(
		1.000000f, 1.000000f,
		1.000000f, 1.000000f

	);
	mat--;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Addition_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer = float2x2(
		7.000000f, 7.000000f,
		8.000000f, 8.000000f
	);

	float2x2 a = float2x2(
		6.000000f, 6.000000f,
		6.000000f, 6.000000f
	);

	float2x2 b = float2x2(
		1.000000f, 1.000000f,
		2.000000f, 2.000000f
	);

	float2x2 c = caddm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer = float2x2(
		5.000000f, 5.000000f,
		4.000000f, 4.000000f
	);

	float2x2 a = float2x2(
		6.000000f, 6.000000f,
		6.000000f, 6.000000f
	);

	float2x2 b = float2x2(
		1.000000f, 1.000000f,
		2.000000f, 2.000000f
	);

	float2x2 c = csubm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer = float2x2(
		6.000000f, 6.000000f,
		12.000000f, 12.000000f
	);

	float2x2 a = float2x2(
		6.000000f, 6.000000f,
		6.000000f, 6.000000f
	);

	float2x2 b = float2x2(
		1.000000f, 1.000000f,
		2.000000f, 2.000000f
	);

	float2x2 c = cmulm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Division_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer = float2x2(
		6.000000f, 6.000000f,
		3.000000f, 3.000000f
	);

	float2x2 a = float2x2(
		6.000000f, 6.000000f,
		6.000000f, 6.000000f
	);

	float2x2 b = float2x2(
		1.000000f, 1.000000f,
		2.000000f, 2.000000f
	);

	float2x2 c = cdivm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_SSE_Addition_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float a00[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	float b00[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };

	float2x2_sse_t results;
	float2x2_sse_t lhs;
	float2x2_sse_t rhs;
	lhs.m[0][0] = _mm_load_ps( a00 );
	lhs.m[0][1] = _mm_load_ps( a01 );
	lhs.m[1][0] = _mm_load_ps( a10 );
	lhs.m[1][1] = _mm_load_ps( a11 );

	rhs.m[0][0] = _mm_load_ps( b00 );
	rhs.m[0][1] = _mm_load_ps( b01 );
	rhs.m[1][0] = _mm_load_ps( b10 );
	rhs.m[1][1] = _mm_load_ps( b11 );

	caddm_sse( &lhs, &rhs, &results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results.m[0][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 7.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 7.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 7.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 7.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[0][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 7.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 7.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 7.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 7.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 8.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 8.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 8.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 8.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 8.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 8.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 8.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 8.000000f ) );

}

TEMPER_TEST( TestComponentWiseArithmetic_SSE_Subtraction_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float a00[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	float b00[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };

	float2x2_sse_t results;
	float2x2_sse_t lhs;
	float2x2_sse_t rhs;
	lhs.m[0][0] = _mm_load_ps( a00 );
	lhs.m[0][1] = _mm_load_ps( a01 );
	lhs.m[1][0] = _mm_load_ps( a10 );
	lhs.m[1][1] = _mm_load_ps( a11 );

	rhs.m[0][0] = _mm_load_ps( b00 );
	rhs.m[0][1] = _mm_load_ps( b01 );
	rhs.m[1][0] = _mm_load_ps( b10 );
	rhs.m[1][1] = _mm_load_ps( b11 );

	csubm_sse( &lhs, &rhs, &results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results.m[0][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 5.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[0][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 5.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 4.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 4.000000f ) );

}

TEMPER_TEST( TestComponentWiseArithmetic_SSE_Multiplication_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float a00[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	float b00[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };

	float2x2_sse_t results;
	float2x2_sse_t lhs;
	float2x2_sse_t rhs;
	lhs.m[0][0] = _mm_load_ps( a00 );
	lhs.m[0][1] = _mm_load_ps( a01 );
	lhs.m[1][0] = _mm_load_ps( a10 );
	lhs.m[1][1] = _mm_load_ps( a11 );

	rhs.m[0][0] = _mm_load_ps( b00 );
	rhs.m[0][1] = _mm_load_ps( b01 );
	rhs.m[1][0] = _mm_load_ps( b10 );
	rhs.m[1][1] = _mm_load_ps( b11 );

	cmulm_sse( &lhs, &rhs, &results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results.m[0][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 6.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[0][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 6.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 12.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 12.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 12.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 12.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 12.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 12.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 12.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 12.000000f ) );

}

TEMPER_TEST( TestComponentWiseArithmetic_SSE_Division_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float a00[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	float b00[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };

	float2x2_sse_t results;
	float2x2_sse_t lhs;
	float2x2_sse_t rhs;
	lhs.m[0][0] = _mm_load_ps( a00 );
	lhs.m[0][1] = _mm_load_ps( a01 );
	lhs.m[1][0] = _mm_load_ps( a10 );
	lhs.m[1][1] = _mm_load_ps( a11 );

	rhs.m[0][0] = _mm_load_ps( b00 );
	rhs.m[0][1] = _mm_load_ps( b01 );
	rhs.m[1][0] = _mm_load_ps( b10 );
	rhs.m[1][1] = _mm_load_ps( b11 );

	cdivm_sse( &lhs, &rhs, &results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results.m[0][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 6.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[0][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 6.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 6.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][0] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 3.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 3.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 3.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 3.000000f ) );

	_mm_store_ps( arithmeticResults, results.m[1][1] );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[0], 3.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[1], 3.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[2], 3.000000f ) );
	TEMPER_CHECK_TRUE( floateq( arithmeticResults[3], 3.000000f ) );

}

TEMPER_TEST( TestMultiplyMatrix_Scalar_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer = g_matrixMulAnswer_float2x2;

	float2x2 a = g_matrixMulLHS_float2x2;
	float2x2 b = g_matrixMulRHS_float2x2;
	float2x2 c = a * b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestMultiplyMatrix_SSE_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float a00[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	float b00[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] =	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };

	float2x2_sse_t results;
	float2x2_sse_t lhs;
	float2x2_sse_t rhs;
	lhs.m[0][0] = _mm_load_ps( a00 );
	lhs.m[0][1] = _mm_load_ps( a01 );
	lhs.m[1][0] = _mm_load_ps( a10 );
	lhs.m[1][1] = _mm_load_ps( a11 );

	rhs.m[0][0] = _mm_load_ps( b00 );
	rhs.m[0][1] = _mm_load_ps( b01 );
	rhs.m[1][0] = _mm_load_ps( b10 );
	rhs.m[1][1] = _mm_load_ps( b11 );

	mul_sse( &lhs, &rhs, &results );

	float mulResults[4];

	_mm_store_ps( mulResults, results.m[0][0] );
	TEMPER_CHECK_TRUE( floateq( mulResults[0], g_matrixMulAnswer_float2x2.rows[0].x ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[1], g_matrixMulAnswer_float2x2.rows[0].x ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[2], g_matrixMulAnswer_float2x2.rows[0].x ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[3], g_matrixMulAnswer_float2x2.rows[0].x ) );

	_mm_store_ps( mulResults, results.m[0][1] );
	TEMPER_CHECK_TRUE( floateq( mulResults[0], g_matrixMulAnswer_float2x2.rows[0].y ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[1], g_matrixMulAnswer_float2x2.rows[0].y ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[2], g_matrixMulAnswer_float2x2.rows[0].y ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[3], g_matrixMulAnswer_float2x2.rows[0].y ) );

	_mm_store_ps( mulResults, results.m[1][0] );
	TEMPER_CHECK_TRUE( floateq( mulResults[0], g_matrixMulAnswer_float2x2.rows[1].x ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[1], g_matrixMulAnswer_float2x2.rows[1].x ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[2], g_matrixMulAnswer_float2x2.rows[1].x ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[3], g_matrixMulAnswer_float2x2.rows[1].x ) );

	_mm_store_ps( mulResults, results.m[1][1] );
	TEMPER_CHECK_TRUE( floateq( mulResults[0], g_matrixMulAnswer_float2x2.rows[1].y ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[1], g_matrixMulAnswer_float2x2.rows[1].y ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[2], g_matrixMulAnswer_float2x2.rows[1].y ) );
	TEMPER_CHECK_TRUE( floateq( mulResults[3], g_matrixMulAnswer_float2x2.rows[1].y ) );

}

TEMPER_TEST( TestMultiplyVector_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 answerVec = { 4.000000f, 16.000000f };

	float2x2 a = float2x2(
		1.000000f, 2.000000f,
		5.000000f, 6.000000f
	);
	float2 b = { 2.000000f, 1.000000f };
	float2 c = a * b;

	TEMPER_CHECK_TRUE( c == answerVec );
}

TEMPER_TEST( TestDivideMatrix_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answer = float2x2( 		1.000000f, 0.0f,
		0.0f, 1.000000f
 );

	float2x2 a = float2x2( 		6.000000f, 2.000000f,
		2.000000f, 7.000000f
 );
	float2x2 b = float2x2( 		6.000000f, 2.000000f,
		2.000000f, 7.000000f
 );
	float2x2 c = a / b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestRelational_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 mat0 =
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	};

	float2x2 mat1 =
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	};

	float2x2 mat2 =
	{
		3.000000f, 3.000000f,
		3.000000f, 3.000000f
	};

	float2x2 mat3 =
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	};

	bool2x2 test0  = mat0 <= mat0;
	bool2x2 test1  = mat0 >= mat0;
	bool2x2 test2  = mat0 <  mat1;
	bool2x2 test3  = mat0 <  mat2;
	bool2x2 test4  = mat0 <  mat3;

	bool2x2 test5  = mat1 >  mat0;
	bool2x2 test6  = mat1 <= mat1;
	bool2x2 test7  = mat1 >= mat1;
	bool2x2 test8  = mat1 <  mat2;
	bool2x2 test9  = mat1 <  mat3;

	bool2x2 test10 = mat2 >  mat0;
	bool2x2 test11 = mat2 >  mat1;
	bool2x2 test12 = mat2 <= mat2;
	bool2x2 test13 = mat2 >= mat2;
	bool2x2 test14 = mat2 <  mat3;

	bool2x2 test15 = mat3 >  mat0;
	bool2x2 test16 = mat3 >  mat1;
	bool2x2 test17 = mat3 >  mat2;
	bool2x2 test18 = mat3 <= mat3;
	bool2x2 test19 = mat3 >= mat3;

	TEMPER_CHECK_TRUE( all( test0 ) );
	TEMPER_CHECK_TRUE( all( test1 ) );
	TEMPER_CHECK_TRUE( all( test2 ) );
	TEMPER_CHECK_TRUE( all( test3 ) );
	TEMPER_CHECK_TRUE( all( test4 ) );

	TEMPER_CHECK_TRUE( all( test5 ) );
	TEMPER_CHECK_TRUE( all( test6 ) );
	TEMPER_CHECK_TRUE( all( test7 ) );
	TEMPER_CHECK_TRUE( all( test8 ) );
	TEMPER_CHECK_TRUE( all( test9 ) );

	TEMPER_CHECK_TRUE( all( test10 ) );
	TEMPER_CHECK_TRUE( all( test11 ) );
	TEMPER_CHECK_TRUE( all( test12 ) );
	TEMPER_CHECK_TRUE( all( test13 ) );
	TEMPER_CHECK_TRUE( all( test14 ) );

	TEMPER_CHECK_TRUE( all( test15 ) );
	TEMPER_CHECK_TRUE( all( test16 ) );
	TEMPER_CHECK_TRUE( all( test17 ) );
	TEMPER_CHECK_TRUE( all( test18 ) );
	TEMPER_CHECK_TRUE( all( test19 ) );
}

TEMPER_PARAMETRIC( TestNegate_float2x2, TEMPER_FLAG_SHOULD_RUN, const float2x2& vec )
{
	float2x2 negated = -vec;
	TEMPER_CHECK_TRUE( floateq( negated.rows[0].x, -vec.rows[0].x ) );
	TEMPER_CHECK_TRUE( floateq( negated.rows[0].y, -vec.rows[0].y ) );
	TEMPER_CHECK_TRUE( floateq( negated.rows[1].x, -vec.rows[1].x ) );
	TEMPER_CHECK_TRUE( floateq( negated.rows[1].y, -vec.rows[1].y ) );
}

const float2x2 g_testNegate_zero_float2x2 =
{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float2x2, g_testNegate_zero_float2x2 );

const float2x2 g_testNegate_one_float2x2 =
{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float2x2, g_testNegate_one_float2x2 );

const float2x2 g_testNegate_minusTwo_float2x2 =
{
		-2.000000f, -2.000000f,
		-2.000000f, -2.000000f
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float2x2, g_testNegate_minusTwo_float2x2 );

const float2x2 g_testNegate_alternatingValues_float2x2 =
{
		0.000000f, -0.000000f,
		-5.000000f, 6.000000f
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float2x2, g_testNegate_alternatingValues_float2x2 );

TEMPER_TEST( TestIdentity_Scalar_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 id;
	id[0] = float2( 1.000000f, 0.000000f );
	id[1] = float2( 0.000000f, 1.000000f );

	float2x2 mat;

	identity( mat );
	TEMPER_CHECK_TRUE( mat == id );
}

TEMPER_TEST( TestIdentity_SSE_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2_sse_t matSSE;
	identity_sse( &matSSE );

	float identityResults[4];
	_mm_store_ps( identityResults, matSSE.m[0][0] );
	TEMPER_CHECK_TRUE( identityResults[0] == 1.0f );
	TEMPER_CHECK_TRUE( identityResults[1] == 1.0f );
	TEMPER_CHECK_TRUE( identityResults[2] == 1.0f );
	TEMPER_CHECK_TRUE( identityResults[3] == 1.0f );

	_mm_store_ps( identityResults, matSSE.m[0][1] );
	TEMPER_CHECK_TRUE( identityResults[0] == 0.0f );
	TEMPER_CHECK_TRUE( identityResults[1] == 0.0f );
	TEMPER_CHECK_TRUE( identityResults[2] == 0.0f );
	TEMPER_CHECK_TRUE( identityResults[3] == 0.0f );

	_mm_store_ps( identityResults, matSSE.m[1][0] );
	TEMPER_CHECK_TRUE( identityResults[0] == 0.0f );
	TEMPER_CHECK_TRUE( identityResults[1] == 0.0f );
	TEMPER_CHECK_TRUE( identityResults[2] == 0.0f );
	TEMPER_CHECK_TRUE( identityResults[3] == 0.0f );

	_mm_store_ps( identityResults, matSSE.m[1][1] );
	TEMPER_CHECK_TRUE( identityResults[0] == 1.0f );
	TEMPER_CHECK_TRUE( identityResults[1] == 1.0f );
	TEMPER_CHECK_TRUE( identityResults[2] == 1.0f );
	TEMPER_CHECK_TRUE( identityResults[3] == 1.0f );

}

TEMPER_TEST( TestTranspose_Scalar_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 answerTransposed = float2x2(
		0.000000f, 4.000000f,
		1.000000f, 5.000000f
	);

	float2x2 mat = float2x2(
		0.000000f, 1.000000f,
		4.000000f, 5.000000f
	);
	float2x2 trans = transpose( mat );

	TEMPER_CHECK_TRUE( trans == answerTransposed );
}

TEMPER_TEST( TestTranspose_SSE_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2_sse_t results;
	float2x2_sse_t in;

	// row 0
	in.m[0][0] = _mm_set1_ps( 0.0f );
	in.m[0][1] = _mm_set1_ps( 1.0f );

	// row 1
	in.m[1][0] = _mm_set1_ps( 4.0f );
	in.m[1][1] = _mm_set1_ps( 5.0f );

	transpose_sse( &in, &results );

	float transposeResults[4];
	_mm_store_ps( transposeResults, results.m[0][0] );
	TEMPER_CHECK_TRUE( floateq( transposeResults[0], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[1], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[2], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[3], 0.000000f ) );

	_mm_store_ps( transposeResults, results.m[0][1] );
	TEMPER_CHECK_TRUE( floateq( transposeResults[0], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[1], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[2], 4.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[3], 4.000000f ) );

	_mm_store_ps( transposeResults, results.m[1][0] );
	TEMPER_CHECK_TRUE( floateq( transposeResults[0], 1.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[1], 1.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[2], 1.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[3], 1.000000f ) );

	_mm_store_ps( transposeResults, results.m[1][1] );
	TEMPER_CHECK_TRUE( floateq( transposeResults[0], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[1], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[2], 5.000000f ) );
	TEMPER_CHECK_TRUE( floateq( transposeResults[3], 5.000000f ) );

}

TEMPER_TEST( TestDeterminant_Scalar_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 mat = float2x2(
		6.000000f, 2.000000f,
		2.000000f, 6.000000f
	);

	float det = determinant( mat );

	TEMPER_CHECK_TRUE( floateq( det, 32.0f ) );
}

TEMPER_TEST( TestDeterminant_SSE_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float m00[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float m01[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float m10[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float m11[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	__m128 results;
	float2x2_sse_t in;
	in.m[0][0] = _mm_load_ps( m00 );
	in.m[0][1] = _mm_load_ps( m01 );
	in.m[1][0] = _mm_load_ps( m10 );
	in.m[1][1] = _mm_load_ps( m11 );

	determinant_sse( &in, &results );

	float determinantResults[4];
	_mm_store_ps( determinantResults, results );
	TEMPER_CHECK_TRUE( floateq( determinantResults[0], 32.0f ) );
	TEMPER_CHECK_TRUE( floateq( determinantResults[1], 32.0f ) );
	TEMPER_CHECK_TRUE( floateq( determinantResults[2], 32.0f ) );
	TEMPER_CHECK_TRUE( floateq( determinantResults[3], 32.0f ) );
}

TEMPER_TEST( TestInverse_Scalar_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 id;
	identity( id );

	float2x2 mat = float2x2(
		2.000000f, 4.000000f,
		6.000000f, 8.000000f
	);
	float2x2 matInverse = inverse( mat );

	TEMPER_CHECK_TRUE( mat * matInverse == id );
}

TEMPER_TEST( TestInverse_SSE_float2x2, TEMPER_FLAG_SHOULD_RUN )
{
	float2x2 id;
	identity( id );

	float m00[4] =	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float m01[4] =	{ 4.000000f, 4.000000f, 4.000000f, 4.000000f };
	float m10[4] =	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float m11[4] =	{ 8.000000f, 8.000000f, 8.000000f, 8.000000f };

	float2x2_sse_t results;
	float2x2_sse_t inverted;
	float2x2_sse_t in;
	in.m[0][0] = _mm_load_ps( m00 );
	in.m[0][1] = _mm_load_ps( m01 );
	in.m[1][0] = _mm_load_ps( m10 );
	in.m[1][1] = _mm_load_ps( m11 );

	inverse_sse( &in, &inverted );

	mul_sse( &in, &inverted, &results );

	float inverseResults[4];

	_mm_store_ps( inverseResults, results.m[0][0] );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[0], id.rows[0].x, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[1], id.rows[0].x, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[2], id.rows[0].x, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[3], id.rows[0].x, 0.001000f ) );

	_mm_store_ps( inverseResults, results.m[0][1] );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[0], id.rows[0].y, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[1], id.rows[0].y, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[2], id.rows[0].y, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[3], id.rows[0].y, 0.001000f ) );

	_mm_store_ps( inverseResults, results.m[1][0] );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[0], id.rows[1].x, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[1], id.rows[1].x, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[2], id.rows[1].x, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[3], id.rows[1].x, 0.001000f ) );

	_mm_store_ps( inverseResults, results.m[1][1] );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[0], id.rows[1].y, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[1], id.rows[1].y, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[2], id.rows[1].y, 0.001000f ) );
	TEMPER_CHECK_TRUE( floateq_eps( inverseResults[3], id.rows[1].y, 0.001000f ) );

}

