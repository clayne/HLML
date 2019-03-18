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

// forward declares
int4x2 inverse( const int4x2& mat );

int4x2::int4x2()
{
	rows[0] = { 1, 0 };
	rows[1] = { 0, 1 };
	rows[2] = { 0, 0 };
	rows[3] = { 0, 0 };
}

int4x2::int4x2( const int32_t diagonal )
{
	rows[0] = { diagonal, 0 };
	rows[1] = { 0, diagonal };
	rows[2] = { 0, 0 };
	rows[3] = { 0, 0 };
}

int4x2::int4x2( const int2& diagonal )
{
	rows[0] = { diagonal.x, 0 };
	rows[1] = { 0, diagonal.y };
	rows[2] = { 0, 0 };
	rows[3] = { 0, 0 };
}

int4x2::int4x2( const int2& row0, const int2& row1, const int2& row2, const int2& row3 )
{
	rows[0] = row0;
	rows[1] = row1;
	rows[2] = row2;
	rows[3] = row3;
}

int4x2::int4x2( const int2 rows[4] )
{
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
	this->rows[2] = rows[2];
	this->rows[3] = rows[3];
}

int4x2::int4x2( const int32_t m00, const int32_t m01, const int32_t m10, const int32_t m11, const int32_t m20, const int32_t m21, const int32_t m30, const int32_t m31 )
{
	rows[0] = { m00, m01 };
	rows[1] = { m10, m11 };
	rows[2] = { m20, m21 };
	rows[3] = { m30, m31 };
}

int4x2::int4x2( const int4x2& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
};

int4x2 int4x2::operator=( const int4x2& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
};

int2& int4x2::operator[]( const uint32_t index )
{
	assert( index < 4 );
	return rows[index];
}

const int2& int4x2::operator[]( const uint32_t index ) const
{
	assert( index < 4 );
	return rows[index];
}

bool operator==( const int4x2& lhs, const int4x2& rhs )
{
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1]
		&& lhs[2] == rhs[2]
		&& lhs[3] == rhs[3];
}

bool operator!=( const int4x2& lhs, const int4x2& rhs )
{
	return !( operator==( lhs, rhs ) );
}

