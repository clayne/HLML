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

TEMPER_PARAMETRIC( Test_int3_less_than, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	bool3( false, false, false )
);

TEMPER_PARAMETRIC( Test_int3_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than_equal,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than_equal,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than_equal,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_less_than_equal,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	bool3( false, false, false )
);

TEMPER_PARAMETRIC( Test_int3_greater_than, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	bool3( true, true, true )
);

TEMPER_PARAMETRIC( Test_int3_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than_equal,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than_equal,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than_equal,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_greater_than_equal,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	bool3( true, true, true )
);

TEMPER_PARAMETRIC( Test_int3_cadds, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cadds,
	int3( 1, 1, 1 ),
	1,
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cadds,
	int3( 2, 2, 2 ),
	2,
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cadds,
	int3( 4, 4, 4 ),
	2,
	int3( 6, 6, 6 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cadds,
	int3( 8, 8, 8 ),
	4,
	int3( 12, 12, 12 )
);

TEMPER_PARAMETRIC( Test_int3_csubs, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubs,
	int3( 1, 1, 1 ),
	1,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubs,
	int3( 2, 2, 2 ),
	2,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubs,
	int3( 4, 4, 4 ),
	2,
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubs,
	int3( 8, 8, 8 ),
	4,
	int3( 4, 4, 4 )
);

TEMPER_PARAMETRIC( Test_int3_cmuls, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmuls,
	int3( 1, 1, 1 ),
	1,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmuls,
	int3( 2, 2, 2 ),
	2,
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmuls,
	int3( 4, 4, 4 ),
	2,
	int3( 8, 8, 8 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmuls,
	int3( 8, 8, 8 ),
	4,
	int3( 32, 32, 32 )
);

TEMPER_PARAMETRIC( Test_int3_cdivs, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivs,
	int3( 1, 1, 1 ),
	1,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivs,
	int3( 2, 2, 2 ),
	2,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivs,
	int3( 4, 4, 4 ),
	2,
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivs,
	int3( 8, 8, 8 ),
	4,
	int3( 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int3_caddv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_caddv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_caddv,
	int3( 2, 2, 2 ),
	int3( 2, 2, 2 ),
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_caddv,
	int3( 4, 4, 4 ),
	int3( 2, 2, 2 ),
	int3( 6, 6, 6 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_caddv,
	int3( 8, 8, 8 ),
	int3( 4, 4, 4 ),
	int3( 12, 12, 12 )
);

TEMPER_PARAMETRIC( Test_int3_csubv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubv,
	int3( 2, 2, 2 ),
	int3( 2, 2, 2 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubv,
	int3( 4, 4, 4 ),
	int3( 2, 2, 2 ),
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_csubv,
	int3( 8, 8, 8 ),
	int3( 4, 4, 4 ),
	int3( 4, 4, 4 )
);

TEMPER_PARAMETRIC( Test_int3_cmulv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmulv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmulv,
	int3( 2, 2, 2 ),
	int3( 2, 2, 2 ),
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmulv,
	int3( 4, 4, 4 ),
	int3( 2, 2, 2 ),
	int3( 8, 8, 8 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cmulv,
	int3( 8, 8, 8 ),
	int3( 4, 4, 4 ),
	int3( 32, 32, 32 )
);

TEMPER_PARAMETRIC( Test_int3_cdivv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivv,
	int3( 2, 2, 2 ),
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivv,
	int3( 4, 4, 4 ),
	int3( 2, 2, 2 ),
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cdivv,
	int3( 8, 8, 8 ),
	int3( 4, 4, 4 ),
	int3( 2, 2, 2 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_int3_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3 xlocal = (int3) x;
	int3 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_prefix,
	int3( 1, 1, 1 ),
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_prefix,
	int3( 2, 2, 2 ),
	int3( 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_prefix,
	int3( 3, 3, 3 ),
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_prefix,
	int3( 4, 4, 4 ),
	int3( 5, 5, 5 )
);

TEMPER_PARAMETRIC( Test_int3_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3 xlocal = (int3) x;
	int3 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_postfix,
	int3( 1, 1, 1 ),
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_postfix,
	int3( 2, 2, 2 ),
	int3( 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_postfix,
	int3( 3, 3, 3 ),
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_increment_postfix,
	int3( 4, 4, 4 ),
	int3( 5, 5, 5 )
);

TEMPER_PARAMETRIC( Test_int3_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3 xlocal = (int3) x;
	int3 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_prefix,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_prefix,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_prefix,
	int3( 3, 3, 3 ),
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_prefix,
	int3( 4, 4, 4 ),
	int3( 3, 3, 3 )
);

TEMPER_PARAMETRIC( Test_int3_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3 xlocal = (int3) x;
	int3 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_postfix,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_postfix,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_postfix,
	int3( 3, 3, 3 ),
	int3( 2, 2, 2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_decrement_postfix,
	int3( 4, 4, 4 ),
	int3( 3, 3, 3 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int3_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3 xlocal = (int3) x;
	int3 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_negate_prefix,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_negate_prefix,
	int3( 1, 1, 1 ),
	int3( -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_negate_prefix,
	int3( 2, 2, 2 ),
	int3( -2, -2, -2 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_negate_prefix,
	int3( 3, 3, 3 ),
	int3( -3, -3, -3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_negate_prefix,
	int3( 10, 10, 10 ),
	int3( -10, -10, -10 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int3_not_prefix, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3 xlocal = (int3) x;
	int3 actualAnswer = ~xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_not_prefix,
	int3( 1, 1, 1 ),
	int3( -2, -2, -2 )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_int3_cands, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cands,
	int3( 0, 0, 0 ),
	0,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cands,
	int3( 2, 2, 2 ),
	1,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cands,
	int3( 1, 1, 1 ),
	0,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cands,
	int3( 1, 1, 1 ),
	1,
	int3( 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int3_cors, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cors,
	int3( 0, 0, 0 ),
	0,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cors,
	int3( 2, 2, 2 ),
	1,
	int3( 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cors,
	int3( 1, 1, 1 ),
	0,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cors,
	int3( 1, 1, 1 ),
	1,
	int3( 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int3_cxors, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxors,
	int3( 0, 0, 0 ),
	0,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxors,
	int3( 2, 2, 2 ),
	1,
	int3( 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxors,
	int3( 1, 1, 1 ),
	0,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxors,
	int3( 1, 1, 1 ),
	1,
	int3( 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int3_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_lefts,
	int3( 0, 0, 0 ),
	0,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_lefts,
	int3( 2, 2, 2 ),
	1,
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_lefts,
	int3( 1, 1, 1 ),
	0,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_lefts,
	int3( 1, 1, 1 ),
	1,
	int3( 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int3_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int32_t& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rights,
	int3( 0, 0, 0 ),
	0,
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rights,
	int3( 2, 2, 2 ),
	1,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rights,
	int3( 1, 1, 1 ),
	0,
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rights,
	int3( 1, 1, 1 ),
	1,
	int3( 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int3_candv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_candv,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_candv,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_candv,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_candv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int3_corv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_corv,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_corv,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 ),
	int3( 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_corv,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_corv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int3_cxorv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxorv,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxorv,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 ),
	int3( 3, 3, 3 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxorv,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cxorv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int3_cshift_leftv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_leftv,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_leftv,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 ),
	int3( 4, 4, 4 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_leftv,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_leftv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int3_cshift_rightv, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rightv,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rightv,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rightv,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_cshift_rightv,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 )
);

TEMPER_PARAMETRIC( Test_int3_min, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_min,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_min,
	int3( 1, 1, 1 ),
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int3_max, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int3& expectedAnswer )
{
	int3 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_max,
	int3( 1, 1, 1 ),
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_max,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 ),
	int3( 2, 2, 2 )
);

TEMPER_PARAMETRIC( Test_int3_saturate, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	int3 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_saturate,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_saturate,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_saturate,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_saturate,
	int3( 3, 3, 3 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_saturate,
	int3( 10, 10, 10 ),
	int3( 1, 1, 1 )
);

TEMPER_PARAMETRIC( Test_int3_sign, TEMPER_FLAG_SHOULD_RUN, const int3& x, const int3& expectedAnswer )
{
	int3 actualResult = sign( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_sign,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_sign,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_sign,
	int3( 2, 2, 2 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_sign,
	int3( 3, 3, 3 ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_sign,
	int3( -1, -1, -1 ),
	int3( -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_sign,
	int3( -2, -2, -2 ),
	int3( -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_sign,
	int3( -3, -3, -3 ),
	int3( -1, -1, -1 )
);

TEMPER_PARAMETRIC( Test_int3_lengthsq, TEMPER_FLAG_SHOULD_RUN, const int3& vec, const float expectedAnswer )
{
	float actualResult = lengthsq( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_lengthsq,
	int3( 0, 0, 0 ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_lengthsq,
	int3( 1, 1, 1 ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_lengthsq,
	int3( 2, 2, 2 ),
	12.000000f
);

TEMPER_PARAMETRIC( Test_int3_length, TEMPER_FLAG_SHOULD_RUN, const int3& vec, const float expectedAnswer )
{
	float actualResult = length( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_length,
	int3( 0, 0, 0 ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_length,
	int3( 1, 1, 1 ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_length,
	int3( 2, 2, 2 ),
	3.464102f
);

TEMPER_PARAMETRIC( Test_int3_dot, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const int32_t expectedAnswer )
{
	int32_t actualResult = dot( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_dot,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	0
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_dot,
	int3( 1, 1, 1 ),
	int3( 1, 1, 1 ),
	3
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_dot,
	int3( 1, 1, 1 ),
	int3( -1, -1, -1 ),
	-3
);

TEMPER_PARAMETRIC( Test_int3_distancesq, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const float expectedAnswer )
{
	float actualResult = distancesq( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_distancesq,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_distancesq,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_distancesq,
	int3( 0, 0, 0 ),
	int3( 2, 2, 2 ),
	12.000003f
);

TEMPER_PARAMETRIC( Test_int3_distance, TEMPER_FLAG_SHOULD_RUN, const int3& lhs, const int3& rhs, const float expectedAnswer )
{
	float actualResult = distance( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_distance,
	int3( 0, 0, 0 ),
	int3( 0, 0, 0 ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_distance,
	int3( 0, 0, 0 ),
	int3( 1, 1, 1 ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3_distance,
	int3( 0, 0, 0 ),
	int3( 2, 2, 2 ),
	3.464102f
);

