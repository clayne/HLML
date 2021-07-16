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

TEMPER_TEST( TestAssignment_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 vec;

	vec.x = 1.0f;
	vec.y = 1.0f;
	vec.z = 1.0f;
	TEMPER_CHECK_TRUE( vec.x == 1.0f );
	TEMPER_CHECK_TRUE( vec.y == 1.0f );
	TEMPER_CHECK_TRUE( vec.z == 1.0f );

	vec.x = 0.0f;
	vec.y = 1.0f;
	vec.z = 2.0f;
	TEMPER_CHECK_TRUE( vec.x == 0.0f );
	TEMPER_CHECK_TRUE( vec.y == 1.0f );
	TEMPER_CHECK_TRUE( vec.z == 2.0f );
}

TEMPER_TEST( TestArithmeticAddition_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 a = (float3)	{ 6.000000f, 6.000000f, 6.000000f };
	float3 b = (float3)	{ 2.000000f, 3.000000f, 4.000000f };
	float3 c = float3_caddv( &a, &b );

	TEMPER_CHECK_TRUE( c.x == 8.0f );
	TEMPER_CHECK_TRUE( c.y == 9.0f );
	TEMPER_CHECK_TRUE( c.z == 10.0f );
}

TEMPER_TEST( TestArithmeticSubtraction_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 a = (float3)	{ 6.000000f, 6.000000f, 6.000000f };
	float3 b = (float3)	{ 2.000000f, 3.000000f, 4.000000f };
	float3 c = float3_csubv( &a, &b );

	TEMPER_CHECK_TRUE( c.x == 4.0f );
	TEMPER_CHECK_TRUE( c.y == 3.0f );
	TEMPER_CHECK_TRUE( c.z == 2.0f );
}

TEMPER_TEST( TestArithmeticMultiplication_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 a = (float3)	{ 6.000000f, 6.000000f, 6.000000f };
	float3 b = (float3)	{ 2.000000f, 3.000000f, 4.000000f };
	float3 c = float3_cmulv( &a, &b );

	TEMPER_CHECK_TRUE( c.x == 12.0f );
	TEMPER_CHECK_TRUE( c.y == 18.0f );
	TEMPER_CHECK_TRUE( c.z == 24.0f );
}

TEMPER_TEST( TestArithmeticDivision_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 a = (float3)	{ 6.000000f, 6.000000f, 6.000000f };
	float3 b = (float3)	{ 2.000000f, 2.000000f, 3.000000f };
	float3 c = float3_cdivv( &a, &b );

	TEMPER_CHECK_TRUE( c.x == 3.0f );
	TEMPER_CHECK_TRUE( c.y == 3.0f );
	TEMPER_CHECK_TRUE( c.z == 2.0f );
}

TEMPER_TEST( TestRelational_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 vec0 =	{ 0.000000f, 0.000000f, 0.000000f };
	float3 vec1 =	{ 1.000000f, 1.000000f, 1.000000f };
	float3 vec2 =	{ 2.000000f, 2.000000f, 2.000000f };
	float3 vec3 =	{ 3.000000f, 3.000000f, 3.000000f };

	bool3 test0  = float3_cmple( &vec0, &vec0 );
	bool3 test1  = float3_cmpge( &vec0, &vec0 );
	bool3 test2  = float3_cmpl( &vec0, &vec1 );
	bool3 test3  = float3_cmpl( &vec0, &vec2 );
	bool3 test4  = float3_cmpl( &vec0, &vec3 );

	bool3 test5  = float3_cmpg( &vec1, &vec0 );
	bool3 test6  = float3_cmple( &vec1, &vec1 );
	bool3 test7  = float3_cmpge( &vec1, &vec1 );
	bool3 test8  = float3_cmpl( &vec1, &vec2 );
	bool3 test9  = float3_cmpl( &vec1, &vec3 );

	bool3 test10 = float3_cmpg( &vec2, &vec0 );
	bool3 test11 = float3_cmpg( &vec2, &vec1 );
	bool3 test12 = float3_cmple( &vec2, &vec2 );
	bool3 test13 = float3_cmpge( &vec2, &vec2 );
	bool3 test14 = float3_cmpl( &vec2, &vec3 );

	bool3 test15 = float3_cmpg( &vec3, &vec0 );
	bool3 test16 = float3_cmpg( &vec3, &vec1 );
	bool3 test17 = float3_cmpg( &vec3, &vec2 );
	bool3 test18 = float3_cmple( &vec3, &vec3 );
	bool3 test19 = float3_cmpge( &vec3, &vec3 );

	TEMPER_CHECK_TRUE( bool3_all( &test0 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test1 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test2 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test3 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test4 ) );

	TEMPER_CHECK_TRUE( bool3_all( &test5 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test6 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test7 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test8 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test9 ) );

	TEMPER_CHECK_TRUE( bool3_all( &test10 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test11 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test12 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test13 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test14 ) );

	TEMPER_CHECK_TRUE( bool3_all( &test15 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test16 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test17 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test18 ) );
	TEMPER_CHECK_TRUE( bool3_all( &test19 ) );
}

TEMPER_PARAMETRIC( TestNegate_float3, TEMPER_FLAG_SHOULD_RUN, const float3* vec )
{
	float3 negated = float3_negate( vec );
	TEMPER_CHECK_TRUE( floateq( negated.x, -vec->x ) );
	TEMPER_CHECK_TRUE( floateq( negated.y, -vec->y ) );
	TEMPER_CHECK_TRUE( floateq( negated.z, -vec->z ) );
}

float3 g_testNegate_zero_float3 = { 0.000000f, 0.000000f, 0.000000f };
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float3, &g_testNegate_zero_float3 );

float3 g_testNegate_one_float3 = { 1.000000f, 1.000000f, 1.000000f };
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float3, &g_testNegate_one_float3 );

float3 g_testNegate_minusTwo_float3 = { -2.000000f, -2.000000f, -2.000000f };
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float3, &g_testNegate_minusTwo_float3 );

float3 g_testNegate_alternatingValues_float3 = { 0.000000f, -0.000000f, 1.000000f };
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_float3, &g_testNegate_alternatingValues_float3 );

TEMPER_TEST( TestLength_Scalar_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 vec = (float3) { 2.0f, 2.0f, 2.0f };

	TEMPER_CHECK_TRUE( floateq( float3_lengthsqr( &vec ), 12.0f ) );
	TEMPER_CHECK_TRUE( floateq( float3_length( &vec ), 3.46410161514f ) );
}

TEMPER_TEST( TestLength_SSE_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float components[3][4] =
	{
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f },
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f },
		{ 2.000000f, 2.000000f, 2.000000f, 2.000000f }
	};

	float3_sse_t in;

	in.x = _mm_load_ps( components[0] );
	in.y = _mm_load_ps( components[1] );
	in.z = _mm_load_ps( components[2] );

	__m128 results;

	// lengthsq
	float3_lengthsq_sse( &in, &results );

	float squaredLengthResults[4];
	_mm_store_ps( squaredLengthResults, results );

	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[0], 12.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[1], 12.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[2], 12.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredLengthResults[3], 12.0f ) );

	// length
	float3_length_sse( &in, &results );

	float lengthResults[4];
	_mm_store_ps( lengthResults, results );

	TEMPER_CHECK_TRUE( floateq( lengthResults[0], 3.46410161514f ) );
	TEMPER_CHECK_TRUE( floateq( lengthResults[1], 3.46410161514f ) );
	TEMPER_CHECK_TRUE( floateq( lengthResults[2], 3.46410161514f ) );
	TEMPER_CHECK_TRUE( floateq( lengthResults[3], 3.46410161514f ) );
}

TEMPER_TEST( TestNormalized_Scalar_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 vec = (float3) { 5.000000f, 4.000000f, 3.000000f };
	vec = float3_normalized( &vec );

	float veclen = float3_length( &vec );
	TEMPER_CHECK_TRUE( floateq( veclen, 1.0f ) );
}

TEMPER_TEST( TestNormalized_SSE_float3, TEMPER_FLAG_SHOULD_RUN )
{
	__m128 results;
	float3_sse_t in;
	float3_sse_t in_normalised;

	in.x = _mm_set1_ps( 5.0f );
	in.y = _mm_set1_ps( 4.0f );
	in.z = _mm_set1_ps( 3.0f );

	float3_normalize_sse( &in, &in_normalised );
	float3_length_sse( &in_normalised, &results );

	float normalizeResults[4];
	_mm_store_ps( normalizeResults, results );

	const float epsilon = 0.000100f;
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[0], 1.0f, epsilon ) );
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[1], 1.0f, epsilon ) );
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[2], 1.0f, epsilon ) );
	TEMPER_CHECK_TRUE( floateq_eps( normalizeResults[3], 1.0f, epsilon ) );
}

TEMPER_TEST( TestDot_Scalar_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 a = (float3) { 0.000000f, 1.000000f, 0.000000f };
	float3 b = (float3) { 0.000000f, -1.000000f, 0.000000f };

	TEMPER_CHECK_TRUE( floateq( float3_dot( &a, &b ), -1.0f ) );
}

TEMPER_TEST( TestDot_SSE_float3, TEMPER_FLAG_SHOULD_RUN )
{
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
	lhs.x = _mm_load_ps( componentsLHS[0] );
	lhs.y = _mm_load_ps( componentsLHS[1] );
	lhs.z = _mm_load_ps( componentsLHS[2] );

	float3_sse_t rhs;
	rhs.x = _mm_load_ps( componentsRHS[0] );
	rhs.y = _mm_load_ps( componentsRHS[1] );
	rhs.z = _mm_load_ps( componentsRHS[2] );

	__m128 results;
	float3_dot_sse( &lhs, &rhs, &results );

	float dotResults[4];
	_mm_store_ps( dotResults, results );

	TEMPER_CHECK_TRUE( floateq( dotResults[0], -1.0f ) );
	TEMPER_CHECK_TRUE( floateq( dotResults[1], -1.0f ) );
	TEMPER_CHECK_TRUE( floateq( dotResults[2], -1.0f ) );
	TEMPER_CHECK_TRUE( floateq( dotResults[3], -1.0f ) );
}

TEMPER_TEST( TestCross_Scalar_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 left    = (float3) { -1.000000f, 0.000000f, 0.000000f };
	float3 forward = (float3) { 0.000000f, 0.000000f, 1.000000f };
	float3 up      = (float3) { 0.000000f, 1.000000f, 0.000000f };

	float3 vecCross = float3_cross( &left, &forward );
	TEMPER_CHECK_TRUE( float3_cmpe( &vecCross, &up ) );
}

TEMPER_TEST( TestCross_SSE_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float componentsLeft[3][4] =
	{
		{ -1.000000f, -1.000000f, -1.000000f, -1.000000f },	// 4 x components
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f },	// 4 y components
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f }	// 4 z components
	};

	float componentsForward[3][4] =
	{
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f },	// 4 x components
		{ 0.000000f, 0.000000f, 0.000000f, 0.000000f },	// 4 y components
		{ 1.000000f, 1.000000f, 1.000000f, 1.000000f }	// 4 z components
	};

	float3_sse_t left;
	left.x = _mm_load_ps( componentsLeft[0] );
	left.y = _mm_load_ps( componentsLeft[1] );
	left.z = _mm_load_ps( componentsLeft[2] );

	float3_sse_t forward;
	forward.x = _mm_load_ps( componentsForward[0] );
	forward.y = _mm_load_ps( componentsForward[1] );
	forward.z = _mm_load_ps( componentsForward[2] );

	float3_sse_t up;

	float3_cross_sse( &left, &forward, &up );

	float crossResults[4];
	_mm_store_ps( crossResults, up.x );
	TEMPER_CHECK_TRUE( floateq( crossResults[0], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[1], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[2], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[3], 0.000000f ) );

	_mm_store_ps( crossResults, up.y );
	TEMPER_CHECK_TRUE( floateq( crossResults[0], 1.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[1], 1.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[2], 1.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[3], 1.000000f ) );

	_mm_store_ps( crossResults, up.z );
	TEMPER_CHECK_TRUE( floateq( crossResults[0], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[1], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[2], 0.000000f ) );
	TEMPER_CHECK_TRUE( floateq( crossResults[3], 0.000000f ) );

}

TEMPER_TEST( TestAngle_Scalar_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 right = (float3) { 1.000000f, 0.000000f, 0.000000f };
	float3 up    = (float3) { 0.000000f, 1.000000f, 0.000000f };

float angleDeg = float3_angle( &up, &right );
	TEMPER_CHECK_TRUE( floateq( angleDeg, 90.0f ) );
}

TEMPER_TEST( TestDistance_Scalar_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float answerDistanceSqr = 105.0f;
	float answerDistance    = 10.246951f;

	float3 a = (float3) { 7.000000f, 4.000000f, 3.000000f };
	float3 b = (float3) { 17.000000f, 6.000000f, 2.000000f };

	float distSqr = float3_distancesqr( &a, &b );
	float dist    = float3_distance( &a, &b );

	TEMPER_CHECK_TRUE( floateq( distSqr, answerDistanceSqr ) );
	TEMPER_CHECK_TRUE( floateq( dist, answerDistance ) );
}

TEMPER_TEST( TestDistance_SSE_float3, TEMPER_FLAG_SHOULD_RUN )
{
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
	lhs.x = _mm_load_ps( componentsLHS[0] );
	lhs.y = _mm_load_ps( componentsLHS[1] );
	lhs.z = _mm_load_ps( componentsLHS[2] );

	float3_sse_t rhs;
	rhs.x = _mm_load_ps( componentsRHS[0] );
	rhs.y = _mm_load_ps( componentsRHS[1] );
	rhs.z = _mm_load_ps( componentsRHS[2] );

	__m128 results;

	// distancesq
	float3_distancesq_sse( &lhs, &rhs, &results );

	float squaredDistanceResults[4];
	_mm_store_ps( squaredDistanceResults, results );

	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[0], 105.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[1], 105.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[2], 105.0f ) );
	TEMPER_CHECK_TRUE( floateq( squaredDistanceResults[3], 105.0f ) );

	// distance
	float3_distance_sse( &lhs, &rhs, &results );

	float distanceResults[4];
	_mm_store_ps( distanceResults, results );

	TEMPER_CHECK_TRUE( floateq( distanceResults[0], 10.246951f ) );
	TEMPER_CHECK_TRUE( floateq( distanceResults[1], 10.246951f ) );
	TEMPER_CHECK_TRUE( floateq( distanceResults[2], 10.246951f ) );
	TEMPER_CHECK_TRUE( floateq( distanceResults[3], 10.246951f ) );
}

TEMPER_TEST( TestSaturate_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 answer = (float3) { 0.000000f, 1.000000f, 1.000000f };

	float3 vec = (float3) { -1.000000f, 2.000000f, 4.000000f };
	float3 clamped = float3_saturate( &vec );

	TEMPER_CHECK_TRUE( float3_cmpe( &clamped, &answer ) );
}

TEMPER_TEST( TestLerp_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 answer = (float3) { 0.500000f, 0.500000f, 0.000000f };

	float3 a = (float3) { 0.000000f, 1.000000f, 0.000000f };
	float3 b = (float3) { 1.000000f, 0.000000f, 0.000000f };
	float3 lerped = float3_lerp( &a, &b, 0.5f );

	TEMPER_CHECK_TRUE( float3_cmpe( &lerped, &answer ) );
}

TEMPER_TEST( TestStep_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 answer = (float3) { 1.000000f, 1.000000f, 0.000000f };

	float3 a = (float3) { 1.000000f, 2.000000f, 3.000000f };
	float3 b = (float3) { 4.000000f, 3.000000f, 2.000000f };

	float3 answerStep = float3_step( &a, &b );
	TEMPER_CHECK_TRUE( float3_cmpe( &answerStep, &answer ) );
}

TEMPER_TEST( TestSmoothstep_float3, TEMPER_FLAG_SHOULD_RUN )
{
	float3 answerInRangeSmoothstep   = (float3) { 0.104000f, 0.104000f, 0.104000f };
	float3 answerClampedSmoothstep   = (float3) { 1.000000f, 1.000000f, 1.000000f };
	float3 answerInRangeSmootherstep = (float3) { 0.057920f, 0.057920f, 0.057920f };
	float3 answerClampedSmootherstep = (float3) { 1.000000f, 1.000000f, 1.000000f };
	float3 answer;
	float3 vec;

	float3 low  = (float3) { 0.000000f, 0.000000f, 0.000000f };
	float3 high = (float3) { 1.000000f, 1.000000f, 1.000000f };

	vec = (float3) { 0.200000f, 0.200000f, 0.200000f };
	answer = float3_smoothstep( &low, &high, &vec );
	TEMPER_CHECK_TRUE( float3_cmpe( &answer, &answerInRangeSmoothstep ) );

	vec = (float3) { 1.200000f, 1.200000f, 1.200000f };
	answer = float3_smoothstep( &low, &high, &vec );
	TEMPER_CHECK_TRUE( float3_cmpe( &answer, &answerClampedSmoothstep ) );

	vec = (float3) { 0.200000f, 0.200000f, 0.200000f };
	answer = float3_smootherstep( &low, &high, &vec );
	TEMPER_CHECK_TRUE( float3_cmpe( &answer, &answerInRangeSmootherstep ) );

	vec = (float3) { 1.200000f, 1.200000f, 1.200000f };
	answer = float3_smootherstep( &low, &high, &vec );
	TEMPER_CHECK_TRUE( float3_cmpe( &answer, &answerClampedSmootherstep ) );
}

