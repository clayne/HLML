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

// hlml includes
#include "../hlml_main.h"

// others
#include <math.h>

bool2x3::bool2x3() {
	rows[0] = { 1, 0, 0 };
	rows[1] = { 0, 1, 0 };
}

bool2x3::bool2x3( const bool diagonal ) {
	rows[0] = { diagonal, 0, 0 };
	rows[1] = { 0, diagonal, 0 };
}

bool2x3::bool2x3( const bool3& diagonal ) {
	rows[0] = { diagonal.x, 0, 0 };
	rows[1] = { 0, diagonal.y, 0 };
}

bool2x3::bool2x3( const bool3& row0, const bool3& row1 ) {
	rows[0] = row0;
	rows[1] = row1;
}

bool2x3::bool2x3( const bool3 rows[2] ) {
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
}

bool2x3::bool2x3( const bool m00, const bool m01, const bool m02, const bool m10, const bool m11, const bool m12 ) {
	rows[0] = { m00, m01, m02 };
	rows[1] = { m10, m11, m12 };
}

bool2x3::bool2x3( const bool2x3& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
};

bool2x3 bool2x3::operator=( const bool2x3& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
};

bool3& bool2x3::operator[]( const uint32_t index ) {
	assert( index < 2 );
	return rows[index];
}

const bool3& bool2x3::operator[]( const uint32_t index ) const {
	assert( index < 2 );
	return rows[index];
}

bool operator==( const bool2x3& lhs, const bool2x3& rhs ) {
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1];
}

bool operator!=( const bool2x3& lhs, const bool2x3& rhs ) {
	return !( operator==( lhs, rhs ) );
}

