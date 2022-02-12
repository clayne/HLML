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

TEMPER_PARAMETRIC( Test_uint3_less_than, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	bool3( false, false, false )
);

TEMPER_PARAMETRIC( Test_uint3_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than_equal,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than_equal,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than_equal,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_less_than_equal,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	bool3( false, false, false )
);

TEMPER_PARAMETRIC( Test_uint3_greater_than, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	bool3( true, true, true )
);

TEMPER_PARAMETRIC( Test_uint3_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than_equal,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than_equal,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than_equal,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_greater_than_equal,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	bool3( true, true, true )
);

TEMPER_PARAMETRIC( Test_uint3_cadds, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cadds,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cadds,
	uint3( 2U, 2U, 2U ),
	2U,
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cadds,
	uint3( 4U, 4U, 4U ),
	2U,
	uint3( 6U, 6U, 6U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cadds,
	uint3( 8U, 8U, 8U ),
	4U,
	uint3( 12U, 12U, 12U )
);

TEMPER_PARAMETRIC( Test_uint3_csubs, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubs,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubs,
	uint3( 2U, 2U, 2U ),
	2U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubs,
	uint3( 4U, 4U, 4U ),
	2U,
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubs,
	uint3( 8U, 8U, 8U ),
	4U,
	uint3( 4U, 4U, 4U )
);

TEMPER_PARAMETRIC( Test_uint3_cmuls, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmuls,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmuls,
	uint3( 2U, 2U, 2U ),
	2U,
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmuls,
	uint3( 4U, 4U, 4U ),
	2U,
	uint3( 8U, 8U, 8U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmuls,
	uint3( 8U, 8U, 8U ),
	4U,
	uint3( 32U, 32U, 32U )
);

TEMPER_PARAMETRIC( Test_uint3_cdivs, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivs,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivs,
	uint3( 2U, 2U, 2U ),
	2U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivs,
	uint3( 4U, 4U, 4U ),
	2U,
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivs,
	uint3( 8U, 8U, 8U ),
	4U,
	uint3( 2U, 2U, 2U )
);

TEMPER_PARAMETRIC( Test_uint3_caddv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_caddv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_caddv,
	uint3( 2U, 2U, 2U ),
	uint3( 2U, 2U, 2U ),
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_caddv,
	uint3( 4U, 4U, 4U ),
	uint3( 2U, 2U, 2U ),
	uint3( 6U, 6U, 6U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_caddv,
	uint3( 8U, 8U, 8U ),
	uint3( 4U, 4U, 4U ),
	uint3( 12U, 12U, 12U )
);

TEMPER_PARAMETRIC( Test_uint3_csubv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubv,
	uint3( 2U, 2U, 2U ),
	uint3( 2U, 2U, 2U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubv,
	uint3( 4U, 4U, 4U ),
	uint3( 2U, 2U, 2U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_csubv,
	uint3( 8U, 8U, 8U ),
	uint3( 4U, 4U, 4U ),
	uint3( 4U, 4U, 4U )
);

TEMPER_PARAMETRIC( Test_uint3_cmulv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmulv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmulv,
	uint3( 2U, 2U, 2U ),
	uint3( 2U, 2U, 2U ),
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmulv,
	uint3( 4U, 4U, 4U ),
	uint3( 2U, 2U, 2U ),
	uint3( 8U, 8U, 8U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cmulv,
	uint3( 8U, 8U, 8U ),
	uint3( 4U, 4U, 4U ),
	uint3( 32U, 32U, 32U )
);

TEMPER_PARAMETRIC( Test_uint3_cdivv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivv,
	uint3( 2U, 2U, 2U ),
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivv,
	uint3( 4U, 4U, 4U ),
	uint3( 2U, 2U, 2U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cdivv,
	uint3( 8U, 8U, 8U ),
	uint3( 4U, 4U, 4U ),
	uint3( 2U, 2U, 2U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_uint3_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const uint3& x, const uint3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint3 xlocal = (uint3) x;
	uint3 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_prefix,
	uint3( 1U, 1U, 1U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_prefix,
	uint3( 2U, 2U, 2U ),
	uint3( 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_prefix,
	uint3( 3U, 3U, 3U ),
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_prefix,
	uint3( 4U, 4U, 4U ),
	uint3( 5U, 5U, 5U )
);

TEMPER_PARAMETRIC( Test_uint3_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const uint3& x, const uint3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint3 xlocal = (uint3) x;
	uint3 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_postfix,
	uint3( 1U, 1U, 1U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_postfix,
	uint3( 2U, 2U, 2U ),
	uint3( 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_postfix,
	uint3( 3U, 3U, 3U ),
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_increment_postfix,
	uint3( 4U, 4U, 4U ),
	uint3( 5U, 5U, 5U )
);

TEMPER_PARAMETRIC( Test_uint3_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const uint3& x, const uint3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint3 xlocal = (uint3) x;
	uint3 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_prefix,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_prefix,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_prefix,
	uint3( 3U, 3U, 3U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_prefix,
	uint3( 4U, 4U, 4U ),
	uint3( 3U, 3U, 3U )
);

TEMPER_PARAMETRIC( Test_uint3_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const uint3& x, const uint3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint3 xlocal = (uint3) x;
	uint3 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_postfix,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_postfix,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_postfix,
	uint3( 3U, 3U, 3U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_decrement_postfix,
	uint3( 4U, 4U, 4U ),
	uint3( 3U, 3U, 3U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint3_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const uint3& x, const uint3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint3 xlocal = (uint3) x;
	uint3 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_negate_prefix,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_negate_prefix,
	uint3( 1U, 1U, 1U ),
	uint3( 4294967295U, 4294967295U, 4294967295U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_negate_prefix,
	uint3( 2U, 2U, 2U ),
	uint3( 4294967294U, 4294967294U, 4294967294U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_negate_prefix,
	uint3( 3U, 3U, 3U ),
	uint3( 4294967293U, 4294967293U, 4294967293U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_negate_prefix,
	uint3( 10U, 10U, 10U ),
	uint3( 4294967286U, 4294967286U, 4294967286U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint3_not_prefix, TEMPER_FLAG_SHOULD_RUN, const uint3& x, const uint3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint3 xlocal = (uint3) x;
	uint3 actualAnswer = ~xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_not_prefix,
	uint3( 1U, 1U, 1U ),
	uint3( 4294967294U, 4294967294U, 4294967294U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_uint3_cands, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cands,
	uint3( 0U, 0U, 0U ),
	0U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cands,
	uint3( 2U, 2U, 2U ),
	1U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cands,
	uint3( 1U, 1U, 1U ),
	0U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cands,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint3_cors, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cors,
	uint3( 0U, 0U, 0U ),
	0U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cors,
	uint3( 2U, 2U, 2U ),
	1U,
	uint3( 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cors,
	uint3( 1U, 1U, 1U ),
	0U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cors,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint3_cxors, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxors,
	uint3( 0U, 0U, 0U ),
	0U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxors,
	uint3( 2U, 2U, 2U ),
	1U,
	uint3( 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxors,
	uint3( 1U, 1U, 1U ),
	0U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxors,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint3_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_lefts,
	uint3( 0U, 0U, 0U ),
	0U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_lefts,
	uint3( 2U, 2U, 2U ),
	1U,
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_lefts,
	uint3( 1U, 1U, 1U ),
	0U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_lefts,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 2U, 2U, 2U )
);

TEMPER_PARAMETRIC( Test_uint3_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint32_t& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rights,
	uint3( 0U, 0U, 0U ),
	0U,
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rights,
	uint3( 2U, 2U, 2U ),
	1U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rights,
	uint3( 1U, 1U, 1U ),
	0U,
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rights,
	uint3( 1U, 1U, 1U ),
	1U,
	uint3( 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint3_candv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_candv,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_candv,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_candv,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_candv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint3_corv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_corv,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_corv,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U ),
	uint3( 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_corv,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_corv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint3_cxorv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxorv,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxorv,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U ),
	uint3( 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxorv,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cxorv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint3_cshift_leftv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_leftv,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_leftv,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U ),
	uint3( 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_leftv,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_leftv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_PARAMETRIC( Test_uint3_cshift_rightv, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rightv,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rightv,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rightv,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_cshift_rightv,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint3_min, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_min,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_min,
	uint3( 1U, 1U, 1U ),
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint3_max, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint3& expectedAnswer )
{
	uint3 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_max,
	uint3( 1U, 1U, 1U ),
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_max,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U ),
	uint3( 2U, 2U, 2U )
);

TEMPER_PARAMETRIC( Test_uint3_saturate, TEMPER_FLAG_SHOULD_RUN, const uint3& x, const uint3& expectedAnswer )
{
	uint3 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_saturate,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_saturate,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_saturate,
	uint3( 2U, 2U, 2U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_saturate,
	uint3( 3U, 3U, 3U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_saturate,
	uint3( 10U, 10U, 10U ),
	uint3( 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint3_lengthsq, TEMPER_FLAG_SHOULD_RUN, const uint3& vec, const float expectedAnswer )
{
	float actualResult = lengthsq( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_lengthsq,
	uint3( 0U, 0U, 0U ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_lengthsq,
	uint3( 1U, 1U, 1U ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_lengthsq,
	uint3( 2U, 2U, 2U ),
	12.000000f
);

TEMPER_PARAMETRIC( Test_uint3_length, TEMPER_FLAG_SHOULD_RUN, const uint3& vec, const float expectedAnswer )
{
	float actualResult = length( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_length,
	uint3( 0U, 0U, 0U ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_length,
	uint3( 1U, 1U, 1U ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_length,
	uint3( 2U, 2U, 2U ),
	3.464102f
);

TEMPER_PARAMETRIC( Test_uint3_dot, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const uint32_t expectedAnswer )
{
	uint32_t actualResult = dot( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_dot,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	0U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_dot,
	uint3( 1U, 1U, 1U ),
	uint3( 1U, 1U, 1U ),
	3U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_dot,
	uint3( 1U, 1U, 1U ),
	uint3( 4294967295U, 4294967295U, 4294967295U ),
	4294967293U
);

TEMPER_PARAMETRIC( Test_uint3_distancesq, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const float expectedAnswer )
{
	float actualResult = distancesq( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_distancesq,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_distancesq,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_distancesq,
	uint3( 0U, 0U, 0U ),
	uint3( 2U, 2U, 2U ),
	12.000003f
);

TEMPER_PARAMETRIC( Test_uint3_distance, TEMPER_FLAG_SHOULD_RUN, const uint3& lhs, const uint3& rhs, const float expectedAnswer )
{
	float actualResult = distance( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_distance,
	uint3( 0U, 0U, 0U ),
	uint3( 0U, 0U, 0U ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_distance,
	uint3( 0U, 0U, 0U ),
	uint3( 1U, 1U, 1U ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3_distance,
	uint3( 0U, 0U, 0U ),
	uint3( 2U, 2U, 2U ),
	3.464102f
);

