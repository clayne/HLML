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

TEMPER_PARAMETRIC( Test_double_min, TEMPER_FLAG_SHOULD_RUN, const double lhs, const double rhs, const double expectedAnswer )
{
	double actualResult = min( lhs, rhs );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_min, 0.000000f, 1.000000f, 0.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_min, 1.000000f, 2.000000f, 1.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_min, 420.000000f, 69.000000f, 69.000000f );

TEMPER_PARAMETRIC( Test_double_max, TEMPER_FLAG_SHOULD_RUN, const double lhs, const double rhs, const double expectedAnswer )
{
	double actualResult = max( lhs, rhs );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_max, 0.000000f, 1.000000f, 1.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_max, 1.000000f, 2.000000f, 2.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_max, 69.000000f, 420.000000f, 420.000000f );

TEMPER_PARAMETRIC( Test_double_saturate, TEMPER_FLAG_SHOULD_RUN, const double x, const double expectedAnswer )
{
	double actualResult = saturate( x );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_saturate, 0.000000f, 0.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_saturate, 1.000000f, 1.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_saturate, 2.000000f, 1.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_saturate, 3.000000f, 1.000000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_saturate, 10.000000f, 1.000000f );

TEMPER_PARAMETRIC( Test_double_sign, TEMPER_FLAG_SHOULD_RUN, const double x, const int32_t expectedAnswer )
{
	int32_t actualResult = sign( x );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_sign, 0.000000f, 0 );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_sign, 1.000000f, 1 );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_sign, 2.000000f, 1 );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_sign, 3.000000f, 1 );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_sign, -1.000000f, -1 );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_sign, -2.000000f, -1 );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_sign, -3.000000f, -1 );

TEMPER_PARAMETRIC( Test_double_doubleeq, TEMPER_FLAG_SHOULD_RUN, const double lhs, const double rhs, const bool expectedAnswer )
{
	bool actualResult = doubleeq( lhs, rhs );
	TEMPER_CHECK_TRUE( actualResult == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_doubleeq, 0.000000f, 0.000000f, true );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_doubleeq, 1.000000f, 1.000000f, true );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_doubleeq, 1.000000f, 2.000000f, false );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_doubleeq, 0.000000f, 0.500000f, false );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_doubleeq, 0.000000f, 0.250000f, false );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_doubleeq, 0.000000f, 0.100000f, false );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_doubleeq, 0.000000f, 0.000001f, true );

TEMPER_PARAMETRIC( Test_double_degrees, TEMPER_FLAG_SHOULD_RUN, const double x, const double expectedAnswer )
{
	double actualResult = degrees( x );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_degrees, 1.000000f, 57.295780f );

TEMPER_PARAMETRIC( Test_double_radians, TEMPER_FLAG_SHOULD_RUN, const double x, const double expectedAnswer )
{
	double actualResult = radians( x );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_radians, 57.295780f, 1.000000f );

TEMPER_PARAMETRIC( Test_double_lerp, TEMPER_FLAG_SHOULD_RUN, const double lhs, const double rhs, const double t, const double expectedAnswer )
{
	double actualResult = lerp( lhs, rhs, t );
	TEMPER_CHECK_TRUE( doubleeq( actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_lerp, 0.000000f, 1.000000f, 0.500000f, 0.500000f );

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double_lerp, 1.000000f, 3.000000f, 0.500000f, 2.000000f );

