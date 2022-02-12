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

TEMPER_PARAMETRIC( Test_float3_less_than, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( false, false, false )
);

TEMPER_PARAMETRIC( Test_float3_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than_equal,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than_equal,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than_equal,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_less_than_equal,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( false, false, false )
);

TEMPER_PARAMETRIC( Test_float3_greater_than, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( true, true, true )
);

TEMPER_PARAMETRIC( Test_float3_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const bool3& expectedAnswer )
{
	bool3 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than_equal,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than_equal,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( false, false, false )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than_equal,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	bool3( true, true, true )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_greater_than_equal,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	bool3( true, true, true )
);

TEMPER_PARAMETRIC( Test_float3_cadds, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cadds,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.000000f,
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cadds,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	2.000000f,
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cadds,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	2.000000f,
	float3( 6.000000f, 6.000000f, 6.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cadds,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	4.000000f,
	float3( 12.000000f, 12.000000f, 12.000000f )
);

TEMPER_PARAMETRIC( Test_float3_csubs, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubs,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.000000f,
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubs,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	2.000000f,
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubs,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	2.000000f,
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubs,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	4.000000f,
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_PARAMETRIC( Test_float3_cmuls, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmuls,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.000000f,
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmuls,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	2.000000f,
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmuls,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	2.000000f,
	float3( 8.000000f, 8.000000f, 8.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmuls,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	4.000000f,
	float3( 32.000000f, 32.000000f, 32.000000f )
);

TEMPER_PARAMETRIC( Test_float3_cdivs, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivs,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.000000f,
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivs,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	2.000000f,
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivs,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	2.000000f,
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivs,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	4.000000f,
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_PARAMETRIC( Test_float3_caddv, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_caddv,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_caddv,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_caddv,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 6.000000f, 6.000000f, 6.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_caddv,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 12.000000f, 12.000000f, 12.000000f )
);

TEMPER_PARAMETRIC( Test_float3_csubv, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubv,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubv,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubv,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_csubv,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_PARAMETRIC( Test_float3_cmulv, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmulv,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmulv,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmulv,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 8.000000f, 8.000000f, 8.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cmulv,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 32.000000f, 32.000000f, 32.000000f )
);

TEMPER_PARAMETRIC( Test_float3_cdivv, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	float3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivv,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivv,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivv,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cdivv,
	float3( 8.000000f, 8.000000f, 8.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_float3_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const float3& x, const float3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float3 xlocal = (float3) x;
	float3 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_prefix,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_prefix,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 3.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_prefix,
	float3( 3.000000f, 3.000000f, 3.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_prefix,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 5.000000f, 5.000000f, 5.000000f )
);

TEMPER_PARAMETRIC( Test_float3_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const float3& x, const float3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float3 xlocal = (float3) x;
	float3 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_postfix,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_postfix,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 3.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_postfix,
	float3( 3.000000f, 3.000000f, 3.000000f ),
	float3( 4.000000f, 4.000000f, 4.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_increment_postfix,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 5.000000f, 5.000000f, 5.000000f )
);

TEMPER_PARAMETRIC( Test_float3_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const float3& x, const float3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float3 xlocal = (float3) x;
	float3 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_prefix,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_prefix,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_prefix,
	float3( 3.000000f, 3.000000f, 3.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_prefix,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 3.000000f, 3.000000f, 3.000000f )
);

TEMPER_PARAMETRIC( Test_float3_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const float3& x, const float3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float3 xlocal = (float3) x;
	float3 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_postfix,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_postfix,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_postfix,
	float3( 3.000000f, 3.000000f, 3.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_decrement_postfix,
	float3( 4.000000f, 4.000000f, 4.000000f ),
	float3( 3.000000f, 3.000000f, 3.000000f )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_float3_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const float3& x, const float3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float3 xlocal = (float3) x;
	float3 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_negate_prefix,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( -0.000000f, -0.000000f, -0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_negate_prefix,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( -1.000000f, -1.000000f, -1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_negate_prefix,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( -2.000000f, -2.000000f, -2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_negate_prefix,
	float3( 3.000000f, 3.000000f, 3.000000f ),
	float3( -3.000000f, -3.000000f, -3.000000f )
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_float3_min, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	float3 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_min,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_min,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_PARAMETRIC( Test_float3_max, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	float3 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_max,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_max,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_PARAMETRIC( Test_float3_saturate, TEMPER_FLAG_SHOULD_RUN, const float3& x, const float3& expectedAnswer )
{
	float3 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_saturate,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_saturate,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_saturate,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_saturate,
	float3( 3.000000f, 3.000000f, 3.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_saturate,
	float3( 10.000000f, 10.000000f, 10.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_PARAMETRIC( Test_float3_sign, TEMPER_FLAG_SHOULD_RUN, const float3& x, const int3& expectedAnswer )
{
	int3 actualResult = sign( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_sign,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	int3( 0, 0, 0 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_sign,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_sign,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_sign,
	float3( 3.000000f, 3.000000f, 3.000000f ),
	int3( 1, 1, 1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_sign,
	float3( -1.000000f, -1.000000f, -1.000000f ),
	int3( -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_sign,
	float3( -2.000000f, -2.000000f, -2.000000f ),
	int3( -1, -1, -1 )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_sign,
	float3( -3.000000f, -3.000000f, -3.000000f ),
	int3( -1, -1, -1 )
);

TEMPER_PARAMETRIC( Test_float3_lerp, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float t, const float3& expectedAnswer )
{
	float3 actualResult = lerp( lhs, rhs, t );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lerp,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	0.500000f,
	float3( 0.500000f, 0.500000f, 0.500000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lerp,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 3.000000f, 3.000000f, 3.000000f ),
	0.500000f,
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_PARAMETRIC( Test_float3_lengthsq, TEMPER_FLAG_SHOULD_RUN, const float3& vec, const float expectedAnswer )
{
	float actualResult = lengthsq( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float3_lengthsq_sse, TEMPER_FLAG_SHOULD_RUN, const float3& vec, const float expectedAnswer )
{
	__m128 reg_vec_x = _mm_set1_ps( vec.x );
	__m128 reg_vec_y = _mm_set1_ps( vec.y );
	__m128 reg_vec_z = _mm_set1_ps( vec.z );

	__m128 reg_actualAnswer = lengthsq_sse( reg_vec_x, reg_vec_y, reg_vec_z );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lengthsq,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lengthsq,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lengthsq,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	12.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lengthsq_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lengthsq_sse,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_lengthsq_sse,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	12.000000f
);

TEMPER_PARAMETRIC( Test_float3_length, TEMPER_FLAG_SHOULD_RUN, const float3& vec, const float expectedAnswer )
{
	float actualResult = length( vec );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float3_length_sse, TEMPER_FLAG_SHOULD_RUN, const float3& vec, const float expectedAnswer )
{
	__m128 reg_vec_x = _mm_set1_ps( vec.x );
	__m128 reg_vec_y = _mm_set1_ps( vec.y );
	__m128 reg_vec_z = _mm_set1_ps( vec.z );

	__m128 reg_actualAnswer = length_sse( reg_vec_x, reg_vec_y, reg_vec_z );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_length,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_length,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_length,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	3.464102f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_length_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_length_sse,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_length_sse,
	float3( 2.000000f, 2.000000f, 2.000000f ),
	3.464102f
);

TEMPER_PARAMETRIC( Test_float3_dot, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float expectedAnswer )
{
	float actualResult = dot( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float3_dot_sse, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float expectedAnswer )
{
	__m128 reg_lhs_x = _mm_set1_ps( lhs.x );
	__m128 reg_lhs_y = _mm_set1_ps( lhs.y );
	__m128 reg_lhs_z = _mm_set1_ps( lhs.z );

	__m128 reg_rhs_x = _mm_set1_ps( rhs.x );
	__m128 reg_rhs_y = _mm_set1_ps( rhs.y );
	__m128 reg_rhs_z = _mm_set1_ps( rhs.z );

	__m128 reg_actualAnswer = dot_sse( reg_lhs_x, reg_lhs_y, reg_lhs_z, reg_rhs_x, reg_rhs_y, reg_rhs_z );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_dot,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_dot,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_dot,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( -1.000000f, -1.000000f, -1.000000f ),
	-3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_dot_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_dot_sse,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_dot_sse,
	float3( 1.000000f, 1.000000f, 1.000000f ),
	float3( -1.000000f, -1.000000f, -1.000000f ),
	-3.000000f
);

TEMPER_PARAMETRIC( Test_float3_cross, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	float3 actualResult = cross( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_PARAMETRIC( Test_float3_cross_sse, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float3& expectedAnswer )
{
	__m128 reg_lhs_x = _mm_set1_ps( lhs.x );
	__m128 reg_lhs_y = _mm_set1_ps( lhs.y );
	__m128 reg_lhs_z = _mm_set1_ps( lhs.z );

	__m128 reg_rhs_x = _mm_set1_ps( rhs.x );
	__m128 reg_rhs_y = _mm_set1_ps( rhs.y );
	__m128 reg_rhs_z = _mm_set1_ps( rhs.z );

	__m128 reg_actualAnswer_x;
	__m128 reg_actualAnswer_y;
	__m128 reg_actualAnswer_z;

	cross_sse( reg_lhs_x, reg_lhs_y, reg_lhs_z, reg_rhs_x, reg_rhs_y, reg_rhs_z, reg_actualAnswer_x, reg_actualAnswer_y, reg_actualAnswer_z );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer_x );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer.x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer.x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer.x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer.x, 1e-3f );

	_mm_store_ps( actualAnswer, reg_actualAnswer_y );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer.y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer.y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer.y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer.y, 1e-3f );

	_mm_store_ps( actualAnswer, reg_actualAnswer_z );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer.z, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer.z, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer.z, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer.z, 1e-3f );

}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cross,
	float3( 1.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 1.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_cross_sse,
	float3( 1.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 1.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 1.000000f )
);

TEMPER_PARAMETRIC( Test_float3_angle, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float expectedAnswer )
{
	float actualResult = angle( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_angle,
	float3( 1.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 1.000000f, 0.000000f ),
	90.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_angle,
	float3( 1.000000f, 1.000000f, 0.000000f ),
	float3( 0.000000f, 1.000000f, 0.000000f ),
	45.000000f
);

TEMPER_PARAMETRIC( Test_float3_distancesq, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float expectedAnswer )
{
	float actualResult = distancesq( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float3_distancesq_sse, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float expectedAnswer )
{
	__m128 reg_lhs_x = _mm_set1_ps( lhs.x );
	__m128 reg_lhs_y = _mm_set1_ps( lhs.y );
	__m128 reg_lhs_z = _mm_set1_ps( lhs.z );

	__m128 reg_rhs_x = _mm_set1_ps( rhs.x );
	__m128 reg_rhs_y = _mm_set1_ps( rhs.y );
	__m128 reg_rhs_z = _mm_set1_ps( rhs.z );

	__m128 reg_actualAnswer = distancesq_sse( reg_lhs_x, reg_lhs_y, reg_lhs_z, reg_rhs_x, reg_rhs_y, reg_rhs_z );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distancesq,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distancesq,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distancesq,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	12.000003f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distancesq_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distancesq_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	3.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distancesq_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	12.000003f
);

TEMPER_PARAMETRIC( Test_float3_distance, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float expectedAnswer )
{
	float actualResult = distance( lhs, rhs );
	TEMPER_CHECK_TRUE( floateq( actualResult, expectedAnswer ) );
}

TEMPER_PARAMETRIC( Test_float3_distance_sse, TEMPER_FLAG_SHOULD_RUN, const float3& lhs, const float3& rhs, const float expectedAnswer )
{
	__m128 reg_lhs_x = _mm_set1_ps( lhs.x );
	__m128 reg_lhs_y = _mm_set1_ps( lhs.y );
	__m128 reg_lhs_z = _mm_set1_ps( lhs.z );

	__m128 reg_rhs_x = _mm_set1_ps( rhs.x );
	__m128 reg_rhs_y = _mm_set1_ps( rhs.y );
	__m128 reg_rhs_z = _mm_set1_ps( rhs.z );

	__m128 reg_actualAnswer = distance_sse( reg_lhs_x, reg_lhs_y, reg_lhs_z, reg_rhs_x, reg_rhs_y, reg_rhs_z );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer );

	TEMPER_CHECK_TRUE( floateq( actualAnswer[0], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[1], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[2], expectedAnswer ) );
	TEMPER_CHECK_TRUE( floateq( actualAnswer[3], expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distance,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distance,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distance,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	3.464102f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distance_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f ),
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distance_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f ),
	1.732051f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_distance_sse,
	float3( 0.000000f, 0.000000f, 0.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f ),
	3.464102f
);

TEMPER_PARAMETRIC( Test_float3_normalize, TEMPER_FLAG_SHOULD_RUN, const float3& vec, const float3& expectedAnswer )
{
	float3 vecNormalized = vec;
	normalize( vecNormalized );
	TEMPER_CHECK_TRUE( vecNormalized == expectedAnswer );
	TEMPER_CHECK_TRUE( floateq( length( vecNormalized ), 1.0f ) );
}

TEMPER_PARAMETRIC( Test_float3_normalize_sse, TEMPER_FLAG_SHOULD_RUN, const float3& vec, const float3& expectedAnswer )
{
	__m128 reg_vec_x = _mm_set1_ps( vec.x );
	__m128 reg_vec_y = _mm_set1_ps( vec.y );
	__m128 reg_vec_z = _mm_set1_ps( vec.z );

	__m128 reg_actualAnswer_x;
	__m128 reg_actualAnswer_y;
	__m128 reg_actualAnswer_z;

	normalize_sse( reg_vec_x, reg_vec_y, reg_vec_z, reg_actualAnswer_x, reg_actualAnswer_y, reg_actualAnswer_z );

	float actualAnswer[4];
	_mm_store_ps( actualAnswer, reg_actualAnswer_x );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer.x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer.x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer.x, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer.x, 1e-3f );

	_mm_store_ps( actualAnswer, reg_actualAnswer_y );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer.y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer.y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer.y, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer.y, 1e-3f );

	_mm_store_ps( actualAnswer, reg_actualAnswer_z );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[0], expectedAnswer.z, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[1], expectedAnswer.z, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[2], expectedAnswer.z, 1e-3f );
	TEMPER_CHECK_ALMOST_EQUAL( actualAnswer[3], expectedAnswer.z, 1e-3f );

}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_normalize,
	float3( 1.000000f, 2.000000f, 3.000000f ),
	float3( 0.267261f, 0.534522f, 0.801784f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_normalize,
	float3( 5.000000f, 4.000000f, 3.000000f ),
	float3( 0.707107f, 0.565685f, 0.424264f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_normalize_sse,
	float3( 1.000000f, 2.000000f, 3.000000f ),
	float3( 0.267261f, 0.534522f, 0.801784f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3_normalize_sse,
	float3( 5.000000f, 4.000000f, 3.000000f ),
	float3( 0.707107f, 0.565685f, 0.424264f )
);

