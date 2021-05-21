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

static double4x2 g_matrixMulLHS_double4x2    = {
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
};

static double2x4 g_matrixMulRHS_double4x2    = {
		1.000000, 1.000000, 1.000000, 1.000000,
		2.000000, 2.000000, 2.000000, 2.000000
};

static double4x4 g_matrixMulAnswer_double4x2 = {
		18.000000, 18.000000, 18.000000, 18.000000,
		18.000000, 18.000000, 18.000000, 18.000000,
		36.000000, 36.000000, 36.000000, 36.000000,
		54.000000, 54.000000, 54.000000, 54.000000
};


TEMPER_TEST( TestAssignment_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 mat;

	mat.rows[0] = (double2) { 999.000000, 0.000000 };
	mat.rows[1] = (double2) { 0.000000, 999.000000 };
	mat.rows[2] = (double2) { 0.000000, 0.000000 };
	mat.rows[3] = (double2) { 0.000000, 0.000000 };

	TEMPER_CHECK_TRUE( mat.rows[0].x == 999.0 );
	TEMPER_CHECK_TRUE( mat.rows[0].y == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[1].x == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[1].y == 999.0 );
	TEMPER_CHECK_TRUE( mat.rows[2].x == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[2].y == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[3].x == 0.0 );
	TEMPER_CHECK_TRUE( mat.rows[3].y == 0.0 );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Addition_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = (double4x2) {
		7.000000, 7.000000,
		8.000000, 8.000000,
		15.000000, 15.000000,
		24.000000, 24.000000
	};

	double4x2 a = (double4x2) {
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	};

	double4x2 b = (double4x2) {
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	};

	double4x2 c = double4x2_caddm( &a, &b );

	TEMPER_CHECK_TRUE( double4x2_cmpe( &c, &answer ) );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = (double4x2) {
		5.000000, 5.000000,
		4.000000, 4.000000,
		9.000000, 9.000000,
		12.000000, 12.000000
	};

	double4x2 a = (double4x2) {
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	};

	double4x2 b = (double4x2) {
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	};

	double4x2 c = double4x2_csubm( &a, &b );

	TEMPER_CHECK_TRUE( double4x2_cmpe( &c, &answer ) );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = (double4x2) {
		6.000000, 6.000000,
		12.000000, 12.000000,
		36.000000, 36.000000,
		108.000000, 108.000000
	};

	double4x2 a = (double4x2) {
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	};

	double4x2 b = (double4x2) {
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	};

	double4x2 c = double4x2_cmulm( &a, &b );

	TEMPER_CHECK_TRUE( double4x2_cmpe( &c, &answer ) );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Division_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 answer = (double4x2) {
		6.000000, 6.000000,
		3.000000, 3.000000,
		4.000000, 4.000000,
		3.000000, 3.000000
	};

	double4x2 a = (double4x2) {
		6.000000, 6.000000,
		6.000000, 6.000000,
		12.000000, 12.000000,
		18.000000, 18.000000
	};

	double4x2 b = (double4x2) {
		1.000000, 1.000000,
		2.000000, 2.000000,
		3.000000, 3.000000,
		6.000000, 6.000000
	};

	double4x2 c = double4x2_cdivm( &a, &b );

	TEMPER_CHECK_TRUE( double4x2_cmpe( &c, &answer ) );
}

TEMPER_TEST( TestMultiplyMatrix_Scalar_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x4 answer = g_matrixMulAnswer_double4x2;

	double4x2 a = g_matrixMulLHS_double4x2;
	double2x4 b = g_matrixMulRHS_double4x2;
	double4x4 c = double4x2_mulm( &a, &b );

	TEMPER_CHECK_TRUE( double4x4_cmpe( &c, &answer ) );
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

	bool4x2 test0  = double4x2_cmple( &mat0, &mat0 );
	bool4x2 test1  = double4x2_cmpge( &mat0, &mat0 );
	bool4x2 test2  = double4x2_cmpl( &mat0, &mat1 );
	bool4x2 test3  = double4x2_cmpl( &mat0, &mat2 );
	bool4x2 test4  = double4x2_cmpl( &mat0, &mat3 );

	bool4x2 test5  = double4x2_cmpg( &mat1, &mat0 );
	bool4x2 test6  = double4x2_cmple( &mat1, &mat1 );
	bool4x2 test7  = double4x2_cmpge( &mat1, &mat1 );
	bool4x2 test8  = double4x2_cmpl( &mat1, &mat2 );
	bool4x2 test9  = double4x2_cmpl( &mat1, &mat3 );

	bool4x2 test10 = double4x2_cmpg( &mat2, &mat0 );
	bool4x2 test11 = double4x2_cmpg( &mat2, &mat1 );
	bool4x2 test12 = double4x2_cmple( &mat2, &mat2 );
	bool4x2 test13 = double4x2_cmpge( &mat2, &mat2 );
	bool4x2 test14 = double4x2_cmpl( &mat2, &mat3 );

	bool4x2 test15 = double4x2_cmpg( &mat3, &mat0 );
	bool4x2 test16 = double4x2_cmpg( &mat3, &mat1 );
	bool4x2 test17 = double4x2_cmpg( &mat3, &mat2 );
	bool4x2 test18 = double4x2_cmple( &mat3, &mat3 );
	bool4x2 test19 = double4x2_cmpge( &mat3, &mat3 );

	TEMPER_CHECK_TRUE( bool4x2_all( &test0 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test1 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test2 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test3 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test4 ) );

	TEMPER_CHECK_TRUE( bool4x2_all( &test5 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test6 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test7 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test8 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test9 ) );

	TEMPER_CHECK_TRUE( bool4x2_all( &test10 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test11 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test12 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test13 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test14 ) );

	TEMPER_CHECK_TRUE( bool4x2_all( &test15 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test16 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test17 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test18 ) );
	TEMPER_CHECK_TRUE( bool4x2_all( &test19 ) );
}

TEMPER_TEST( TestIdentity_Scalar_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double4x2 id;
	id.rows[0] = (double2) { 1.000000, 0.000000 };
	id.rows[1] = (double2) { 0.000000, 1.000000 };
	id.rows[2] = (double2) { 0.000000, 0.000000 };
	id.rows[3] = (double2) { 0.000000, 0.000000 };

	double4x2 mat;
	double4x2_identity( &mat );
	TEMPER_CHECK_TRUE( double4x2_cmpe( &mat, &id ) );
}

TEMPER_TEST( TestTranspose_Scalar_double4x2, TEMPER_FLAG_SHOULD_RUN )
{
	double2x4 answerTransposed = (double2x4) {
		0.000000, 4.000000, 8.000000, 12.000000,
		1.000000, 5.000000, 9.000000, 13.000000
	};

	double4x2 mat = (double4x2) {
		0.000000, 1.000000,
		4.000000, 5.000000,
		8.000000, 9.000000,
		12.000000, 13.000000
	};
	double2x4 trans = double4x2_transpose( &mat );

	TEMPER_CHECK_TRUE( double2x4_cmpe( &trans, &answerTransposed ) );
}

