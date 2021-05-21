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

TEMPER_TEST( TestAssignment_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 vec;

	vec.x = 1.0f;
	vec.y = 1.0f;
	TEMPER_CHECK_TRUE( vec.x == 1.0f );
	TEMPER_CHECK_TRUE( vec.y == 1.0f );

	vec.x = 0.0f;
	vec.y = 1.0f;
	TEMPER_CHECK_TRUE( vec.x == 0.0f );
	TEMPER_CHECK_TRUE( vec.y == 1.0f );
}

// also tests equality operators
TEMPER_TEST( TestCtor_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 vec;

	// single value
	vec = float2( 1.0f );
	TEMPER_CHECK_TRUE( vec == float2( 1.0f ) );
	TEMPER_CHECK_TRUE( vec != float2( 0.000000f, 1.000000f ) );

	// all values set
	vec = float2( 0.000000f, 1.000000f );
	TEMPER_CHECK_TRUE( vec == float2( 0.000000f, 1.000000f ) );
	TEMPER_CHECK_TRUE( vec != float2( 1.0f ) );

	// copy ctors of other vector types
	float2 other2 = { 10.000000f, 11.000000f };
	vec = float2( other2 );
	TEMPER_CHECK_TRUE( floateq( vec.x, 10.0f ) );
	TEMPER_CHECK_TRUE( floateq( vec.y, 11.0f ) );

	float3 other3 = { 10.000000f, 11.000000f, 14.000000f };
	vec = float2( other3 );
	TEMPER_CHECK_TRUE( floateq( vec.x, 10.0f ) );
	TEMPER_CHECK_TRUE( floateq( vec.y, 11.0f ) );

	float4 other4 = { 10.000000f, 11.000000f, 14.000000f, 15.000000f };
	vec = float2( other4 );
	TEMPER_CHECK_TRUE( floateq( vec.x, 10.0f ) );
	TEMPER_CHECK_TRUE( floateq( vec.y, 11.0f ) );

}

TEMPER_TEST( TestArray_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 a = float2( 0.000000f, 1.000000f );

	TEMPER_CHECK_TRUE( a.x == 0.0f );
	TEMPER_CHECK_TRUE( a.y == 1.0f );
}

TEMPER_TEST( TestIncrement_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 vec;

	// prefix
	vec = float2( 0.000000f, 0.000000f );
	++vec;
	TEMPER_CHECK_TRUE( vec == float2( 1.000000f, 1.000000f ) );

	// postfix
	vec = float2( 0.000000f, 0.000000f );
	vec++;
	TEMPER_CHECK_TRUE( vec == float2( 1.000000f, 1.000000f ) );
}

TEMPER_TEST( TestDecrement_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 vec;

	// prefix
	vec = float2( 1.000000f, 1.000000f );
	--vec;
	TEMPER_CHECK_TRUE( vec == float2( 0.000000f, 0.000000f ) );

	// postfix
	vec = float2( 1.000000f, 1.000000f );
	vec--;
	TEMPER_CHECK_TRUE( vec == float2( 0.000000f, 0.000000f ) );
}

TEMPER_TEST( TestArithmeticAddition_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 a = float2( 6.0f );
	float2 b = float2( 2.000000f, 3.000000f );

	float2 c = a + b;

	TEMPER_CHECK_TRUE( c == float2( 8.000000f, 9.000000f ) );
}

TEMPER_TEST( TestArithmeticSubtraction_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 a = float2( 6.0f );
	float2 b = float2( 2.000000f, 3.000000f );

	float2 c = a - b;

	TEMPER_CHECK_TRUE( c == float2( 4.000000f, 3.000000f ) );
}

TEMPER_TEST( TestArithmeticMultiplication_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 a = float2( 6.0f );
	float2 b = float2( 2.000000f, 3.000000f );

	float2 c = a * b;

	TEMPER_CHECK_TRUE( c == float2( 12.000000f, 18.000000f ) );
}

TEMPER_TEST( TestArithmeticDivision_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 a = float2( 6.0f );
	float2 b = float2( 2.000000f, 2.000000f );

	float2 c = a / b;

	TEMPER_CHECK_TRUE( c == float2( 3.000000f, 3.000000f ) );
}

TEMPER_TEST( TestRelational_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 vec0 = float2( 0.0f );
	float2 vec1 = float2( 1.0f );
	float2 vec2 = float2( 2.0f );
	float2 vec3 = float2( 3.0f );

	bool2 test0  = vec0 <= vec0;
	bool2 test1  = vec0 >= vec0;
	bool2 test2  = vec0 <  vec1;
	bool2 test3  = vec0 <  vec2;
	bool2 test4  = vec0 <  vec3;

	bool2 test5  = vec1 >  vec0;
	bool2 test6  = vec1 <= vec1;
	bool2 test7  = vec1 >= vec1;
	bool2 test8  = vec1 <  vec2;
	bool2 test9  = vec1 <  vec3;

	bool2 test10 = vec2 >  vec0;
	bool2 test11 = vec2 >  vec1;
	bool2 test12 = vec2 <= vec2;
	bool2 test13 = vec2 >= vec2;
	bool2 test14 = vec2 <  vec3;

	bool2 test15 = vec3 >  vec0;
	bool2 test16 = vec3 >  vec1;
	bool2 test17 = vec3 >  vec2;
	bool2 test18 = vec3 <= vec3;
	bool2 test19 = vec3 >= vec3;

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

TEMPER_TEST( TestLength_Scalar_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 vec = float2( 2.0f );

	TEMPER_CHECK_TRUE( floateq( lengthsqr( vec ), 8.0f ) );
	TEMPER_CHECK_TRUE( floateq( length( vec ), 2.82842712475f ) );
}

TEMPER_TEST( TestLength_SSE_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float components[2][4] =
	{
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f },
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f }
	};

	float2_sse_t in;

	in.x = _mm_load_ps( components[0] );
	in.y = _mm_load_ps( components[1] );

	__m128 results;

	// lengthsq
	lengthsq_sse( &in, &results );

	float squaredLengthResults[4];
	_mm_store_ps( squaredLengthResults, results );

	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[0], 8.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[1], 8.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[2], 8.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[3], 8.0f ) );

	// length
	length_sse( &in, &results );

	float lengthResults[4];
	_mm_store_ps( lengthResults, results );

	TEMPER_CHECK_TRUE( floateq( lengthResults[0], 2.82842712475f ) );
	TEMPER_CHECK_TRUE( floateq( lengthResults[1], 2.82842712475f ) );
	TEMPER_CHECK_TRUE( floateq( lengthResults[2], 2.82842712475f ) );
	TEMPER_CHECK_TRUE( floateq( lengthResults[3], 2.82842712475f ) );
}

TEMPER_TEST( TestNormalized_Scalar_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 vec = float2( 5.000000f, 4.000000f );
	vec = normalized( vec );

	TEMPER_CHECK_TRUE( floateq( length( vec ), 1.0f ) );
}

TEMPER_TEST( TestNormalized_SSE_float2, TEMPER_FLAG_SHOULD_RUN )
{
	__m128 results;
	float2_sse_t in;
	float2_sse_t in_normalised;

	in.x = _mm_set1_ps( 5.0f );
	in.y = _mm_set1_ps( 4.0f );

	normalize_sse( &in, &in_normalised );
	length_sse( &in_normalised, &results );

	float normalizeResults[4];
	_mm_store_ps( normalizeResults, results );

	const float epsilon = 0.000100f;
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[0], 1.0f, epsilon ) );
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[1], 1.0f, epsilon ) );
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[2], 1.0f, epsilon ) );
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[3], 1.0f, epsilon ) );
}

TEMPER_TEST( TestDot_Scalar_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 a = float2( 0.000000f, 1.000000f );
	float2 b = float2( 0.000000f, -1.000000f );

	TEMPER_CHECK_TRUE( floateq( dot( a, b ), -1.0f ) );
}

TEMPER_TEST( TestDot_SSE_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float componentsLHS[2][4] =
	{
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f },
		{ 1.000000f, 1.000000f, 1.000000f, 1.000000f }
	};

	float componentsRHS[2][4] =
	{
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f },
		{ -1.000000f, -1.000000f, -1.000000f, -1.000000f }
	};

	float2_sse_t lhs;
	lhs.x = _mm_load_ps( componentsLHS[0] );
	lhs.y = _mm_load_ps( componentsLHS[1] );

	float2_sse_t rhs;
	rhs.x = _mm_load_ps( componentsRHS[0] );
	rhs.y = _mm_load_ps( componentsRHS[1] );

	__m128 results;
	dot_sse( &lhs, &rhs, &results );

	float dotResults[4];
	_mm_store_ps( dotResults, results );

	TEMPER_CHECK_TRUE( floateq( dotResults[0], -1.0f ) );
	TEMPER_CHECK_TRUE( floateq( dotResults[1], -1.0f ) );
	TEMPER_CHECK_TRUE( floateq( dotResults[2], -1.0f ) );
	TEMPER_CHECK_TRUE( floateq( dotResults[3], -1.0f ) );
}

TEMPER_TEST( TestAngle_Scalar_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 right = float2( 1.000000f, 0.000000f );
	float2 up    = float2( 0.000000f, 1.000000f );

	TEMPER_CHECK_TRUE( floateq( angle( up, right ), 90.0f ) );
}

TEMPER_TEST( TestDistance_Scalar_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float answerDistanceSqr = 104.0f;
	float answerDistance    = 10.198039f;

	float2 a = float2( 7.000000f, 4.000000f );
	float2 b = float2( 17.000000f, 6.000000f );

	float distSqr = distancesqr( a, b );
	float dist    = distance( a, b );

	TEMPER_CHECK_TRUE( floateq( distSqr, answerDistanceSqr ) );
	TEMPER_CHECK_TRUE( floateq( dist, answerDistance ) );
}

TEMPER_TEST( TestDistance_SSE_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float componentsLHS[2][4] =
	{
		{ 7.000000f, 7.000000f, 7.000000f, 7.000000f },
		{ 4.000000f, 4.000000f, 4.000000f, 4.000000f }
	};

	float componentsRHS[2][4] =
	{
		{ 17.000000f, 17.000000f, 17.000000f, 17.000000f },
		{ 6.000000f, 6.000000f, 6.000000f, 6.000000f }
	};

	float2_sse_t lhs;
	lhs.x = _mm_load_ps( componentsLHS[0] );
	lhs.y = _mm_load_ps( componentsLHS[1] );

	float2_sse_t rhs;
	rhs.x = _mm_load_ps( componentsRHS[0] );
	rhs.y = _mm_load_ps( componentsRHS[1] );

	__m128 results;

	// distancesq
	distancesq_sse( &lhs, &rhs, &results );

	float squaredDistanceResults[4];
	_mm_store_ps( squaredDistanceResults, results );

	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[0], 104.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[1], 104.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[2], 104.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[3], 104.0f ) );

	// distance
	distance_sse( &lhs, &rhs, &results );

	float distanceResults[4];
	_mm_store_ps( distanceResults, results );

	TEMPER_CHECK_TRUE( floateq( distanceResults[0], 10.198039f ) );
	TEMPER_CHECK_TRUE( floateq( distanceResults[1], 10.198039f ) );
	TEMPER_CHECK_TRUE( floateq( distanceResults[2], 10.198039f ) );
	TEMPER_CHECK_TRUE( floateq( distanceResults[3], 10.198039f ) );
}

TEMPER_TEST( TestSaturate_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 answer = float2( 0.000000f, 1.000000f );

	float2 vec = float2( -1.000000f, 2.000000f );
	float2 clamped = saturate( vec );

	TEMPER_CHECK_TRUE( clamped == answer );
}

TEMPER_TEST( TestLerp_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 answer = float2( 0.500000f, 0.500000f );

	float2 a = float2( 0.000000f, 1.000000f );
	float2 b = float2( 1.000000f, 0.000000f );
	float2 lerped = lerp( a, b, 0.5f );

	TEMPER_CHECK_TRUE( lerped == answer );
}

TEMPER_TEST( TestStep_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 answer = float2( 1.000000f, 1.000000f );

	float2 a = float2( 1.000000f, 2.000000f );
	float2 b = float2( 4.000000f, 3.000000f );

	TEMPER_CHECK_TRUE( step( a, b ) == answer );
}

TEMPER_TEST( TestSmoothstep_float2, TEMPER_FLAG_SHOULD_RUN )
{
	float2 answerInRangeSmoothstep   = float2( 0.104000f, 0.104000f );
	float2 answerClampedSmoothstep   = float2( 1.000000f, 1.000000f );
	float2 answerInRangeSmootherstep = float2( 0.057920f, 0.057920f );
	float2 answerClampedSmootherstep = float2( 1.000000f, 1.000000f );
	float2 answer;

	float2 low  = float2( 0.000000f, 0.000000f );
	float2 high = float2( 1.000000f, 1.000000f );

	answer = smoothstep( low, high, float2( 0.200000f, 0.200000f ) );
	TEMPER_CHECK_TRUE( answer == answerInRangeSmoothstep );

	answer = smoothstep( low, high, float2( 1.200000f, 1.200000f ) );
	TEMPER_CHECK_TRUE( answer == answerClampedSmoothstep );

	answer = smootherstep( low, high, float2( 0.200000f, 0.200000f ) );
	TEMPER_CHECK_TRUE( answer == answerInRangeSmootherstep );

	answer = smootherstep( low, high, float2( 1.200000f, 1.200000f ) );
	TEMPER_CHECK_TRUE( answer == answerClampedSmootherstep );
}

