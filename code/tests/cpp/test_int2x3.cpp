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

static int2x3 g_matrixMulLHS_int2x3    = int2x3( 		6, 6, 6,
		6, 6, 6
 );

static int3x2 g_matrixMulRHS_int2x3    = int3x2( 		1, 1,
		2, 2,
		3, 3
 );

static int2x2 g_matrixMulAnswer_int2x3 = int2x2( 		36, 36,
		36, 36
 );


TEMPER_TEST( TestAssignment_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 mat;

	mat.rows[0] = int3( 999, 0, 0 );
	mat.rows[1] = int3( 0, 999, 0 );

	TEMPER_CHECK_TRUE( mat.rows[0].x == 999 );
	TEMPER_CHECK_TRUE( mat.rows[0].y == 0 );
	TEMPER_CHECK_TRUE( mat.rows[0].z == 0 );
	TEMPER_CHECK_TRUE( mat.rows[1].x == 0 );
	TEMPER_CHECK_TRUE( mat.rows[1].y == 999 );
	TEMPER_CHECK_TRUE( mat.rows[1].z == 0 );
}

TEMPER_TEST( TestCtor_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 mat;

	// fill single value
	mat = int2x3( 999 );
	TEMPER_CHECK_TRUE( mat[0] == int3( 999, 0, 0 ) );
	TEMPER_CHECK_TRUE( mat[1] == int3( 0, 999, 0 ) );

	// row filling
	mat = int2x3(
		int3( 0, 1, 2 ),
		int3( 4, 5, 6 )
	);
	TEMPER_CHECK_TRUE( mat[0] == int3( 0, 1, 2 ) );
	TEMPER_CHECK_TRUE( mat[1] == int3( 4, 5, 6 ) );

	// all values filled
	mat = int2x3(
		16, 15, 14,
		12, 11, 10
	);
	TEMPER_CHECK_TRUE( mat[0] == int3( 16, 15, 14 ) );
	TEMPER_CHECK_TRUE( mat[1] == int3( 12, 11, 10 ) );
}

TEMPER_TEST( TestArray_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 mat;
	identity( mat );

	TEMPER_CHECK_TRUE( mat[0] == int3( 1, 0, 0 ) );
	TEMPER_CHECK_TRUE( mat[1] == int3( 0, 1, 0 ) );
}

TEMPER_TEST( TestIncrement_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer;
	int2x3 mat;

	// prefix
	answer = int2x3(
		1, 1, 1,
		1, 1, 1
	);

	mat = int2x3(
		0, 0, 0,
		0, 0, 0

	);
	++mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = int2x3(
		1, 1, 1,
		1, 1, 1
	);

	mat = int2x3(
		0, 0, 0,
		0, 0, 0

	);
	mat++;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestDecrement_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer;
	int2x3 mat;

	// prefix
	answer = int2x3(
		0, 0, 0,
		0, 0, 0
	);

	mat = int2x3(
		1, 1, 1,
		1, 1, 1

	);
	--mat;
	TEMPER_CHECK_TRUE( mat == answer );

	// postfix
	answer = int2x3(
		0, 0, 0,
		0, 0, 0
	);

	mat = int2x3(
		1, 1, 1,
		1, 1, 1

	);
	mat--;
	TEMPER_CHECK_TRUE( mat == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Addition_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		7, 7, 7,
		8, 8, 8
	);

	int2x3 a = int2x3(
		6, 6, 6,
		6, 6, 6
	);

	int2x3 b = int2x3(
		1, 1, 1,
		2, 2, 2
	);

	int2x3 c = caddm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		5, 5, 5,
		4, 4, 4
	);

	int2x3 a = int2x3(
		6, 6, 6,
		6, 6, 6
	);

	int2x3 b = int2x3(
		1, 1, 1,
		2, 2, 2
	);

	int2x3 c = csubm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		6, 6, 6,
		12, 12, 12
	);

	int2x3 a = int2x3(
		6, 6, 6,
		6, 6, 6
	);

	int2x3 b = int2x3(
		1, 1, 1,
		2, 2, 2
	);

	int2x3 c = cmulm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Division_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		6, 6, 6,
		3, 3, 3
	);

	int2x3 a = int2x3(
		6, 6, 6,
		6, 6, 6
	);

	int2x3 b = int2x3(
		1, 1, 1,
		2, 2, 2
	);

	int2x3 c = cdivm( a, b );

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestMultiplyMatrix_Scalar_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x2 answer = g_matrixMulAnswer_int2x3;

	int2x3 a = g_matrixMulLHS_int2x3;
	int3x2 b = g_matrixMulRHS_int2x3;
	int2x2 c = a * b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestRelational_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	bool2x3 allTrue = { 		true, true, true,
		true, true, true
 };

	int2x3 mat0 = int2x3( 		1, 1, 1,
		1, 1, 1
 );
	int2x3 mat1 = int2x3( 		2, 2, 2,
		2, 2, 2
 );
	int2x3 mat2 = int2x3( 		3, 3, 3,
		3, 3, 3
 );
	int2x3 mat3 = int2x3( 		4, 4, 4,
		4, 4, 4
 );

	bool2x3 test0  = mat0 <= mat0;
	bool2x3 test1  = mat0 >= mat0;
	bool2x3 test2  = mat0 <  mat1;
	bool2x3 test3  = mat0 <  mat2;
	bool2x3 test4  = mat0 <  mat3;

	bool2x3 test5  = mat1 >  mat0;
	bool2x3 test6  = mat1 <= mat1;
	bool2x3 test7  = mat1 >= mat1;
	bool2x3 test8  = mat1 <  mat2;
	bool2x3 test9  = mat1 <  mat3;

	bool2x3 test10 = mat2 >  mat0;
	bool2x3 test11 = mat2 >  mat1;
	bool2x3 test12 = mat2 <= mat2;
	bool2x3 test13 = mat2 >= mat2;
	bool2x3 test14 = mat2 <  mat3;

	bool2x3 test15 = mat3 >  mat0;
	bool2x3 test16 = mat3 >  mat1;
	bool2x3 test17 = mat3 >  mat2;
	bool2x3 test18 = mat3 <= mat3;
	bool2x3 test19 = mat3 >= mat3;

	TEMPER_CHECK_TRUE( test0  == allTrue );
	TEMPER_CHECK_TRUE( test1  == allTrue );
	TEMPER_CHECK_TRUE( test2  == allTrue );
	TEMPER_CHECK_TRUE( test3  == allTrue );
	TEMPER_CHECK_TRUE( test4  == allTrue );

	TEMPER_CHECK_TRUE( test5  == allTrue );
	TEMPER_CHECK_TRUE( test6  == allTrue );
	TEMPER_CHECK_TRUE( test7  == allTrue );
	TEMPER_CHECK_TRUE( test8  == allTrue );
	TEMPER_CHECK_TRUE( test9  == allTrue );

	TEMPER_CHECK_TRUE( test10 == allTrue );
	TEMPER_CHECK_TRUE( test11 == allTrue );
	TEMPER_CHECK_TRUE( test12 == allTrue );
	TEMPER_CHECK_TRUE( test13 == allTrue );
	TEMPER_CHECK_TRUE( test14 == allTrue );

	TEMPER_CHECK_TRUE( test15 == allTrue );
	TEMPER_CHECK_TRUE( test16 == allTrue );
	TEMPER_CHECK_TRUE( test17 == allTrue );
	TEMPER_CHECK_TRUE( test18 == allTrue );
	TEMPER_CHECK_TRUE( test19 == allTrue );
}

TEMPER_TEST( TestBitwise_And_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		5, 5, 5,
		5, 5, 5
	);
	int2x3 a = int2x3(
		21, 21, 21,
		21, 21, 21
	);
	int2x3 b = int2x3(
		7, 7, 7,
		7, 7, 7
	);

	int2x3 c = a & b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_Or_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		23, 23, 23,
		23, 23, 23
	);
	int2x3 a = int2x3(
		21, 21, 21,
		21, 21, 21
	);
	int2x3 b = int2x3(
		7, 7, 7,
		7, 7, 7
	);

	int2x3 c = a | b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_Xor_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		18, 18, 18,
		18, 18, 18
	);
	int2x3 a = int2x3(
		21, 21, 21,
		21, 21, 21
	);
	int2x3 b = int2x3(
		7, 7, 7,
		7, 7, 7
	);

	int2x3 c = a ^ b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_ShiftLeft_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		4, 4, 4,
		4, 4, 4
	);
	int2x3 a = int2x3(
		1, 1, 1,
		1, 1, 1
	);
	int2x3 b = int2x3(
		2, 2, 2,
		2, 2, 2
	);

	int2x3 c = a << b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_ShiftRight_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		1, 1, 1,
		1, 1, 1
	);
	int2x3 a = int2x3(
		16, 16, 16,
		16, 16, 16
	);
	int2x3 b = int2x3(
		4, 4, 4,
		4, 4, 4
	);

	int2x3 c = a >> b;

	TEMPER_CHECK_TRUE( c == answer );
}

TEMPER_TEST( TestBitwise_Unary_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 answer = int2x3(
		(int32_t) -1, (int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1, (int32_t) -1
	);
	int2x3 a = int2x3(
		0, 0, 0,
		0, 0, 0
	);

	int2x3 b = ~a;

	TEMPER_CHECK_TRUE( b == answer );
}

TEMPER_TEST( TestIdentity_Scalar_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2x3 id;
	id[0] = int3( 1, 0, 0 );
	id[1] = int3( 0, 1, 0 );

	int2x3 mat;

	identity( mat );
	TEMPER_CHECK_TRUE( mat == id );
}

TEMPER_TEST( TestTranspose_Scalar_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int3x2 answerTransposed = int3x2(
		0, 4,
		1, 5,
		2, 6
	);

	int2x3 mat = int2x3(
		0, 1, 2,
		4, 5, 6
	);
	int3x2 trans = transpose( mat );

	TEMPER_CHECK_TRUE( trans == answerTransposed );
}

TEMPER_TEST( TestScale_Scalar_int2x3, TEMPER_FLAG_SHOULD_RUN )
{
	int2 scaleVec = { 2, 2 };
	int2x3 mat;
	identity( mat );

	int2x3 scaled = scale( mat, scaleVec );

	TEMPER_CHECK_TRUE( scaled.rows[0].x == 2 );
	TEMPER_CHECK_TRUE( scaled.rows[1].y == 2 );
}
