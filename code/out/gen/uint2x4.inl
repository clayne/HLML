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
uint2x4 inverse( const uint2x4& mat );

uint2x4::uint2x4()
{
	rows[0] = { 1, 0, 0, 0 };
	rows[1] = { 0, 1, 0, 0 };
}

uint2x4::uint2x4( const uint32_t diagonal )
{
	rows[0] = { diagonal, 0, 0, 0 };
	rows[1] = { 0, diagonal, 0, 0 };
}

uint2x4::uint2x4( const uint4& diagonal )
{
	rows[0] = { diagonal.x, 0, 0, 0 };
	rows[1] = { 0, diagonal.y, 0, 0 };
}

uint2x4::uint2x4( const uint4& row0, const uint4& row1 )
{
	rows[0] = row0;
	rows[1] = row1;
}

uint2x4::uint2x4( const uint4 rows[2] )
{
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
}

uint2x4::uint2x4( const uint32_t m00, const uint32_t m01, const uint32_t m02, const uint32_t m03, const uint32_t m10, const uint32_t m11, const uint32_t m12, const uint32_t m13 )
{
	rows[0] = { m00, m01, m02, m03 };
	rows[1] = { m10, m11, m12, m13 };
}

uint2x4::uint2x4( const uint2x4& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
};

uint2x4 uint2x4::operator=( const uint2x4& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
};

uint4& uint2x4::operator[]( const uint32_t index )
{
	assert( index < 2 );
	return rows[index];
}

const uint4& uint2x4::operator[]( const uint32_t index ) const
{
	assert( index < 2 );
	return rows[index];
}

bool operator==( const uint2x4& lhs, const uint2x4& rhs )
{
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1];
}

bool operator!=( const uint2x4& lhs, const uint2x4& rhs )
{
	return !( operator==( lhs, rhs ) );
}

