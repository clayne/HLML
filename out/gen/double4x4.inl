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
double4x4 inverse( const double4x4& mat );

double4x4::double4x4() {
	rows[0] = { 1, 0, 0, 0 };
	rows[1] = { 0, 1, 0, 0 };
	rows[2] = { 0, 0, 1, 0 };
	rows[3] = { 0, 0, 0, 1 };
}

double4x4::double4x4( const double diagonal ) {
	rows[0] = { diagonal, 0, 0, 0 };
	rows[1] = { 0, diagonal, 0, 0 };
	rows[2] = { 0, 0, diagonal, 0 };
	rows[3] = { 0, 0, 0, diagonal };
}

double4x4::double4x4( const double4& diagonal ) {
	rows[0] = { diagonal.x, 0, 0, 0 };
	rows[1] = { 0, diagonal.y, 0, 0 };
	rows[2] = { 0, 0, diagonal.z, 0 };
	rows[3] = { 0, 0, 0, diagonal.w };
}

double4x4::double4x4( const double4& row0, const double4& row1, const double4& row2, const double4& row3 ) {
	rows[0] = row0;
	rows[1] = row1;
	rows[2] = row2;
	rows[3] = row3;
}

double4x4::double4x4( const double4 rows[4] ) {
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
	this->rows[2] = rows[2];
	this->rows[3] = rows[3];
}

double4x4::double4x4( const double m00, const double m01, const double m02, const double m03, const double m10, const double m11, const double m12, const double m13, const double m20, const double m21, const double m22, const double m23, const double m30, const double m31, const double m32, const double m33 ) {
	rows[0] = { m00, m01, m02, m03 };
	rows[1] = { m10, m11, m12, m13 };
	rows[2] = { m20, m21, m22, m23 };
	rows[3] = { m30, m31, m32, m33 };
}

double4x4::double4x4( const double4x4& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
};

double4x4 double4x4::operator=( const double4x4& other ) {
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
};

double4x4 double4x4::operator+( const double rhs ) const {
	return double4x4(
		rows[0] + rhs,
		rows[1] + rhs,
		rows[2] + rhs,
		rows[3] + rhs
	);
}

double4x4 double4x4::operator+=( const double rhs ) {
	return ( *this = *this + rhs );
}

double4x4 double4x4::operator+( const double4x4& rhs ) const {
	return double4x4(
		rows[0] + rhs[0],
		rows[1] + rhs[1],
		rows[2] + rhs[2],
		rows[3] + rhs[3]
	);
}

double4x4 double4x4::operator+=( const double4x4& rhs ) {
	return ( *this = *this + rhs );
}

double4x4 double4x4::operator-( const double rhs ) const {
	return double4x4(
		rows[0] - rhs,
		rows[1] - rhs,
		rows[2] - rhs,
		rows[3] - rhs
	);
}

double4x4 double4x4::operator-=( const double rhs ) {
	return ( *this = *this - rhs );
}

double4x4 double4x4::operator-( const double4x4& rhs ) const {
	return double4x4(
		rows[0] - rhs[0],
		rows[1] - rhs[1],
		rows[2] - rhs[2],
		rows[3] - rhs[3]
	);
}

double4x4 double4x4::operator-=( const double4x4& rhs ) {
	return ( *this = *this - rhs );
}

double4x4 double4x4::operator*( const double rhs ) const {
	return double4x4(
		rows[0] * rhs,
		rows[1] * rhs,
		rows[2] * rhs,
		rows[3] * rhs
	);
}

double4x4 double4x4::operator*=( const double rhs ) {
	return ( *this = *this * rhs );
}

double4x4 double4x4::operator*( const double4x4& rhs ) const {
	double4 row0 = rows[0];
	double4 row1 = rows[1];
	double4 row2 = rows[2];
	double4 row3 = rows[3];

	double4 col0 = { rhs[0].x, rhs[1].x, rhs[2].x, rhs[3].x };
	double4 col1 = { rhs[0].y, rhs[1].y, rhs[2].y, rhs[3].y };
	double4 col2 = { rhs[0].z, rhs[1].z, rhs[2].z, rhs[3].z };
	double4 col3 = { rhs[0].w, rhs[1].w, rhs[2].w, rhs[3].w };

	return double4x4(
		row0.x * col0.x + row0.y * col0.y + row0.z * col0.z + row0.w * col0.w,
		row0.x * col1.x + row0.y * col1.y + row0.z * col1.z + row0.w * col1.w,
		row0.x * col2.x + row0.y * col2.y + row0.z * col2.z + row0.w * col2.w,
		row0.x * col3.x + row0.y * col3.y + row0.z * col3.z + row0.w * col3.w,

		row1.x * col0.x + row1.y * col0.y + row1.z * col0.z + row1.w * col0.w,
		row1.x * col1.x + row1.y * col1.y + row1.z * col1.z + row1.w * col1.w,
		row1.x * col2.x + row1.y * col2.y + row1.z * col2.z + row1.w * col2.w,
		row1.x * col3.x + row1.y * col3.y + row1.z * col3.z + row1.w * col3.w,

		row2.x * col0.x + row2.y * col0.y + row2.z * col0.z + row2.w * col0.w,
		row2.x * col1.x + row2.y * col1.y + row2.z * col1.z + row2.w * col1.w,
		row2.x * col2.x + row2.y * col2.y + row2.z * col2.z + row2.w * col2.w,
		row2.x * col3.x + row2.y * col3.y + row2.z * col3.z + row2.w * col3.w,

		row3.x * col0.x + row3.y * col0.y + row3.z * col0.z + row3.w * col0.w,
		row3.x * col1.x + row3.y * col1.y + row3.z * col1.z + row3.w * col1.w,
		row3.x * col2.x + row3.y * col2.y + row3.z * col2.z + row3.w * col2.w,
		row3.x * col3.x + row3.y * col3.y + row3.z * col3.z + row3.w * col3.w
	);
}

double4x4 double4x4::operator*=( const double4x4& rhs ) {
	return ( *this = *this * rhs );
}

double4x4 double4x4::operator/( const double rhs ) const {
	return double4x4(
		rows[0] / rhs,
		rows[1] / rhs,
		rows[2] / rhs,
		rows[3] / rhs
	);
}

double4x4 double4x4::operator/=( const double rhs ) {
	return ( *this = *this / rhs );
}

double4x4 double4x4::operator/( const double4x4& rhs ) const {
	return *this * inverse( rhs );
}

double4x4 double4x4::operator/=( const double4x4& rhs ) {
	return ( *this = *this / rhs );
}

double4& double4x4::operator[]( const uint32_t index ) {
	assert( index < 4 );
	return rows[index];
}

const double4& double4x4::operator[]( const uint32_t index ) const {
	assert( index < 4 );
	return rows[index];
}

bool operator==( const double4x4& lhs, const double4x4& rhs ) {
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1]
		&& lhs[2] == rhs[2]
		&& lhs[3] == rhs[3];
}

bool operator!=( const double4x4& lhs, const double4x4& rhs ) {
	return !( operator==( lhs, rhs ) );
}

bool4x4 operator<( const double4x4& lhs, const double4x4& rhs ) {
	return bool4x4(
		lhs[0] < rhs[0],
		lhs[1] < rhs[1],
		lhs[2] < rhs[2],
		lhs[3] < rhs[3]
	);
}

bool4x4 operator<=( const double4x4& lhs, const double4x4& rhs ) {
	return bool4x4(
		lhs[0] <= rhs[0],
		lhs[1] <= rhs[1],
		lhs[2] <= rhs[2],
		lhs[3] <= rhs[3]
	);
}

bool4x4 operator>( const double4x4& lhs, const double4x4& rhs ) {
	return bool4x4(
		lhs[0] > rhs[0],
		lhs[1] > rhs[1],
		lhs[2] > rhs[2],
		lhs[3] > rhs[3]
	);
}

bool4x4 operator>=( const double4x4& lhs, const double4x4& rhs ) {
	return bool4x4(
		lhs[0] >= rhs[0],
		lhs[1] >= rhs[1],
		lhs[2] >= rhs[2],
		lhs[3] >= rhs[3]
	);
}

