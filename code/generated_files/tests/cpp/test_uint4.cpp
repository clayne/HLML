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

TEMPER_PARAMETRIC( Test_uint4_less_than, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( false, false, false, false )
);

TEMPER_PARAMETRIC( Test_uint4_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than_equal,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than_equal,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than_equal,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_less_than_equal,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( false, false, false, false )
);

TEMPER_PARAMETRIC( Test_uint4_greater_than, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( true, true, true, true )
);

TEMPER_PARAMETRIC( Test_uint4_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than_equal,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than_equal,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than_equal,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_greater_than_equal,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	bool4( true, true, true, true )
);

TEMPER_PARAMETRIC( Test_uint4_cadds, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cadds,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cadds,
	uint4( 2U, 2U, 2U, 2U ),
	2U,
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cadds,
	uint4( 4U, 4U, 4U, 4U ),
	2U,
	uint4( 6U, 6U, 6U, 6U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cadds,
	uint4( 8U, 8U, 8U, 8U ),
	4U,
	uint4( 12U, 12U, 12U, 12U )
);

TEMPER_PARAMETRIC( Test_uint4_csubs, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubs,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubs,
	uint4( 2U, 2U, 2U, 2U ),
	2U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubs,
	uint4( 4U, 4U, 4U, 4U ),
	2U,
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubs,
	uint4( 8U, 8U, 8U, 8U ),
	4U,
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_PARAMETRIC( Test_uint4_cmuls, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmuls,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmuls,
	uint4( 2U, 2U, 2U, 2U ),
	2U,
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmuls,
	uint4( 4U, 4U, 4U, 4U ),
	2U,
	uint4( 8U, 8U, 8U, 8U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmuls,
	uint4( 8U, 8U, 8U, 8U ),
	4U,
	uint4( 32U, 32U, 32U, 32U )
);

TEMPER_PARAMETRIC( Test_uint4_cdivs, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivs,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivs,
	uint4( 2U, 2U, 2U, 2U ),
	2U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivs,
	uint4( 4U, 4U, 4U, 4U ),
	2U,
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivs,
	uint4( 8U, 8U, 8U, 8U ),
	4U,
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_PARAMETRIC( Test_uint4_caddv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_caddv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_caddv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_caddv,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 6U, 6U, 6U, 6U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_caddv,
	uint4( 8U, 8U, 8U, 8U ),
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 12U, 12U, 12U, 12U )
);

TEMPER_PARAMETRIC( Test_uint4_csubv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubv,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_csubv,
	uint4( 8U, 8U, 8U, 8U ),
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_PARAMETRIC( Test_uint4_cmulv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmulv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmulv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmulv,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 8U, 8U, 8U, 8U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cmulv,
	uint4( 8U, 8U, 8U, 8U ),
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 32U, 32U, 32U, 32U )
);

TEMPER_PARAMETRIC( Test_uint4_cdivv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivv,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cdivv,
	uint4( 8U, 8U, 8U, 8U ),
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 2U, 2U, 2U, 2U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_uint4_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const uint4& x, const uint4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4 xlocal = (uint4) x;
	uint4 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_prefix,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_prefix,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 3U, 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_prefix,
	uint4( 3U, 3U, 3U, 3U ),
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_prefix,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 5U, 5U, 5U, 5U )
);

TEMPER_PARAMETRIC( Test_uint4_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const uint4& x, const uint4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4 xlocal = (uint4) x;
	uint4 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_postfix,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_postfix,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 3U, 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_postfix,
	uint4( 3U, 3U, 3U, 3U ),
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_increment_postfix,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 5U, 5U, 5U, 5U )
);

TEMPER_PARAMETRIC( Test_uint4_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const uint4& x, const uint4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4 xlocal = (uint4) x;
	uint4 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_prefix,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_prefix,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_prefix,
	uint4( 3U, 3U, 3U, 3U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_prefix,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 3U, 3U, 3U, 3U )
);

TEMPER_PARAMETRIC( Test_uint4_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const uint4& x, const uint4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4 xlocal = (uint4) x;
	uint4 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_postfix,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_postfix,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_postfix,
	uint4( 3U, 3U, 3U, 3U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_decrement_postfix,
	uint4( 4U, 4U, 4U, 4U ),
	uint4( 3U, 3U, 3U, 3U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint4_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const uint4& x, const uint4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4 xlocal = (uint4) x;
	uint4 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_negate_prefix,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_negate_prefix,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 4294967295U, 4294967295U, 4294967295U, 4294967295U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_negate_prefix,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 4294967294U, 4294967294U, 4294967294U, 4294967294U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_negate_prefix,
	uint4( 3U, 3U, 3U, 3U ),
	uint4( 4294967293U, 4294967293U, 4294967293U, 4294967293U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_negate_prefix,
	uint4( 10U, 10U, 10U, 10U ),
	uint4( 4294967286U, 4294967286U, 4294967286U, 4294967286U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint4_not_prefix, TEMPER_FLAG_SHOULD_RUN, const uint4& x, const uint4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4 xlocal = (uint4) x;
	uint4 actualAnswer = ~xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_not_prefix,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 4294967294U, 4294967294U, 4294967294U, 4294967294U )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_uint4_cands, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cands,
	uint4( 0U, 0U, 0U, 0U ),
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cands,
	uint4( 2U, 2U, 2U, 2U ),
	1U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cands,
	uint4( 1U, 1U, 1U, 1U ),
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cands,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint4_cors, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cors,
	uint4( 0U, 0U, 0U, 0U ),
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cors,
	uint4( 2U, 2U, 2U, 2U ),
	1U,
	uint4( 3U, 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cors,
	uint4( 1U, 1U, 1U, 1U ),
	0U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cors,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint4_cxors, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxors,
	uint4( 0U, 0U, 0U, 0U ),
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxors,
	uint4( 2U, 2U, 2U, 2U ),
	1U,
	uint4( 3U, 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxors,
	uint4( 1U, 1U, 1U, 1U ),
	0U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxors,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint4_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_lefts,
	uint4( 0U, 0U, 0U, 0U ),
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_lefts,
	uint4( 2U, 2U, 2U, 2U ),
	1U,
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_lefts,
	uint4( 1U, 1U, 1U, 1U ),
	0U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_lefts,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_PARAMETRIC( Test_uint4_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint32_t& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rights,
	uint4( 0U, 0U, 0U, 0U ),
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rights,
	uint4( 2U, 2U, 2U, 2U ),
	1U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rights,
	uint4( 1U, 1U, 1U, 1U ),
	0U,
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rights,
	uint4( 1U, 1U, 1U, 1U ),
	1U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint4_candv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_candv,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_candv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_candv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_candv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint4_corv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_corv,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_corv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 3U, 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_corv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_corv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint4_cxorv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxorv,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxorv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 3U, 3U, 3U, 3U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxorv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cxorv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint4_cshift_leftv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_leftv,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_leftv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 4U, 4U, 4U, 4U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_leftv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_leftv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_PARAMETRIC( Test_uint4_cshift_rightv, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rightv,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rightv,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rightv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_cshift_rightv,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_PARAMETRIC( Test_uint4_min, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_min,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_min,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_min,
	uint4( 420U, 420U, 420U, 420U ),
	uint4( 69U, 69U, 69U, 69U ),
	uint4( 69U, 69U, 69U, 69U )
);

TEMPER_PARAMETRIC( Test_uint4_max, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint4& expectedAnswer )
{
	uint4 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_max,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_max,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 2U, 2U, 2U, 2U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_max,
	uint4( 69U, 69U, 69U, 69U ),
	uint4( 420U, 420U, 420U, 420U ),
	uint4( 420U, 420U, 420U, 420U )
);

TEMPER_PARAMETRIC( Test_uint4_saturate, TEMPER_FLAG_SHOULD_RUN, const uint4& x, const uint4& expectedAnswer )
{
	uint4 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_saturate,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_saturate,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_saturate,
	uint4( 2U, 2U, 2U, 2U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_saturate,
	uint4( 3U, 3U, 3U, 3U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_saturate,
	uint4( 10U, 10U, 10U, 10U ),
	uint4( 1U, 1U, 1U, 1U )
);

TEMPER_PARAMETRIC( Test_uint4_int4, TEMPER_FLAG_SHOULD_RUN, const int4& convertFrom, const uint4& expectedAnswer )
{
	uint4 actualAnswer = uint4( convertFrom );

	TEMPER_CHECK_TRUE( expectedAnswer.x == actualAnswer.x );
	TEMPER_CHECK_TRUE( expectedAnswer.y == actualAnswer.y );
	TEMPER_CHECK_TRUE( expectedAnswer.z == actualAnswer.z );
	TEMPER_CHECK_TRUE( expectedAnswer.w == actualAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_int4,
	int4( 0, 0, 0, 0 ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_int4,
	int4( 10, 10, 10, 10 ),
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_int4,
	int4( 10, 20, 30, 40 ),
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_int4,
	int4( 160, 150, 140, 130 ),
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_uint4, TEMPER_FLAG_SHOULD_RUN, const uint4& convertFrom, const uint4& expectedAnswer )
{
	uint4 actualAnswer = uint4( convertFrom );

	TEMPER_CHECK_TRUE( expectedAnswer.x == actualAnswer.x );
	TEMPER_CHECK_TRUE( expectedAnswer.y == actualAnswer.y );
	TEMPER_CHECK_TRUE( expectedAnswer.z == actualAnswer.z );
	TEMPER_CHECK_TRUE( expectedAnswer.w == actualAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_uint4,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_uint4,
	uint4( 10U, 10U, 10U, 10U ),
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_uint4,
	uint4( 10U, 20U, 30U, 40U ),
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_uint4,
	uint4( 160U, 150U, 140U, 130U ),
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_float4, TEMPER_FLAG_SHOULD_RUN, const float4& convertFrom, const uint4& expectedAnswer )
{
	uint4 actualAnswer = uint4( convertFrom );

	TEMPER_CHECK_TRUE( expectedAnswer.x == actualAnswer.x );
	TEMPER_CHECK_TRUE( expectedAnswer.y == actualAnswer.y );
	TEMPER_CHECK_TRUE( expectedAnswer.z == actualAnswer.z );
	TEMPER_CHECK_TRUE( expectedAnswer.w == actualAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_float4,
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_float4,
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f ),
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_float4,
	float4( 10.000000f, 20.000000f, 30.000000f, 40.000000f ),
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_float4,
	float4( 160.000000f, 150.000000f, 140.000000f, 130.000000f ),
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_double4, TEMPER_FLAG_SHOULD_RUN, const double4& convertFrom, const uint4& expectedAnswer )
{
	uint4 actualAnswer = uint4( convertFrom );

	TEMPER_CHECK_TRUE( expectedAnswer.x == actualAnswer.x );
	TEMPER_CHECK_TRUE( expectedAnswer.y == actualAnswer.y );
	TEMPER_CHECK_TRUE( expectedAnswer.z == actualAnswer.z );
	TEMPER_CHECK_TRUE( expectedAnswer.w == actualAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_double4,
	double4( 0.000000f, 0.000000f, 0.000000f, 0.000000f ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_double4,
	double4( 10.000000f, 10.000000f, 10.000000f, 10.000000f ),
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_double4,
	double4( 10.000000f, 20.000000f, 30.000000f, 40.000000f ),
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_double4,
	double4( 160.000000f, 150.000000f, 140.000000f, 130.000000f ),
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_composite_ctor_1_vec_before_with_2_leftovers, TEMPER_FLAG_SHOULD_RUN, const uint2& vecPart, const uint32_t scalar0, const uint32_t scalar1, const uint4 expectedAnswer )
{
	uint4 actualAnswer = uint4( vecPart, scalar0, scalar1 );

	TEMPER_CHECK_TRUE( actualAnswer.x == expectedAnswer.x );
	TEMPER_CHECK_TRUE( actualAnswer.y == expectedAnswer.y );
	TEMPER_CHECK_TRUE( actualAnswer.z == expectedAnswer.z );
	TEMPER_CHECK_TRUE( actualAnswer.w == expectedAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_2_leftovers,
	uint2( 0U, 0U ),
	0U,
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_2_leftovers,
	uint2( 10U, 10U ),
	10U,
	10U,
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_2_leftovers,
	uint2( 10U, 20U ),
	30U,
	40U,
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_2_leftovers,
	uint2( 160U, 150U ),
	140U,
	130U,
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_composite_ctor_1_vec_after_with_2_leftovers, TEMPER_FLAG_SHOULD_RUN, const uint32_t scalar0, const uint32_t scalar1, const uint2& vecPart, const uint4 expectedAnswer )
{
	uint4 actualAnswer = uint4( scalar0, scalar1, vecPart );

	TEMPER_CHECK_TRUE( actualAnswer.x == expectedAnswer.x );
	TEMPER_CHECK_TRUE( actualAnswer.y == expectedAnswer.y );
	TEMPER_CHECK_TRUE( actualAnswer.z == expectedAnswer.z );
	TEMPER_CHECK_TRUE( actualAnswer.w == expectedAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_2_leftovers,
	0U,
	0U,
	uint2( 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_2_leftovers,
	10U,
	10U,
	uint2( 10U, 10U ),
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_2_leftovers,
	10U,
	20U,
	uint2( 30U, 40U ),
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_2_leftovers,
	160U,
	150U,
	uint2( 140U, 130U ),
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_composite_ctor_1_vec_before_with_3_leftovers, TEMPER_FLAG_SHOULD_RUN, const uint3& vecPart, const uint32_t scalar0, const uint4 expectedAnswer )
{
	uint4 actualAnswer = uint4( vecPart, scalar0 );

	TEMPER_CHECK_TRUE( actualAnswer.x == expectedAnswer.x );
	TEMPER_CHECK_TRUE( actualAnswer.y == expectedAnswer.y );
	TEMPER_CHECK_TRUE( actualAnswer.z == expectedAnswer.z );
	TEMPER_CHECK_TRUE( actualAnswer.w == expectedAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_3_leftovers,
	uint3( 0U, 0U, 0U ),
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_3_leftovers,
	uint3( 10U, 10U, 10U ),
	10U,
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_3_leftovers,
	uint3( 10U, 20U, 30U ),
	40U,
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_before_with_3_leftovers,
	uint3( 160U, 150U, 140U ),
	130U,
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_composite_ctor_1_vec_after_with_3_leftovers, TEMPER_FLAG_SHOULD_RUN, const uint32_t scalar0, const uint3& vecPart, const uint4 expectedAnswer )
{
	uint4 actualAnswer = uint4( scalar0, vecPart );

	TEMPER_CHECK_TRUE( actualAnswer.x == expectedAnswer.x );
	TEMPER_CHECK_TRUE( actualAnswer.y == expectedAnswer.y );
	TEMPER_CHECK_TRUE( actualAnswer.z == expectedAnswer.z );
	TEMPER_CHECK_TRUE( actualAnswer.w == expectedAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_3_leftovers,
	0U,
	uint3( 0U, 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_3_leftovers,
	10U,
	uint3( 10U, 10U, 10U ),
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_3_leftovers,
	10U,
	uint3( 20U, 30U, 40U ),
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_1_vec_after_with_3_leftovers,
	160U,
	uint3( 150U, 140U, 130U ),
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_composite_ctor_2_vecs, TEMPER_FLAG_SHOULD_RUN, const uint2& vec0, const uint2& vec1, const uint4& expectedAnswer )
{
	uint4 actualAnswer = uint4( vec0, vec1 );

	TEMPER_CHECK_TRUE( actualAnswer.x == expectedAnswer.x );
	TEMPER_CHECK_TRUE( actualAnswer.y == expectedAnswer.y );
	TEMPER_CHECK_TRUE( actualAnswer.z == expectedAnswer.z );
	TEMPER_CHECK_TRUE( actualAnswer.w == expectedAnswer.w );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_2_vecs,
	uint2( 0U, 0U ),
	uint2( 0U, 0U ),
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_2_vecs,
	uint2( 10U, 10U ),
	uint2( 10U, 10U ),
	uint4( 10U, 10U, 10U, 10U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_2_vecs,
	uint2( 10U, 20U ),
	uint2( 30U, 40U ),
	uint4( 10U, 20U, 30U, 40U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_composite_ctor_2_vecs,
	uint2( 160U, 150U ),
	uint2( 140U, 130U ),
	uint4( 160U, 150U, 140U, 130U )
);

TEMPER_PARAMETRIC( Test_uint4_lengthsq, TEMPER_FLAG_SHOULD_RUN, const uint4& vec, const float expectedAnswer )
{
	float actualResult = lengthsq( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_lengthsq,
	uint4( 0U, 0U, 0U, 0U ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_lengthsq,
	uint4( 1U, 1U, 1U, 1U ),
	4.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_lengthsq,
	uint4( 2U, 2U, 2U, 2U ),
	16.000000f
);

TEMPER_PARAMETRIC( Test_uint4_length, TEMPER_FLAG_SHOULD_RUN, const uint4& vec, const float expectedAnswer )
{
	float actualResult = length( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_length,
	uint4( 0U, 0U, 0U, 0U ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_length,
	uint4( 1U, 1U, 1U, 1U ),
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_length,
	uint4( 2U, 2U, 2U, 2U ),
	4.000000f
);

TEMPER_PARAMETRIC( Test_uint4_dot, TEMPER_FLAG_SHOULD_RUN, const uint4& lhs, const uint4& rhs, const uint32_t expectedAnswer )
{
	uint32_t actualResult = dot( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_dot,
	uint4( 0U, 0U, 0U, 0U ),
	uint4( 1U, 1U, 1U, 1U ),
	0U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_dot,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 1U, 1U, 1U, 1U ),
	4U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_dot,
	uint4( 1U, 1U, 1U, 1U ),
	uint4( 4294967295U, 4294967295U, 4294967295U, 4294967295U ),
	4294967292U
);

TEMPER_PARAMETRIC( Test_uint4_pack, TEMPER_FLAG_SHOULD_RUN, const uint4& unpacked, const uint32_t expectedAnswer )
{
	uint32_t actualResult = pack( unpacked );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_pack,
	uint4( 0U, 0U, 0U, 0U ),
	0U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_pack,
	uint4( 0U, 0U, 0U, 255U ),
	255U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_pack,
	uint4( 0U, 255U, 0U, 255U ),
	16711935U
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_pack,
	uint4( 255U, 0U, 255U, 0U ),
	4278255360U
);

TEMPER_PARAMETRIC( Test_uint4_unpack, TEMPER_FLAG_SHOULD_RUN, const uint32_t packed, const uint4& expectedAnswer )
{
	uint4 actualResult = unpack( packed );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_unpack,
	0U,
	uint4( 0U, 0U, 0U, 0U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_unpack,
	255U,
	uint4( 0U, 0U, 0U, 255U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_unpack,
	16711935U,
	uint4( 0U, 255U, 0U, 255U )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4_unpack,
	4278255360U,
	uint4( 255U, 0U, 255U, 0U )
);

