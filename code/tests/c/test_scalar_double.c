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

static double g_deg_double = 90.0;
static double g_rad_double = 1.57079637;

TEMPER_TEST( TestFloateq_double, TEMPER_FLAG_SHOULD_RUN )
{
	double a = 5.0;
	double b = 5.0;
	double c = 5.000020;
	double d = 5.000100;

	TEMPER_CHECK_TRUE(  doubleeq( a, b ) );
	TEMPER_CHECK_TRUE( !doubleeq( a, c ) );
	TEMPER_CHECK_TRUE( !doubleeq( a, d ) );
}

TEMPER_TEST( TestSign_double, TEMPER_FLAG_SHOULD_RUN )
{
	TEMPER_CHECK_TRUE( signd( -5.0 ) == -1 );
	TEMPER_CHECK_TRUE( signd( 9.0 ) ==  1 );
}

TEMPER_TEST( TestDegreesRadians_Scalar_double, TEMPER_FLAG_SHOULD_RUN )
{
	TEMPER_CHECK_TRUE( doubleeq( radians( g_deg_double ), 1.57079637 ) );
	TEMPER_CHECK_TRUE( doubleeq( degrees( g_rad_double ), 90.0 ) );
}

TEMPER_TEST( TestMinMax_double, TEMPER_FLAG_SHOULD_RUN )
{
	double a = 5.0;
	double b = 9.0;

	TEMPER_CHECK_TRUE( doubleeq( mind( a, b ), a ) );
	TEMPER_CHECK_TRUE( doubleeq( maxd( a, b ), b ) );
}

TEMPER_TEST( TestClamp_double, TEMPER_FLAG_SHOULD_RUN )
{
	double a;
	double low  = 1.0;
	double high = 10.0;

	a = clampd( 0.0, low, high );
	TEMPER_CHECK_TRUE( doubleeq( a, low ) );

	a = clampd( 11.0, low, high );
	TEMPER_CHECK_TRUE( doubleeq( a, high ) );
}

TEMPER_TEST( TestSaturate_double, TEMPER_FLAG_SHOULD_RUN )
{
	double a;

	a = saturate( -1.000000 );
	TEMPER_CHECK_TRUE( doubleeq( a, 0.000000 ) );

	a = saturate( 2.000000 );
	TEMPER_CHECK_TRUE( doubleeq( a, 1.000000 ) );
}

TEMPER_TEST( TestLerp_Scalar_double, TEMPER_FLAG_SHOULD_RUN )
{
	double a = 1.0;
	double b = 3.0;

	double answer = lerp( a, b, 0.5 );

	TEMPER_CHECK_TRUE( doubleeq( answer, 2.0 ) );
}
