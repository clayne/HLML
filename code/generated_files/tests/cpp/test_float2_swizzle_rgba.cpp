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

TEMPER_PARAMETRIC( Test_float2_Swizzle_rr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float2& expectedAnswer )
{
	float2 vecSwizzled = vec.rr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rr,
	float2( 0.000000f, 0.000000f ),
	float2( 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rr,
	float2( 0.000000f, 1.000000f ),
	float2( 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rr,
	float2( 3.000000f, 2.000000f ),
	float2( 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rr,
	float2( 10.000000f, 10.000000f ),
	float2( 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rr,
	float2( 20.000000f, 20.000000f ),
	float2( 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float2( 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_gr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float2& expectedAnswer )
{
	float2 vecSwizzled = vec.gr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gr,
	float2( 0.000000f, 0.000000f ),
	float2( 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gr,
	float2( 0.000000f, 1.000000f ),
	float2( 1.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gr,
	float2( 3.000000f, 2.000000f ),
	float2( 2.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gr,
	float2( 10.000000f, 10.000000f ),
	float2( 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gr,
	float2( 20.000000f, 20.000000f ),
	float2( 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float2( 100.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float2& expectedAnswer )
{
	float2 vecSwizzled = vec.rg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rg,
	float2( 0.000000f, 0.000000f ),
	float2( 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rg,
	float2( 0.000000f, 1.000000f ),
	float2( 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rg,
	float2( 3.000000f, 2.000000f ),
	float2( 3.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rg,
	float2( 10.000000f, 10.000000f ),
	float2( 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rg,
	float2( 20.000000f, 20.000000f ),
	float2( 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_gg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float2& expectedAnswer )
{
	float2 vecSwizzled = vec.gg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gg,
	float2( 0.000000f, 0.000000f ),
	float2( 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gg,
	float2( 0.000000f, 1.000000f ),
	float2( 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gg,
	float2( 3.000000f, 2.000000f ),
	float2( 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gg,
	float2( 10.000000f, 10.000000f ),
	float2( 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gg,
	float2( 20.000000f, 20.000000f ),
	float2( 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float2( 100.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rrr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.rrr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrr,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrr,
	float2( 0.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrr,
	float2( 3.000000f, 2.000000f ),
	float3( 3.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrr,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrr,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_grr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.grr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grr,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grr,
	float2( 0.000000f, 1.000000f ),
	float3( 1.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grr,
	float2( 3.000000f, 2.000000f ),
	float3( 2.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grr,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grr,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 100.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rgr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.rgr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgr,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgr,
	float2( 0.000000f, 1.000000f ),
	float3( 0.000000f, 1.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgr,
	float2( 3.000000f, 2.000000f ),
	float3( 3.000000f, 2.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgr,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgr,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 340282346638528859000000000000000000000.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_ggr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.ggr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggr,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggr,
	float2( 0.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggr,
	float2( 3.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggr,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggr,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 100.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rrg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.rrg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrg,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrg,
	float2( 0.000000f, 1.000000f ),
	float3( 0.000000f, 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrg,
	float2( 3.000000f, 2.000000f ),
	float3( 3.000000f, 3.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrg,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrg,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_grg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.grg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grg,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grg,
	float2( 0.000000f, 1.000000f ),
	float3( 1.000000f, 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grg,
	float2( 3.000000f, 2.000000f ),
	float3( 2.000000f, 3.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grg,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grg,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 100.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rgg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.rgg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgg,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgg,
	float2( 0.000000f, 1.000000f ),
	float3( 0.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgg,
	float2( 3.000000f, 2.000000f ),
	float3( 3.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgg,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgg,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 340282346638528859000000000000000000000.000000f, 100.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_ggg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float3& expectedAnswer )
{
	float3 vecSwizzled = vec.ggg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggg,
	float2( 0.000000f, 0.000000f ),
	float3( 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggg,
	float2( 0.000000f, 1.000000f ),
	float3( 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggg,
	float2( 3.000000f, 2.000000f ),
	float3( 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggg,
	float2( 10.000000f, 10.000000f ),
	float3( 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggg,
	float2( 20.000000f, 20.000000f ),
	float3( 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float3( 100.000000f, 100.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rrrr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rrrr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrr,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrr,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 3.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_grrr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.grrr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrr,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrr,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 3.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rgrr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rgrr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrr,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 1.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrr,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 2.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_ggrr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.ggrr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrr,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 1.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrr,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 2.000000f, 3.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rrgr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rrgr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgr,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 0.000000f, 1.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgr,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 3.000000f, 2.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_grgr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.grgr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgr,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 0.000000f, 1.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgr,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 3.000000f, 2.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rggr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rggr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggr,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 1.000000f, 1.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggr,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 2.000000f, 2.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 100.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_gggr, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.gggr;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggr,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggr,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 1.000000f, 1.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggr,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 2.000000f, 2.000000f, 3.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggr,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggr,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggr,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 100.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rrrg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rrrg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrg,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrg,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 3.000000f, 3.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrrg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_grrg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.grrg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrg,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 0.000000f, 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrg,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 3.000000f, 3.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grrg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rgrg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rgrg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrg,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 1.000000f, 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrg,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 2.000000f, 3.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rgrg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_ggrg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.ggrg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrg,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 1.000000f, 0.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrg,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 2.000000f, 3.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_ggrg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 100.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rrgg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rrgg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgg,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 0.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgg,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 3.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rrgg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_grgg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.grgg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgg,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 0.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgg,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 3.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_grgg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 340282346638528859000000000000000000000.000000f, 100.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_rggg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.rggg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggg,
	float2( 0.000000f, 1.000000f ),
	float4( 0.000000f, 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggg,
	float2( 3.000000f, 2.000000f ),
	float4( 3.000000f, 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_rggg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 340282346638528859000000000000000000000.000000f, 100.000000f, 100.000000f, 100.000000f )
);

TEMPER_PARAMETRIC( Test_float2_Swizzle_gggg, TEMPER_FLAG_SHOULD_RUN, const float2& vec, const float4& expectedAnswer )
{
	float4 vecSwizzled = vec.gggg;
	TEMPER_CHECK_TRUE( vecSwizzled == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggg,
	float2( 0.000000f, 0.000000f ),
	float4( 0.000000f, 0.000000f, 0.000000f, 0.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggg,
	float2( 0.000000f, 1.000000f ),
	float4( 1.000000f, 1.000000f, 1.000000f, 1.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggg,
	float2( 3.000000f, 2.000000f ),
	float4( 2.000000f, 2.000000f, 2.000000f, 2.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggg,
	float2( 10.000000f, 10.000000f ),
	float4( 10.000000f, 10.000000f, 10.000000f, 10.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggg,
	float2( 20.000000f, 20.000000f ),
	float4( 20.000000f, 20.000000f, 20.000000f, 20.000000f )
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_float2_Swizzle_gggg,
	float2( 340282346638528859000000000000000000000.000000f, 100.000000f ),
	float4( 100.000000f, 100.000000f, 100.000000f, 100.000000f )
);
