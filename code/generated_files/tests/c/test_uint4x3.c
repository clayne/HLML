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

TEMPER_PARAMETRIC( Test_uint4x3_less_than, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const bool4x3* expectedAnswer )
{
	bool4x3 actualResult = uint4x3_less_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_less_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const bool4x3* expectedAnswer )
{
	bool4x3 actualResult = uint4x3_less_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than_equal,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than_equal,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than_equal,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_less_than_equal,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_greater_than, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const bool4x3* expectedAnswer )
{
	bool4x3 actualResult = uint4x3_greater_than( lhs, rhs );
	TEMPER_CHECK_TRUE( bool4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_greater_than_equal, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const bool4x3* expectedAnswer )
{
	bool4x3 actualResult = uint4x3_greater_than_equal( lhs, rhs );
	TEMPER_CHECK_TRUE( bool4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than_equal,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than_equal,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		false, false, false,
		false, false, false,
		false, false, false,
		false, false, false
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than_equal,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_greater_than_equal,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(bool4x3)
	{
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cadds, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cadds( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cadds,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cadds,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	2U,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cadds,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	2U,
	&(uint4x3)
	{
		6U, 6U, 6U,
		6U, 6U, 6U,
		6U, 6U, 6U,
		6U, 6U, 6U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cadds,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	4U,
	&(uint4x3)
	{
		12U, 12U, 12U,
		12U, 12U, 12U,
		12U, 12U, 12U,
		12U, 12U, 12U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_csubs, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_csubs( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubs,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubs,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	2U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubs,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	2U,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubs,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	4U,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cmuls, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cmuls( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmuls,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmuls,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	2U,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmuls,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	2U,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmuls,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	4U,
	&(uint4x3)
	{
		32U, 32U, 32U,
		32U, 32U, 32U,
		32U, 32U, 32U,
		32U, 32U, 32U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cdivs, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cdivs( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivs,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivs,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	2U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivs,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	2U,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivs,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	4U,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_caddm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_caddm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_caddm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_caddm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_caddm,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		6U, 6U, 6U,
		6U, 6U, 6U,
		6U, 6U, 6U,
		6U, 6U, 6U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_caddm,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		12U, 12U, 12U,
		12U, 12U, 12U,
		12U, 12U, 12U,
		12U, 12U, 12U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_csubm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_csubm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubm,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_csubm,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cmulm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cmulm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmulm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmulm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmulm,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cmulm,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		32U, 32U, 32U,
		32U, 32U, 32U,
		32U, 32U, 32U,
		32U, 32U, 32U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cdivm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cdivm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivm,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cdivm,
	&(uint4x3)
	{
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U,
		8U, 8U, 8U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint4x3_negate_prefix, TEMPER_FLAG_SHOULD_RUN, const uint4x3* x, const uint4x3* expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4x3* xlocal = (uint4x3*) x;
	uint4x3 actualAnswer = uint4x3_negate( xlocal );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualAnswer, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_negate_prefix,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_negate_prefix,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		4294967295U, 4294967295U, 4294967295U,
		4294967295U, 4294967295U, 4294967295U,
		4294967295U, 4294967295U, 4294967295U,
		4294967295U, 4294967295U, 4294967295U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_negate_prefix,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		4294967294U, 4294967294U, 4294967294U,
		4294967294U, 4294967294U, 4294967294U,
		4294967294U, 4294967294U, 4294967294U,
		4294967294U, 4294967294U, 4294967294U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_negate_prefix,
	&(uint4x3)
	{
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U
	},
	&(uint4x3)
	{
		4294967293U, 4294967293U, 4294967293U,
		4294967293U, 4294967293U, 4294967293U,
		4294967293U, 4294967293U, 4294967293U,
		4294967293U, 4294967293U, 4294967293U
	}
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
TEMPER_PARAMETRIC( Test_uint4x3_unary_prefix, TEMPER_FLAG_SHOULD_RUN, const uint4x3* x, const uint4x3* expectedAnswer )
{
	// make local copy of x and use that because we cant do increment or decrement operations on a const reference
	// and MSVC throws warnings if we just make the parameter a non-const reference
	uint4x3* xlocal = (uint4x3*) x;
	uint4x3 actualAnswer = uint4x3_unary( xlocal );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualAnswer, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_unary_prefix,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		4294967294U, 4294967294U, 4294967294U,
		4294967294U, 4294967294U, 4294967294U,
		4294967294U, 4294967294U, 4294967294U,
		4294967294U, 4294967294U, 4294967294U
	}
);

#if defined( __GNUC__ ) || defined( __clang__ )
#pragma GCC diagnostic pop
#endif

TEMPER_PARAMETRIC( Test_uint4x3_cands, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cands( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cands,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	0U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cands,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	1U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cands,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	0U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cands,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cors, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cors( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cors,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	0U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cors,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	1U,
	&(uint4x3)
	{
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cors,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	0U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cors,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cxors, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cxors( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxors,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	0U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxors,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	1U,
	&(uint4x3)
	{
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxors,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	0U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxors,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cshift_lefts, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cshift_lefts( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_lefts,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	0U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_lefts,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	1U,
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_lefts,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	0U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_lefts,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cshift_rights, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint32_t rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cshift_rights( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rights,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	0U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rights,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	1U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rights,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	0U,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rights,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	1U,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_candm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_candm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_candm,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_candm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_candm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_candm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_corm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_corm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_corm,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_corm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_corm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_corm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cxorm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cxorm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxorm,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxorm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxorm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cxorm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cshift_leftm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cshift_leftm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_leftm,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_leftm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U,
		4U, 4U, 4U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_leftm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_leftm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_cshift_rightm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_cshift_rightm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rightm,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rightm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rightm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_cshift_rightm,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_min, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_min( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_min,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_min,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_max, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint4x3* rhs, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_max( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_max,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_max,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_saturate, TEMPER_FLAG_SHOULD_RUN, const uint4x3* x, const uint4x3* expectedAnswer )
{
	uint4x3 actualResult = uint4x3_saturate( x );
	TEMPER_CHECK_TRUE( uint4x3_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_saturate,
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	},
	&(uint4x3)
	{
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U,
		0U, 0U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_saturate,
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_saturate,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_saturate,
	&(uint4x3)
	{
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U,
		3U, 3U, 3U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_saturate,
	&(uint4x3)
	{
		10U, 10U, 10U,
		10U, 10U, 10U,
		10U, 10U, 10U,
		10U, 10U, 10U
	},
	&(uint4x3)
	{
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U,
		1U, 1U, 1U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_identity, TEMPER_FLAG_SHOULD_RUN, const uint4x3* matrix, const bool expectedAnswer )
{
	uint4x3 identityMat;
	uint4x3_identity( &identityMat );
	bool isMatrixIdentity = uint4x3_equals( &identityMat, matrix );
	TEMPER_CHECK_TRUE( isMatrixIdentity == expectedAnswer );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_identity,
	&(uint4x3)
	{
		1U, 0U, 0U,
		0U, 1U, 0U,
		0U, 0U, 1U,
		0U, 0U, 0U
	},
	true
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_identity,
	&(uint4x3)
	{
		1U, 1U, 0U,
		0U, 1U, 0U,
		0U, 0U, 1U,
		0U, 0U, 0U
	},
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_identity,
	&(uint4x3)
	{
		1U, 0U, 0U,
		1U, 1U, 0U,
		0U, 0U, 1U,
		0U, 0U, 0U
	},
	false
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_identity,
	&(uint4x3)
	{
		1U, 1U, 0U,
		1U, 1U, 0U,
		0U, 0U, 1U,
		0U, 0U, 0U
	},
	false
);

TEMPER_PARAMETRIC( Test_uint4x3_transpose, TEMPER_FLAG_SHOULD_RUN, const uint4x3* matrix, const uint3x4* expectedAnswer )
{
	uint3x4 actualResult = uint4x3_transpose( matrix );
	TEMPER_CHECK_TRUE( uint3x4_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_transpose,
	&(uint4x3)
	{
		1U, 0U, 0U,
		0U, 1U, 0U,
		0U, 0U, 1U,
		0U, 0U, 0U
	},
	&(uint3x4)
	{
		1U, 0U, 0U, 0U,
		0U, 1U, 0U, 0U,
		0U, 0U, 1U, 0U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_transpose,
	&(uint4x3)
	{
		0U, 1U, 2U,
		4U, 5U, 6U,
		8U, 9U, 10U,
		12U, 13U, 14U
	},
	&(uint3x4)
	{
		0U, 4U, 8U, 12U,
		1U, 5U, 9U, 13U,
		2U, 6U, 10U, 14U
	}
);

TEMPER_PARAMETRIC( Test_uint4x3_mulm, TEMPER_FLAG_SHOULD_RUN, const uint4x3* lhs, const uint3x4* rhs, const uint4x4* expectedAnswer )
{
	uint4x4 actualResult = uint4x3_mulm( lhs, rhs );
	TEMPER_CHECK_TRUE( uint4x4_equals( &actualResult, expectedAnswer ) );
}

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_mulm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint3x4)
	{
		4U, 4U, 4U, 4U,
		4U, 4U, 4U, 4U,
		4U, 4U, 4U, 4U
	},
	&(uint4x4)
	{
		24U, 24U, 24U, 24U,
		24U, 24U, 24U, 24U,
		24U, 24U, 24U, 24U,
		24U, 24U, 24U, 24U
	}
);

TEMPER_INVOKE_PARAMETRIC_TEST( Test_uint4x3_mulm,
	&(uint4x3)
	{
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U,
		2U, 2U, 2U
	},
	&(uint3x4)
	{
		1U, 0U, 0U, 0U,
		0U, 1U, 0U, 0U,
		0U, 0U, 1U, 0U
	},
	&(uint4x4)
	{
		2U, 2U, 2U, 0U,
		2U, 2U, 2U, 0U,
		2U, 2U, 2U, 0U,
		2U, 2U, 2U, 0U
	}
);

