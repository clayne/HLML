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

TEMPER_PARAMETRIC( Test_double2_less_than, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = double2_less_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_PARAMETRIC( Test_double2_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = double2_less_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than_equal,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than_equal,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than_equal,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_less_than_equal,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_PARAMETRIC( Test_double2_greater_than, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = double2_greater_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_PARAMETRIC( Test_double2_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const bool2* expectedAnswer )
{
	bool2 actualResult = double2_greater_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than_equal,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than_equal,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { false, false }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than_equal,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(bool2) { true, true }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_greater_than_equal,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(bool2) { true, true }
);

TEMPER_PARAMETRIC( Test_double2_cadds, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_cadds( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cadds,
	&(double2) { 1.000000f, 1.000000f },
	1.000000f,
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cadds,
	&(double2) { 2.000000f, 2.000000f },
	2.000000f,
	&(double2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cadds,
	&(double2) { 4.000000f, 4.000000f },
	2.000000f,
	&(double2) { 6.000000f, 6.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cadds,
	&(double2) { 8.000000f, 8.000000f },
	4.000000f,
	&(double2) { 12.000000f, 12.000000f }
);

TEMPER_PARAMETRIC( Test_double2_csubs, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_csubs( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubs,
	&(double2) { 1.000000f, 1.000000f },
	1.000000f,
	&(double2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubs,
	&(double2) { 2.000000f, 2.000000f },
	2.000000f,
	&(double2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubs,
	&(double2) { 4.000000f, 4.000000f },
	2.000000f,
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubs,
	&(double2) { 8.000000f, 8.000000f },
	4.000000f,
	&(double2) { 4.000000f, 4.000000f }
);

TEMPER_PARAMETRIC( Test_double2_cmuls, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_cmuls( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmuls,
	&(double2) { 1.000000f, 1.000000f },
	1.000000f,
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmuls,
	&(double2) { 2.000000f, 2.000000f },
	2.000000f,
	&(double2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmuls,
	&(double2) { 4.000000f, 4.000000f },
	2.000000f,
	&(double2) { 8.000000f, 8.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmuls,
	&(double2) { 8.000000f, 8.000000f },
	4.000000f,
	&(double2) { 32.000000f, 32.000000f }
);

TEMPER_PARAMETRIC( Test_double2_cdivs, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_cdivs( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivs,
	&(double2) { 1.000000f, 1.000000f },
	1.000000f,
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivs,
	&(double2) { 2.000000f, 2.000000f },
	2.000000f,
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivs,
	&(double2) { 4.000000f, 4.000000f },
	2.000000f,
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivs,
	&(double2) { 8.000000f, 8.000000f },
	4.000000f,
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_PARAMETRIC( Test_double2_caddv, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_caddv( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_caddv,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_caddv,
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_caddv,
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 6.000000f, 6.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_caddv,
	&(double2) { 8.000000f, 8.000000f },
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 12.000000f, 12.000000f }
);

TEMPER_PARAMETRIC( Test_double2_csubv, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_csubv( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubv,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubv,
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubv,
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_csubv,
	&(double2) { 8.000000f, 8.000000f },
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 4.000000f, 4.000000f }
);

TEMPER_PARAMETRIC( Test_double2_cmulv, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_cmulv( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmulv,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmulv,
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 4.000000f, 4.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmulv,
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 8.000000f, 8.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cmulv,
	&(double2) { 8.000000f, 8.000000f },
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 32.000000f, 32.000000f }
);

TEMPER_PARAMETRIC( Test_double2_cdivv, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_cdivv( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivv,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivv,
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivv,
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_cdivv,
	&(double2) { 8.000000f, 8.000000f },
	&(double2) { 4.000000f, 4.000000f },
	&(double2) { 2.000000f, 2.000000f }
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_double2_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const double2* x, const double2* expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	double2* xlocal = (double2*) x;
	double2 actualAnswer = double2_negate( xlocal );
	TEMPER_CHECK_TRUE( double2_equals( &actualAnswer, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_negate_prefix,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { -0.000000f, -0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_negate_prefix,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { -1.000000f, -1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_negate_prefix,
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { -2.000000f, -2.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_negate_prefix,
	&(double2) { 3.000000f, 3.000000f },
	&(double2) { -3.000000f, -3.000000f }
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_double2_min, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_min( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_min,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_min,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_PARAMETRIC( Test_double2_max, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double2* expectedAnswer )
{
	double2 actualResult = double2_max( lhs, rhs );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_max,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_max,
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_PARAMETRIC( Test_double2_saturate, TEMPER_FLAG_SHOULD_RUN, const double2* x, const double2* expectedAnswer )
{
	double2 actualResult = double2_saturate( x );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_saturate,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 0.000000f, 0.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_saturate,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_saturate,
	&(double2) { 2.000000f, 2.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_saturate,
	&(double2) { 3.000000f, 3.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_saturate,
	&(double2) { 10.000000f, 10.000000f },
	&(double2) { 1.000000f, 1.000000f }
);

TEMPER_PARAMETRIC( Test_double2_sign, TEMPER_FLAG_SHOULD_RUN, const double2* x, const int2* expectedAnswer )
{
	int2 actualResult = double2_sign( x );
	TEMPER_CHECK_TRUE( int2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_sign,
	&(double2) { 0.000000f, 0.000000f },
	&(int2) { 0, 0 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_sign,
	&(double2) { 1.000000f, 1.000000f },
	&(int2) { 1, 1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_sign,
	&(double2) { 2.000000f, 2.000000f },
	&(int2) { 1, 1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_sign,
	&(double2) { 3.000000f, 3.000000f },
	&(int2) { 1, 1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_sign,
	&(double2) { -1.000000f, -1.000000f },
	&(int2) { -1, -1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_sign,
	&(double2) { -2.000000f, -2.000000f },
	&(int2) { -1, -1 }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_sign,
	&(double2) { -3.000000f, -3.000000f },
	&(int2) { -1, -1 }
);

TEMPER_PARAMETRIC( Test_double2_lerp, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double t, const double2* expectedAnswer )
{
	double2 actualResult = double2_lerp( lhs, rhs, t );
	TEMPER_CHECK_TRUE( double2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_lerp,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	0.500000f,
	&(double2) { 0.500000f, 0.500000f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_lerp,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 3.000000f, 3.000000f },
	0.500000f,
	&(double2) { 2.000000f, 2.000000f }
);

TEMPER_PARAMETRIC( Test_double2_lengthsq, TEMPER_FLAG_SHOULD_RUN, const double2* vec, const double expectedAnswer )
{
	double actualResult = double2_lengthsq( vec );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_lengthsq,
	&(double2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_lengthsq,
	&(double2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_lengthsq,
	&(double2) { 2.000000f, 2.000000f },
	8.000000f
);

TEMPER_PARAMETRIC( Test_double2_length, TEMPER_FLAG_SHOULD_RUN, const double2* vec, const double expectedAnswer )
{
	double actualResult = double2_length( vec );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_length,
	&(double2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_length,
	&(double2) { 1.000000f, 1.000000f },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_length,
	&(double2) { 2.000000f, 2.000000f },
	2.828427f
);

TEMPER_PARAMETRIC( Test_double2_dot, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double expectedAnswer )
{
	double actualResult = double2_dot( lhs, rhs );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_dot,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_dot,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_dot,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { -1.000000f, -1.000000f },
	-2.000000f
);

TEMPER_PARAMETRIC( Test_double2_angle, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double expectedAnswer )
{
	double actualResult = double2_angle( lhs, rhs );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_angle,
	&(double2) { 1.000000f, 0.000000f },
	&(double2) { 0.000000f, 1.000000f },
	90.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_angle,
	&(double2) { 1.000000f, 1.000000f },
	&(double2) { 0.000000f, 1.000000f },
	45.000000f
);

TEMPER_PARAMETRIC( Test_double2_distancesq, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double expectedAnswer )
{
	double actualResult = double2_distancesq( lhs, rhs );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_distancesq,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_distancesq,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	2.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_distancesq,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 2.000000f, 2.000000f },
	8.000000f
);

TEMPER_PARAMETRIC( Test_double2_distance, TEMPER_FLAG_SHOULD_RUN, const double2* lhs, const double2* rhs, const double expectedAnswer )
{
	double actualResult = double2_distance( lhs, rhs );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_distance,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 0.000000f, 0.000000f },
	0.000000f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_distance,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 1.000000f, 1.000000f },
	1.414214f
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_distance,
	&(double2) { 0.000000f, 0.000000f },
	&(double2) { 2.000000f, 2.000000f },
	2.828427f
);

TEMPER_PARAMETRIC( Test_double2_normalize, TEMPER_FLAG_SHOULD_RUN, const double2* vec, const double2* expectedAnswer )
{
	double2 vecNormalized = *vec;
	double2_normalize( &vecNormalized );
	TEMPER_CHECK_TRUE( double2_equals( &vecNormalized, expectedAnswer ) );
	TEMPER_CHECK_TRUE( doubleeq( double2_length( &vecNormalized ), 1.0 ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_normalize,
	&(double2) { 1.000000f, 2.000000f },
	&(double2) { 0.447210f, 0.894430f }
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double2_normalize,
	&(double2) { 5.000000f, 4.000000f },
	&(double2) { 0.780870f, 0.624700f }
);

