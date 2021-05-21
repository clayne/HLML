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

static double4x2 g_matrixMulLHS_double4x2    = double4x2( 		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
 );

static double2x4 g_matrixMulRHS_double4x2    = double2x4( 		1.000000, 1.000000, 1.000000, 1.000000,
		2.000000, 2.000000, 2.000000, 2.000000
 );

static double4x4 g_matrixMulAnswer_double4x2 = double4x4( 		18.000000, 18.000000, 18.000000, 18.000000,
		18.000000, 18.000000, 18.000000, 18.000000,
		36.000000, 36.000000, 36.000000, 36.000000,
		54.000000, 54.000000, 54.000000, 54.000000
 );


TEMPER_TEST( TestAssignment_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 mat;

	mat.rows[0] = double2( 999.000000, 0.000000 );
	mat.rows[1] = double2( 0.000000, 999.000000 );
	mat.rows[2] = double2( 0.000000, 0.000000 );
	mat.rows[3] = double2( 0.000000, 0.000000 );

	TEMPER_CHECK_TRUE( mat.rows[0].x == 999.0 );
	TEMPER_CHECK_TRUE( mat.rows[0].y == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[1].x == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[1].y == 999.0 );
	TEMPER_CHECK_TRUE( mat.rows[2].x == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[2].y == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[3].x == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[3].y == 0.0 );
}

TEMPER_TEST( TestCtor_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 mat;

	// fill single value
	mat = double4x2( 999.0 );
	TEMPER_CHECK_TRUE( mat[0] == double2( 999.000000, 0.000000 ) );
	TEMPER_CHECK_TRUE( mat[1] == double2( 0.000000, 999.000000 ) );
	TEMPER_CHECK_TRUE( mat[2] == double2( 0.000000, 0.000000 ) );
	TEMPER_CHECK_TRUE( mat[3] == double2( 0.000000, 0.000000 ) );

	// row filling
	mat = double4x2(
		double2( 0.000000, 1.000000 ),
		double2( 4.000000, 5.000000 ),
		double2( 8.000000, 9.000000 ),
		double2( 12.000000, 13.000000 )
	);
	TEMPER_CHECK_TRUE( mat[0] == double2( 0.000000, 1.000000 ) );
	TEMPER_CHECK_TRUE( mat[1] == double2( 4.000000, 5.000000 ) );
	TEMPER_CHECK_TRUE( mat[2] == double2( 8.000000, 9.000000 ) );
	TEMPER_CHECK_TRUE( mat[3] == double2( 12.000000, 13.000000 ) );

	// all values filled
	mat = double4x2(
		16.000000, 15.000000,
		12.000000, 11.000000,
		8.000000, 7.000000,
		4.000000, 3.000000
	);
	TEMPER_CHECK_TRUE( mat[0] == double2( 16.000000, 15.000000 ) );
	TEMPER_CHECK_TRUE( mat[1] == double2( 12.000000, 11.000000 ) );
	TEMPER_CHECK_TRUE( mat[2] == double2( 8.000000, 7.000000 ) );
	TEMPER_CHECK_TRUE( mat[3] == double2( 4.000000, 3.000000 ) );
}

TEMPER_TEST( TestArray_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 mat;
	identity( mat );

	TEMPER_CHECK_TRUE( mat[0] == double2( 1.0, 0.0 ) );
	TEMPER_CHECK_TRUE( mat[1] == double2( 0.0, 1.0 ) );
	TEMPER_CHECK_TRUE( mat[2] == double2( 0.0, 0.0 ) );
	TEMPER_CHECK_TRUE( mat[3] == double2( 0.0, 0.0 ) );
}

TEMPER_TEST( TestIncrement_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer;
	double4x2 mat;

	// prefix
	answer = double4x2(
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000
	);

	mat = double4x2(
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000

	);
	++mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = double4x2(
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000
	);

	mat = double4x2(
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000

	);
	mat++;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestDecrement_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer;
	double4x2 mat;

	// prefix
	answer = double4x2(
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000
	);

	mat = double4x2(
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000

	);
	--mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = double4x2(
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000,
		0.000000, 0.000000
	);

	mat = double4x2(
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000

	);
	mat--;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Addition_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = double4x2(
		7.000000, 7.000000,
		8.000000, 8.000000,
		15.000000, 15.000000,
		24.000000, 24.000000
	);

	double4x2 a = double4x2(
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	);

	double4x2 b = double4x2(
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	);

	double4x2 c = caddm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = double4x2(
		5.000000, 5.000000,
		4.000000, 4.000000,
		9.000000, 9.000000,
		12.000000, 12.000000
	);

	double4x2 a = double4x2(
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	);

	double4x2 b = double4x2(
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	);

	double4x2 c = csubm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = double4x2(
		6.000000, 6.000000,
		12.000000, 12.000000,
		36.000000, 36.000000,
		108.000000, 108.000000
	);

	double4x2 a = double4x2(
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	);

	double4x2 b = double4x2(
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	);

	double4x2 c = cmulm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Division_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = double4x2(
		6.000000, 6.000000,
		3.000000, 3.000000,
		4.000000, 4.000000,
		3.000000, 3.000000
	);

	double4x2 a = double4x2(
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	);

	double4x2 b = double4x2(
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	);

	double4x2 c = cdivm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestMultiplyMatrix_Scalar_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x4 answer = g_matrixMulAnswer_double4x2;

	double4x2 a = g_matrixMulLHS_double4x2;
	double2x4 b = g_matrixMulRHS_double4x2;
	double4x4 c = a * b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestRelational_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 mat0 =
	{
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000,
		1.000000, 1.000000
	};

	double4x2 mat1 =
	{
		2.000000, 2.000000,
		2.000000, 2.000000,
		2.000000, 2.000000,
		2.000000, 2.000000
	};

	double4x2 mat2 =
	{
		3.000000, 3.000000,
		3.000000, 3.000000,
		3.000000, 3.000000,
		3.000000, 3.000000
	};

	double4x2 mat3 =
	{
		4.000000, 4.000000,
		4.000000, 4.000000,
		4.000000, 4.000000,
		4.000000, 4.000000
	};

	bool4x2 test0  = mat0 <= mat0;
	bool4x2 test1  = mat0 >= mat0;
	bool4x2 test2  = mat0 <  mat1;
	bool4x2 test3  = mat0 <  mat2;
	bool4x2 test4  = mat0 <  mat3;

	bool4x2 test5  = mat1 >  mat0;
	bool4x2 test6  = mat1 <= mat1;
	bool4x2 test7  = mat1 >= mat1;
	bool4x2 test8  = mat1 <  mat2;
	bool4x2 test9  = mat1 <  mat3;

	bool4x2 test10 = mat2 >  mat0;
	bool4x2 test11 = mat2 >  mat1;
	bool4x2 test12 = mat2 <= mat2;
	bool4x2 test13 = mat2 >= mat2;
	bool4x2 test14 = mat2 <  mat3;

	bool4x2 test15 = mat3 >  mat0;
	bool4x2 test16 = mat3 >  mat1;
	bool4x2 test17 = mat3 >  mat2;
	bool4x2 test18 = mat3 <= mat3;
	bool4x2 test19 = mat3 >= mat3;

	TEMPER_CHECK_TRUE( all( test0 ) );
	TEMPER_CHECK_TRUE( all( test1 ) );
	TEMPER_CHECK_TRUE( all( test2 ) );
	TEMPER_CHECK_TRUE( all( test3 ) );
	TEMPER_CHECK_TRUE( all( test4 ) );

	TEMPER_CHECK_TRUE( all( test5 ) );
	TEMPER_CHECK_TRUE( all( test6 ) );
	TEMPER_CHECK_TRUE( all( test7 ) );
	TEMPER_CHECK_TRUE( all( test8 ) );
	TEMPER_CHECK_TRUE( all( test9 ) );

	TEMPER_CHECK_TRUE( all( test10 ) );
	TEMPER_CHECK_TRUE( all( test11 ) );
	TEMPER_CHECK_TRUE( all( test12 ) );
	TEMPER_CHECK_TRUE( all( test13 ) );
	TEMPER_CHECK_TRUE( all( test14 ) );

	TEMPER_CHECK_TRUE( all( test15 ) );
	TEMPER_CHECK_TRUE( all( test16 ) );
	TEMPER_CHECK_TRUE( all( test17 ) );
	TEMPER_CHECK_TRUE( all( test18 ) );
	TEMPER_CHECK_TRUE( all( test19 ) );
}

TEMPER_TEST( TestIdentity_Scalar_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 id;
	id[0] = double2( 1.000000, 0.000000 );
	id[1] = double2( 0.000000, 1.000000 );
	id[2] = double2( 0.000000, 0.000000 );
	id[3] = double2( 0.000000, 0.000000 );

	double4x2 mat;

	identity( mat );
	TEMPER_CHECK_TRUE( mat == id );
}

TEMPER_TEST( TestTranspose_Scalar_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double2x4 answerTransposed = double2x4(
		0.000000, 4.000000, 8.000000, 12.000000,
		1.000000, 5.000000, 9.000000, 13.000000
	);

	double4x2 mat = double4x2(
		0.000000, 1.000000,
		4.000000, 5.000000,
		8.000000, 9.000000,
		12.000000, 13.000000
	);
	double2x4 trans = transpose( mat );

	TEMPER_CHECK_TRUE( trans == answerTransposed );
}

