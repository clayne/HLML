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

TEMPER_TEST( TestAssignment_bool2x4 )
{
	bool2x4 mat;

	mat.rows[0] = bool4( true, false, false, false );
	mat.rows[1] = bool4( false, true, false, false );

	TEMPER_EXPECT_TRUE( mat.rows[0].x == true );
	TEMPER_EXPECT_TRUE( mat.rows[0].y == false );
	TEMPER_EXPECT_TRUE( mat.rows[0].z == false );
	TEMPER_EXPECT_TRUE( mat.rows[0].w == false );
	TEMPER_EXPECT_TRUE( mat.rows[1].x == false );
	TEMPER_EXPECT_TRUE( mat.rows[1].y == true );
	TEMPER_EXPECT_TRUE( mat.rows[1].z == false );
	TEMPER_EXPECT_TRUE( mat.rows[1].w == false );

	TEMPER_PASS();
}

TEMPER_TEST( TestCtor_bool2x4 )
{
	bool2x4 mat;

	// fill single value
	mat = bool2x4( true );
	TEMPER_EXPECT_TRUE( mat[0] == bool4( true, false, false, false ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( false, true, false, false ) );

	// row filling
	mat = bool2x4(
		bool4( false, true, true, true ),
		bool4( true, true, true, true )
	);
	TEMPER_EXPECT_TRUE( mat[0] == bool4( false, true, true, true ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( true, true, true, true ) );

	// all values filled
	mat = bool2x4(
		true, true, true, true,
		true, true, true, true
	);
	TEMPER_EXPECT_TRUE( mat[0] == bool4( true, true, true, true ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( true, true, true, true ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_bool2x4 )
{
	bool2x4 mat;
	identity( mat );

	TEMPER_EXPECT_TRUE( mat[0] == bool4( true, false, false, false ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( false, true, false, false ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_Scalar_bool2x4 )
{
	bool2x4 id;
	id[0] = bool4( true, false, false, false );
	id[1] = bool4( false, true, false, false );

	bool2x4 mat;

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_Scalar_bool2x4 )
{
	bool4x2 answerTransposed = bool4x2(
		false, true,
		true, true,
		true, true,
		true, true
	);

	bool2x4 mat = bool2x4(
		false, true, true, true,
		true, true, true, true
	);
	bool4x2 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == answerTransposed );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_bool2x4 )
{
	TEMPER_RUN_TEST( TestAssignment_bool2x4 );
	TEMPER_RUN_TEST( TestCtor_bool2x4 );
	TEMPER_RUN_TEST( TestArray_bool2x4 );
	TEMPER_RUN_TEST( TestIdentity_Scalar_bool2x4 );
	TEMPER_RUN_TEST( TestTranspose_Scalar_bool2x4 );
}
