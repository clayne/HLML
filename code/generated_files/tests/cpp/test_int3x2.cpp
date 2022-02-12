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

TEMPER_PARAMETRIC( Test_int3x2_less_than, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const bool3x2& expectedAnswer )
{
	bool3x2 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_PARAMETRIC( Test_int3x2_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const bool3x2& expectedAnswer )
{
	bool3x2 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than_equal,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than_equal,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than_equal,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_less_than_equal,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_PARAMETRIC( Test_int3x2_greater_than, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const bool3x2& expectedAnswer )
{
	bool3x2 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_PARAMETRIC( Test_int3x2_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const bool3x2& expectedAnswer )
{
	bool3x2 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than_equal,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than_equal,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		false, false,
		false, false,
		false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than_equal,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_greater_than_equal,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	bool3x2(
		true, true,
		true, true,
		true, true
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cadds, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cadds,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cadds,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	2,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cadds,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	2,
	int3x2(
		6, 6,
		6, 6,
		6, 6
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cadds,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	4,
	int3x2(
		12, 12,
		12, 12,
		12, 12
	)
);

TEMPER_PARAMETRIC( Test_int3x2_csubs, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubs,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubs,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	2,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubs,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	2,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubs,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	4,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cmuls, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmuls,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmuls,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	2,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmuls,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	2,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmuls,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	4,
	int3x2(
		32, 32,
		32, 32,
		32, 32
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cdivs, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivs,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivs,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	2,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivs,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	2,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivs,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	4,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_PARAMETRIC( Test_int3x2_caddm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_caddm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_caddm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_caddm,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		6, 6,
		6, 6,
		6, 6
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_caddm,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		12, 12,
		12, 12,
		12, 12
	)
);

TEMPER_PARAMETRIC( Test_int3x2_csubm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubm,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_csubm,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cmulm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmulm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmulm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmulm,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		8, 8,
		8, 8,
		8, 8
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cmulm,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		32, 32,
		32, 32,
		32, 32
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cdivm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivm,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cdivm,
	int3x2(
		8, 8,
		8, 8,
		8, 8
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_int3x2_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3x2 xlocal = (int3x2) x;
	int3x2 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_prefix,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_prefix,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_prefix,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_prefix,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		5, 5,
		5, 5,
		5, 5
	)
);

TEMPER_PARAMETRIC( Test_int3x2_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3x2 xlocal = (int3x2) x;
	int3x2 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_postfix,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_postfix,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_postfix,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_increment_postfix,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		5, 5,
		5, 5,
		5, 5
	)
);

TEMPER_PARAMETRIC( Test_int3x2_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3x2 xlocal = (int3x2) x;
	int3x2 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_prefix,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_prefix,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_prefix,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_prefix,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

TEMPER_PARAMETRIC( Test_int3x2_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3x2 xlocal = (int3x2) x;
	int3x2 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_postfix,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_postfix,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_postfix,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_decrement_postfix,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	),
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int3x2_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3x2 xlocal = (int3x2) x;
	int3x2 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_negate_prefix,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_negate_prefix,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		-1, -1,
		-1, -1,
		-1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_negate_prefix,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		-2, -2,
		-2, -2,
		-2, -2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_negate_prefix,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	),
	int3x2(
		-3, -3,
		-3, -3,
		-3, -3
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int3x2_unary_prefix, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int3x2 xlocal = (int3x2) x;
	int3x2 actualAnswer = ~xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_unary_prefix,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		-2, -2,
		-2, -2,
		-2, -2
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_int3x2_cands, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cands,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	0,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cands,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	1,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cands,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	0,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cands,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cors, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cors,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	0,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cors,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	1,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cors,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	0,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cors,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cxors, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxors,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	0,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxors,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	1,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxors,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	0,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxors,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_lefts,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	0,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_lefts,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	1,
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_lefts,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	0,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_lefts,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int32_t& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rights,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	0,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rights,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	1,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rights,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	0,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rights,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	1,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_PARAMETRIC( Test_int3x2_candm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_candm,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_candm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_candm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_candm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_PARAMETRIC( Test_int3x2_corm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_corm,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_corm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_corm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_corm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cxorm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxorm,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxorm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		3, 3,
		3, 3,
		3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxorm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cxorm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cshift_leftm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_leftm,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_leftm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		4, 4,
		4, 4,
		4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_leftm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_leftm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_PARAMETRIC( Test_int3x2_cshift_rightm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rightm,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rightm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rightm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_cshift_rightm,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_PARAMETRIC( Test_int3x2_min, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_min,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_min,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_PARAMETRIC( Test_int3x2_max, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int3x2& rhs, const int3x2& expectedAnswer )
{
	int3x2 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_max,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_max,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		2, 2,
		2, 2,
		2, 2
	)
);

TEMPER_PARAMETRIC( Test_int3x2_saturate, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	int3x2 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_saturate,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_saturate,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_saturate,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_saturate,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_saturate,
	int3x2(
		10, 10,
		10, 10,
		10, 10
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_PARAMETRIC( Test_int3x2_sign, TEMPER_FLAG_SHOULD_RUN, const int3x2& x, const int3x2& expectedAnswer )
{
	int3x2 actualResult = sign( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_sign,
	int3x2(
		0, 0,
		0, 0,
		0, 0
	),
	int3x2(
		0, 0,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_sign,
	int3x2(
		1, 1,
		1, 1,
		1, 1
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_sign,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_sign,
	int3x2(
		3, 3,
		3, 3,
		3, 3
	),
	int3x2(
		1, 1,
		1, 1,
		1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_sign,
	int3x2(
		-1, -1,
		-1, -1,
		-1, -1
	),
	int3x2(
		-1, -1,
		-1, -1,
		-1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_sign,
	int3x2(
		-2, -2,
		-2, -2,
		-2, -2
	),
	int3x2(
		-1, -1,
		-1, -1,
		-1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_sign,
	int3x2(
		-3, -3,
		-3, -3,
		-3, -3
	),
	int3x2(
		-1, -1,
		-1, -1,
		-1, -1
	)
);

TEMPER_PARAMETRIC( Test_int3x2_identity, TEMPER_FLAG_SHOULD_RUN, const int3x2& matrix, const bool expectedAnswer )
{
	int3x2 identityMat;
	identity( identityMat );
	bool isMatrixIdentity = ( identityMat == matrix );
	TEMPER_CHECK_TRUE( isMatrixIdentity == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_identity,
	int3x2(
		1, 0,
		0, 1,
		0, 0
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_identity,
	int3x2(
		1, 1,
		0, 1,
		0, 0
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_identity,
	int3x2(
		1, 0,
		1, 1,
		0, 0
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_identity,
	int3x2(
		1, 1,
		1, 1,
		0, 0
	),
	false
);

TEMPER_PARAMETRIC( Test_int3x2_transpose, TEMPER_FLAG_SHOULD_RUN, const int3x2& matrix, const int2x3& expectedAnswer )
{
	int2x3 actualResult = transpose( matrix );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_transpose,
	int3x2(
		1, 0,
		0, 1,
		0, 0
	),
	int2x3(
		1, 0, 0,
		0, 1, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_transpose,
	int3x2(
		0, 1,
		4, 5,
		8, 9
	),
	int2x3(
		0, 4, 8,
		1, 5, 9
	)
);

TEMPER_PARAMETRIC( Test_int3x2_mulm, TEMPER_FLAG_SHOULD_RUN, const int3x2& lhs, const int2x3& rhs, const int3x3& expectedAnswer )
{
	int3x3 actualResult = mul( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_mulm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int2x3(
		4, 4, 4,
		4, 4, 4
	),
	int3x3(
		16, 16, 16,
		16, 16, 16,
		16, 16, 16
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x2_mulm,
	int3x2(
		2, 2,
		2, 2,
		2, 2
	),
	int2x3(
		1, 0, 0,
		0, 1, 0
	),
	int3x3(
		2, 2, 0,
		2, 2, 0,
		2, 2, 0
	)
);

