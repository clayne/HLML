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

#include "../../code/out/gen/hlml_functions_vector.h"

#include <temper/temper.h>

// also tests equality operators
TEMPER_TEST( TestAssignment_bool3 )
{
	bool3 a;

	a = bool3( true );
	TEMPER_EXPECT_TRUE( a == bool3( true ) );
	TEMPER_EXPECT_TRUE( a != bool3( false, true, true ) );

	a = bool3( false, true, true );
	TEMPER_EXPECT_TRUE( a == bool3( false, true, true ) );
	TEMPER_EXPECT_TRUE( a != bool3( true ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_bool3 )
{
	bool3 a = bool3( false, true, true );

	TEMPER_EXPECT_TRUE( a[0] == false );
	TEMPER_EXPECT_TRUE( a[1] == true );
	TEMPER_EXPECT_TRUE( a[2] == true );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_bool3 )
{
	TEMPER_RUN_TEST( TestAssignment_bool3 );
	TEMPER_RUN_TEST( TestArray_bool3 );
}
