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
double3x2 inverse( const double3x2& mat );

double3x2::double3x2()
{
	rows[0] = { 1, 0 };
	rows[1] = { 0, 1 };
	rows[2] = { 0, 0 };
}

double3x2::double3x2( const double diagonal )
{
	rows[0] = { diagonal, 0 };
	rows[1] = { 0, diagonal };
	rows[2] = { 0, 0 };
}

double3x2::double3x2( const double2& diagonal )
{
	rows[0] = { diagonal.x, 0 };
	rows[1] = { 0, diagonal.y };
	rows[2] = { 0, 0 };
}

double3x2::double3x2( const double2& row0, const double2& row1, const double2& row2 )
{
	rows[0] = row0;
	rows[1] = row1;
	rows[2] = row2;
}

double3x2::double3x2( const double2 rows[3] )
{
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
	this->rows[2] = rows[2];
}

double3x2::double3x2( const double m00, const double m01, const double m10, const double m11, const double m20, const double m21 )
{
	rows[0] = { m00, m01 };
	rows[1] = { m10, m11 };
	rows[2] = { m20, m21 };
}

double3x2::double3x2( const double3x2& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
};

double3x2 double3x2::operator=( const double3x2& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
};

double2& double3x2::operator[]( const uint32_t index )
{
	assert( index < 3 );
	return rows[index];
}

const double2& double3x2::operator[]( const uint32_t index ) const
{
	assert( index < 3 );
	return rows[index];
}

bool operator==( const double3x2& lhs, const double3x2& rhs )
{
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1]
		&& lhs[2] == rhs[2];
}

bool operator!=( const double3x2& lhs, const double3x2& rhs )
{
	return !( operator==( lhs, rhs ) );
}

