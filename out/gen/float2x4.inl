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
float2x4 inverse( const float2x4& mat );

float2x4::float2x4() {
	rows[0] = { 1, 0, 0, 0 };
	rows[1] = { 0, 1, 0, 0 };
}

float2x4::float2x4( const float diagonal ) {
	rows[0] = { diagonal, 0, 0, 0 };
	rows[1] = { 0, diagonal, 0, 0 };
}

float2x4::float2x4( const float4& diagonal ) {
	rows[0] = { diagonal.x, 0, 0, 0 };
	rows[1] = { 0, diagonal.y, 0, 0 };
}

float2x4::float2x4( const float4& row0, const float4& row1 ) {
	rows[0] = row0;
	rows[1] = row1;
}

float2x4::float2x4( const float4 rows[2] ) {
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
}

float2x4::float2x4( const float m00, const float m01, const float m02, const float m03, const float m10, const float m11, const float m12, const float m13 ) {
	rows[0] = { m00, m01, m02, m03 };
	rows[1] = { m10, m11, m12, m13 };
}

float2x4::float2x4( const float2x4& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
};

float2x4 float2x4::operator=( const float2x4& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
};

float2x4 float2x4::operator+( const float rhs ) const {
	return float2x4(
		rows[0] + rhs,
		rows[1] + rhs
	);
}

float2x4 float2x4::operator+=( const float rhs ) {
	return ( *this = *this + rhs );
}

float2x4 float2x4::operator+( const float2x4& rhs ) const {
	return float2x4(
		rows[0] + rhs[0],
		rows[1] + rhs[1]
	);
}

float2x4 float2x4::operator+=( const float2x4& rhs ) {
	return ( *this = *this + rhs );
}

float2x4 float2x4::operator-( const float rhs ) const {
	return float2x4(
		rows[0] - rhs,
		rows[1] - rhs
	);
}

float2x4 float2x4::operator-=( const float rhs ) {
	return ( *this = *this - rhs );
}

float2x4 float2x4::operator-( const float2x4& rhs ) const {
	return float2x4(
		rows[0] - rhs[0],
		rows[1] - rhs[1]
	);
}

float2x4 float2x4::operator-=( const float2x4& rhs ) {
	return ( *this = *this - rhs );
}

float2x4 float2x4::operator*( const float rhs ) const {
	return float2x4(
		rows[0] * rhs,
		rows[1] * rhs
	);
}

float2x4 float2x4::operator*=( const float rhs ) {
	return ( *this = *this * rhs );
}

float2x4 float2x4::operator*( const float2x4& rhs ) const {
	float2 row0 = rows[0];
	float2 row1 = rows[1];

	float2 col0 = { rhs[0].x, rhs[1].x };
	float2 col1 = { rhs[0].y, rhs[1].y };
	float2 col2 = { rhs[0].z, rhs[1].z };
	float2 col3 = { rhs[0].w, rhs[1].w };

	return float2x4(
		row0.x * col0.x + row0.y * col0.y,
		row0.x * col1.x + row0.y * col1.y,
		row0.x * col2.x + row0.y * col2.y,
		row0.x * col3.x + row0.y * col3.y,

		row1.x * col0.x + row1.y * col0.y,
		row1.x * col1.x + row1.y * col1.y,
		row1.x * col2.x + row1.y * col2.y,
		row1.x * col3.x + row1.y * col3.y
	);
}

float2x4 float2x4::operator*=( const float2x4& rhs ) {
	return ( *this = *this * rhs );
}

float2x4 float2x4::operator/( const float rhs ) const {
	return float2x4(
		rows[0] / rhs,
		rows[1] / rhs
	);
}

float2x4 float2x4::operator/=( const float rhs ) {
	return ( *this = *this / rhs );
}

float2x4 float2x4::operator/( const float2x4& rhs ) const {
	return *this * inverse( rhs );
}

float2x4 float2x4::operator/=( const float2x4& rhs ) {
	return ( *this = *this / rhs );
}

float4& float2x4::operator[]( const uint32_t index ) {
	assert( index < 2 );
	return rows[index];
}

const float4& float2x4::operator[]( const uint32_t index ) const {
	assert( index < 2 );
	return rows[index];
}

bool operator==( const float2x4& lhs, const float2x4& rhs ) {
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1];
}

bool operator!=( const float2x4& lhs, const float2x4& rhs ) {
	return !( operator==( lhs, rhs ) );
}

bool2x4 operator<( const float2x4& lhs, const float2x4& rhs ) {
	return bool2x4(
		lhs[0] < rhs[0],
		lhs[1] < rhs[1]
	);
}

bool2x4 operator<=( const float2x4& lhs, const float2x4& rhs ) {
	return bool2x4(
		lhs[0] <= rhs[0],
		lhs[1] <= rhs[1]
	);
}

bool2x4 operator>( const float2x4& lhs, const float2x4& rhs ) {
	return bool2x4(
		lhs[0] > rhs[0],
		lhs[1] > rhs[1]
	);
}

bool2x4 operator>=( const float2x4& lhs, const float2x4& rhs ) {
	return bool2x4(
		lhs[0] >= rhs[0],
		lhs[1] >= rhs[1]
	);
}

