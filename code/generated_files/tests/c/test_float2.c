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

TEMPER_PARAMETRIC( Test_float2_less_than, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = float2_less_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_PARAMETRIC( Test_float2_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = float2_less_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than_equal,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than_equal,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than_equal,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_less_than_equal,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_PARAMETRIC( Test_float2_greater_than, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = float2_greater_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_PARAMETRIC( Test_float2_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = float2_greater_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than_equal,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than_equal,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than_equal,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_greater_than_equal,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_PARAMETRIC( Test_float2_cadds, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_cadds( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cadds,
	&(float2) { 1.000000f, 1.000000f },
	1.000000f,
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cadds,
	&(float2) { 2.000000f, 2.000000f },
	2.000000f,
	&(float2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cadds,
	&(float2) { 4.000000f, 4.000000f },
	2.000000f,
	&(float2) { 6.000000f, 6.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cadds,
	&(float2) { 8.000000f, 8.000000f },
	4.000000f,
	&(float2) { 12.000000f, 12.000000f }
);

TEMPER_PARAMETRIC( Test_float2_csubs, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_csubs( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubs,
	&(float2) { 1.000000f, 1.000000f },
	1.000000f,
	&(float2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubs,
	&(float2) { 2.000000f, 2.000000f },
	2.000000f,
	&(float2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubs,
	&(float2) { 4.000000f, 4.000000f },
	2.000000f,
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubs,
	&(float2) { 8.000000f, 8.000000f },
	4.000000f,
	&(float2) { 4.000000f, 4.000000f }
);

TEMPER_PARAMETRIC( Test_float2_cmuls, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_cmuls( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmuls,
	&(float2) { 1.000000f, 1.000000f },
	1.000000f,
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmuls,
	&(float2) { 2.000000f, 2.000000f },
	2.000000f,
	&(float2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmuls,
	&(float2) { 4.000000f, 4.000000f },
	2.000000f,
	&(float2) { 8.000000f, 8.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmuls,
	&(float2) { 8.000000f, 8.000000f },
	4.000000f,
	&(float2) { 32.000000f, 32.000000f }
);

TEMPER_PARAMETRIC( Test_float2_cdivs, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_cdivs( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivs,
	&(float2) { 1.000000f, 1.000000f },
	1.000000f,
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivs,
	&(float2) { 2.000000f, 2.000000f },
	2.000000f,
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivs,
	&(float2) { 4.000000f, 4.000000f },
	2.000000f,
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivs,
	&(float2) { 8.000000f, 8.000000f },
	4.000000f,
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_PARAMETRIC( Test_float2_caddv, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_caddv( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_caddv,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_caddv,
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_caddv,
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 6.000000f, 6.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_caddv,
	&(float2) { 8.000000f, 8.000000f },
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 12.000000f, 12.000000f }
);

TEMPER_PARAMETRIC( Test_float2_csubv, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_csubv( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubv,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubv,
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubv,
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_csubv,
	&(float2) { 8.000000f, 8.000000f },
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 4.000000f, 4.000000f }
);

TEMPER_PARAMETRIC( Test_float2_cmulv, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_cmulv( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmulv,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmulv,
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmulv,
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 8.000000f, 8.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cmulv,
	&(float2) { 8.000000f, 8.000000f },
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 32.000000f, 32.000000f }
);

TEMPER_PARAMETRIC( Test_float2_cdivv, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_cdivv( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivv,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivv,
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivv,
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_cdivv,
	&(float2) { 8.000000f, 8.000000f },
	&(float2) { 4.000000f, 4.000000f },
	&(float2) { 2.000000f, 2.000000f }
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_float2_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const float2* x, const float2* expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float2* xlocal = (float2*) x;
	float2 actualAnswer = float2_negate( xlocal );
	TEMPER_CHECK_TRUE( float2_equals( &actualAnswer, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_negate_prefix,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { -0.000000f, -0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_negate_prefix,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { -1.000000f, -1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_negate_prefix,
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { -2.000000f, -2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_negate_prefix,
	&(float2) { 3.000000f, 3.000000f },
	&(float2) { -3.000000f, -3.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_negate_prefix,
	&(float2) { 10.000000f, 10.000000f },
	&(float2) { -10.000000f, -10.000000f }
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_float2_min, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_min( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_min,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_min,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_min,
	&(float2) { 420.000000f, 420.000000f },
	&(float2) { 69.000000f, 69.000000f },
	&(float2) { 69.000000f, 69.000000f }
);

TEMPER_PARAMETRIC( Test_float2_max, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float2* expectedAnswer )
{
	float2 actualResult = float2_max( lhs, rhs );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_max,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_max,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_max,
	&(float2) { 69.000000f, 69.000000f },
	&(float2) { 420.000000f, 420.000000f },
	&(float2) { 420.000000f, 420.000000f }
);

TEMPER_PARAMETRIC( Test_float2_saturate, TEMPER_FLAG_SHOULD_RUN, const float2* x, const float2* expectedAnswer )
{
	float2 actualResult = float2_saturate( x );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_saturate,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_saturate,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_saturate,
	&(float2) { 2.000000f, 2.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_saturate,
	&(float2) { 3.000000f, 3.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_saturate,
	&(float2) { 10.000000f, 10.000000f },
	&(float2) { 1.000000f, 1.000000f }
);

TEMPER_PARAMETRIC( Test_float2_sign, TEMPER_FLAG_SHOULD_RUN, const float2* x, const int2* expectedAnswer )
{
	int2 actualResult = float2_sign( x );
	TEMPER_CHECK_TRUE( int2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_sign,
	&(float2) { 0.000000f, 0.000000f },
	&(int2) { 0, 0 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_sign,
	&(float2) { 1.000000f, 1.000000f },
	&(int2) { 1, 1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_sign,
	&(float2) { 2.000000f, 2.000000f },
	&(int2) { 1, 1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_sign,
	&(float2) { 3.000000f, 3.000000f },
	&(int2) { 1, 1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_sign,
	&(float2) { -1.000000f, -1.000000f },
	&(int2) { -1, -1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_sign,
	&(float2) { -2.000000f, -2.000000f },
	&(int2) { -1, -1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_sign,
	&(float2) { -3.000000f, -3.000000f },
	&(int2) { -1, -1 }
);

TEMPER_PARAMETRIC( Test_float2_lerp, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float t, const float2* expectedAnswer )
{
	float2 actualResult = float2_lerp( lhs, rhs, t );
	TEMPER_CHECK_TRUE( float2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lerp,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	0.500000f,
	&(float2) { 0.500000f, 0.500000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lerp,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 3.000000f, 3.000000f },
	0.500000f,
	&(float2) { 2.000000f, 2.000000f }
);

TEMPER_PARAMETRIC( Test_float2_lengthsq, TEMPER_FLAG_SHOULD_RUN, const float2* vec, const float expectedAnswer )
{
	float actualResult = float2_lengthsq( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float2_lengthsq_sse, TEMPER_FLAG_SHOULD_RUN, const float2* vec, const float expectedAnswer )
{
	__m128 reg_vec_x = _mm_set1_ps( vec->x );
	__m128 reg_vec_y = _mm_set1_ps( vec->y );

	__m128 reg_actualAnswer = float2_lengthsq_sse( reg_vec_x, reg_vec_y );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lengthsq,
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lengthsq,
	&(float2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lengthsq,
	&(float2) { 2.000000f, 2.000000f },
	8.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lengthsq_sse,
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lengthsq_sse,
	&(float2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_lengthsq_sse,
	&(float2) { 2.000000f, 2.000000f },
	8.000000f
);

TEMPER_PARAMETRIC( Test_float2_length, TEMPER_FLAG_SHOULD_RUN, const float2* vec, const float expectedAnswer )
{
	float actualResult = float2_length( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float2_length_sse, TEMPER_FLAG_SHOULD_RUN, const float2* vec, const float expectedAnswer )
{
	__m128 reg_vec_x = _mm_set1_ps( vec->x );
	__m128 reg_vec_y = _mm_set1_ps( vec->y );

	__m128 reg_actualAnswer = float2_length_sse( reg_vec_x, reg_vec_y );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_length,
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_length,
	&(float2) { 1.000000f, 1.000000f },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_length,
	&(float2) { 2.000000f, 2.000000f },
	2.828427f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_length_sse,
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_length_sse,
	&(float2) { 1.000000f, 1.000000f },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_length_sse,
	&(float2) { 2.000000f, 2.000000f },
	2.828427f
);

TEMPER_PARAMETRIC( Test_float2_dot, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float expectedAnswer )
{
	float actualResult = float2_dot( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float2_dot_sse, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float expectedAnswer )
{
	__m128 reg_lhs_x = _mm_set1_ps( lhs->x );
	__m128 reg_lhs_y = _mm_set1_ps( lhs->y );

	__m128 reg_rhs_x = _mm_set1_ps( rhs->x );
	__m128 reg_rhs_y = _mm_set1_ps( rhs->y );

	__m128 reg_actualAnswer = float2_dot_sse( reg_lhs_x, reg_lhs_y, reg_rhs_x, reg_rhs_y );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_dot,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_dot,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_dot,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { -1.000000f, -1.000000f },
	-2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_dot_sse,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_dot_sse,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_dot_sse,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { -1.000000f, -1.000000f },
	-2.000000f
);

TEMPER_PARAMETRIC( Test_float2_angle, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float expectedAnswer )
{
	float actualResult = float2_angle( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_angle,
	&(float2) { 1.000000f, 0.000000f },
	&(float2) { 0.000000f, 1.000000f },
	90.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_angle,
	&(float2) { 1.000000f, 1.000000f },
	&(float2) { 0.000000f, 1.000000f },
	45.000000f
);

TEMPER_PARAMETRIC( Test_float2_distancesq, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float expectedAnswer )
{
	float actualResult = float2_distancesq( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float2_distancesq_sse, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float expectedAnswer )
{
	__m128 reg_lhs_x = _mm_set1_ps( lhs->x );
	__m128 reg_lhs_y = _mm_set1_ps( lhs->y );

	__m128 reg_rhs_x = _mm_set1_ps( rhs->x );
	__m128 reg_rhs_y = _mm_set1_ps( rhs->y );

	__m128 reg_actualAnswer = float2_distancesq_sse( reg_lhs_x, reg_lhs_y, reg_rhs_x, reg_rhs_y );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distancesq,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distancesq,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distancesq,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 2.000000f, 2.000000f },
	8.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distancesq_sse,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distancesq_sse,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distancesq_sse,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 2.000000f, 2.000000f },
	8.000000f
);

TEMPER_PARAMETRIC( Test_float2_distance, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float expectedAnswer )
{
	float actualResult = float2_distance( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float2_distance_sse, TEMPER_FLAG_SHOULD_RUN, const float2* lhs, const float2* rhs, const float expectedAnswer )
{
	__m128 reg_lhs_x = _mm_set1_ps( lhs->x );
	__m128 reg_lhs_y = _mm_set1_ps( lhs->y );

	__m128 reg_rhs_x = _mm_set1_ps( rhs->x );
	__m128 reg_rhs_y = _mm_set1_ps( rhs->y );

	__m128 reg_actualAnswer = float2_distance_sse( reg_lhs_x, reg_lhs_y, reg_rhs_x, reg_rhs_y );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distance,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distance,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distance,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 2.000000f, 2.000000f },
	2.828427f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distance_sse,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distance_sse,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 1.000000f, 1.000000f },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_distance_sse,
	&(float2) { 0.000000f, 0.000000f },
	&(float2) { 2.000000f, 2.000000f },
	2.828427f
);

TEMPER_PARAMETRIC( Test_float2_normalize, TEMPER_FLAG_SHOULD_RUN, const float2* vec, const float2* expectedAnswer )
{
	float2 vecNormalized = *vec;
	float2_normalize( &vecNormalized );
	TEMPER_CHECK_TRUE( float2_equals( &vecNormalized, expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( float2_length( &vecNormalized ), 1.0f ) );
}

TEMPER_PARAMETRIC( Test_float2_normalize_sse, TEMPER_FLAG_SHOULD_RUN, const float2* vec, const float2* expectedAnswer )
{
	__m128 reg_vec_x = _mm_set1_ps( vec->x );
	__m128 reg_vec_y = _mm_set1_ps( vec->y );

	__m128 reg_actualAnswer_x;
	__m128 reg_actualAnswer_y;

	float2_normalize_sse( reg_vec_x, reg_vec_y, &reg_actualAnswer_x, &reg_actualAnswer_y );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer_x );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer->x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer->x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer->x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer->x, 1e-3f );

	_mm_store_ps( actualAnswer, reg_actualAnswer_y );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer->y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer->y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer->y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer->y, 1e-3f );

}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_normalize,
	&(float2) { 1.000000f, 2.000000f },
	&(float2) { 0.447210f, 0.894430f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_normalize,
	&(float2) { 5.000000f, 4.000000f },
	&(float2) { 0.780870f, 0.624700f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_normalize_sse,
	&(float2) { 1.000000f, 2.000000f },
	&(float2) { 0.447210f, 0.894430f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_normalize_sse,
	&(float2) { 5.000000f, 4.000000f },
	&(float2) { 0.780870f, 0.624700f }
);

