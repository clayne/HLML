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

TEMPER_PARAMETRIC( Test_uint2x2_less_than, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const bool2x2& expectedAnswer )
{
	bool2x2 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const bool2x2& expectedAnswer )
{
	bool2x2 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than_equal,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than_equal,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than_equal,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_less_than_equal,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_greater_than, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const bool2x2& expectedAnswer )
{
	bool2x2 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const bool2x2& expectedAnswer )
{
	bool2x2 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than_equal,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than_equal,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than_equal,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_greater_than_equal,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	bool2x2(
		true, true,
		true, true
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cadds, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cadds,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cadds,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	2U,
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cadds,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	2U,
	uint2x2(
		6U, 6U,
		6U, 6U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cadds,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	4U,
	uint2x2(
		12U, 12U,
		12U, 12U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_csubs, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubs,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubs,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	2U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubs,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	2U,
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubs,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	4U,
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cmuls, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmuls,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmuls,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	2U,
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmuls,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	2U,
	uint2x2(
		8U, 8U,
		8U, 8U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmuls,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	4U,
	uint2x2(
		32U, 32U,
		32U, 32U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cdivs, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivs,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivs,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	2U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivs,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	2U,
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivs,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	4U,
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_caddm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_caddm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_caddm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_caddm,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		6U, 6U,
		6U, 6U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_caddm,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		12U, 12U,
		12U, 12U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_csubm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubm,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_csubm,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cmulm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmulm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmulm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmulm,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		8U, 8U,
		8U, 8U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cmulm,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		32U, 32U,
		32U, 32U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cdivm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivm,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cdivm,
	uint2x2(
		8U, 8U,
		8U, 8U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_uint2x2_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const uint2x2& x, const uint2x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2x2 xlocal = (uint2x2) x;
	uint2x2 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_prefix,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_prefix,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_prefix,
	uint2x2(
		3U, 3U,
		3U, 3U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_prefix,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		5U, 5U,
		5U, 5U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const uint2x2& x, const uint2x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2x2 xlocal = (uint2x2) x;
	uint2x2 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_postfix,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_postfix,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_postfix,
	uint2x2(
		3U, 3U,
		3U, 3U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_increment_postfix,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		5U, 5U,
		5U, 5U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const uint2x2& x, const uint2x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2x2 xlocal = (uint2x2) x;
	uint2x2 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_prefix,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_prefix,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_prefix,
	uint2x2(
		3U, 3U,
		3U, 3U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_prefix,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const uint2x2& x, const uint2x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2x2 xlocal = (uint2x2) x;
	uint2x2 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_postfix,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_postfix,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_postfix,
	uint2x2(
		3U, 3U,
		3U, 3U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_decrement_postfix,
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint2x2_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const uint2x2& x, const uint2x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2x2 xlocal = (uint2x2) x;
	uint2x2 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_negate_prefix,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_negate_prefix,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		4294967295U, 4294967295U,
		4294967295U, 4294967295U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_negate_prefix,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		4294967294U, 4294967294U,
		4294967294U, 4294967294U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_negate_prefix,
	uint2x2(
		3U, 3U,
		3U, 3U
	),
	uint2x2(
		4294967293U, 4294967293U,
		4294967293U, 4294967293U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_negate_prefix,
	uint2x2(
		10U, 10U,
		10U, 10U
	),
	uint2x2(
		4294967286U, 4294967286U,
		4294967286U, 4294967286U
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint2x2_not_prefix, TEMPER_FLAG_SHOULD_RUN, const uint2x2& x, const uint2x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint2x2 xlocal = (uint2x2) x;
	uint2x2 actualAnswer = ~xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_not_prefix,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		4294967294U, 4294967294U,
		4294967294U, 4294967294U
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_uint2x2_cands, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cands,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	0U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cands,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	1U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cands,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	0U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cands,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cors, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cors,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	0U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cors,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	1U,
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cors,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	0U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cors,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cxors, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxors,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	0U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxors,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	1U,
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxors,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	0U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxors,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_lefts,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	0U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_lefts,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	1U,
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_lefts,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	0U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_lefts,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint32_t& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rights,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	0U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rights,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	1U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rights,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	0U,
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rights,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	1U,
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_candm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_candm,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_candm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_candm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_candm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_corm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_corm,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_corm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_corm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_corm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cxorm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxorm,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxorm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		3U, 3U,
		3U, 3U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxorm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cxorm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cshift_leftm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_leftm,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_leftm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_leftm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_leftm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_cshift_rightm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rightm,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rightm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rightm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_cshift_rightm,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_min, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_min,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_min,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_min,
	uint2x2(
		420U, 420U,
		420U, 420U
	),
	uint2x2(
		69U, 69U,
		69U, 69U
	),
	uint2x2(
		69U, 69U,
		69U, 69U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_max, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_max,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_max,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_max,
	uint2x2(
		69U, 69U,
		69U, 69U
	),
	uint2x2(
		420U, 420U,
		420U, 420U
	),
	uint2x2(
		420U, 420U,
		420U, 420U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_saturate, TEMPER_FLAG_SHOULD_RUN, const uint2x2& x, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_saturate,
	uint2x2(
		0U, 0U,
		0U, 0U
	),
	uint2x2(
		0U, 0U,
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_saturate,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_saturate,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_saturate,
	uint2x2(
		3U, 3U,
		3U, 3U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_saturate,
	uint2x2(
		10U, 10U,
		10U, 10U
	),
	uint2x2(
		1U, 1U,
		1U, 1U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_identity, TEMPER_FLAG_SHOULD_RUN, const uint2x2& matrix, const bool expectedAnswer )
{
	uint2x2 identityMat;
	identity( identityMat );
	bool isMatrixIdentity = ( identityMat == matrix );
	TEMPER_CHECK_TRUE( isMatrixIdentity == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_identity,
	uint2x2(
		1U, 0U,
		0U, 1U
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_identity,
	uint2x2(
		1U, 1U,
		0U, 1U
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_identity,
	uint2x2(
		1U, 0U,
		1U, 1U
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_identity,
	uint2x2(
		1U, 1U,
		1U, 1U
	),
	false
);

TEMPER_PARAMETRIC( Test_uint2x2_transpose, TEMPER_FLAG_SHOULD_RUN, const uint2x2& matrix, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = transpose( matrix );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_transpose,
	uint2x2(
		1U, 0U,
		0U, 1U
	),
	uint2x2(
		1U, 0U,
		0U, 1U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_transpose,
	uint2x2(
		0U, 1U,
		4U, 5U
	),
	uint2x2(
		0U, 4U,
		1U, 5U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_mulm, TEMPER_FLAG_SHOULD_RUN, const uint2x2& lhs, const uint2x2& rhs, const uint2x2& expectedAnswer )
{
	uint2x2 actualResult = mul( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_mulm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		4U, 4U,
		4U, 4U
	),
	uint2x2(
		16U, 16U,
		16U, 16U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_mulm,
	uint2x2(
		2U, 2U,
		2U, 2U
	),
	uint2x2(
		1U, 0U,
		0U, 1U
	),
	uint2x2(
		2U, 2U,
		2U, 2U
	)
);

TEMPER_PARAMETRIC( Test_uint2x2_mulv, TEMPER_FLAG_SHOULD_RUN, const uint2& vec, const uint2x2& mat, const uint2& expectedAnswer )
{
	uint2 actualResult = mul( vec, mat );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_mulv,
	uint2( 0U, 0U ),
	uint2x2(
		1U, 0U,
		0U, 1U
	),
	uint2(
		0U, 0U
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint2x2_mulv,
	uint2( 2U, 1U ),
	uint2x2(
		1U, 2U,
		5U, 6U
	),
	uint2(
		7U, 10U
	)
);

