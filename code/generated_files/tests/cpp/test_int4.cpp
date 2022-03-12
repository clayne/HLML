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

TEMPER_PARAMETRIC( Test_int4_less_than, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than,
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	bool4( false, false, false, false )
);

TEMPER_PARAMETRIC( Test_int4_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than_equal,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than_equal,
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than_equal,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_less_than_equal,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	bool4( false, false, false, false )
);

TEMPER_PARAMETRIC( Test_int4_greater_than, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than,
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	bool4( true, true, true, true )
);

TEMPER_PARAMETRIC( Test_int4_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const bool4& expectedAnswer )
{
	bool4 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than_equal,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than_equal,
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 ),
	bool4( false, false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than_equal,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	bool4( true, true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_greater_than_equal,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	bool4( true, true, true, true )
);

TEMPER_PARAMETRIC( Test_int4_cadds, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cadds,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cadds,
	int4( 2, 2, 2, 2 ),
	2,
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cadds,
	int4( 4, 4, 4, 4 ),
	2,
	int4( 6, 6, 6, 6 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cadds,
	int4( 8, 8, 8, 8 ),
	4,
	int4( 12, 12, 12, 12 )
);

TEMPER_PARAMETRIC( Test_int4_csubs, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubs,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubs,
	int4( 2, 2, 2, 2 ),
	2,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubs,
	int4( 4, 4, 4, 4 ),
	2,
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubs,
	int4( 8, 8, 8, 8 ),
	4,
	int4( 4, 4, 4, 4 )
);

TEMPER_PARAMETRIC( Test_int4_cmuls, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmuls,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmuls,
	int4( 2, 2, 2, 2 ),
	2,
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmuls,
	int4( 4, 4, 4, 4 ),
	2,
	int4( 8, 8, 8, 8 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmuls,
	int4( 8, 8, 8, 8 ),
	4,
	int4( 32, 32, 32, 32 )
);

TEMPER_PARAMETRIC( Test_int4_cdivs, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivs,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivs,
	int4( 2, 2, 2, 2 ),
	2,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivs,
	int4( 4, 4, 4, 4 ),
	2,
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivs,
	int4( 8, 8, 8, 8 ),
	4,
	int4( 2, 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int4_caddv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_caddv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_caddv,
	int4( 2, 2, 2, 2 ),
	int4( 2, 2, 2, 2 ),
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_caddv,
	int4( 4, 4, 4, 4 ),
	int4( 2, 2, 2, 2 ),
	int4( 6, 6, 6, 6 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_caddv,
	int4( 8, 8, 8, 8 ),
	int4( 4, 4, 4, 4 ),
	int4( 12, 12, 12, 12 )
);

TEMPER_PARAMETRIC( Test_int4_csubv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubv,
	int4( 2, 2, 2, 2 ),
	int4( 2, 2, 2, 2 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubv,
	int4( 4, 4, 4, 4 ),
	int4( 2, 2, 2, 2 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_csubv,
	int4( 8, 8, 8, 8 ),
	int4( 4, 4, 4, 4 ),
	int4( 4, 4, 4, 4 )
);

TEMPER_PARAMETRIC( Test_int4_cmulv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmulv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmulv,
	int4( 2, 2, 2, 2 ),
	int4( 2, 2, 2, 2 ),
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmulv,
	int4( 4, 4, 4, 4 ),
	int4( 2, 2, 2, 2 ),
	int4( 8, 8, 8, 8 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cmulv,
	int4( 8, 8, 8, 8 ),
	int4( 4, 4, 4, 4 ),
	int4( 32, 32, 32, 32 )
);

TEMPER_PARAMETRIC( Test_int4_cdivv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivv,
	int4( 2, 2, 2, 2 ),
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivv,
	int4( 4, 4, 4, 4 ),
	int4( 2, 2, 2, 2 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cdivv,
	int4( 8, 8, 8, 8 ),
	int4( 4, 4, 4, 4 ),
	int4( 2, 2, 2, 2 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_int4_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int4 xlocal = (int4) x;
	int4 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_prefix,
	int4( 1, 1, 1, 1 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_prefix,
	int4( 2, 2, 2, 2 ),
	int4( 3, 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_prefix,
	int4( 3, 3, 3, 3 ),
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_prefix,
	int4( 4, 4, 4, 4 ),
	int4( 5, 5, 5, 5 )
);

TEMPER_PARAMETRIC( Test_int4_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int4 xlocal = (int4) x;
	int4 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_postfix,
	int4( 1, 1, 1, 1 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_postfix,
	int4( 2, 2, 2, 2 ),
	int4( 3, 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_postfix,
	int4( 3, 3, 3, 3 ),
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_increment_postfix,
	int4( 4, 4, 4, 4 ),
	int4( 5, 5, 5, 5 )
);

TEMPER_PARAMETRIC( Test_int4_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int4 xlocal = (int4) x;
	int4 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_prefix,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_prefix,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_prefix,
	int4( 3, 3, 3, 3 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_prefix,
	int4( 4, 4, 4, 4 ),
	int4( 3, 3, 3, 3 )
);

TEMPER_PARAMETRIC( Test_int4_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int4 xlocal = (int4) x;
	int4 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_postfix,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_postfix,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_postfix,
	int4( 3, 3, 3, 3 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_decrement_postfix,
	int4( 4, 4, 4, 4 ),
	int4( 3, 3, 3, 3 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int4_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int4 xlocal = (int4) x;
	int4 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_negate_prefix,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_negate_prefix,
	int4( 1, 1, 1, 1 ),
	int4( -1, -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_negate_prefix,
	int4( 2, 2, 2, 2 ),
	int4( -2, -2, -2, -2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_negate_prefix,
	int4( 3, 3, 3, 3 ),
	int4( -3, -3, -3, -3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_negate_prefix,
	int4( 10, 10, 10, 10 ),
	int4( -10, -10, -10, -10 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int4_not_prefix, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int4 xlocal = (int4) x;
	int4 actualAnswer = ~xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_not_prefix,
	int4( 1, 1, 1, 1 ),
	int4( -2, -2, -2, -2 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_int4_cands, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cands,
	int4( 0, 0, 0, 0 ),
	0,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cands,
	int4( 2, 2, 2, 2 ),
	1,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cands,
	int4( 1, 1, 1, 1 ),
	0,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cands,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 1, 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int4_cors, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cors,
	int4( 0, 0, 0, 0 ),
	0,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cors,
	int4( 2, 2, 2, 2 ),
	1,
	int4( 3, 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cors,
	int4( 1, 1, 1, 1 ),
	0,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cors,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 1, 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int4_cxors, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxors,
	int4( 0, 0, 0, 0 ),
	0,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxors,
	int4( 2, 2, 2, 2 ),
	1,
	int4( 3, 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxors,
	int4( 1, 1, 1, 1 ),
	0,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxors,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 0, 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int4_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_lefts,
	int4( 0, 0, 0, 0 ),
	0,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_lefts,
	int4( 2, 2, 2, 2 ),
	1,
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_lefts,
	int4( 1, 1, 1, 1 ),
	0,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_lefts,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 2, 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int4_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int32_t& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rights,
	int4( 0, 0, 0, 0 ),
	0,
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rights,
	int4( 2, 2, 2, 2 ),
	1,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rights,
	int4( 1, 1, 1, 1 ),
	0,
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rights,
	int4( 1, 1, 1, 1 ),
	1,
	int4( 0, 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int4_candv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_candv,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_candv,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_candv,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_candv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int4_corv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_corv,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_corv,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 ),
	int4( 3, 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_corv,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_corv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int4_cxorv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxorv,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxorv,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 ),
	int4( 3, 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxorv,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cxorv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int4_cshift_leftv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_leftv,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_leftv,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 ),
	int4( 4, 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_leftv,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_leftv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int4_cshift_rightv, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rightv,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rightv,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rightv,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_cshift_rightv,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int4_min, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_min,
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_min,
	int4( 1, 1, 1, 1 ),
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int4_max, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int4& expectedAnswer )
{
	int4 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_max,
	int4( 1, 1, 1, 1 ),
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_max,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 ),
	int4( 2, 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int4_saturate, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	int4 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_saturate,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_saturate,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_saturate,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_saturate,
	int4( 3, 3, 3, 3 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_saturate,
	int4( 10, 10, 10, 10 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int4_sign, TEMPER_FLAG_SHOULD_RUN, const int4& x, const int4& expectedAnswer )
{
	int4 actualResult = sign( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_sign,
	int4( 0, 0, 0, 0 ),
	int4( 0, 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_sign,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_sign,
	int4( 2, 2, 2, 2 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_sign,
	int4( 3, 3, 3, 3 ),
	int4( 1, 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_sign,
	int4( -1, -1, -1, -1 ),
	int4( -1, -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_sign,
	int4( -2, -2, -2, -2 ),
	int4( -1, -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_sign,
	int4( -3, -3, -3, -3 ),
	int4( -1, -1, -1, -1 )
);

TEMPER_PARAMETRIC( Test_int4_lengthsq, TEMPER_FLAG_SHOULD_RUN, const int4& vec, const float expectedAnswer )
{
	float actualResult = lengthsq( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_lengthsq,
	int4( 0, 0, 0, 0 ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_lengthsq,
	int4( 1, 1, 1, 1 ),
	4.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_lengthsq,
	int4( 2, 2, 2, 2 ),
	16.000000f
);

TEMPER_PARAMETRIC( Test_int4_length, TEMPER_FLAG_SHOULD_RUN, const int4& vec, const float expectedAnswer )
{
	float actualResult = length( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_length,
	int4( 0, 0, 0, 0 ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_length,
	int4( 1, 1, 1, 1 ),
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_length,
	int4( 2, 2, 2, 2 ),
	4.000000f
);

TEMPER_PARAMETRIC( Test_int4_dot, TEMPER_FLAG_SHOULD_RUN, const int4& lhs, const int4& rhs, const int32_t expectedAnswer )
{
	int32_t actualResult = dot( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_dot,
	int4( 0, 0, 0, 0 ),
	int4( 1, 1, 1, 1 ),
	0
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_dot,
	int4( 1, 1, 1, 1 ),
	int4( 1, 1, 1, 1 ),
	4
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int4_dot,
	int4( 1, 1, 1, 1 ),
	int4( -1, -1, -1, -1 ),
	-4
);
