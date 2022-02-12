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

TEMPER_PARAMETRIC( Test_double3x2_less_than, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const bool3x2* expectedAnswer )
{
	bool3x2 actualResult = double3x2_less_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_PARAMETRIC( Test_double3x2_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const bool3x2* expectedAnswer )
{
	bool3x2 actualResult = double3x2_less_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than_equal,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than_equal,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than_equal,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_less_than_equal,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_PARAMETRIC( Test_double3x2_greater_than, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const bool3x2* expectedAnswer )
{
	bool3x2 actualResult = double3x2_greater_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_PARAMETRIC( Test_double3x2_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const bool3x2* expectedAnswer )
{
	bool3x2 actualResult = double3x2_greater_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than_equal,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than_equal,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		false, false,
		false, false,
		false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than_equal,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_greater_than_equal,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(bool3x2)
	{
		true, true,
		true, true,
		true, true
	}
);

TEMPER_PARAMETRIC( Test_double3x2_cadds, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_cadds( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cadds,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	1.000000f,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cadds,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	2.000000f,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cadds,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	2.000000f,
	&(double3x2)
	{
		6.000000f, 6.000000f,
		6.000000f, 6.000000f,
		6.000000f, 6.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cadds,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	4.000000f,
	&(double3x2)
	{
		12.000000f, 12.000000f,
		12.000000f, 12.000000f,
		12.000000f, 12.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_csubs, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_csubs( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubs,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	1.000000f,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubs,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	2.000000f,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubs,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	2.000000f,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubs,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	4.000000f,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_cmuls, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_cmuls( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmuls,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	1.000000f,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmuls,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	2.000000f,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmuls,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	2.000000f,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmuls,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	4.000000f,
	&(double3x2)
	{
		32.000000f, 32.000000f,
		32.000000f, 32.000000f,
		32.000000f, 32.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_cdivs, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_cdivs( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivs,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	1.000000f,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivs,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	2.000000f,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivs,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	2.000000f,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivs,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	4.000000f,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_caddm, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_caddm( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_caddm,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_caddm,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_caddm,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		6.000000f, 6.000000f,
		6.000000f, 6.000000f,
		6.000000f, 6.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_caddm,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		12.000000f, 12.000000f,
		12.000000f, 12.000000f,
		12.000000f, 12.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_csubm, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_csubm( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubm,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubm,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubm,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_csubm,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_cmulm, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_cmulm( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmulm,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmulm,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmulm,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cmulm,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		32.000000f, 32.000000f,
		32.000000f, 32.000000f,
		32.000000f, 32.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_cdivm, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_cdivm( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivm,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivm,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivm,
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_cdivm,
	&(double3x2)
	{
		8.000000f, 8.000000f,
		8.000000f, 8.000000f,
		8.000000f, 8.000000f
	},
	&(double3x2)
	{
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_double3x2_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const double3x2* x, const double3x2* expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	double3x2* xlocal = (double3x2*) x;
	double3x2 actualAnswer = double3x2_negate( xlocal );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualAnswer, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_negate_prefix,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		-0.000000f, -0.000000f,
		-0.000000f, -0.000000f,
		-0.000000f, -0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_negate_prefix,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		-1.000000f, -1.000000f,
		-1.000000f, -1.000000f,
		-1.000000f, -1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_negate_prefix,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		-2.000000f, -2.000000f,
		-2.000000f, -2.000000f,
		-2.000000f, -2.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_negate_prefix,
	&(double3x2)
	{
		3.000000f, 3.000000f,
		3.000000f, 3.000000f,
		3.000000f, 3.000000f
	},
	&(double3x2)
	{
		-3.000000f, -3.000000f,
		-3.000000f, -3.000000f,
		-3.000000f, -3.000000f
	}
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_double3x2_min, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_min( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_min,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_min,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_max, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_max( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_max,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_max,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_saturate, TEMPER_FLAG_SHOULD_RUN, const double3x2* x, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_saturate( x );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_saturate,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_saturate,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_saturate,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_saturate,
	&(double3x2)
	{
		3.000000f, 3.000000f,
		3.000000f, 3.000000f,
		3.000000f, 3.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_saturate,
	&(double3x2)
	{
		10.000000f, 10.000000f,
		10.000000f, 10.000000f,
		10.000000f, 10.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_sign, TEMPER_FLAG_SHOULD_RUN, const double3x2* x, const int3x2* expectedAnswer )
{
	int3x2 actualResult = double3x2_sign( x );
	TEMPER_CHECK_TRUE( int3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_sign,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(int3x2)
	{
		0, 0,
		0, 0,
		0, 0
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_sign,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(int3x2)
	{
		1, 1,
		1, 1,
		1, 1
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_sign,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(int3x2)
	{
		1, 1,
		1, 1,
		1, 1
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_sign,
	&(double3x2)
	{
		3.000000f, 3.000000f,
		3.000000f, 3.000000f,
		3.000000f, 3.000000f
	},
	&(int3x2)
	{
		1, 1,
		1, 1,
		1, 1
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_sign,
	&(double3x2)
	{
		-1.000000f, -1.000000f,
		-1.000000f, -1.000000f,
		-1.000000f, -1.000000f
	},
	&(int3x2)
	{
		-1, -1,
		-1, -1,
		-1, -1
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_sign,
	&(double3x2)
	{
		-2.000000f, -2.000000f,
		-2.000000f, -2.000000f,
		-2.000000f, -2.000000f
	},
	&(int3x2)
	{
		-1, -1,
		-1, -1,
		-1, -1
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_sign,
	&(double3x2)
	{
		-3.000000f, -3.000000f,
		-3.000000f, -3.000000f,
		-3.000000f, -3.000000f
	},
	&(int3x2)
	{
		-1, -1,
		-1, -1,
		-1, -1
	}
);

TEMPER_PARAMETRIC( Test_double3x2_lerp, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double3x2* rhs, const double t, const double3x2* expectedAnswer )
{
	double3x2 actualResult = double3x2_lerp( lhs, rhs, t );
	TEMPER_CHECK_TRUE( double3x2_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_lerp,
	&(double3x2)
	{
		0.000000f, 0.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	},
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	0.500000f,
	&(double3x2)
	{
		0.500000f, 0.500000f,
		0.500000f, 0.500000f,
		0.500000f, 0.500000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_lerp,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	},
	&(double3x2)
	{
		3.000000f, 3.000000f,
		3.000000f, 3.000000f,
		3.000000f, 3.000000f
	},
	0.500000f,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_identity, TEMPER_FLAG_SHOULD_RUN, const double3x2* matrix, const bool expectedAnswer )
{
	double3x2 identityMat;
	double3x2_identity( &identityMat );
	bool isMatrixIdentity = double3x2_equals( &identityMat, matrix );
	TEMPER_CHECK_TRUE( isMatrixIdentity == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_identity,
	&(double3x2)
	{
		1.000000f, 0.000000f,
		0.000000f, 1.000000f,
		0.000000f, 0.000000f
	},
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_identity,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		0.000000f, 1.000000f,
		0.000000f, 0.000000f
	},
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_identity,
	&(double3x2)
	{
		1.000000f, 0.000000f,
		1.000000f, 1.000000f,
		0.000000f, 0.000000f
	},
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_identity,
	&(double3x2)
	{
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		0.000000f, 0.000000f
	},
	false
);

TEMPER_PARAMETRIC( Test_double3x2_transpose, TEMPER_FLAG_SHOULD_RUN, const double3x2* matrix, const double2x3* expectedAnswer )
{
	double2x3 actualResult = double3x2_transpose( matrix );
	TEMPER_CHECK_TRUE( double2x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_transpose,
	&(double3x2)
	{
		1.000000f, 0.000000f,
		0.000000f, 1.000000f,
		0.000000f, 0.000000f
	},
	&(double2x3)
	{
		1.000000f, 0.000000f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_transpose,
	&(double3x2)
	{
		0.000000f, 1.000000f,
		4.000000f, 5.000000f,
		8.000000f, 9.000000f
	},
	&(double2x3)
	{
		0.000000f, 4.000000f, 8.000000f,
		1.000000f, 5.000000f, 9.000000f
	}
);

TEMPER_PARAMETRIC( Test_double3x2_mulm, TEMPER_FLAG_SHOULD_RUN, const double3x2* lhs, const double2x3* rhs, const double3x3* expectedAnswer )
{
	double3x3 actualResult = double3x2_mulm( lhs, rhs );
	TEMPER_CHECK_TRUE( double3x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_mulm,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double2x3)
	{
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	},
	&(double3x3)
	{
		16.000000f, 16.000000f, 16.000000f,
		16.000000f, 16.000000f, 16.000000f,
		16.000000f, 16.000000f, 16.000000f
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_double3x2_mulm,
	&(double3x2)
	{
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	},
	&(double2x3)
	{
		1.000000f, 0.000000f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f
	},
	&(double3x3)
	{
		2.000000f, 2.000000f, 0.000000f,
		2.000000f, 2.000000f, 0.000000f,
		2.000000f, 2.000000f, 0.000000f
	}
);

