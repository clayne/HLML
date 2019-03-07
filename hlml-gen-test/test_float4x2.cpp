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

#include "../out/gen/hlml_functions_matrix.h"

#include <temper.h>

TEMPER_TEST( TestAssignment_float4x2 ) {
	float4x2 mat;

	// fill single value
	mat = float4x2( 999.000000f );
	TEMPER_EXPECT_TRUE( mat[0] == float2( 999.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float2( 0.000000f, 999.000000f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float2( 0.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float2( 0.000000f, 0.000000f ) );

	// row filling
	mat = float4x2(
		float2( 0, 1 ),
		float2( 2, 3 ),
		float2( 4, 5 ),
		float2( 6, 7 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == float2( 0, 1 ) );
	TEMPER_EXPECT_TRUE( mat[1] == float2( 2, 3 ) );
	TEMPER_EXPECT_TRUE( mat[2] == float2( 4, 5 ) );
	TEMPER_EXPECT_TRUE( mat[3] == float2( 6, 7 ) );

	// all values filled
	mat = float4x2(
		8, 7, 
		6, 5, 
		4, 3, 
		2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == float2( 8, 7 ) );
	TEMPER_EXPECT_TRUE( mat[1] == float2( 6, 5 ) );
	TEMPER_EXPECT_TRUE( mat[2] == float2( 4, 3 ) );
	TEMPER_EXPECT_TRUE( mat[3] == float2( 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_float4x2 ) {
	float4x2 mat;

	TEMPER_EXPECT_TRUE( mat[0] == float2( 1.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[1] == float2( 0.000000f, 1.000000f ) );
	TEMPER_EXPECT_TRUE( mat[2] == float2( 0.000000f, 0.000000f ) );
	TEMPER_EXPECT_TRUE( mat[3] == float2( 0.000000f, 0.000000f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_float4x2 ) {
	float4x2 mat0 = float4x2(
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f,
		1.000000f, 1.000000f
	);
	float4x2 mat1 = float4x2(
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f,
		2.000000f, 2.000000f
	);
	float4x2 mat2 = float4x2(
		3.000000f, 3.000000f,
		3.000000f, 3.000000f,
		3.000000f, 3.000000f,
		3.000000f, 3.000000f
	);
	float4x2 mat3 = float4x2(
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f,
		4.000000f, 4.000000f
	);

	bool4x2 test0 = mat0 <= mat0;
	bool4x2 test1 = mat0 >= mat0;
	bool4x2 test2 = mat0 < mat1;

	bool4x2 test3 = mat1 <= mat1;
	bool4x2 test4 = mat1 >= mat1;
	bool4x2 test5 = mat1 < mat2;
	bool4x2 test6 = mat1 > mat0;

	bool4x2 test7 = mat2 <= mat2;
	bool4x2 test8 = mat2 >= mat2;
	bool4x2 test9 = mat2 < mat3;
	bool4x2 test10 = mat2 > mat1;

	bool4x2 test11 = mat3 <= mat3;
	bool4x2 test12 = mat3 >= mat3;
	bool4x2 test13 = mat3 > mat2;

	TEMPER_EXPECT_TRUE( test0 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test1 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test2 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test3 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test4 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test5 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test6 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test7 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test8 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test9 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test10 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test11 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test12 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_EXPECT_TRUE( test13 == bool4x2(
		true, true,
		true, true,
		true, true,
		true, true
	) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_float4x2 ) {
	float4x2 id = float4x2(
		1.000000f, 0.000000f,
		0.000000f, 1.000000f,
		0.000000f, 0.000000f,
		0.000000f, 0.000000f
	);

	float4x2 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_float4x2 ) {
	float4x2 mat = float4x2(
		0.000000f, 1.000000f,
		2.000000f, 3.000000f,
		4.000000f, 5.000000f,
		6.000000f, 7.000000f
	);
	float2x4 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == float2x4(
		0.000000f, 2.000000f, 4.000000f, 6.000000f,
		1.000000f, 3.000000f, 5.000000f, 7.000000f
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_float4x2 ) {
	TEMPER_RUN_TEST( TestAssignment_float4x2 );


	TEMPER_RUN_TEST( TestArray_float4x2 );
	TEMPER_RUN_TEST( TestRelational_float4x2 );

	TEMPER_RUN_TEST( TestIdentity_float4x2 );
	TEMPER_RUN_TEST( TestTranspose_float4x2 );


};
