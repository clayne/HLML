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

static int3x4 g_matrixMulLHS_int3x4    = int3x4( 		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
 );

static int4x3 g_matrixMulRHS_int3x4    = int4x3( 		1, 1, 1,
		2, 2, 2,
		3, 3, 3,
		6, 6, 6
 );

static int3x3 g_matrixMulAnswer_int3x4 = int3x3( 		72, 72, 72,
		72, 72, 72,
		144, 144, 144
 );


TEMPER_TEST( TestAssignment_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 mat;

	mat.rows[0] = int4( 999, 0, 0, 0 );
	mat.rows[1] = int4( 0, 999, 0, 0 );
	mat.rows[2] = int4( 0, 0, 999, 0 );

	TEMPER_CHECK_TRUE( mat.rows[0].x == 999 );
	TEMPER_CHECK_TRUE( mat.rows[0].y == 0 );
	TEMPER_CHECK_TRUE( mat.rows[0].z == 0 );
	TEMPER_CHECK_TRUE( mat.rows[0].w == 0 );
	TEMPER_CHECK_TRUE( mat.rows[1].x == 0 );
	TEMPER_CHECK_TRUE( mat.rows[1].y == 999 );
	TEMPER_CHECK_TRUE( mat.rows[1].z == 0 );
	TEMPER_CHECK_TRUE( mat.rows[1].w == 0 );
	TEMPER_CHECK_TRUE( mat.rows[2].x == 0 );
	TEMPER_CHECK_TRUE( mat.rows[2].y == 0 );
	TEMPER_CHECK_TRUE( mat.rows[2].z == 999 );
	TEMPER_CHECK_TRUE( mat.rows[2].w == 0 );
}

TEMPER_TEST( TestCtor_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 mat;

	// fill single value
	mat = int3x4( 999 );
	TEMPER_CHECK_TRUE( mat[0] == int4( 999, 0, 0, 0 ) );
	TEMPER_CHECK_TRUE( mat[1] == int4( 0, 999, 0, 0 ) );
	TEMPER_CHECK_TRUE( mat[2] == int4( 0, 0, 999, 0 ) );

	// row filling
	mat = int3x4(
		int4( 0, 1, 2, 3 ),
		int4( 4, 5, 6, 7 ),
		int4( 8, 9, 10, 11 )
	);
	TEMPER_CHECK_TRUE( mat[0] == int4( 0, 1, 2, 3 ) );
	TEMPER_CHECK_TRUE( mat[1] == int4( 4, 5, 6, 7 ) );
	TEMPER_CHECK_TRUE( mat[2] == int4( 8, 9, 10, 11 ) );

	// all values filled
	mat = int3x4(
		16, 15, 14, 13,
		12, 11, 10, 9,
		8, 7, 6, 5
	);
	TEMPER_CHECK_TRUE( mat[0] == int4( 16, 15, 14, 13 ) );
	TEMPER_CHECK_TRUE( mat[1] == int4( 12, 11, 10, 9 ) );
	TEMPER_CHECK_TRUE( mat[2] == int4( 8, 7, 6, 5 ) );
}

TEMPER_TEST( TestArray_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 mat;
	identity( mat );

	TEMPER_CHECK_TRUE( mat[0] == int4( 1, 0, 0, 0 ) );
	TEMPER_CHECK_TRUE( mat[1] == int4( 0, 1, 0, 0 ) );
	TEMPER_CHECK_TRUE( mat[2] == int4( 0, 0, 1, 0 ) );
}

TEMPER_TEST( TestIncrement_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer;
	int3x4 mat;

	// prefix
	answer = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);

	mat = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0

	);
	++mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);

	mat = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0

	);
	mat++;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestDecrement_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer;
	int3x4 mat;

	// prefix
	answer = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);

	mat = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1

	);
	--mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);

	mat = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1

	);
	mat--;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Addition_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		7, 7, 7, 7,
		8, 8, 8, 8,
		15, 15, 15, 15
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);

	int3x4 b = int3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);

	int3x4 c = caddm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		5, 5, 5, 5,
		4, 4, 4, 4,
		9, 9, 9, 9
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);

	int3x4 b = int3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);

	int3x4 c = csubm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		6, 6, 6, 6,
		12, 12, 12, 12,
		36, 36, 36, 36
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);

	int3x4 b = int3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);

	int3x4 c = cmulm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Division_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		6, 6, 6, 6,
		3, 3, 3, 3,
		4, 4, 4, 4
	);

	int3x4 a = int3x4(
		6, 6, 6, 6,
		6, 6, 6, 6,
		12, 12, 12, 12
	);

	int3x4 b = int3x4(
		1, 1, 1, 1,
		2, 2, 2, 2,
		3, 3, 3, 3
	);

	int3x4 c = cdivm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestMultiplyMatrix_Scalar_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x3 answer = g_matrixMulAnswer_int3x4;

	int3x4 a = g_matrixMulLHS_int3x4;
	int4x3 b = g_matrixMulRHS_int3x4;
	int3x3 c = a * b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestRelational_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 mat0 =
	{
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	};

	int3x4 mat1 =
	{
		2, 2, 2, 2,
		2, 2, 2, 2,
		2, 2, 2, 2
	};

	int3x4 mat2 =
	{
		3, 3, 3, 3,
		3, 3, 3, 3,
		3, 3, 3, 3
	};

	int3x4 mat3 =
	{
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	};

	bool3x4 test0  = mat0 <= mat0;
	bool3x4 test1  = mat0 >= mat0;
	bool3x4 test2  = mat0 <  mat1;
	bool3x4 test3  = mat0 <  mat2;
	bool3x4 test4  = mat0 <  mat3;

	bool3x4 test5  = mat1 >  mat0;
	bool3x4 test6  = mat1 <= mat1;
	bool3x4 test7  = mat1 >= mat1;
	bool3x4 test8  = mat1 <  mat2;
	bool3x4 test9  = mat1 <  mat3;

	bool3x4 test10 = mat2 >  mat0;
	bool3x4 test11 = mat2 >  mat1;
	bool3x4 test12 = mat2 <= mat2;
	bool3x4 test13 = mat2 >= mat2;
	bool3x4 test14 = mat2 <  mat3;

	bool3x4 test15 = mat3 >  mat0;
	bool3x4 test16 = mat3 >  mat1;
	bool3x4 test17 = mat3 >  mat2;
	bool3x4 test18 = mat3 <= mat3;
	bool3x4 test19 = mat3 >= mat3;

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

TEMPER_PARAMETRIC( TestNegate_int3x4, TEMPER_FLAG_SHOULD_RUN, const int3x4& vec )
{
	int3x4 negated = -vec;
	TEMPER_CHECK_TRUE( negated.rows[0].x == -vec.rows[0].x );
	TEMPER_CHECK_TRUE( negated.rows[0].y == -vec.rows[0].y );
	TEMPER_CHECK_TRUE( negated.rows[0].z == -vec.rows[0].z );
	TEMPER_CHECK_TRUE( negated.rows[0].w == -vec.rows[0].w );
	TEMPER_CHECK_TRUE( negated.rows[1].x == -vec.rows[1].x );
	TEMPER_CHECK_TRUE( negated.rows[1].y == -vec.rows[1].y );
	TEMPER_CHECK_TRUE( negated.rows[1].z == -vec.rows[1].z );
	TEMPER_CHECK_TRUE( negated.rows[1].w == -vec.rows[1].w );
	TEMPER_CHECK_TRUE( negated.rows[2].x == -vec.rows[2].x );
	TEMPER_CHECK_TRUE( negated.rows[2].y == -vec.rows[2].y );
	TEMPER_CHECK_TRUE( negated.rows[2].z == -vec.rows[2].z );
	TEMPER_CHECK_TRUE( negated.rows[2].w == -vec.rows[2].w );
}

const int3x4 g_testNegate_zero_int3x4 =
{
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_int3x4, g_testNegate_zero_int3x4 );

const int3x4 g_testNegate_one_int3x4 =
{
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_int3x4, g_testNegate_one_int3x4 );

const int3x4 g_testNegate_minusTwo_int3x4 =
{
		-2, -2, -2, -2,
		-2, -2, -2, -2,
		-2, -2, -2, -2
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_int3x4, g_testNegate_minusTwo_int3x4 );

const int3x4 g_testNegate_alternatingValues_int3x4 =
{
		0, 0, 1, -4,
		-5, 6, -7, 8,
		9, -10, 11, -12
};
TEMPER_INVOKE_PARAMETRIC_TEST( TestNegate_int3x4, g_testNegate_alternatingValues_int3x4 );

TEMPER_TEST( TestBitwise_And_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		5, 5, 5, 5,
		5, 5, 5, 5,
		5, 5, 5, 5
	);
	int3x4 a = int3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	int3x4 b = int3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	int3x4 c = a & b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_Or_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		23, 23, 23, 23,
		23, 23, 23, 23,
		23, 23, 23, 23
	);
	int3x4 a = int3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	int3x4 b = int3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	int3x4 c = a | b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_Xor_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		18, 18, 18, 18,
		18, 18, 18, 18,
		18, 18, 18, 18
	);
	int3x4 a = int3x4(
		21, 21, 21, 21,
		21, 21, 21, 21,
		21, 21, 21, 21
	);
	int3x4 b = int3x4(
		7, 7, 7, 7,
		7, 7, 7, 7,
		7, 7, 7, 7
	);

	int3x4 c = a ^ b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_ShiftLeft_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	);
	int3x4 a = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	int3x4 b = int3x4(
		2, 2, 2, 2,
		2, 2, 2, 2,
		2, 2, 2, 2
	);

	int3x4 c = a << b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_ShiftRight_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		1, 1, 1, 1,
		1, 1, 1, 1,
		1, 1, 1, 1
	);
	int3x4 a = int3x4(
		16, 16, 16, 16,
		16, 16, 16, 16,
		16, 16, 16, 16
	);
	int3x4 b = int3x4(
		4, 4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4, 4
	);

	int3x4 c = a >> b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_Unary_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 answer = int3x4(
		(int32_t) -1, (int32_t) -1, (int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1, (int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1, (int32_t) -1, (int32_t) -1
	);
	int3x4 a = int3x4(
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	);

	int3x4 b = ~a;

	TEMPER_CHECK_TRUE( b == answer );
}

TEMPER_TEST( TestIdentity_Scalar_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 id;
	id[0] = int4( 1, 0, 0, 0 );
	id[1] = int4( 0, 1, 0, 0 );
	id[2] = int4( 0, 0, 1, 0 );

	int3x4 mat;

	identity( mat );
	TEMPER_CHECK_TRUE( mat == id );
}

TEMPER_TEST( TestTranspose_Scalar_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int4x3 answerTransposed = int4x3(
		0, 4, 8,
		1, 5, 9,
		2, 6, 10,
		3, 7, 11
	);

	int3x4 mat = int3x4(
		0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11
	);
	int4x3 trans = transpose( mat );

	TEMPER_CHECK_TRUE( trans == answerTransposed );
}

TEMPER_TEST( TestTranslate_Scalar_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int3x4 mat;
	identity( mat );

	int3 translation = int3( 2, 3, 4 );

	mat = translate( mat, translation );

	TEMPER_CHECK_TRUE( mat.rows[0].w == 2 );
	TEMPER_CHECK_TRUE( mat.rows[1].w == 3 );
	TEMPER_CHECK_TRUE( mat.rows[2].w == 4 );
}

TEMPER_TEST( TestScale_Scalar_int3x4, TEMPER_FLAG_SHOULD_RUN )
{
	int2 scaleVec = { 2, 2 };
	int3x4 mat;
	identity( mat );

	int3x4 scaled = scale( mat, scaleVec );

	TEMPER_CHECK_TRUE( scaled.rows[0].x == 2 );
	TEMPER_CHECK_TRUE( scaled.rows[1].y == 2 );
}

