/*
===========================================================================

hlml.
Copyright (c) Dan Moody 2019 - Present.

This file is part of hlml.

hlml is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

hlml is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with hlml.  If not, see <http://www.gnu.org/licenses/>.

===========================================================================
*/

// GENERATED FILE.  DO NOT EDIT.

#include "../../code/out/gen/hlml_functions_matrix.h"

#include <temper/temper.h>

TEMPER_TEST( TestAssignment_double3x4 )
{
	double3x4 mat;

	// fill single value
	mat = double3x4( 999.000000 );
	TEMPER_EXPECT_TRUE( mat[0] == double4( 999.000000, 0.000000, 0.000000, 0.000000 ) );
	TEMPER_EXPECT_TRUE( mat[1] == double4( 0.000000, 999.000000, 0.000000, 0.000000 ) );
	TEMPER_EXPECT_TRUE( mat[2] == double4( 0.000000, 0.000000, 999.000000, 0.000000 ) );

	// row filling
	mat = double3x4(
		double4( 0.000000, 1.000000, 2.000000, 3.000000 ),
		double4( 4.000000, 5.000000, 6.000000, 7.000000 ),
		double4( 8.000000, 9.000000, 10.000000, 11.000000 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == double4( 0.000000, 1.000000, 2.000000, 3.000000 ) );
	TEMPER_EXPECT_TRUE( mat[1] == double4( 4.000000, 5.000000, 6.000000, 7.000000 ) );
	TEMPER_EXPECT_TRUE( mat[2] == double4( 8.000000, 9.000000, 10.000000, 11.000000 ) );

	// all values filled
	mat = double3x4(
		16.000000, 15.000000, 14.000000, 13.000000,
		12.000000, 11.000000, 10.000000, 9.000000,
		8.000000, 7.000000, 6.000000, 5.000000
	);
	TEMPER_EXPECT_TRUE( mat[0] == double4( 16.000000, 15.000000, 14.000000, 13.000000 ) );
	TEMPER_EXPECT_TRUE( mat[1] == double4( 12.000000, 11.000000, 10.000000, 9.000000 ) );
	TEMPER_EXPECT_TRUE( mat[2] == double4( 8.000000, 7.000000, 6.000000, 5.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_double3x4 )
{
	double3x4 answer = double3x4(
		7.000000, 7.000000, 7.000000, 7.000000,
		8.000000, 8.000000, 8.000000, 8.000000,
		15.000000, 15.000000, 15.000000, 15.000000
	);

	double3x4 a = double3x4(
		6.000000, 6.000000, 6.000000, 6.000000,
		6.000000, 6.000000, 6.000000, 6.000000,
		12.000000, 12.000000, 12.000000, 12.000000
	);
	double3x4 b = double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		2.000000, 2.000000, 2.000000, 2.000000,
		3.000000, 3.000000, 3.000000, 3.000000
	);
	double3x4 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_double3x4 )
{
	double3x4 answer = double3x4(
		5.000000, 5.000000, 5.000000, 5.000000,
		4.000000, 4.000000, 4.000000, 4.000000,
		9.000000, 9.000000, 9.000000, 9.000000
	);

	double3x4 a = double3x4(
		6.000000, 6.000000, 6.000000, 6.000000,
		6.000000, 6.000000, 6.000000, 6.000000,
		12.000000, 12.000000, 12.000000, 12.000000
	);
	double3x4 b = double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		2.000000, 2.000000, 2.000000, 2.000000,
		3.000000, 3.000000, 3.000000, 3.000000
	);
	double3x4 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_double3x4 )
{
	double3x3 answer = double3x3(
		72.000000, 72.000000, 72.000000,
		72.000000, 72.000000, 72.000000,
		144.000000, 144.000000, 144.000000
	);

	double3x4 a = double3x4(
		6.000000, 6.000000, 6.000000, 6.000000,
		6.000000, 6.000000, 6.000000, 6.000000,
		12.000000, 12.000000, 12.000000, 12.000000
	);
	double4x3 b = double4x3(
		1.000000, 1.000000, 1.000000,
		2.000000, 2.000000, 2.000000,
		3.000000, 3.000000, 3.000000,
		6.000000, 6.000000, 6.000000
	);
	double3x3 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_double3x4 )
{
	double3x4 answer = double3x4(
		6.000000, 6.000000, 6.000000, 6.000000,
		3.000000, 3.000000, 3.000000, 3.000000,
		4.000000, 4.000000, 4.000000, 4.000000
	);

	double3x4 a = double3x4(
		6.000000, 6.000000, 6.000000, 6.000000,
		6.000000, 6.000000, 6.000000, 6.000000,
		12.000000, 12.000000, 12.000000, 12.000000
	);
	double3x4 b = double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		2.000000, 2.000000, 2.000000, 2.000000,
		3.000000, 3.000000, 3.000000, 3.000000
	);
	double3x4 c = a / b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_double3x4 )
{
	double3x4 mat;

	// prefix
	mat = double3x4(
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000
	) );

	// postfix
	mat = double3x4(
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_double3x4 )
{
	double3x4 mat;

	// prefix
	mat = double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == double3x4(
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000
	) );

	// postfix
	mat = double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == double3x4(
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000,
		0.000000, 0.000000, 0.000000, 0.000000
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_double3x4 )
{
	bool3x4 allTrue = bool3x4(
		true, true, true, true,
		true, true, true, true,
		true, true, true, true
	);

	double3x4 mat0 = double3x4(
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000,
		1.000000, 1.000000, 1.000000, 1.000000
	);
	double3x4 mat1 = double3x4(
		2.000000, 2.000000, 2.000000, 2.000000,
		2.000000, 2.000000, 2.000000, 2.000000,
		2.000000, 2.000000, 2.000000, 2.000000
	);
	double3x4 mat2 = double3x4(
		3.000000, 3.000000, 3.000000, 3.000000,
		3.000000, 3.000000, 3.000000, 3.000000,
		3.000000, 3.000000, 3.000000, 3.000000
	);
	double3x4 mat3 = double3x4(
		4.000000, 4.000000, 4.000000, 4.000000,
		4.000000, 4.000000, 4.000000, 4.000000,
		4.000000, 4.000000, 4.000000, 4.000000
	);

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

TEMPER_TEST( TestArray_double3x4 )
{
	double3x4 mat;

	TEMPER_EXPECT_TRUE( mat[0] == double4( 1.000000, 0.000000, 0.000000, 0.000000 ) );
	TEMPER_EXPECT_TRUE( mat[1] == double4( 0.000000, 1.000000, 0.000000, 0.000000 ) );
	TEMPER_EXPECT_TRUE( mat[2] == double4( 0.000000, 0.000000, 1.000000, 0.000000 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_double3x4 )
{
	double3x4 id = double3x4(
		1.000000, 0.0, 0.0, 0.0,
		0.0, 1.000000, 0.0, 0.0,
		0.0, 0.0, 1.000000, 0.0
	);

	double3x4 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_double3x4 )
{
	double3x4 mat = double3x4(
		0.000000, 1.000000, 2.000000, 3.000000,
		4.000000, 5.000000, 6.000000, 7.000000,
		8.000000, 9.000000, 10.000000, 11.000000
	);
	double4x3 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == double4x3(
		0.000000, 4.000000, 8.000000,
		1.000000, 5.000000, 9.000000,
		2.000000, 6.000000, 10.000000,
		3.000000, 7.000000, 11.000000
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranslate_double3x4 )
{
	double3x4 mat;
	double3x4 translated = double3x4(
		1.000000, 0.000000, 0.000000, 2.000000,
		0.000000, 1.000000, 0.000000, 3.000000,
		0.000000, 0.000000, 1.000000, 4.000000
	);

	double3 translation = double3( 2.000000, 3.000000, 4.000000 );
	mat = translate( mat, translation );

	TEMPER_EXPECT_TRUE( mat == translated );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_double3x4 )
{
	double3x4 mat;
	double3x4 scaled = scale( mat, double3( 2.000000, 2.000000, 2.000000 ) );

	TEMPER_EXPECT_TRUE( scaled == double3x4(
		2.000000, 0.0, 0.0, 0.0,
		0.0, 2.000000, 0.0, 0.0,
		0.0, 0.0, 2.000000, 0.0
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_double3x4 )
{
	TEMPER_RUN_TEST( TestAssignment_double3x4 );
	TEMPER_RUN_TEST( TestArithmeticAddition_double3x4 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_double3x4 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_double3x4 );
	TEMPER_RUN_TEST( TestArithmeticDivision_double3x4 );
	TEMPER_RUN_TEST( TestIncrement_double3x4 );
	TEMPER_RUN_TEST( TestDecrement_double3x4 );
	TEMPER_RUN_TEST( TestRelational_double3x4 );
	TEMPER_RUN_TEST( TestArray_double3x4 );
	TEMPER_RUN_TEST( TestIdentity_double3x4 );
	TEMPER_RUN_TEST( TestTranspose_double3x4 );
	TEMPER_RUN_TEST( TestTranslate_double3x4 );
	TEMPER_RUN_TEST( TestScale_double3x4 );
}
