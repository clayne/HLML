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

TEMPER_PARAMETRIC( Test_int3x3_bool3x3, TEMPER_FLAG_SHOULD_RUN, const int3x3& vec, const bool3x3& expectedAnswer )
{
	bool3x3 actualResult = bool3x3( vec );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x3_bool3x3,
	int3x3(
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	),
	bool3x3(
		false, false, false,
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x3_bool3x3,
	int3x3(
		1, 1, 1,
		1, 1, 1,
		1, 1, 1
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x3_bool3x3,
	int3x3(
		69, 69, 69,
		69, 69, 69,
		69, 69, 69
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_int3x3_bool3x3,
	int3x3(
		420, 420, 420,
		420, 420, 420,
		420, 420, 420
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_PARAMETRIC( Test_uint3x3_bool3x3, TEMPER_FLAG_SHOULD_RUN, const uint3x3& vec, const bool3x3& expectedAnswer )
{
	bool3x3 actualResult = bool3x3( vec );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3x3_bool3x3,
	uint3x3(
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	),
	bool3x3(
		false, false, false,
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3x3_bool3x3,
	uint3x3(
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3x3_bool3x3,
	uint3x3(
		69U, 69U, 69U,
		69U, 69U, 69U,
		69U, 69U, 69U
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint3x3_bool3x3,
	uint3x3(
		420U, 420U, 420U,
		420U, 420U, 420U,
		420U, 420U, 420U
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_PARAMETRIC( Test_float3x3_bool3x3, TEMPER_FLAG_SHOULD_RUN, const float3x3& vec, const bool3x3& expectedAnswer )
{
	bool3x3 actualResult = bool3x3( vec );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3x3_bool3x3,
	float3x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool3x3(
		false, false, false,
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3x3_bool3x3,
	float3x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3x3_bool3x3,
	float3x3(
		69.000000f, 69.000000f, 69.000000f,
		69.000000f, 69.000000f, 69.000000f,
		69.000000f, 69.000000f, 69.000000f
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float3x3_bool3x3,
	float3x3(
		420.000000f, 420.000000f, 420.000000f,
		420.000000f, 420.000000f, 420.000000f,
		420.000000f, 420.000000f, 420.000000f
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_PARAMETRIC( Test_double3x3_bool3x3, TEMPER_FLAG_SHOULD_RUN, const double3x3& vec, const bool3x3& expectedAnswer )
{
	bool3x3 actualResult = bool3x3( vec );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x3_bool3x3,
	double3x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	),
	bool3x3(
		false, false, false,
		false, false, false,
		false, false, false
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x3_bool3x3,
	double3x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x3_bool3x3,
	double3x3(
		69.000000f, 69.000000f, 69.000000f,
		69.000000f, 69.000000f, 69.000000f,
		69.000000f, 69.000000f, 69.000000f
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x3_bool3x3,
	double3x3(
		420.000000f, 420.000000f, 420.000000f,
		420.000000f, 420.000000f, 420.000000f,
		420.000000f, 420.000000f, 420.000000f
	),
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	)
);

TEMPER_PARAMETRIC( Test_bool3x3_all, TEMPER_FLAG_SHOULD_RUN, const bool3x3& x, const bool32_t expectedAnswer )
{
	bool32_t actualResult = all( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_all,
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_all,
	bool3x3(
		true, false, false,
		false, false, false,
		false, false, false
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_all,
	bool3x3(
		false, true, true,
		true, true, true,
		true, true, true
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_all,
	bool3x3(
		false, true, false,
		true, false, true,
		false, true, false
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_all,
	bool3x3(
		false, false, false,
		false, false, false,
		false, false, false
	),
	false
);

TEMPER_PARAMETRIC( Test_bool3x3_any, TEMPER_FLAG_SHOULD_RUN, const bool3x3& x, const bool32_t expectedAnswer )
{
	bool32_t actualResult = any( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_any,
	bool3x3(
		true, true, true,
		true, true, true,
		true, true, true
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_any,
	bool3x3(
		true, false, false,
		false, false, false,
		false, false, false
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_any,
	bool3x3(
		false, true, true,
		true, true, true,
		true, true, true
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_any,
	bool3x3(
		false, true, false,
		true, false, true,
		false, true, false
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_any,
	bool3x3(
		false, false, false,
		false, false, false,
		false, false, false
	),
	false
);

TEMPER_PARAMETRIC( Test_bool3x3_identity, TEMPER_FLAG_SHOULD_RUN, const bool3x3& matrix, const bool expectedAnswer )
{
	bool3x3 identityMat;
	identity( identityMat );
	bool isMatrixIdentity = ( identityMat == matrix );
	TEMPER_CHECK_TRUE( isMatrixIdentity == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_identity,
	bool3x3(
		true, false, false,
		false, true, false,
		false, false, true
	),
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_identity,
	bool3x3(
		true, true, false,
		false, true, false,
		false, false, true
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_identity,
	bool3x3(
		true, false, false,
		true, true, false,
		false, false, true
	),
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_identity,
	bool3x3(
		true, true, false,
		true, true, false,
		false, false, true
	),
	false
);

TEMPER_PARAMETRIC( Test_bool3x3_transpose, TEMPER_FLAG_SHOULD_RUN, const bool3x3& matrix, const bool3x3& expectedAnswer )
{
	bool3x3 actualResult = transpose( matrix );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_transpose,
	bool3x3(
		true, false, false,
		false, true, false,
		false, false, true
	),
	bool3x3(
		true, false, false,
		false, true, false,
		false, false, true
	)
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_bool3x3_transpose,
	bool3x3(
		false, true, true,
		true, true, true,
		true, true, true
	),
	bool3x3(
		false, true, true,
		true, true, true,
		true, true, true
	)
);

