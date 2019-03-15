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

TEMPER_TEST( TestAssignment_bool3x4 ) {
	bool3x4 mat;

	// fill single value
	mat = bool3x4( true );
	TEMPER_EXPECT_TRUE( mat[0] == bool4( true, false, false, false ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( false, true, false, false ) );
	TEMPER_EXPECT_TRUE( mat[2] == bool4( false, false, true, false ) );

	// row filling
	mat = bool3x4(
		bool4( 0, 1, 2, 3 ),
		bool4( 4, 5, 6, 7 ),
		bool4( 8, 9, 10, 11 )
	);
	TEMPER_EXPECT_TRUE( mat[0] == bool4( 0, 1, 2, 3 ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( 4, 5, 6, 7 ) );
	TEMPER_EXPECT_TRUE( mat[2] == bool4( 8, 9, 10, 11 ) );

	// all values filled
	mat = bool3x4(
		12, 11, 10, 9, 
		8, 7, 6, 5, 
		4, 3, 2, 1
	);
	TEMPER_EXPECT_TRUE( mat[0] == bool4( 12, 11, 10, 9 ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( 8, 7, 6, 5 ) );
	TEMPER_EXPECT_TRUE( mat[2] == bool4( 4, 3, 2, 1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_bool3x4 ) {
	bool3x4 mat;

	TEMPER_EXPECT_TRUE( mat[0] == bool4( true, false, false, false ) );
	TEMPER_EXPECT_TRUE( mat[1] == bool4( false, true, false, false ) );
	TEMPER_EXPECT_TRUE( mat[2] == bool4( false, false, true, false ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIdentity_bool3x4 ) {
	bool3x4 id = bool3x4(
		true, false, false, false,
		false, true, false, false,
		false, false, true, false
	);

	bool3x4 mat;
	TEMPER_EXPECT_TRUE( mat == id );

	identity( mat );
	TEMPER_EXPECT_TRUE( mat == id );

	TEMPER_PASS();
}

TEMPER_TEST( TestTranspose_bool3x4 ) {
	bool3x4 mat = bool3x4(
		false, true, true, true,
		true, true, true, true,
		true, true, true, true
	);
	bool4x3 trans = transpose( mat );

	TEMPER_EXPECT_TRUE( trans == bool4x3(
		false, true, true,
		true, true, true,
		true, true, true,
		true, true, true
	) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_bool3x4 ) {
	TEMPER_RUN_TEST( TestAssignment_bool3x4 );
	TEMPER_RUN_TEST( TestArray_bool3x4 );

	TEMPER_RUN_TEST( TestIdentity_bool3x4 );
	TEMPER_RUN_TEST( TestTranspose_bool3x4 );
};
