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

#include "../../code/out/gen/hlml_functions_matrix_sse.h"
#include <temper/temper.h>

TEMPER_TEST( TestAssignment_float4x4 )
{
	float4x4 mat;

	// fill single value
	mat = float4x4( 999.0f );
	TEMPER_EXPECT_TRUE( mat[0] == float4( 999.000000f, 0.000000f, 0.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 0.000000f, 999.000000f, 0.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float4( 0.000000f, 0.000000f, 999.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float4( 0.000000f, 0.000000f, 0.000000f, 999.000000f ) );

	// row filling
	mat = float4x4(
		float4( 0.000000f, 1.000000f, 2.000000f, 3.000000f ),
		float4( 4.000000f, 5.000000f, 6.000000f, 7.000000f ),
		float4( 8.000000f, 9.000000f, 10.000000f, 11.000000f ),
		float4( 12.000000f, 13.000000f, 14.000000f, 15.000000f )
	);
	TEMPER_EXPECT_TRUE( mat[0] == float4( 0.000000f, 1.000000f, 2.000000f, 3.000000f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 4.000000f, 5.000000f, 6.000000f, 7.000000f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float4( 8.000000f, 9.000000f, 10.000000f, 11.000000f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float4( 12.000000f, 13.000000f, 14.000000f, 15.000000f ) );

	// all values filled
	mat = float4x4(
		16.000000f, 15.000000f, 14.000000f, 13.000000f,
		12.000000f, 11.000000f, 10.000000f, 9.000000f,
		8.000000f, 7.000000f, 6.000000f, 5.000000f,
		4.000000f, 3.000000f, 2.000000f, 1.000000f
	);
	TEMPER_EXPECT_TRUE( mat[0] == float4( 16.000000f, 15.000000f, 14.000000f, 13.000000f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 12.000000f, 11.000000f, 10.000000f, 9.000000f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float4( 8.000000f, 7.000000f, 6.000000f, 5.000000f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float4( 4.000000f, 3.000000f, 2.000000f, 1.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticAddition_float4x4 )
{
	// scalar
	float4x4 answer = float4x4(
		7.000000f, 7.000000f, 7.000000f, 7.000000f,
		8.000000f, 8.000000f, 8.000000f, 8.000000f,
		15.000000f, 15.000000f, 15.000000f, 15.000000f,
		24.000000f, 24.000000f, 24.000000f, 24.000000f
	);

	float4x4 a = float4x4(
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f, 18.000000f
	);
	float4x4 b = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f
	);
	float4x4 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	// SSE
	float a00[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a02[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a03[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a12[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a13[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a20[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a21[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a22[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a23[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a30[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a31[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a32[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a33[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };

	float b00[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b02[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b03[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b12[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b13[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b20[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b21[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b22[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b23[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b30[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b31[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b32[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b33[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	__m128 results[4][4];
	sse_input_add_float4x4_t in;
	in.lhs[0][0] = _mm_load_ps( a00 );
	in.lhs[0][1] = _mm_load_ps( a01 );
	in.lhs[0][2] = _mm_load_ps( a02 );
	in.lhs[0][3] = _mm_load_ps( a03 );
	in.lhs[1][0] = _mm_load_ps( a10 );
	in.lhs[1][1] = _mm_load_ps( a11 );
	in.lhs[1][2] = _mm_load_ps( a12 );
	in.lhs[1][3] = _mm_load_ps( a13 );
	in.lhs[2][0] = _mm_load_ps( a20 );
	in.lhs[2][1] = _mm_load_ps( a21 );
	in.lhs[2][2] = _mm_load_ps( a22 );
	in.lhs[2][3] = _mm_load_ps( a23 );
	in.lhs[3][0] = _mm_load_ps( a30 );
	in.lhs[3][1] = _mm_load_ps( a31 );
	in.lhs[3][2] = _mm_load_ps( a32 );
	in.lhs[3][3] = _mm_load_ps( a33 );

	in.rhs[0][0] = _mm_load_ps( b00 );
	in.rhs[0][1] = _mm_load_ps( b01 );
	in.rhs[0][2] = _mm_load_ps( b02 );
	in.rhs[0][3] = _mm_load_ps( b03 );
	in.rhs[1][0] = _mm_load_ps( b10 );
	in.rhs[1][1] = _mm_load_ps( b11 );
	in.rhs[1][2] = _mm_load_ps( b12 );
	in.rhs[1][3] = _mm_load_ps( b13 );
	in.rhs[2][0] = _mm_load_ps( b20 );
	in.rhs[2][1] = _mm_load_ps( b21 );
	in.rhs[2][2] = _mm_load_ps( b22 );
	in.rhs[2][3] = _mm_load_ps( b23 );
	in.rhs[3][0] = _mm_load_ps( b30 );
	in.rhs[3][1] = _mm_load_ps( b31 );
	in.rhs[3][2] = _mm_load_ps( b32 );
	in.rhs[3][3] = _mm_load_ps( b33 );

	comp_add_sse( &in, results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results[0][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][0] ) );

	_mm_store_ps( arithmeticResults, results[0][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][1] ) );

	_mm_store_ps( arithmeticResults, results[0][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][2] ) );

	_mm_store_ps( arithmeticResults, results[0][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][3] ) );

	_mm_store_ps( arithmeticResults, results[1][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][0] ) );

	_mm_store_ps( arithmeticResults, results[1][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][1] ) );

	_mm_store_ps( arithmeticResults, results[1][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][2] ) );

	_mm_store_ps( arithmeticResults, results[1][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][3] ) );

	_mm_store_ps( arithmeticResults, results[2][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][0] ) );

	_mm_store_ps( arithmeticResults, results[2][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][1] ) );

	_mm_store_ps( arithmeticResults, results[2][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][2] ) );

	_mm_store_ps( arithmeticResults, results[2][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][3] ) );

	_mm_store_ps( arithmeticResults, results[3][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][0] ) );

	_mm_store_ps( arithmeticResults, results[3][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][1] ) );

	_mm_store_ps( arithmeticResults, results[3][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][2] ) );

	_mm_store_ps( arithmeticResults, results[3][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][3] ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticSubtraction_float4x4 )
{
	// scalar
	float4x4 answer = float4x4(
		5.000000f, 5.000000f, 5.000000f, 5.000000f,
		4.000000f, 4.000000f, 4.000000f, 4.000000f,
		9.000000f, 9.000000f, 9.000000f, 9.000000f,
		12.000000f, 12.000000f, 12.000000f, 12.000000f
	);

	float4x4 a = float4x4(
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f, 18.000000f
	);
	float4x4 b = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f
	);
	float4x4 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	// SSE
	float a00[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a02[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a03[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a12[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a13[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a20[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a21[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a22[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a23[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a30[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a31[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a32[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a33[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };

	float b00[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b02[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b03[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b12[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b13[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b20[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b21[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b22[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b23[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b30[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b31[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b32[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b33[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	__m128 results[4][4];
	sse_input_sub_float4x4_t in;
	in.lhs[0][0] = _mm_load_ps( a00 );
	in.lhs[0][1] = _mm_load_ps( a01 );
	in.lhs[0][2] = _mm_load_ps( a02 );
	in.lhs[0][3] = _mm_load_ps( a03 );
	in.lhs[1][0] = _mm_load_ps( a10 );
	in.lhs[1][1] = _mm_load_ps( a11 );
	in.lhs[1][2] = _mm_load_ps( a12 );
	in.lhs[1][3] = _mm_load_ps( a13 );
	in.lhs[2][0] = _mm_load_ps( a20 );
	in.lhs[2][1] = _mm_load_ps( a21 );
	in.lhs[2][2] = _mm_load_ps( a22 );
	in.lhs[2][3] = _mm_load_ps( a23 );
	in.lhs[3][0] = _mm_load_ps( a30 );
	in.lhs[3][1] = _mm_load_ps( a31 );
	in.lhs[3][2] = _mm_load_ps( a32 );
	in.lhs[3][3] = _mm_load_ps( a33 );

	in.rhs[0][0] = _mm_load_ps( b00 );
	in.rhs[0][1] = _mm_load_ps( b01 );
	in.rhs[0][2] = _mm_load_ps( b02 );
	in.rhs[0][3] = _mm_load_ps( b03 );
	in.rhs[1][0] = _mm_load_ps( b10 );
	in.rhs[1][1] = _mm_load_ps( b11 );
	in.rhs[1][2] = _mm_load_ps( b12 );
	in.rhs[1][3] = _mm_load_ps( b13 );
	in.rhs[2][0] = _mm_load_ps( b20 );
	in.rhs[2][1] = _mm_load_ps( b21 );
	in.rhs[2][2] = _mm_load_ps( b22 );
	in.rhs[2][3] = _mm_load_ps( b23 );
	in.rhs[3][0] = _mm_load_ps( b30 );
	in.rhs[3][1] = _mm_load_ps( b31 );
	in.rhs[3][2] = _mm_load_ps( b32 );
	in.rhs[3][3] = _mm_load_ps( b33 );

	comp_sub_sse( &in, results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results[0][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][0] ) );

	_mm_store_ps( arithmeticResults, results[0][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][1] ) );

	_mm_store_ps( arithmeticResults, results[0][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][2] ) );

	_mm_store_ps( arithmeticResults, results[0][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][3] ) );

	_mm_store_ps( arithmeticResults, results[1][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][0] ) );

	_mm_store_ps( arithmeticResults, results[1][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][1] ) );

	_mm_store_ps( arithmeticResults, results[1][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][2] ) );

	_mm_store_ps( arithmeticResults, results[1][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][3] ) );

	_mm_store_ps( arithmeticResults, results[2][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][0] ) );

	_mm_store_ps( arithmeticResults, results[2][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][1] ) );

	_mm_store_ps( arithmeticResults, results[2][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][2] ) );

	_mm_store_ps( arithmeticResults, results[2][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][3] ) );

	_mm_store_ps( arithmeticResults, results[3][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][0] ) );

	_mm_store_ps( arithmeticResults, results[3][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][1] ) );

	_mm_store_ps( arithmeticResults, results[3][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][2] ) );

	_mm_store_ps( arithmeticResults, results[3][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][3] ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticMultiplication_float4x4 )
{
	// scalar
	float4x4 answer = float4x4(
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f, 12.000000f,
		36.000000f, 36.000000f, 36.000000f, 36.000000f,
		108.000000f, 108.000000f, 108.000000f, 108.000000f
	);

	float4x4 a = float4x4(
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f, 18.000000f
	);
	float4x4 b = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f
	);
	float4x4 c = comp_mul( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	// SSE
	float a00[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a02[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a03[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a12[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a13[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a20[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a21[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a22[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a23[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a30[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a31[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a32[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a33[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };

	float b00[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b02[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b03[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b12[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b13[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b20[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b21[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b22[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b23[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b30[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b31[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b32[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b33[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	__m128 results[4][4];
	sse_input_mul_float4x4_t in;
	in.lhs[0][0] = _mm_load_ps( a00 );
	in.lhs[0][1] = _mm_load_ps( a01 );
	in.lhs[0][2] = _mm_load_ps( a02 );
	in.lhs[0][3] = _mm_load_ps( a03 );
	in.lhs[1][0] = _mm_load_ps( a10 );
	in.lhs[1][1] = _mm_load_ps( a11 );
	in.lhs[1][2] = _mm_load_ps( a12 );
	in.lhs[1][3] = _mm_load_ps( a13 );
	in.lhs[2][0] = _mm_load_ps( a20 );
	in.lhs[2][1] = _mm_load_ps( a21 );
	in.lhs[2][2] = _mm_load_ps( a22 );
	in.lhs[2][3] = _mm_load_ps( a23 );
	in.lhs[3][0] = _mm_load_ps( a30 );
	in.lhs[3][1] = _mm_load_ps( a31 );
	in.lhs[3][2] = _mm_load_ps( a32 );
	in.lhs[3][3] = _mm_load_ps( a33 );

	in.rhs[0][0] = _mm_load_ps( b00 );
	in.rhs[0][1] = _mm_load_ps( b01 );
	in.rhs[0][2] = _mm_load_ps( b02 );
	in.rhs[0][3] = _mm_load_ps( b03 );
	in.rhs[1][0] = _mm_load_ps( b10 );
	in.rhs[1][1] = _mm_load_ps( b11 );
	in.rhs[1][2] = _mm_load_ps( b12 );
	in.rhs[1][3] = _mm_load_ps( b13 );
	in.rhs[2][0] = _mm_load_ps( b20 );
	in.rhs[2][1] = _mm_load_ps( b21 );
	in.rhs[2][2] = _mm_load_ps( b22 );
	in.rhs[2][3] = _mm_load_ps( b23 );
	in.rhs[3][0] = _mm_load_ps( b30 );
	in.rhs[3][1] = _mm_load_ps( b31 );
	in.rhs[3][2] = _mm_load_ps( b32 );
	in.rhs[3][3] = _mm_load_ps( b33 );

	comp_mul_sse( &in, results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results[0][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][0] ) );

	_mm_store_ps( arithmeticResults, results[0][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][1] ) );

	_mm_store_ps( arithmeticResults, results[0][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][2] ) );

	_mm_store_ps( arithmeticResults, results[0][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][3] ) );

	_mm_store_ps( arithmeticResults, results[1][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][0] ) );

	_mm_store_ps( arithmeticResults, results[1][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][1] ) );

	_mm_store_ps( arithmeticResults, results[1][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][2] ) );

	_mm_store_ps( arithmeticResults, results[1][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][3] ) );

	_mm_store_ps( arithmeticResults, results[2][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][0] ) );

	_mm_store_ps( arithmeticResults, results[2][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][1] ) );

	_mm_store_ps( arithmeticResults, results[2][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][2] ) );

	_mm_store_ps( arithmeticResults, results[2][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][3] ) );

	_mm_store_ps( arithmeticResults, results[3][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][0] ) );

	_mm_store_ps( arithmeticResults, results[3][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][1] ) );

	_mm_store_ps( arithmeticResults, results[3][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][2] ) );

	_mm_store_ps( arithmeticResults, results[3][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][3] ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmeticDivision_float4x4 )
{
	// scalar
	float4x4 answer = float4x4(
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		4.000000f, 4.000000f, 4.000000f, 4.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f
	);

	float4x4 a = float4x4(
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f, 18.000000f
	);
	float4x4 b = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f
	);
	float4x4 c = comp_div( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	// SSE
	float a00[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a01[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a02[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a03[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a10[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a11[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a12[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a13[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float a20[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a21[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a22[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a23[4] = 	{ 12.000000f, 12.000000f, 12.000000f, 12.000000f };
	float a30[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a31[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a32[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };
	float a33[4] = 	{ 18.000000f, 18.000000f, 18.000000f, 18.000000f };

	float b00[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b01[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b02[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b03[4] = 	{ 1.000000f, 1.000000f, 1.000000f, 1.000000f };
	float b10[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b11[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b12[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b13[4] = 	{ 2.000000f, 2.000000f, 2.000000f, 2.000000f };
	float b20[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b21[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b22[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b23[4] = 	{ 3.000000f, 3.000000f, 3.000000f, 3.000000f };
	float b30[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b31[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b32[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };
	float b33[4] = 	{ 6.000000f, 6.000000f, 6.000000f, 6.000000f };

	__m128 results[4][4];
	sse_input_div_float4x4_t in;
	in.lhs[0][0] = _mm_load_ps( a00 );
	in.lhs[0][1] = _mm_load_ps( a01 );
	in.lhs[0][2] = _mm_load_ps( a02 );
	in.lhs[0][3] = _mm_load_ps( a03 );
	in.lhs[1][0] = _mm_load_ps( a10 );
	in.lhs[1][1] = _mm_load_ps( a11 );
	in.lhs[1][2] = _mm_load_ps( a12 );
	in.lhs[1][3] = _mm_load_ps( a13 );
	in.lhs[2][0] = _mm_load_ps( a20 );
	in.lhs[2][1] = _mm_load_ps( a21 );
	in.lhs[2][2] = _mm_load_ps( a22 );
	in.lhs[2][3] = _mm_load_ps( a23 );
	in.lhs[3][0] = _mm_load_ps( a30 );
	in.lhs[3][1] = _mm_load_ps( a31 );
	in.lhs[3][2] = _mm_load_ps( a32 );
	in.lhs[3][3] = _mm_load_ps( a33 );

	in.rhs[0][0] = _mm_load_ps( b00 );
	in.rhs[0][1] = _mm_load_ps( b01 );
	in.rhs[0][2] = _mm_load_ps( b02 );
	in.rhs[0][3] = _mm_load_ps( b03 );
	in.rhs[1][0] = _mm_load_ps( b10 );
	in.rhs[1][1] = _mm_load_ps( b11 );
	in.rhs[1][2] = _mm_load_ps( b12 );
	in.rhs[1][3] = _mm_load_ps( b13 );
	in.rhs[2][0] = _mm_load_ps( b20 );
	in.rhs[2][1] = _mm_load_ps( b21 );
	in.rhs[2][2] = _mm_load_ps( b22 );
	in.rhs[2][3] = _mm_load_ps( b23 );
	in.rhs[3][0] = _mm_load_ps( b30 );
	in.rhs[3][1] = _mm_load_ps( b31 );
	in.rhs[3][2] = _mm_load_ps( b32 );
	in.rhs[3][3] = _mm_load_ps( b33 );

	comp_div_sse( &in, results );

	float arithmeticResults[4];

	_mm_store_ps( arithmeticResults, results[0][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][0] ) );

	_mm_store_ps( arithmeticResults, results[0][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][1] ) );

	_mm_store_ps( arithmeticResults, results[0][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][2] ) );

	_mm_store_ps( arithmeticResults, results[0][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[0][3] ) );

	_mm_store_ps( arithmeticResults, results[1][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][0] ) );

	_mm_store_ps( arithmeticResults, results[1][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][1] ) );

	_mm_store_ps( arithmeticResults, results[1][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][2] ) );

	_mm_store_ps( arithmeticResults, results[1][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[1][3] ) );

	_mm_store_ps( arithmeticResults, results[2][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][0] ) );

	_mm_store_ps( arithmeticResults, results[2][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][1] ) );

	_mm_store_ps( arithmeticResults, results[2][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][2] ) );

	_mm_store_ps( arithmeticResults, results[2][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[2][3] ) );

	_mm_store_ps( arithmeticResults, results[3][0] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][0] ) );

	_mm_store_ps( arithmeticResults, results[3][1] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][1] ) );

	_mm_store_ps( arithmeticResults, results[3][2] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][2] ) );

	_mm_store_ps( arithmeticResults, results[3][3] );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[0], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[1], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[2], answer[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( arithmeticResults[3], answer[3][3] ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestMultiplyMatrix_float4x4 )
{
	// scalar
	float4x4 answer = float4x4(
		72.000000f, 72.000000f, 72.000000f, 72.000000f,
		72.000000f, 72.000000f, 72.000000f, 72.000000f,
		144.000000f, 144.000000f, 144.000000f, 144.000000f,
		216.000000f, 216.000000f, 216.000000f, 216.000000f
	);

	float4x4 a = float4x4(
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f, 18.000000f
	);
	float4x4 b = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f, 6.000000f
	);
	float4x4 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestMultiplyVector_float4x4 )
{
	float4 answerVec = float4( 28.000000f, 68.000000f, 108.000000f, 148.000000f );

	float4x4 a = float4x4(
		1.000000f, 2.000000f, 3.000000f, 4.000000f,
		5.000000f, 6.000000f, 7.000000f, 8.000000f,
		9.000000f, 10.000000f, 11.000000f, 12.000000f,
		13.000000f, 14.000000f, 15.000000f, 16.000000f
	);
	float4 b = float4( 2.000000f, 1.000000f, 4.000000f, 3.000000f );
	float4 c = a * b;

	TEMPER_EXPECT_TRUE( c == answerVec );

	TEMPER_PASS();
}

TEMPER_TEST( TestDivideMatrix_float4x4 )
{
	// scalar
	float4x4 answer = float4x4(
		1.000000f, 0.0f, 0.0f, 0.0f,
		0.0f, 1.000000f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.000000f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.000000f
	);

	float4x4 a = float4x4(
		6.000000f, 2.000000f, 3.000000f, 4.000000f,
		2.000000f, 7.000000f, 5.000000f, 3.000000f,
		3.000000f, 5.000000f, 7.000000f, 2.000000f,
		4.000000f, 3.000000f, 2.000000f, 6.000000f
	);
	float4x4 b = float4x4(
		6.000000f, 2.000000f, 3.000000f, 4.000000f,
		2.000000f, 7.000000f, 5.000000f, 3.000000f,
		3.000000f, 5.000000f, 7.000000f, 2.000000f,
		4.000000f, 3.000000f, 2.000000f, 6.000000f
	);
	float4x4 c = a / b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_float4x4 )
{
	float4x4 mat;

	// prefix
	mat = float4x4(
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f
	) );

	// postfix
	mat = float4x4(
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_float4x4 )
{
	float4x4 mat;

	// prefix
	mat = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == float4x4(
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f
	) );

	// postfix
	mat = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == float4x4(
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 0.000000f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_float4x4 )
{
	bool4x4 allTrue = bool4x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	);

	float4x4 mat0 = float4x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f, 1.000000f
	);
	float4x4 mat1 = float4x4(
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f
	);
	float4x4 mat2 = float4x4(
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f
	);
	float4x4 mat3 = float4x4(
		4.000000f, 4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f, 4.000000f
	);

	bool4x4 test0  = mat0 <= mat0;
	bool4x4 test1  = mat0 >= mat0;
	bool4x4 test2  = mat0 <  mat1;
	bool4x4 test3  = mat0 <  mat2;
	bool4x4 test4  = mat0 <  mat3;

	bool4x4 test5  = mat1 >  mat0;
	bool4x4 test6  = mat1 <= mat1;
	bool4x4 test7  = mat1 >= mat1;
	bool4x4 test8  = mat1 <  mat2;
	bool4x4 test9  = mat1 <  mat3;

	bool4x4 test10 = mat2 >  mat0;
	bool4x4 test11 = mat2 >  mat1;
	bool4x4 test12 = mat2 <= mat2;
	bool4x4 test13 = mat2 >= mat2;
	bool4x4 test14 = mat2 <  mat3;

	bool4x4 test15 = mat3 >  mat0;
	bool4x4 test16 = mat3 >  mat1;
	bool4x4 test17 = mat3 >  mat2;
	bool4x4 test18 = mat3 <= mat3;
	bool4x4 test19 = mat3 >= mat3;

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

TEMPER_TEST( TestArray_float4x4 )
{
	float4x4 mat;

	TEMPER_EXPECT_TRUE( mat[0] == float4( 1.0f, 0.0f, 0.0f, 0.0f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float4( 0.0f, 1.0f, 0.0f, 0.0f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float4( 0.0f, 0.0f, 1.0f, 0.0f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float4( 0.0f, 0.0f, 0.0f, 1.0f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_float4x4 )
{
	// scalar
	float4x4 id = float4x4(
		1.000000f, 0.0f, 0.0f, 0.0f,
		0.0f, 1.000000f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.000000f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.000000f
	);

	float4x4 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_float4x4 )
{
	// scalar
	float4x4 mat = float4x4(
		0.000000f, 1.000000f, 2.000000f, 3.000000f,
		4.000000f, 5.000000f, 6.000000f, 7.000000f,
		8.000000f, 9.000000f, 10.000000f, 11.000000f,
		12.000000f, 13.000000f, 14.000000f, 15.000000f
	);
	float4x4 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == float4x4(
		0.000000f, 4.000000f, 8.000000f, 12.000000f,
		1.000000f, 5.000000f, 9.000000f, 13.000000f,
		2.000000f, 6.000000f, 10.000000f, 14.000000f,
		3.000000f, 7.000000f, 11.000000f, 15.000000f
	) );

	// SSE
	__m128 results[4][4];
	sse_input_transpose_float4x4_t in;

	// row 0
	in.m[0][0] = _mm_set1_ps( 0.0f );
	in.m[0][1] = _mm_set1_ps( 1.0f );
	in.m[0][2] = _mm_set1_ps( 2.0f );
	in.m[0][3] = _mm_set1_ps( 3.0f );

	// row 1
	in.m[1][0] = _mm_set1_ps( 4.0f );
	in.m[1][1] = _mm_set1_ps( 5.0f );
	in.m[1][2] = _mm_set1_ps( 6.0f );
	in.m[1][3] = _mm_set1_ps( 7.0f );

	// row 2
	in.m[2][0] = _mm_set1_ps( 8.0f );
	in.m[2][1] = _mm_set1_ps( 9.0f );
	in.m[2][2] = _mm_set1_ps( 10.0f );
	in.m[2][3] = _mm_set1_ps( 11.0f );

	// row 3
	in.m[3][0] = _mm_set1_ps( 12.0f );
	in.m[3][1] = _mm_set1_ps( 13.0f );
	in.m[3][2] = _mm_set1_ps( 14.0f );
	in.m[3][3] = _mm_set1_ps( 15.0f );

	transpose_sse( &in, results );

	float transposeResults[4];
	_mm_store_ps( transposeResults, results[0][0] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[0][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[0][0] ) );

	_mm_store_ps( transposeResults, results[0][1] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[0][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[0][1] ) );

	_mm_store_ps( transposeResults, results[0][2] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[0][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[0][2] ) );

	_mm_store_ps( transposeResults, results[0][3] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[0][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[0][3] ) );

	_mm_store_ps( transposeResults, results[1][0] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[1][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[1][0] ) );

	_mm_store_ps( transposeResults, results[1][1] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[1][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[1][1] ) );

	_mm_store_ps( transposeResults, results[1][2] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[1][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[1][2] ) );

	_mm_store_ps( transposeResults, results[1][3] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[1][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[1][3] ) );

	_mm_store_ps( transposeResults, results[2][0] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[2][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[2][0] ) );

	_mm_store_ps( transposeResults, results[2][1] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[2][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[2][1] ) );

	_mm_store_ps( transposeResults, results[2][2] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[2][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[2][2] ) );

	_mm_store_ps( transposeResults, results[2][3] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[2][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[2][3] ) );

	_mm_store_ps( transposeResults, results[3][0] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[3][0] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[3][0] ) );

	_mm_store_ps( transposeResults, results[3][1] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[3][1] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[3][1] ) );

	_mm_store_ps( transposeResults, results[3][2] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[3][2] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[3][2] ) );

	_mm_store_ps( transposeResults, results[3][3] );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[0], trans[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[1], trans[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[2], trans[3][3] ) );
	TEMPER_EXPECT_TRUE( floateq( transposeResults[3], trans[3][3] ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestInverse_float4x4 )
{
	float4x4 identityMatrix;

	float4x4 mat = float4x4(
		6.000000f, 2.000000f, 3.000000f, 4.000000f,
		2.000000f, 7.000000f, 5.000000f, 3.000000f,
		3.000000f, 5.000000f, 7.000000f, 2.000000f,
		4.000000f, 3.000000f, 2.000000f, 6.000000f
	);
	float4x4 matInverse = inverse( mat );

	TEMPER_EXPECT_TRUE( mat * matInverse == identityMatrix );

	TEMPER_PASS();
}

TEMPER_TEST( TestDeterminant_float4x4 )
{
	float4x4 mat = float4x4(
		6.000000f, 2.000000f, 3.000000f, 4.000000f,
		2.000000f, 7.000000f, 5.000000f, 3.000000f,
		3.000000f, 5.000000f, 7.000000f, 2.000000f,
		4.000000f, 3.000000f, 2.000000f, 6.000000f
	);
	float det = determinant( mat );

	TEMPER_EXPECT_TRUE( floateq( det, 285.0f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranslate_float4x4 )
{
	float4x4 mat;
	float4x4 translated = float4x4(
		1.0f, 0.0f, 0.0f, 2.0f,
		0.0f, 1.0f, 0.0f, 3.0f,
		0.0f, 0.0f, 1.0f, 4.0f,
		0.0f, 0.0f, 0.0f, 1.0f
	);

	float3 translation = float3( 2.0f, 3.0f, 4.0f );
	mat = translate( mat, translation );

	TEMPER_EXPECT_TRUE( mat == translated );

	TEMPER_PASS();
}

TEMPER_TEST( TestRotate_float4x4 )
{
	float4x4 mat;
	float4x4 yaw = rotate( mat, radians( 45.0f ), float3( 0.000000f, 1.000000f, 0.000000f ) );
	float4x4 pitch = rotate( mat, radians( 45.0f ), float3( 1.000000f, 0.000000f, 0.000000f ) );
	float4x4 roll = rotate( mat, radians( 45.0f ), float3( 0.000000f, 0.000000f, 1.000000f ) );

	float4x4 answerYaw = float4x4(
		0.707107f, 0.000000f, 0.707107f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f, 0.000000f,
		-0.707107f, 0.000000f, 0.707107f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);
	float4x4 answerPitch = float4x4(
		1.000000f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.707107f, -0.707107f, 0.000000f,
		0.000000f, 0.707107f, 0.707107f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);
	float4x4 answerRoll = float4x4(
		0.707107f, -0.707107f, 0.000000f, 0.000000f,
		0.707107f, 0.707107f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 1.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);

	TEMPER_EXPECT_TRUE( yaw == answerYaw );
	TEMPER_EXPECT_TRUE( pitch == answerPitch );
	TEMPER_EXPECT_TRUE( roll == answerRoll );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_float4x4 )
{
	float4x4 mat;
	float4x4 scaled = scale( mat, float3( 2.000000f, 2.000000f, 2.000000f ) );

	TEMPER_EXPECT_TRUE( scaled == float4x4(
		2.000000f, 0.0f, 0.0f, 0.0f,
		0.0f, 2.000000f, 0.0f, 0.0f,
		0.0f, 0.0f, 2.000000f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.000000f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestOrtho_float4x4 )
{
	float4x4 answerOrtho_LH_ZO = float4x4(
		0.112500f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, -0.200000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.009901f, 0.009901f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);
	float4x4 answerOrtho_LH_NO = float4x4(
		0.112500f, 0.000000f, 0.000000f, -0.000000f,
		0.000000f, -0.200000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.019802f, -0.980198f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);
	float4x4 answerOrtho_RH_ZO = float4x4(
		0.112500f, 0.000000f, 0.000000f, -0.000000f,
		0.000000f, -0.200000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, -0.009901f, 0.009901f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);
	float4x4 answerOrtho_RH_NO = float4x4(
		0.112500f, 0.000000f, 0.000000f, -0.000000f,
		0.000000f, -0.200000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, -0.019802f, -0.980198f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);

	float width     = 1280.0f;
	float height    = 720.0f;
	float aspect    = width / height;
	float orthoSize = 5.0f;

	float left   = -aspect * orthoSize;
	float right  =  aspect * orthoSize;
	float top    = -orthoSize;
	float bottom =  orthoSize;

	float4x4 mat_LH_ZO = ortho_lh_zo( left, right, top, bottom, -1.0f, 100.0f );
	float4x4 mat_LH_NO = ortho_lh_no( left, right, top, bottom, -1.0f, 100.0f );
	float4x4 mat_RH_ZO = ortho_rh_zo( left, right, top, bottom, -1.0f, 100.0f );
	float4x4 mat_RH_NO = ortho_rh_no( left, right, top, bottom, -1.0f, 100.0f );

	TEMPER_EXPECT_TRUE( mat_LH_ZO == answerOrtho_LH_ZO );
	TEMPER_EXPECT_TRUE( mat_LH_NO == answerOrtho_LH_NO );
	TEMPER_EXPECT_TRUE( mat_RH_ZO == answerOrtho_RH_ZO );
	TEMPER_EXPECT_TRUE( mat_RH_NO == answerOrtho_RH_NO );

	TEMPER_PASS();
}

TEMPER_TEST( TestPerspective_float4x4 )
{
	float4x4 answerPerspective_LH_ZO = float4x4(
		0.347270f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.617370f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 1.001001f, -0.100100f,
		0.000000f, 0.000000f, 1.000000f, 0.000000f
	);
	float4x4 answerPerspective_LH_NO = float4x4(
		0.347270f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.617370f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 1.002002f, -0.200200f,
		0.000000f, 0.000000f, 1.000000f, 0.000000f
	);
	float4x4 answerPerspective_RH_ZO = float4x4(
		0.347270f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.617370f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, -1.001001f, -0.100100f,
		0.000000f, 0.000000f, -1.000000f, 0.000000f
	);
	float4x4 answerPerspective_RH_NO = float4x4(
		0.347270f, 0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.617370f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, -1.002002f, -0.200200f,
		0.000000f, 0.000000f, -1.000000f, 0.000000f
	);

	float aspect = 1280.0f / 720.0f;
	float4x4 mat_LH_ZO = perspective_lh_zo( 90.0f, aspect, 0.1f, 100.0f );
	float4x4 mat_LH_NO = perspective_lh_no( 90.0f, aspect, 0.1f, 100.0f );
	float4x4 mat_RH_ZO = perspective_rh_zo( 90.0f, aspect, 0.1f, 100.0f );
	float4x4 mat_RH_NO = perspective_rh_no( 90.0f, aspect, 0.1f, 100.0f );

	TEMPER_EXPECT_TRUE( mat_LH_ZO == answerPerspective_LH_ZO );
	TEMPER_EXPECT_TRUE( mat_LH_NO == answerPerspective_LH_NO );
	TEMPER_EXPECT_TRUE( mat_RH_ZO == answerPerspective_RH_ZO );
	TEMPER_EXPECT_TRUE( mat_RH_NO == answerPerspective_RH_NO );

	TEMPER_PASS();
}

TEMPER_TEST( TestLookAt_float4x4 )
{
	float4x4 answerLookAt_LH = float4x4(
		0.707107f, 0.000000f, -0.707107f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f, 0.000000f,
		0.707107f, 0.000000f, 0.707107f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);
	float4x4 answerLookAt_RH = float4x4(
		-0.707107f, 0.000000f, 0.707107f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f, 0.000000f,
		-0.707107f, 0.000000f, -0.707107f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f, 1.000000f
	);

	float3 currentPos = float3( 0.000000f, 0.000000f, 0.000000f );
	float3 targetPos = float3( 1.000000f, 0.000000f, 1.000000f );
	float3 up = float3( 0.000000f, 1.000000f, 0.000000f );

	float4x4 mat_LH = lookat_lh( currentPos, targetPos, up );
	float4x4 mat_RH = lookat_rh( currentPos, targetPos, up );

	TEMPER_EXPECT_TRUE( mat_LH == answerLookAt_LH );
	TEMPER_EXPECT_TRUE( mat_RH == answerLookAt_RH );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_float4x4 )
{
	TEMPER_RUN_TEST( TestAssignment_float4x4 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticAddition_float4x4 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticSubtraction_float4x4 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticMultiplication_float4x4 );
	TEMPER_RUN_TEST( TestComponentWiseArithmeticDivision_float4x4 );
	TEMPER_RUN_TEST( TestMultiplyMatrix_float4x4 );
	TEMPER_RUN_TEST( TestMultiplyVector_float4x4 );
	TEMPER_RUN_TEST( TestDivideMatrix_float4x4 );
	TEMPER_RUN_TEST( TestIncrement_float4x4 );
	TEMPER_RUN_TEST( TestDecrement_float4x4 );
	TEMPER_RUN_TEST( TestRelational_float4x4 );
	TEMPER_RUN_TEST( TestArray_float4x4 );
	TEMPER_RUN_TEST( TestIdentity_float4x4 );
	TEMPER_RUN_TEST( TestTranspose_float4x4 );
	TEMPER_RUN_TEST( TestInverse_float4x4 );
	TEMPER_RUN_TEST( TestDeterminant_float4x4 );
	TEMPER_RUN_TEST( TestTranslate_float4x4 );
	TEMPER_RUN_TEST( TestRotate_float4x4 );
	TEMPER_RUN_TEST( TestScale_float4x4 );
	TEMPER_RUN_TEST( TestOrtho_float4x4 );
	TEMPER_RUN_TEST( TestPerspective_float4x4 );
	TEMPER_RUN_TEST( TestLookAt_float4x4 );
}
