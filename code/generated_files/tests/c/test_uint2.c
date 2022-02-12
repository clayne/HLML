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

TEMPER_PARAMETRIC( Test_uint2_less_than, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = uint2_less_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(bool2) { false, false }
);

TEMPER_PARAMETRIC( Test_uint2_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = uint2_less_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than_equal,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than_equal,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than_equal,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_less_than_equal,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(bool2) { false, false }
);

TEMPER_PARAMETRIC( Test_uint2_greater_than, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = uint2_greater_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(bool2) { true, true }
);

TEMPER_PARAMETRIC( Test_uint2_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = uint2_greater_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than_equal,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than_equal,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than_equal,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_greater_than_equal,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(bool2) { true, true }
);

TEMPER_PARAMETRIC( Test_uint2_cadds, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cadds( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cadds,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 2U, 2U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cadds,
	&(uint2) { 2U, 2U },
	2U,
	&(uint2) { 4U, 4U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cadds,
	&(uint2) { 4U, 4U },
	2U,
	&(uint2) { 6U, 6U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cadds,
	&(uint2) { 8U, 8U },
	4U,
	&(uint2) { 12U, 12U }
);

TEMPER_PARAMETRIC( Test_uint2_csubs, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_csubs( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubs,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubs,
	&(uint2) { 2U, 2U },
	2U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubs,
	&(uint2) { 4U, 4U },
	2U,
	&(uint2) { 2U, 2U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubs,
	&(uint2) { 8U, 8U },
	4U,
	&(uint2) { 4U, 4U }
);

TEMPER_PARAMETRIC( Test_uint2_cmuls, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cmuls( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmuls,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmuls,
	&(uint2) { 2U, 2U },
	2U,
	&(uint2) { 4U, 4U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmuls,
	&(uint2) { 4U, 4U },
	2U,
	&(uint2) { 8U, 8U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmuls,
	&(uint2) { 8U, 8U },
	4U,
	&(uint2) { 32U, 32U }
);

TEMPER_PARAMETRIC( Test_uint2_cdivs, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cdivs( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivs,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivs,
	&(uint2) { 2U, 2U },
	2U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivs,
	&(uint2) { 4U, 4U },
	2U,
	&(uint2) { 2U, 2U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivs,
	&(uint2) { 8U, 8U },
	4U,
	&(uint2) { 2U, 2U }
);

TEMPER_PARAMETRIC( Test_uint2_caddv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_caddv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_caddv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 2U, 2U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_caddv,
	&(uint2) { 2U, 2U },
	&(uint2) { 2U, 2U },
	&(uint2) { 4U, 4U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_caddv,
	&(uint2) { 4U, 4U },
	&(uint2) { 2U, 2U },
	&(uint2) { 6U, 6U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_caddv,
	&(uint2) { 8U, 8U },
	&(uint2) { 4U, 4U },
	&(uint2) { 12U, 12U }
);

TEMPER_PARAMETRIC( Test_uint2_csubv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_csubv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubv,
	&(uint2) { 2U, 2U },
	&(uint2) { 2U, 2U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubv,
	&(uint2) { 4U, 4U },
	&(uint2) { 2U, 2U },
	&(uint2) { 2U, 2U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_csubv,
	&(uint2) { 8U, 8U },
	&(uint2) { 4U, 4U },
	&(uint2) { 4U, 4U }
);

TEMPER_PARAMETRIC( Test_uint2_cmulv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cmulv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmulv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmulv,
	&(uint2) { 2U, 2U },
	&(uint2) { 2U, 2U },
	&(uint2) { 4U, 4U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmulv,
	&(uint2) { 4U, 4U },
	&(uint2) { 2U, 2U },
	&(uint2) { 8U, 8U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cmulv,
	&(uint2) { 8U, 8U },
	&(uint2) { 4U, 4U },
	&(uint2) { 32U, 32U }
);

TEMPER_PARAMETRIC( Test_uint2_cdivv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cdivv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivv,
	&(uint2) { 2U, 2U },
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivv,
	&(uint2) { 4U, 4U },
	&(uint2) { 2U, 2U },
	&(uint2) { 2U, 2U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cdivv,
	&(uint2) { 8U, 8U },
	&(uint2) { 4U, 4U },
	&(uint2) { 2U, 2U }
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint2_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const uint2* x, const uint2* expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2* xlocal = (uint2*) x;
	uint2 actualAnswer = uint2_negate( xlocal );
	TEMPER_CHECK_TRUE( uint2_equals( &actualAnswer, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_negate_prefix,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_negate_prefix,
	&(uint2) { 1U, 1U },
	&(uint2) { 4294967295U, 4294967295U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_negate_prefix,
	&(uint2) { 2U, 2U },
	&(uint2) { 4294967294U, 4294967294U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_negate_prefix,
	&(uint2) { 3U, 3U },
	&(uint2) { 4294967293U, 4294967293U }
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint2_unary_prefix, TEMPER_FLAG_SHOULD_RUN, const uint2* x, const uint2* expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2* xlocal = (uint2*) x;
	uint2 actualAnswer = uint2_unary( xlocal );
	TEMPER_CHECK_TRUE( uint2_equals( &actualAnswer, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_unary_prefix,
	&(uint2) { 1U, 1U },
	&(uint2) { 4294967294U, 4294967294U }
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_uint2_cands, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cands( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cands,
	&(uint2) { 0U, 0U },
	0U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cands,
	&(uint2) { 2U, 2U },
	1U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cands,
	&(uint2) { 1U, 1U },
	0U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cands,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 1U, 1U }
);

TEMPER_PARAMETRIC( Test_uint2_cors, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cors( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cors,
	&(uint2) { 0U, 0U },
	0U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cors,
	&(uint2) { 2U, 2U },
	1U,
	&(uint2) { 3U, 3U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cors,
	&(uint2) { 1U, 1U },
	0U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cors,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 1U, 1U }
);

TEMPER_PARAMETRIC( Test_uint2_cxors, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cxors( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxors,
	&(uint2) { 0U, 0U },
	0U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxors,
	&(uint2) { 2U, 2U },
	1U,
	&(uint2) { 3U, 3U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxors,
	&(uint2) { 1U, 1U },
	0U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxors,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 0U, 0U }
);

TEMPER_PARAMETRIC( Test_uint2_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cshift_lefts( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_lefts,
	&(uint2) { 0U, 0U },
	0U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_lefts,
	&(uint2) { 2U, 2U },
	1U,
	&(uint2) { 4U, 4U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_lefts,
	&(uint2) { 1U, 1U },
	0U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_lefts,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 2U, 2U }
);

TEMPER_PARAMETRIC( Test_uint2_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint32_t rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cshift_rights( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rights,
	&(uint2) { 0U, 0U },
	0U,
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rights,
	&(uint2) { 2U, 2U },
	1U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rights,
	&(uint2) { 1U, 1U },
	0U,
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rights,
	&(uint2) { 1U, 1U },
	1U,
	&(uint2) { 0U, 0U }
);

TEMPER_PARAMETRIC( Test_uint2_candv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_candv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_candv,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_candv,
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_candv,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_candv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U }
);

TEMPER_PARAMETRIC( Test_uint2_corv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_corv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_corv,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_corv,
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U },
	&(uint2) { 3U, 3U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_corv,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_corv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U }
);

TEMPER_PARAMETRIC( Test_uint2_cxorv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cxorv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxorv,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxorv,
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U },
	&(uint2) { 3U, 3U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxorv,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cxorv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U }
);

TEMPER_PARAMETRIC( Test_uint2_cshift_leftv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cshift_leftv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_leftv,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_leftv,
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U },
	&(uint2) { 4U, 4U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_leftv,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_leftv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 2U, 2U }
);

TEMPER_PARAMETRIC( Test_uint2_cshift_rightv, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_cshift_rightv( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rightv,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rightv,
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rightv,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_cshift_rightv,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U }
);

TEMPER_PARAMETRIC( Test_uint2_min, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_min( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_min,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_min,
	&(uint2) { 1U, 1U },
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U }
);

TEMPER_PARAMETRIC( Test_uint2_max, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_max( lhs, rhs );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_max,
	&(uint2) { 1U, 1U },
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_max,
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U },
	&(uint2) { 2U, 2U }
);

TEMPER_PARAMETRIC( Test_uint2_saturate, TEMPER_FLAG_SHOULD_RUN, const uint2* x, const uint2* expectedAnswer )
{
	uint2 actualResult = uint2_saturate( x );
	TEMPER_CHECK_TRUE( uint2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_saturate,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_saturate,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_saturate,
	&(uint2) { 2U, 2U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_saturate,
	&(uint2) { 3U, 3U },
	&(uint2) { 1U, 1U }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_saturate,
	&(uint2) { 10U, 10U },
	&(uint2) { 1U, 1U }
);

TEMPER_PARAMETRIC( Test_uint2_lengthsq, TEMPER_FLAG_SHOULD_RUN, const uint2* vec, const float expectedAnswer )
{
	float actualResult = uint2_lengthsq( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_lengthsq,
	&(uint2) { 0U, 0U },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_lengthsq,
	&(uint2) { 1U, 1U },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_lengthsq,
	&(uint2) { 2U, 2U },
	8.000000f
);

TEMPER_PARAMETRIC( Test_uint2_length, TEMPER_FLAG_SHOULD_RUN, const uint2* vec, const float expectedAnswer )
{
	float actualResult = uint2_length( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_length,
	&(uint2) { 0U, 0U },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_length,
	&(uint2) { 1U, 1U },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_length,
	&(uint2) { 2U, 2U },
	2.828427f
);

TEMPER_PARAMETRIC( Test_uint2_dot, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const uint32_t expectedAnswer )
{
	uint32_t actualResult = uint2_dot( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_dot,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	0U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_dot,
	&(uint2) { 1U, 1U },
	&(uint2) { 1U, 1U },
	2U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_dot,
	&(uint2) { 1U, 1U },
	&(uint2) { 4294967295U, 4294967295U },
	4294967294U
);

TEMPER_PARAMETRIC( Test_uint2_distancesq, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const float expectedAnswer )
{
	float actualResult = uint2_distancesq( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_distancesq,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_distancesq,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_distancesq,
	&(uint2) { 0U, 0U },
	&(uint2) { 2U, 2U },
	8.000000f
);

TEMPER_PARAMETRIC( Test_uint2_distance, TEMPER_FLAG_SHOULD_RUN, const uint2* lhs, const uint2* rhs, const float expectedAnswer )
{
	float actualResult = uint2_distance( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_distance,
	&(uint2) { 0U, 0U },
	&(uint2) { 0U, 0U },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_distance,
	&(uint2) { 0U, 0U },
	&(uint2) { 1U, 1U },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2_distance,
	&(uint2) { 0U, 0U },
	&(uint2) { 2U, 2U },
	2.828427f
);

