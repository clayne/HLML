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

TEMPER_PARAMETRIC( Test_int2x4_less_than, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const bool2x4& expectedAnswer )
{
	bool2x4 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_PARAMETRIC( Test_int2x4_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const bool2x4& expectedAnswer )
{
	bool2x4 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than_equal,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than_equal,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than_equal,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_less_than_equal,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_PARAMETRIC( Test_int2x4_greater_than, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const bool2x4& expectedAnswer )
{
	bool2x4 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_PARAMETRIC( Test_int2x4_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const bool2x4& expectedAnswer )
{
	bool2x4 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than_equal,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than_equal,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		false, false, false, false,
		false, false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than_equal,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_greater_than_equal,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	bool2x4(
		true, true, true, true,
		true, true, true, true
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cadds, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cadds,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cadds,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	2,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cadds,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	2,
	int2x4(
		6, 6, 6, 6,
		6, 6, 6, 6
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cadds,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	4,
	int2x4(
		12, 12, 12, 12,
		12, 12, 12, 12
	)
);

TEMPER_PARAMETRIC( Test_int2x4_csubs, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubs,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubs,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	2,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubs,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	2,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubs,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	4,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cmuls, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmuls,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmuls,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	2,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmuls,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	2,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmuls,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	4,
	int2x4(
		32, 32, 32, 32,
		32, 32, 32, 32
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cdivs, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivs,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivs,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	2,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivs,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	2,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivs,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	4,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_PARAMETRIC( Test_int2x4_caddm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_caddm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_caddm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_caddm,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		6, 6, 6, 6,
		6, 6, 6, 6
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_caddm,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		12, 12, 12, 12,
		12, 12, 12, 12
	)
);

TEMPER_PARAMETRIC( Test_int2x4_csubm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubm,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_csubm,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cmulm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmulm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmulm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmulm,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cmulm,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		32, 32, 32, 32,
		32, 32, 32, 32
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cdivm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivm,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cdivm,
	int2x4(
		8, 8, 8, 8,
		8, 8, 8, 8
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_int2x4_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int2x4 xlocal = (int2x4) x;
	int2x4 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_prefix,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_prefix,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_prefix,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_prefix,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		5, 5, 5, 5,
		5, 5, 5, 5
	)
);

TEMPER_PARAMETRIC( Test_int2x4_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int2x4 xlocal = (int2x4) x;
	int2x4 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_postfix,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_postfix,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_postfix,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_increment_postfix,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		5, 5, 5, 5,
		5, 5, 5, 5
	)
);

TEMPER_PARAMETRIC( Test_int2x4_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int2x4 xlocal = (int2x4) x;
	int2x4 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_prefix,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_prefix,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_prefix,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_prefix,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

TEMPER_PARAMETRIC( Test_int2x4_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int2x4 xlocal = (int2x4) x;
	int2x4 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_postfix,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_postfix,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_postfix,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_decrement_postfix,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	),
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int2x4_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int2x4 xlocal = (int2x4) x;
	int2x4 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_negate_prefix,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_negate_prefix,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		-1, -1, -1, -1,
		-1, -1, -1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_negate_prefix,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		-2, -2, -2, -2,
		-2, -2, -2, -2
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_negate_prefix,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	),
	int2x4(
		-3, -3, -3, -3,
		-3, -3, -3, -3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_negate_prefix,
	int2x4(
		10, 10, 10, 10,
		10, 10, 10, 10
	),
	int2x4(
		-10, -10, -10, -10,
		-10, -10, -10, -10
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_int2x4_not_prefix, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	int2x4 xlocal = (int2x4) x;
	int2x4 actualAnswer = ~xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_not_prefix,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		-2, -2, -2, -2,
		-2, -2, -2, -2
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_int2x4_cands, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cands,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	0,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cands,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	1,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cands,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	0,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cands,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cors, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cors,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	0,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cors,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	1,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cors,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	0,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cors,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cxors, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxors,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	0,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxors,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	1,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxors,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	0,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxors,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_lefts,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	0,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_lefts,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	1,
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_lefts,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	0,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_lefts,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int32_t& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rights,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	0,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rights,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	1,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rights,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	0,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rights,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	1,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_PARAMETRIC( Test_int2x4_candm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs & rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_candm,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_candm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_candm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_candm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_PARAMETRIC( Test_int2x4_corm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs | rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_corm,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_corm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_corm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_corm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cxorm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs ^ rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxorm,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxorm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxorm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cxorm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cshift_leftm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs << rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_leftm,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_leftm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		4, 4, 4, 4,
		4, 4, 4, 4
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_leftm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_leftm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_PARAMETRIC( Test_int2x4_cshift_rightm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = lhs >> rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rightm,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rightm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rightm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_cshift_rightm,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_PARAMETRIC( Test_int2x4_min, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_min,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_min,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_PARAMETRIC( Test_int2x4_max, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int2x4& rhs, const int2x4& expectedAnswer )
{
	int2x4 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_max,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_max,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	)
);

TEMPER_PARAMETRIC( Test_int2x4_saturate, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	int2x4 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_saturate,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_saturate,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_saturate,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_saturate,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_saturate,
	int2x4(
		10, 10, 10, 10,
		10, 10, 10, 10
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_PARAMETRIC( Test_int2x4_sign, TEMPER_FLAG_SHOULD_RUN, const int2x4& x, const int2x4& expectedAnswer )
{
	int2x4 actualResult = sign( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_sign,
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	),
	int2x4(
		0, 0, 0, 0,
		0, 0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_sign,
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_sign,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_sign,
	int2x4(
		3, 3, 3, 3,
		3, 3, 3, 3
	),
	int2x4(
		1, 1, 1, 1,
		1, 1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_sign,
	int2x4(
		-1, -1, -1, -1,
		-1, -1, -1, -1
	),
	int2x4(
		-1, -1, -1, -1,
		-1, -1, -1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_sign,
	int2x4(
		-2, -2, -2, -2,
		-2, -2, -2, -2
	),
	int2x4(
		-1, -1, -1, -1,
		-1, -1, -1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_sign,
	int2x4(
		-3, -3, -3, -3,
		-3, -3, -3, -3
	),
	int2x4(
		-1, -1, -1, -1,
		-1, -1, -1, -1
	)
);

TEMPER_PARAMETRIC( Test_int2x4_identity, TEMPER_FLAG_SHOULD_RUN, const int2x4& matrix, const bool expectedAnswer )
{
	int2x4 identityMat;
	identity( identityMat );
	bool isMatrixIdentity = ( identityMat == matrix );
	TEMPER_CHECK_TRUE( isMatrixIdentity == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_identity,
	int2x4(
		1, 0, 0, 0,
		0, 1, 0, 0
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_identity,
	int2x4(
		1, 1, 0, 0,
		0, 1, 0, 0
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_identity,
	int2x4(
		1, 0, 0, 0,
		1, 1, 0, 0
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_identity,
	int2x4(
		1, 1, 0, 0,
		1, 1, 0, 0
	),
	false
);

TEMPER_PARAMETRIC( Test_int2x4_transpose, TEMPER_FLAG_SHOULD_RUN, const int2x4& matrix, const int4x2& expectedAnswer )
{
	int4x2 actualResult = transpose( matrix );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_transpose,
	int2x4(
		1, 0, 0, 0,
		0, 1, 0, 0
	),
	int4x2(
		1, 0,
		0, 1,
		0, 0,
		0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_transpose,
	int2x4(
		0, 1, 2, 3,
		4, 5, 6, 7
	),
	int4x2(
		0, 4,
		1, 5,
		2, 6,
		3, 7
	)
);

TEMPER_PARAMETRIC( Test_int2x4_mulm, TEMPER_FLAG_SHOULD_RUN, const int2x4& lhs, const int4x2& rhs, const int2x2& expectedAnswer )
{
	int2x2 actualResult = mul( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_mulm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int4x2(
		4, 4,
		4, 4,
		4, 4,
		4, 4
	),
	int2x2(
		32, 32,
		32, 32
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int2x4_mulm,
	int2x4(
		2, 2, 2, 2,
		2, 2, 2, 2
	),
	int4x2(
		1, 0,
		0, 1,
		0, 0,
		0, 0
	),
	int2x2(
		2, 2,
		2, 2
	)
);

