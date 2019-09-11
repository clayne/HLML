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

#include "../../code/out/gen/hlml_functions_vector.h"
#include "../../code/out/gen/hlml_functions_scalar_sse.h"
#include "../../code/out/gen/hlml_functions_vector_sse.h"

#include <temper/temper.h>

// also tests equality operators
TEMPER_TEST( TestAssignment_float3 )
{
	float3 a;

	a = float3( 1.0f );
	TEMPER_EXPECT_TRUE( a == float3( 1.0f ) );
	TEMPER_EXPECT_TRUE( a != float3( 0.000000f, 1.000000f, 2.000000f ) );

	a = float3( 0.000000f, 1.000000f, 2.000000f );
	TEMPER_EXPECT_TRUE( a == float3( 0.000000f, 1.000000f, 2.000000f ) );
	TEMPER_EXPECT_TRUE( a != float3( 1.0f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_float3 )
{
	float3 a = float3( 0.000000f, 1.000000f, 2.000000f );

	TEMPER_EXPECT_TRUE( a[0] == 0.0f );
	TEMPER_EXPECT_TRUE( a[1] == 1.0f );
	TEMPER_EXPECT_TRUE( a[2] == 2.0f );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_float3 )
{
	float3 a = float3( 6.0f );
	float3 b = float3( 2.000000f, 3.000000f, 4.000000f );

	float3 c = a + b;

	TEMPER_EXPECT_TRUE( c == float3( 8.000000f, 9.000000f, 10.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_float3 )
{
	float3 a = float3( 6.0f );
	float3 b = float3( 2.000000f, 3.000000f, 4.000000f );

	float3 c = a - b;

	TEMPER_EXPECT_TRUE( c == float3( 4.000000f, 3.000000f, 2.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_float3 )
{
	float3 a = float3( 6.0f );
	float3 b = float3( 2.000000f, 3.000000f, 4.000000f );

	float3 c = a * b;

	TEMPER_EXPECT_TRUE( c == float3( 12.000000f, 18.000000f, 24.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_float3 )
{
	float3 a = float3( 6.0f );
	float3 b = float3( 2.000000f, 2.000000f, 3.000000f );

	float3 c = a / b;

	TEMPER_EXPECT_TRUE( c == float3( 3.000000f, 3.000000f, 2.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_float3 )
{
	float3 vec;

	// prefix
	vec = float3( 0.000000f, 0.000000f, 0.000000f );
	++vec;
	TEMPER_EXPECT_TRUE( vec == float3( 1.000000f, 1.000000f, 1.000000f ) );

	// postfix
	vec = float3( 0.000000f, 0.000000f, 0.000000f );
	vec++;
	TEMPER_EXPECT_TRUE( vec == float3( 1.000000f, 1.000000f, 1.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_float3 )
{
	float3 vec;

	// prefix
	vec = float3( 1.000000f, 1.000000f, 1.000000f );
	--vec;
	TEMPER_EXPECT_TRUE( vec == float3( 0.000000f, 0.000000f, 0.000000f ) );

	// postfix
	vec = float3( 1.000000f, 1.000000f, 1.000000f );
	vec--;
	TEMPER_EXPECT_TRUE( vec == float3( 0.000000f, 0.000000f, 0.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_float3 )
{
	bool3 allTrue = bool3( true );

	float3 vec0 = float3( 0.0f );
	float3 vec1 = float3( 1.0f );
	float3 vec2 = float3( 2.0f );
	float3 vec3 = float3( 3.0f );

	bool3 test0  = vec0 <= vec0;
	bool3 test1  = vec0 >= vec0;
	bool3 test2  = vec0 <  vec1;
	bool3 test3  = vec0 <  vec2;
	bool3 test4  = vec0 <  vec3;

	bool3 test5  = vec1 >  vec0;
	bool3 test6  = vec1 <= vec1;
	bool3 test7  = vec1 >= vec1;
	bool3 test8  = vec1 <  vec2;
	bool3 test9  = vec1 <  vec3;

	bool3 test10 = vec2 >  vec0;
	bool3 test11 = vec2 >  vec1;
	bool3 test12 = vec2 <= vec2;
	bool3 test13 = vec2 >= vec2;
	bool3 test14 = vec2 <  vec3;

	bool3 test15 = vec3 >  vec0;
	bool3 test16 = vec3 >  vec1;
	bool3 test17 = vec3 >  vec2;
	bool3 test18 = vec3 <= vec3;
	bool3 test19 = vec3 >= vec3;

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

TEMPER_TEST( TestLength_float3 )
{
	// scalar
	float3 vec = float3( 2.0f );

	TEMPER_EXPECT_TRUE( floateq( lengthsqr( vec ), 12.0f ) );
	TEMPER_EXPECT_TRUE( floateq( length( vec ), 3.46410161514f ) );

	// SSE
	float components[3][4] =
	{
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f },
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f },
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f }
	};

	float3_sse_t in;

	in.comp[0] = _mm_load_ps( components[0] );
	in.comp[1] = _mm_load_ps( components[1] );
	in.comp[2] = _mm_load_ps( components[2] );

	__m128 results;

	// lengthsq
	lengthsq_sse( &in, &results );

	float squaredLengthResults[4];
	_mm_store_ps( squaredLengthResults, results );

	TEMPER_EXPECT_TRUE( floateq( squaredLengthResults[0], 12.0f ) );
	TEMPER_EXPECT_TRUE( floateq( squaredLengthResults[1], 12.0f ) );
	TEMPER_EXPECT_TRUE( floateq( squaredLengthResults[2], 12.0f ) );
	TEMPER_EXPECT_TRUE( floateq( squaredLengthResults[3], 12.0f ) );

	// length
	length_sse( &in, &results );

	float lengthResults[4];
	_mm_store_ps( lengthResults, results );

	TEMPER_EXPECT_TRUE( floateq( lengthResults[0], 3.46410161514f ) );
	TEMPER_EXPECT_TRUE( floateq( lengthResults[1], 3.46410161514f ) );
	TEMPER_EXPECT_TRUE( floateq( lengthResults[2], 3.46410161514f ) );
	TEMPER_EXPECT_TRUE( floateq( lengthResults[3], 3.46410161514f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestNormalized_float3 )
{
	// scalar
	float3 vec = float3( 5.000000f, 4.000000f, 3.000000f );
	vec = normalized( vec );

	TEMPER_EXPECT_TRUE( floateq( length( vec ), 1.0f ) );

	// SSE
	__m128 results;
	float3_sse_t in;
	float3_sse_t in_normalised;

	in.comp[0] = _mm_set1_ps( 5.0f );
	in.comp[1] = _mm_set1_ps( 4.0f );
	in.comp[2] = _mm_set1_ps( 3.0f );

	normalize_sse( &in, &in_normalised );
	length_sse( &in_normalised, &results );

	float normalizeResults[4];
	_mm_store_ps( normalizeResults, results );

	const float epsilon = 0.000100f;
	TEMPER_EXPECT_TRUE( floateq( normalizeResults[0], 1.0f, epsilon ) );
	TEMPER_EXPECT_TRUE( floateq( normalizeResults[1], 1.0f, epsilon ) );
	TEMPER_EXPECT_TRUE( floateq( normalizeResults[2], 1.0f, epsilon ) );
	TEMPER_EXPECT_TRUE( floateq( normalizeResults[3], 1.0f, epsilon ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDot_float3 )
{
	// scalar
	float3 a = float3( 0.000000f, 1.000000f, 0.000000f );
	float3 b = float3( 0.000000f, -1.000000f, 0.000000f );

	TEMPER_EXPECT_TRUE( floateq( dot( a, b ), -1.0f ) );

	// SIMD
	float componentsLHS[3][4] =
	{
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f },
		{ 1.000000f, 1.000000f, 1.000000f, 1.000000f },
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f }
	};

	float componentsRHS[3][4] =
	{
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f },
		{ -1.000000f, -1.000000f, -1.000000f, -1.000000f },
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f }
	};

	float3_sse_t lhs;
	lhs.comp[0] = _mm_load_ps( componentsLHS[0] );
	lhs.comp[1] = _mm_load_ps( componentsLHS[1] );
	lhs.comp[2] = _mm_load_ps( componentsLHS[2] );

	float3_sse_t rhs;
	rhs.comp[0] = _mm_load_ps( componentsRHS[0] );
	rhs.comp[1] = _mm_load_ps( componentsRHS[1] );
	rhs.comp[2] = _mm_load_ps( componentsRHS[2] );

	__m128 results;
	dot_sse( &lhs, &rhs, &results );

	float dotResults[4];
	_mm_store_ps( dotResults, results );

	TEMPER_EXPECT_TRUE( floateq( dotResults[0], -1.0f ) );
	TEMPER_EXPECT_TRUE( floateq( dotResults[1], -1.0f ) );
	TEMPER_EXPECT_TRUE( floateq( dotResults[2], -1.0f ) );
	TEMPER_EXPECT_TRUE( floateq( dotResults[3], -1.0f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestCross_float3 )
{
	float3 left = float3( -1.000000f, 0.000000f, 0.000000f );
	float3 forward = float3( 0.000000f, 0.000000f, 1.000000f );
	float3 up = float3( 0.000000f, 1.000000f, 0.000000f );

	TEMPER_EXPECT_TRUE( cross( left, forward ) == up );

	TEMPER_PASS();
}

TEMPER_TEST( TestAngle_float3 )
{
	// scalar
	float3 right = float3( 1.000000f, 0.000000f, 0.000000f );
	float3 up    = float3( 0.000000f, 1.000000f, 0.000000f );

	TEMPER_EXPECT_TRUE( floateq( angle( up, right ), 90.0f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDistance_float3 )
{
	float answerDistanceSqr = 105.0f;
	float answerDistance    = 10.246951f;

	float3 a = float3( 7.000000f, 4.000000f, 3.000000f );
	float3 b = float3( 17.000000f, 6.000000f, 2.000000f );

	// scalar
	float distSqr = distancesqr( a, b );
	float dist    = distance( a, b );

	TEMPER_EXPECT_TRUE( floateq( distSqr, answerDistanceSqr ) );
	TEMPER_EXPECT_TRUE( floateq( dist, answerDistance ) );

	// SSE
	float componentsLHS[3][4] =
	{
		{ 7.000000f, 7.000000f, 7.000000f, 7.000000f },
		{ 4.000000f, 4.000000f, 4.000000f, 4.000000f },
		{ 3.000000f, 3.000000f, 3.000000f, 3.000000f }
	};

	float componentsRHS[3][4] =
	{
		{ 17.000000f, 17.000000f, 17.000000f, 17.000000f },
		{ 6.000000f, 6.000000f, 6.000000f, 6.000000f },
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f }
	};

	float3_sse_t lhs;
	lhs.comp[0] = _mm_load_ps( componentsLHS[0] );
	lhs.comp[1] = _mm_load_ps( componentsLHS[1] );
	lhs.comp[2] = _mm_load_ps( componentsLHS[2] );

	float3_sse_t rhs;
	rhs.comp[0] = _mm_load_ps( componentsRHS[0] );
	rhs.comp[1] = _mm_load_ps( componentsRHS[1] );
	rhs.comp[2] = _mm_load_ps( componentsRHS[2] );

	__m128 results;

	// distancesq
	distancesq_sse( &lhs, &rhs, &results );

	float squaredDistanceResults[4];
	_mm_store_ps( squaredDistanceResults, results );

	TEMPER_EXPECT_TRUE( floateq( squaredDistanceResults[0], 105.0f ) );
	TEMPER_EXPECT_TRUE( floateq( squaredDistanceResults[1], 105.0f ) );
	TEMPER_EXPECT_TRUE( floateq( squaredDistanceResults[2], 105.0f ) );
	TEMPER_EXPECT_TRUE( floateq( squaredDistanceResults[3], 105.0f ) );

	// distance
	distance_sse( &lhs, &rhs, &results );

	float distanceResults[4];
	_mm_store_ps( distanceResults, results );

	TEMPER_EXPECT_TRUE( floateq( distanceResults[0], 10.246951f ) );
	TEMPER_EXPECT_TRUE( floateq( distanceResults[1], 10.246951f ) );
	TEMPER_EXPECT_TRUE( floateq( distanceResults[2], 10.246951f ) );
	TEMPER_EXPECT_TRUE( floateq( distanceResults[3], 10.246951f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestSaturate_float3 )
{
	float3 answer = float3( 0.000000f, 1.000000f, 1.000000f );

	float3 vec = float3( -1.000000f, 2.000000f, 4.000000f );
	float3 clamped = saturate( vec );

	TEMPER_EXPECT_TRUE( clamped == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestLerp_float3 )
{
	float3 answer = float3( 0.500000f, 0.500000f, 0.000000f );

	float3 a = float3( 0.000000f, 1.000000f, 0.000000f );
	float3 b = float3( 1.000000f, 0.000000f, 0.000000f );
	float3 lerped = lerp( a, b, 0.5f );

	TEMPER_EXPECT_TRUE( lerped == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestStep_float3 )
{
	float3 answer = float3( 1.000000f, 1.000000f, 0.000000f );

	float3 a = float3( 1.000000f, 2.000000f, 3.000000f );
	float3 b = float3( 4.000000f, 3.000000f, 2.000000f );

	TEMPER_EXPECT_TRUE( step( a, b ) == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestSmoothstep_float3 )
{
	float3 answerInRangeSmoothstep   = float3( 0.104000f, 0.104000f, 0.104000f );
	float3 answerClampedSmoothstep   = float3( 1.000000f, 1.000000f, 1.000000f );
	float3 answerInRangeSmootherstep = float3( 0.057920f, 0.057920f, 0.057920f );
	float3 answerClampedSmootherstep = float3( 1.000000f, 1.000000f, 1.000000f );
	float3 answer;

	float3 low  = float3( 0.000000f, 0.000000f, 0.000000f );
	float3 high = float3( 1.000000f, 1.000000f, 1.000000f );

	answer = smoothstep( low, high, float3( 0.200000f, 0.200000f, 0.200000f ) );
	TEMPER_EXPECT_TRUE( answer == answerInRangeSmoothstep );

	answer = smoothstep( low, high, float3( 1.200000f, 1.200000f, 1.200000f ) );
	TEMPER_EXPECT_TRUE( answer == answerClampedSmoothstep );

	answer = smootherstep( low, high, float3( 0.200000f, 0.200000f, 0.200000f ) );
	TEMPER_EXPECT_TRUE( answer == answerInRangeSmootherstep );

	answer = smootherstep( low, high, float3( 1.200000f, 1.200000f, 1.200000f ) );
	TEMPER_EXPECT_TRUE( answer == answerClampedSmootherstep );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_float3 )
{
	TEMPER_RUN_TEST( TestAssignment_float3 );
	TEMPER_RUN_TEST( TestArray_float3 );
	TEMPER_RUN_TEST( TestArithmeticAddition_float3 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_float3 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_float3 );
	TEMPER_RUN_TEST( TestArithmeticDivision_float3 );
	TEMPER_RUN_TEST( TestIncrement_float3 );
	TEMPER_RUN_TEST( TestDecrement_float3 );
	TEMPER_RUN_TEST( TestRelational_float3 );
	TEMPER_RUN_TEST( TestLength_float3 );
	TEMPER_RUN_TEST( TestNormalized_float3 );
	TEMPER_RUN_TEST( TestDot_float3 );
	TEMPER_RUN_TEST( TestCross_float3 );
	TEMPER_RUN_TEST( TestAngle_float3 );
	TEMPER_RUN_TEST( TestDistance_float3 );
	TEMPER_RUN_TEST( TestSaturate_float3 );
	TEMPER_RUN_TEST( TestLerp_float3 );
	TEMPER_RUN_TEST( TestStep_float3 );
	TEMPER_RUN_TEST( TestSmoothstep_float3 );
}
