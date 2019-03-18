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

TEMPER_TEST( TestAssignment_float4x3 )
{
	float4x3 mat;

	// fill single value
	mat = float4x3( 999.000000f );
	TEMPER_EXPECT_TRUE( mat[0] == float3( 999.000000f, 0.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float3( 0.000000f, 999.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float3( 0.000000f, 0.000000f, 999.000000f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float3( 0.000000f, 0.000000f, 0.000000f ) );

	// row filling
	mat = float4x3(
		float3( 0, 1, 2 ),
		float3( 3, 4, 5 ),
		float3( 6, 7, 8 ),
		float3( 9, 10, 11 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == float3( 0, 1, 2 ) );
	TEMPER_EXPECT_TRUE( mat[1] == float3( 3, 4, 5 ) );
	TEMPER_EXPECT_TRUE( mat[2] == float3( 6, 7, 8 ) );
	TEMPER_EXPECT_TRUE( mat[3] == float3( 9, 10, 11 ) );

	// all values filled
	mat = float4x3(
		12, 11, 10, 
		9, 8, 7, 
		6, 5, 4, 
		3, 2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == float3( 12, 11, 10 ) );
	TEMPER_EXPECT_TRUE( mat[1] == float3( 9, 8, 7 ) );
	TEMPER_EXPECT_TRUE( mat[2] == float3( 6, 5, 4 ) );
	TEMPER_EXPECT_TRUE( mat[3] == float3( 3, 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_float4x3 )
{
	float4x3 answer = float4x3(
		7.000000f, 7.000000f, 7.000000f,
		8.000000f, 8.000000f, 8.000000f,
		15.000000f, 15.000000f, 15.000000f,
		24.000000f, 24.000000f, 24.000000f
	);

	float4x3 a = float4x3(
		6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f
	);
	float4x3 b = float4x3(
		1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f
	);
	float4x3 c = a + b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_float4x3 )
{
	float4x3 answer = float4x3(
		5.000000f, 5.000000f, 5.000000f,
		4.000000f, 4.000000f, 4.000000f,
		9.000000f, 9.000000f, 9.000000f,
		12.000000f, 12.000000f, 12.000000f
	);

	float4x3 a = float4x3(
		6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f
	);
	float4x3 b = float4x3(
		1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f
	);
	float4x3 c = a - b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_float4x3 )
{
	float4x4 answer = float4x4(
		36.000000f, 36.000000f, 36.000000f, 36.000000f,
		36.000000f, 36.000000f, 36.000000f, 36.000000f,
		72.000000f, 72.000000f, 72.000000f, 72.000000f,
		108.000000f, 108.000000f, 108.000000f, 108.000000f
	);

	float4x3 a = float4x3(
		6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f
	);
	float3x4 b = float3x4(
		1.000000f, 1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f, 3.000000f
	);
	float4x4 c = a * b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_float4x3 )
{
	float4x3 answer = float4x3(
		6.000000f, 6.000000f, 6.000000f,
		3.000000f, 3.000000f, 3.000000f,
		4.000000f, 4.000000f, 4.000000f,
		3.000000f, 3.000000f, 3.000000f
	);

	float4x3 a = float4x3(
		6.000000f, 6.000000f, 6.000000f,
		6.000000f, 6.000000f, 6.000000f,
		12.000000f, 12.000000f, 12.000000f,
		18.000000f, 18.000000f, 18.000000f
	);
	float4x3 b = float4x3(
		1.000000f, 1.000000f, 1.000000f,
		2.000000f, 2.000000f, 2.000000f,
		3.000000f, 3.000000f, 3.000000f,
		6.000000f, 6.000000f, 6.000000f
	);
	float4x3 c = a / b;

	TEMPER_EXPECT_TRUE( c == answer );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_float4x3 )
{
	float4x3 mat;

	// prefix
	mat = float4x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	);
	++mat;
	TEMPER_EXPECT_TRUE( mat == float4x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	) );

	// postfix
	mat = float4x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	);
	mat++;
	TEMPER_EXPECT_TRUE( mat == float4x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_float4x3 )
{
	float4x3 mat;

	// prefix
	mat = float4x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	);
	--mat;
	TEMPER_EXPECT_TRUE( mat == float4x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	) );

	// postfix
	mat = float4x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	);
	mat--;
	TEMPER_EXPECT_TRUE( mat == float4x3(
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f,
		0.000000f, 0.000000f, 0.000000f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_float4x3 )
{
	float4x3 mat0 = float4x3(
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f,
		1.000000f, 1.000000f, 1.000000f
	);
	float4x3 mat1 = float4x3(
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f,
		2.000000f, 2.000000f, 2.000000f
	);
	float4x3 mat2 = float4x3(
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f,
		3.000000f, 3.000000f, 3.000000f
	);
	float4x3 mat3 = float4x3(
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f,
		4.000000f, 4.000000f, 4.000000f
	);

	bool4x3 test0 = mat0 <= mat0;
	bool4x3 test1 = mat0 >= mat0;
	bool4x3 test2 = mat0 < mat1;

	bool4x3 test3 = mat1 <= mat1;
	bool4x3 test4 = mat1 >= mat1;
	bool4x3 test5 = mat1 < mat2;
	bool4x3 test6 = mat1 > mat0;

	bool4x3 test7 = mat2 <= mat2;
	bool4x3 test8 = mat2 >= mat2;
	bool4x3 test9 = mat2 < mat3;
	bool4x3 test10 = mat2 > mat1;

	bool4x3 test11 = mat3 <= mat3;
	bool4x3 test12 = mat3 >= mat3;
	bool4x3 test13 = mat3 > mat2;

	TEMPER_EXPECT_TRUE( test0 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test1 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test2 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test3 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test4 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test5 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test6 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test7 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test8 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test9 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test10 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test11 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test12 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_EXPECT_TRUE( test13 == bool4x3(
		true, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_float4x3 )
{
	float4x3 mat;

	TEMPER_EXPECT_TRUE( mat[0] == float3( 1.000000f, 0.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float3( 0.000000f, 1.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float3( 0.000000f, 0.000000f, 1.000000f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float3( 0.000000f, 0.000000f, 0.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_float4x3 )
{
	float4x3 id = float4x3(
		1.000000f, 0.000000f, 0.000000f,
		0.000000f, 1.000000f, 0.000000f,
		0.000000f, 0.000000f, 1.000000f,
		0.000000f, 0.000000f, 0.000000f
	);

	float4x3 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_float4x3 )
{
	float4x3 mat = float4x3(
		0.000000f, 1.000000f, 2.000000f,
		3.000000f, 4.000000f, 5.000000f,
		6.000000f, 7.000000f, 8.000000f,
		9.000000f, 10.000000f, 11.000000f
	);
	float3x4 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == float3x4(
		0.000000f, 3.000000f, 6.000000f, 9.000000f,
		1.000000f, 4.000000f, 7.000000f, 10.000000f,
		2.000000f, 5.000000f, 8.000000f, 11.000000f
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestScale_float4x3 )
{
	float4x3 mat;
	float4x3 scaled = scale( mat, float3( 2.000000f, 2.000000f, 2.000000f ) );

	TEMPER_EXPECT_TRUE( scaled == float4x3(
		2.000000f, 0.000000f, 0.000000f,
		0.000000f, 2.000000f, 0.000000f,
		0.000000f, 0.000000f, 2.000000f,
		0.000000f, 0.000000f, 0.000000f
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_float4x3 )
{
	TEMPER_RUN_TEST( TestAssignment_float4x3 );

	TEMPER_RUN_TEST( TestArithmeticAddition_float4x3 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_float4x3 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_float4x3 );
	TEMPER_RUN_TEST( TestArithmeticDivision_float4x3 );

	TEMPER_RUN_TEST( TestIncrement_float4x3 );
	TEMPER_RUN_TEST( TestDecrement_float4x3 );

	TEMPER_RUN_TEST( TestRelational_float4x3 );

	TEMPER_RUN_TEST( TestArray_float4x3 );

	TEMPER_RUN_TEST( TestIdentity_float4x3 );
	TEMPER_RUN_TEST( TestTranspose_float4x3 );


};
