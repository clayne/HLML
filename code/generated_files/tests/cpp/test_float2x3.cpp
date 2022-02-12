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

TEMPER_PARAMETRIC( Test_float2x3_less_than, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const bool2x3& expectedAnswer )
{
	bool2x3 actualResult = lhs < rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_PARAMETRIC( Test_float2x3_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const bool2x3& expectedAnswer )
{
	bool2x3 actualResult = lhs <= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than_equal,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than_equal,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than_equal,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_less_than_equal,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_PARAMETRIC( Test_float2x3_greater_than, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const bool2x3& expectedAnswer )
{
	bool2x3 actualResult = lhs > rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_PARAMETRIC( Test_float2x3_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const bool2x3& expectedAnswer )
{
	bool2x3 actualResult = lhs >= rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than_equal,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than_equal,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than_equal,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_greater_than_equal,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool2x3(
		true, true, true,
		true, true, true
	)
);

TEMPER_PARAMETRIC( Test_float2x3_cadds, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cadds,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	1.000000f,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cadds,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	2.000000f,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cadds,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	2.000000f,
	float2x3(
		6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cadds,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	4.000000f,
	float2x3(
		12.000000f, 12.000000f, 12.000000f,
		12.000000f, 12.000000f, 12.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_csubs, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubs,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	1.000000f,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubs,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	2.000000f,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubs,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	2.000000f,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubs,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	4.000000f,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_cmuls, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmuls,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	1.000000f,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmuls,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	2.000000f,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmuls,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	2.000000f,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmuls,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	4.000000f,
	float2x3(
		32.000000f, 32.000000f, 32.000000f,
		32.000000f, 32.000000f, 32.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_cdivs, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivs,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	1.000000f,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivs,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	2.000000f,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivs,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	2.000000f,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivs,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	4.000000f,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_caddm, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs + rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_caddm,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_caddm,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_caddm,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_caddm,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		12.000000f, 12.000000f, 12.000000f,
		12.000000f, 12.000000f, 12.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_csubm, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs - rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubm,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubm,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubm,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_csubm,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_cmulm, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs * rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmulm,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmulm,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmulm,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cmulm,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		32.000000f, 32.000000f, 32.000000f,
		32.000000f, 32.000000f, 32.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_cdivm, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lhs / rhs;
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivm,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivm,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivm,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_cdivm,
	float2x3(
		8.000000f, 8.000000f, 8.000000f,
		8.000000f, 8.000000f, 8.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

TEMPER_PARAMETRIC( Test_float2x3_increment_prefix, TEMPER_FLAG_SHOULD_RUN, const float2x3& x, const float2x3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float2x3 xlocal = (float2x3) x;
	float2x3 actualAnswer = ++xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_prefix,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_prefix,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_prefix,
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_prefix,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		5.000000f, 5.000000f, 5.000000f,
		5.000000f, 5.000000f, 5.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_increment_postfix, TEMPER_FLAG_SHOULD_RUN, const float2x3& x, const float2x3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float2x3 xlocal = (float2x3) x;
	float2x3 actualAnswer = xlocal++;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_postfix,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_postfix,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_postfix,
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_increment_postfix,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		5.000000f, 5.000000f, 5.000000f,
		5.000000f, 5.000000f, 5.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_decrement_prefix, TEMPER_FLAG_SHOULD_RUN, const float2x3& x, const float2x3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float2x3 xlocal = (float2x3) x;
	float2x3 actualAnswer = --xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_prefix,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_prefix,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_prefix,
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_prefix,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_decrement_postfix, TEMPER_FLAG_SHOULD_RUN, const float2x3& x, const float2x3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float2x3 xlocal = (float2x3) x;
	float2x3 actualAnswer = xlocal--;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_postfix,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_postfix,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_postfix,
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_decrement_postfix,
	float2x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	),
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif
#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_float2x3_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const float2x3& x, const float2x3& expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	float2x3 xlocal = (float2x3) x;
	float2x3 actualAnswer = -xlocal;
	TEMPER_CHECK_TRUE( actualAnswer == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_negate_prefix,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		-0.000000f, -0.000000f, -0.000000f,
		-0.000000f, -0.000000f, -0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_negate_prefix,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		-1.000000f, -1.000000f, -1.000000f,
		-1.000000f, -1.000000f, -1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_negate_prefix,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		-2.000000f, -2.000000f, -2.000000f,
		-2.000000f, -2.000000f, -2.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_negate_prefix,
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	float2x3(
		-3.000000f, -3.000000f, -3.000000f,
		-3.000000f, -3.000000f, -3.000000f
	)
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_float2x3_min, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_min,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_min,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_max, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const float2x3& expectedAnswer )
{
	float2x3 actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_max,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_max,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_saturate, TEMPER_FLAG_SHOULD_RUN, const float2x3& x, const float2x3& expectedAnswer )
{
	float2x3 actualResult = saturate( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_saturate,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_saturate,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_saturate,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_saturate,
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_saturate,
	float2x3(
		10.000000f, 10.000000f, 10.000000f,
		10.000000f, 10.000000f, 10.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_sign, TEMPER_FLAG_SHOULD_RUN, const float2x3& x, const int2x3& expectedAnswer )
{
	int2x3 actualResult = sign( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_sign,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	int2x3(
		0, 0, 0,
		0, 0, 0
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_sign,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	int2x3(
		1, 1, 1,
		1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_sign,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	int2x3(
		1, 1, 1,
		1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_sign,
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	int2x3(
		1, 1, 1,
		1, 1, 1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_sign,
	float2x3(
		-1.000000f, -1.000000f, -1.000000f,
		-1.000000f, -1.000000f, -1.000000f
	),
	int2x3(
		-1, -1, -1,
		-1, -1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_sign,
	float2x3(
		-2.000000f, -2.000000f, -2.000000f,
		-2.000000f, -2.000000f, -2.000000f
	),
	int2x3(
		-1, -1, -1,
		-1, -1, -1
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_sign,
	float2x3(
		-3.000000f, -3.000000f, -3.000000f,
		-3.000000f, -3.000000f, -3.000000f
	),
	int2x3(
		-1, -1, -1,
		-1, -1, -1
	)
);

TEMPER_PARAMETRIC( Test_float2x3_lerp, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float2x3& rhs, const float t, const float2x3& expectedAnswer )
{
	float2x3 actualResult = lerp( lhs, rhs, t );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_lerp,
	float2x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	0.500000f,
	float2x3(
		0.500000f, 0.500000f, 0.500000f,
		0.500000f, 0.500000f, 0.500000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_lerp,
	float2x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	float2x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	),
	0.500000f,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_identity, TEMPER_FLAG_SHOULD_RUN, const float2x3& matrix, const bool expectedAnswer )
{
	float2x3 identityMat;
	identity( identityMat );
	bool isMatrixIdentity = ( identityMat == matrix );
	TEMPER_CHECK_TRUE( isMatrixIdentity == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_identity,
	float2x3(
		1.000000f, 0.000000f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_identity,
	float2x3(
		1.000000f, 1.000000f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_identity,
	float2x3(
		1.000000f, 0.000000f, 0.000000f,
		1.000000f, 1.000000f, 0.000000f
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_identity,
	float2x3(
		1.000000f, 1.000000f, 0.000000f,
		1.000000f, 1.000000f, 0.000000f
	),
	false
);

TEMPER_PARAMETRIC( Test_float2x3_transpose, TEMPER_FLAG_SHOULD_RUN, const float2x3& matrix, const float3x2& expectedAnswer )
{
	float3x2 actualResult = transpose( matrix );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_transpose,
	float2x3(
		1.000000f, 0.000000f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f
	),
	float3x2(
		1.000000f, 0.000000f,
		0.000000f, 1.000000f,
		0.000000f, 0.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_transpose,
	float2x3(
		0.000000f, 1.000000f, 2.000000f,
		4.000000f, 5.000000f, 6.000000f
	),
	float3x2(
		0.000000f, 4.000000f,
		1.000000f, 5.000000f,
		2.000000f, 6.000000f
	)
);

TEMPER_PARAMETRIC( Test_float2x3_mulm, TEMPER_FLAG_SHOULD_RUN, const float2x3& lhs, const float3x2& rhs, const float2x2& expectedAnswer )
{
	float2x2 actualResult = mul( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_mulm,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float3x2(
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	),
	float2x2(
		24.000000f, 24.000000f,
		24.000000f, 24.000000f
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2x3_mulm,
	float2x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	),
	float3x2(
		1.000000f, 0.000000f,
		0.000000f, 1.000000f,
		0.000000f, 0.000000f
	),
	float2x2(
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	)
);

