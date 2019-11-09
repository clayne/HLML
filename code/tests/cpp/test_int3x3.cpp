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

static int3x3 g_matrixMulLHS_int3x3    = int3x3( 		6, 6, 6,
		6, 6, 6,
		12, 12, 12
 );

static int3x3 g_matrixMulRHS_int3x3    = int3x3( 		1, 1, 1,
		2, 2, 2,
		3, 3, 3
 );

static int3x3 g_matrixMulAnswer_int3x3 = int3x3( 		36, 36, 36,
		36, 36, 36,
		72, 72, 72
 );


TEMPER_TEST( TestAssignment_int3x3 )
{
	int3x3 mat;

	mat.rows[0] = int3( 999, 0, 0 );
	mat.rows[1] = int3( 0, 999, 0 );
	mat.rows[2] = int3( 0, 0, 999 );

	TEMPER_EXPECT_TRUE( mat.rows[0].x == 999 );
	TEMPER_EXPECT_TRUE( mat.rows[0].y == 0 );
	TEMPER_EXPECT_TRUE( mat.rows[0].z == 0 );
	TEMPER_EXPECT_TRUE( mat.rows[1].x == 0 );
	TEMPER_EXPECT_TRUE( mat.rows[1].y == 999 );
	TEMPER_EXPECT_TRUE( mat.rows[1].z == 0 );
	TEMPER_EXPECT_TRUE( mat.rows[2].x == 0 );
	TEMPER_EXPECT_TRUE( mat.rows[2].y == 0 );
	TEMPER_EXPECT_TRUE( mat.rows[2].z == 999 );

	TEMPER_PASS();
}

TEMPER_TEST( TestCtor_int3x3 )
{
	int3x3 mat;

	// fill single value
	mat = int3x3( 999 );
	TEMPER_EXPECT_TRUE( mat[0] == int3( 999, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 0, 999, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 0, 0, 999 ) );

	// row filling
	mat = int3x3(
		int3( 0, 1, 2 ),
		int3( 4, 5, 6 ),
		int3( 8, 9, 10 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == int3( 0, 1, 2 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 4, 5, 6 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 8, 9, 10 ) );

	// all values filled
	mat = int3x3(
		16, 15, 14,
		12, 11, 10,
		8, 7, 6
	);
	TEMPER_EXPECT_TRUE( mat[0] == int3( 16, 15, 14 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 12, 11, 10 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 8, 7, 6 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_int3x3 )
{
	int3x3 mat;

	TEMPER_EXPECT_TRUE( mat[0] == int3( 1, 0, 0 ) );
	TEMPER_EXPECT_TRUE( mat[1] == int3( 0, 1, 0 ) );
	TEMPER_EXPECT_TRUE( mat[2] == int3( 0, 0, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_int3x3 )
{
	int3x3 answer;
	int3x3 mat;

	// prefix
	answer = int3x3(
		1, 1, 1,
		1, 1, 1,
		1, 1, 1
	);

	mat = int3x3(
		0, 0, 0,
		0, 0, 0,
		0, 0, 0

	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == answer );

	// postfix
	answer = int3x3(
		1, 1, 1,
		1, 1, 1,
		1, 1, 1
	);

	mat = int3x3(
		0, 0, 0,
		0, 0, 0,
		0, 0, 0

	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_int3x3 )
{
	int3x3 answer;
	int3x3 mat;

	// prefix
	answer = int3x3(
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	);

	mat = int3x3(
		1, 1, 1,
		1, 1, 1,
		1, 1, 1

	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == answer );

	// postfix
	answer = int3x3(
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	);

	mat = int3x3(
		1, 1, 1,
		1, 1, 1,
		1, 1, 1

	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Addition_int3x3 )
{
	int3x3 answer = int3x3(
		7, 7, 7,
		8, 8, 8,
		15, 15, 15
	);

	int3x3 a = int3x3(
		6, 6, 6,
		6, 6, 6,
		12, 12, 12
	);

	int3x3 b = int3x3(
		1, 1, 1,
		2, 2, 2,
		3, 3, 3
	);

	int3x3 c = comp_addm( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_int3x3 )
{
	int3x3 answer = int3x3(
		5, 5, 5,
		4, 4, 4,
		9, 9, 9
	);

	int3x3 a = int3x3(
		6, 6, 6,
		6, 6, 6,
		12, 12, 12
	);

	int3x3 b = int3x3(
		1, 1, 1,
		2, 2, 2,
		3, 3, 3
	);

	int3x3 c = comp_subm( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_int3x3 )
{
	int3x3 answer = int3x3(
		6, 6, 6,
		12, 12, 12,
		36, 36, 36
	);

	int3x3 a = int3x3(
		6, 6, 6,
		6, 6, 6,
		12, 12, 12
	);

	int3x3 b = int3x3(
		1, 1, 1,
		2, 2, 2,
		3, 3, 3
	);

	int3x3 c = comp_mulm( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestComponentWiseArithmetic_Scalar_Division_int3x3 )
{
	int3x3 answer = int3x3(
		6, 6, 6,
		3, 3, 3,
		4, 4, 4
	);

	int3x3 a = int3x3(
		6, 6, 6,
		6, 6, 6,
		12, 12, 12
	);

	int3x3 b = int3x3(
		1, 1, 1,
		2, 2, 2,
		3, 3, 3
	);

	int3x3 c = comp_divm( a, b );

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestMultiplyMatrix_Scalar_int3x3 )
{
	int3x3 answer = g_matrixMulAnswer_int3x3;

	int3x3 a = g_matrixMulLHS_int3x3;
	int3x3 b = g_matrixMulRHS_int3x3;
	int3x3 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestMultiplyVector_int3x3 )
{
	int3 answerVec = { 16, 44, 72 };

	int3x3 a = int3x3(
		1, 2, 3,
		5, 6, 7,
		9, 10, 11
	);
	int3 b = { 2, 1, 4 };
	int3 c = a * b;

	TEMPER_EXPECT_TRUE( c == answerVec );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_int3x3 )
{
	bool3x3 allTrue = { 		true, true, true,
		true, true, true,
		true, true, true
 };

	int3x3 mat0 = int3x3( 		1, 1, 1,
		1, 1, 1,
		1, 1, 1
 );
	int3x3 mat1 = int3x3( 		2, 2, 2,
		2, 2, 2,
		2, 2, 2
 );
	int3x3 mat2 = int3x3( 		3, 3, 3,
		3, 3, 3,
		3, 3, 3
 );
	int3x3 mat3 = int3x3( 		4, 4, 4,
		4, 4, 4,
		4, 4, 4
 );

	bool3x3 test0  = mat0 <= mat0;
	bool3x3 test1  = mat0 >= mat0;
	bool3x3 test2  = mat0 <  mat1;
	bool3x3 test3  = mat0 <  mat2;
	bool3x3 test4  = mat0 <  mat3;

	bool3x3 test5  = mat1 >  mat0;
	bool3x3 test6  = mat1 <= mat1;
	bool3x3 test7  = mat1 >= mat1;
	bool3x3 test8  = mat1 <  mat2;
	bool3x3 test9  = mat1 <  mat3;

	bool3x3 test10 = mat2 >  mat0;
	bool3x3 test11 = mat2 >  mat1;
	bool3x3 test12 = mat2 <= mat2;
	bool3x3 test13 = mat2 >= mat2;
	bool3x3 test14 = mat2 <  mat3;

	bool3x3 test15 = mat3 >  mat0;
	bool3x3 test16 = mat3 >  mat1;
	bool3x3 test17 = mat3 >  mat2;
	bool3x3 test18 = mat3 <= mat3;
	bool3x3 test19 = mat3 >= mat3;

	TEMPER_EXPECT_TRUE( test0  == allTrue );
	TEMPER_EXPECT_TRUE( test1  == allTrue );
	TEMPER_EXPECT_TRUE( test2  == allTrue );
	TEMPER_EXPECT_TRUE( test3  == allTrue );
	TEMPER_EXPECT_TRUE( test4  == allTrue );

	TEMPER_EXPECT_TRUE( test5  == allTrue );
	TEMPER_EXPECT_TRUE( test6  == allTrue );
	TEMPER_EXPECT_TRUE( test7  == allTrue );
	TEMPER_EXPECT_TRUE( test8  == allTrue );
	TEMPER_EXPECT_TRUE( test9  == allTrue );

	TEMPER_EXPECT_TRUE( test10 == allTrue );
	TEMPER_EXPECT_TRUE( test11 == allTrue );
	TEMPER_EXPECT_TRUE( test12 == allTrue );
	TEMPER_EXPECT_TRUE( test13 == allTrue );
	TEMPER_EXPECT_TRUE( test14 == allTrue );

	TEMPER_EXPECT_TRUE( test15 == allTrue );
	TEMPER_EXPECT_TRUE( test16 == allTrue );
	TEMPER_EXPECT_TRUE( test17 == allTrue );
	TEMPER_EXPECT_TRUE( test18 == allTrue );
	TEMPER_EXPECT_TRUE( test19 == allTrue );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_int3x3 )
{
	int3x3 answer = int3x3(
		5, 5, 5,
		5, 5, 5,
		5, 5, 5
	);
	int3x3 a = int3x3(
		21, 21, 21,
		21, 21, 21,
		21, 21, 21
	);
	int3x3 b = int3x3(
		7, 7, 7,
		7, 7, 7,
		7, 7, 7
	);

	int3x3 c = a & b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_int3x3 )
{
	int3x3 answer = int3x3(
		23, 23, 23,
		23, 23, 23,
		23, 23, 23
	);
	int3x3 a = int3x3(
		21, 21, 21,
		21, 21, 21,
		21, 21, 21
	);
	int3x3 b = int3x3(
		7, 7, 7,
		7, 7, 7,
		7, 7, 7
	);

	int3x3 c = a | b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_int3x3 )
{
	int3x3 answer = int3x3(
		18, 18, 18,
		18, 18, 18,
		18, 18, 18
	);
	int3x3 a = int3x3(
		21, 21, 21,
		21, 21, 21,
		21, 21, 21
	);
	int3x3 b = int3x3(
		7, 7, 7,
		7, 7, 7,
		7, 7, 7
	);

	int3x3 c = a ^ b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_int3x3 )
{
	int3x3 answer = int3x3(
		4, 4, 4,
		4, 4, 4,
		4, 4, 4
	);
	int3x3 a = int3x3(
		1, 1, 1,
		1, 1, 1,
		1, 1, 1
	);
	int3x3 b = int3x3(
		2, 2, 2,
		2, 2, 2,
		2, 2, 2
	);

	int3x3 c = a << b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_int3x3 )
{
	int3x3 answer = int3x3(
		1, 1, 1,
		1, 1, 1,
		1, 1, 1
	);
	int3x3 a = int3x3(
		16, 16, 16,
		16, 16, 16,
		16, 16, 16
	);
	int3x3 b = int3x3(
		4, 4, 4,
		4, 4, 4,
		4, 4, 4
	);

	int3x3 c = a >> b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Unary_int3x3 )
{
	int3x3 answer = int3x3(
		(int32_t) -1, (int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1, (int32_t) -1,
		(int32_t) -1, (int32_t) -1, (int32_t) -1
	);
	int3x3 a = int3x3(
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	);

	int3x3 b = ~a;

	TEMPER_EXPECT_TRUE( b == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_Scalar_int3x3 )
{
	int3x3 id;
	id[0] = int3( 1, 0, 0 );
	id[1] = int3( 0, 1, 0 );
	id[2] = int3( 0, 0, 1 );

	int3x3 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_Scalar_int3x3 )
{
	int3x3 answerTransposed = int3x3(
		0, 4, 8,
		1, 5, 9,
		2, 6, 10
	);

	int3x3 mat = int3x3(
		0, 1, 2,
		4, 5, 6,
		8, 9, 10
	);
	int3x3 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == answerTransposed );

	TEMPER_PASS();
}

TEMPER_TEST( TestDeterminant_Scalar_int3x3 )
{
	int3x3 mat = int3x3(
		6, 2, 3,
		2, 7, 2,
		3, 2, 6
	);

	int32_t det = determinant( mat );

	TEMPER_EXPECT_TRUE( det == 165 );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranslate_Scalar_int3x3 )
{
	int3x3 mat;
	int2 translation = int2( 2, 3 );

	mat = translate( mat, translation );

	TEMPER_EXPECT_TRUE( mat.rows[0].z == 2 );
	TEMPER_EXPECT_TRUE( mat.rows[1].z == 3 );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_Scalar_int3x3 )
{
	int2 scaleVec = { 2, 2 };
	int3x3 mat;
	identity( mat );

	int3x3 scaled = scale( mat, scaleVec );

	TEMPER_EXPECT_TRUE( scaled.rows[0].x == 2 );
	TEMPER_EXPECT_TRUE( scaled.rows[1].y == 2 );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_int3x3 )
{
	TEMPER_RUN_TEST( TestAssignment_int3x3 );
	TEMPER_RUN_TEST( TestCtor_int3x3 );
	TEMPER_RUN_TEST( TestArray_int3x3 );
	TEMPER_RUN_TEST( TestIncrement_int3x3 );
	TEMPER_RUN_TEST( TestDecrement_int3x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Addition_int3x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Subtraction_int3x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Multiplication_int3x3 );
	TEMPER_RUN_TEST( TestComponentWiseArithmetic_Scalar_Division_int3x3 );
	TEMPER_RUN_TEST( TestMultiplyMatrix_Scalar_int3x3 );
	TEMPER_RUN_TEST( TestMultiplyVector_int3x3 );
	TEMPER_RUN_TEST( TestRelational_int3x3 );
	TEMPER_RUN_TEST( TestBitwise_And_int3x3 );
	TEMPER_RUN_TEST( TestBitwise_Or_int3x3 );
	TEMPER_RUN_TEST( TestBitwise_Xor_int3x3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftLeft_int3x3 );
	TEMPER_RUN_TEST( TestBitwise_ShiftRight_int3x3 );
	TEMPER_RUN_TEST( TestBitwise_Unary_int3x3 );
	TEMPER_RUN_TEST( TestIdentity_Scalar_int3x3 );
	TEMPER_RUN_TEST( TestTranspose_Scalar_int3x3 );
	TEMPER_RUN_TEST( TestDeterminant_Scalar_int3x3 );
	TEMPER_RUN_TEST( TestTranslate_Scalar_int3x3 );
	TEMPER_RUN_TEST( TestScale_Scalar_int3x3 );
}
