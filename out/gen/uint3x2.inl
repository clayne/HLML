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
uint3x2 inverse( const uint3x2& mat );

uint3x2::uint3x2() {
	rows[0] = { 1, 0 };
	rows[1] = { 0, 1 };
	rows[2] = { 0, 0 };
}

uint3x2::uint3x2( const uint32_t diagonal ) {
	rows[0] = { diagonal, 0 };
	rows[1] = { 0, diagonal };
	rows[2] = { 0, 0 };
}

uint3x2::uint3x2( const uint2& diagonal ) {
	rows[0] = { diagonal.x, 0 };
	rows[1] = { 0, diagonal.y };
	rows[2] = { 0, 0 };
}

uint3x2::uint3x2( const uint2& row0, const uint2& row1, const uint2& row2 ) {
	rows[0] = row0;
	rows[1] = row1;
	rows[2] = row2;
}

uint3x2::uint3x2( const uint2 rows[3] ) {
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
	this->rows[2] = rows[2];
}

uint3x2::uint3x2( const uint32_t m00, const uint32_t m01, const uint32_t m10, const uint32_t m11, const uint32_t m20, const uint32_t m21 ) {
	rows[0] = { m00, m01 };
	rows[1] = { m10, m11 };
	rows[2] = { m20, m21 };
}

uint3x2::uint3x2( const uint3x2& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
};

uint3x2 uint3x2::operator=( const uint3x2& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
};

uint3x2 uint3x2::operator+( const uint32_t rhs ) const {
	return uint3x2(
		rows[0] + rhs,
		rows[1] + rhs,
		rows[2] + rhs
	);
}

uint3x2 uint3x2::operator+=( const uint32_t rhs ) {
	return ( *this = *this + rhs );
}

uint3x2 uint3x2::operator+( const uint3x2& rhs ) const {
	return uint3x2(
		rows[0] + rhs[0],
		rows[1] + rhs[1],
		rows[2] + rhs[2]
	);
}

uint3x2 uint3x2::operator+=( const uint3x2& rhs ) {
	return ( *this = *this + rhs );
}

uint3x2 uint3x2::operator-( const uint32_t rhs ) const {
	return uint3x2(
		rows[0] - rhs,
		rows[1] - rhs,
		rows[2] - rhs
	);
}

uint3x2 uint3x2::operator-=( const uint32_t rhs ) {
	return ( *this = *this - rhs );
}

uint3x2 uint3x2::operator-( const uint3x2& rhs ) const {
	return uint3x2(
		rows[0] - rhs[0],
		rows[1] - rhs[1],
		rows[2] - rhs[2]
	);
}

uint3x2 uint3x2::operator-=( const uint3x2& rhs ) {
	return ( *this = *this - rhs );
}

uint3x2 uint3x2::operator*( const uint32_t rhs ) const {
	return uint3x2(
		rows[0] * rhs,
		rows[1] * rhs,
		rows[2] * rhs
	);
}

uint3x2 uint3x2::operator*=( const uint32_t rhs ) {
	return ( *this = *this * rhs );
}

uint3x2 uint3x2::operator*( const uint3x2& rhs ) const {
	uint3 row0 = rows[0];
	uint3 row1 = rows[1];
	uint3 row2 = rows[2];

	uint3 col0 = { rhs[0].x, rhs[1].x, rhs[2].x };
	uint3 col1 = { rhs[0].y, rhs[1].y, rhs[2].y };

	return uint3x2(
		row0.x * col0.x + row0.y * col0.y + row0.z * col0.z,
		row0.x * col1.x + row0.y * col1.y + row0.z * col1.z,

		row1.x * col0.x + row1.y * col0.y + row1.z * col0.z,
		row1.x * col1.x + row1.y * col1.y + row1.z * col1.z,

		row2.x * col0.x + row2.y * col0.y + row2.z * col0.z,
		row2.x * col1.x + row2.y * col1.y + row2.z * col1.z
	);
}

uint3x2 uint3x2::operator*=( const uint3x2& rhs ) {
	return ( *this = *this * rhs );
}

uint3x2 uint3x2::operator/( const uint32_t rhs ) const {
	return uint3x2(
		rows[0] / rhs,
		rows[1] / rhs,
		rows[2] / rhs
	);
}

uint3x2 uint3x2::operator/=( const uint32_t rhs ) {
	return ( *this = *this / rhs );
}

uint3x2 uint3x2::operator/( const uint3x2& rhs ) const {
	return uint3x2(
		rows[0] / rhs[0],
		rows[1] / rhs[1],
		rows[2] / rhs[2]
	);
}

uint3x2 uint3x2::operator/=( const uint3x2& rhs ) {
	return ( *this = *this / rhs );
}

uint2& uint3x2::operator[]( const uint32_t index ) {
	assert( index < 3 );
	return rows[index];
}

const uint2& uint3x2::operator[]( const uint32_t index ) const {
	assert( index < 3 );
	return rows[index];
}

bool operator==( const uint3x2& lhs, const uint3x2& rhs ) {
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1]
		&& lhs[2] == rhs[2];
}

bool operator!=( const uint3x2& lhs, const uint3x2& rhs ) {
	return !( operator==( lhs, rhs ) );
}

bool3x2 operator<( const uint3x2& lhs, const uint3x2& rhs ) {
	return bool3x2(
		lhs[0] < rhs[0],
		lhs[1] < rhs[1],
		lhs[2] < rhs[2]
	);
}

bool3x2 operator<=( const uint3x2& lhs, const uint3x2& rhs ) {
	return bool3x2(
		lhs[0] <= rhs[0],
		lhs[1] <= rhs[1],
		lhs[2] <= rhs[2]
	);
}

bool3x2 operator>( const uint3x2& lhs, const uint3x2& rhs ) {
	return bool3x2(
		lhs[0] > rhs[0],
		lhs[1] > rhs[1],
		lhs[2] > rhs[2]
	);
}

bool3x2 operator>=( const uint3x2& lhs, const uint3x2& rhs ) {
	return bool3x2(
		lhs[0] >= rhs[0],
		lhs[1] >= rhs[1],
		lhs[2] >= rhs[2]
	);
}

