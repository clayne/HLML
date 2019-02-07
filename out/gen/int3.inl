/*
===========================================================================

hlml.
Copyright (c) Dan Moody 2018 - Present.

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
#include "int2.h"
#include "int4.h"

#include "../hlml_main.h"

// others
#include <math.h>

int3::int3() {
	memset( data, 0, 3 * sizeof( int32_t ) );
}

int3::int3( const int32_t x ) {
	this->x = this->y = this->z = x;
}

int3::int3( const int32_t x, const int32_t y, const int32_t z ) {
	this->x = x;
	this->y = y;
	this->z = z;
}

int3::int3( const int2& other ) {
	memcpy( data, other.data, sizeof( other.data ) );
}

int3::int3( const int3& other ) {
	memcpy( data, other.data, sizeof( other.data ) );
}

int3::int3( const int4& other ) {
	memcpy( data, other.data, sizeof( other.data ) );
}

int3 int3::operator=( const int2& rhs ) {
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

int3 int3::operator=( const int3& rhs ) {
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

int3 int3::operator=( const int4& rhs ) {
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

int3 int3::operator+( const int32_t rhs ) const {
	return int3(
		x + rhs,
		y + rhs,
		z + rhs
	);
}

int3 int3::operator+=( const int32_t rhs ) {
	return ( *this = *this + rhs );
}

int3 int3::operator+( const int3& rhs ) const {
	return int3(
		x + rhs.x,
		y + rhs.y,
		z + rhs.z
	);
}

int3 int3::operator+=( const int3& rhs ) {
	return ( *this = *this + rhs );
}

int3 int3::operator-( const int32_t rhs ) const {
	return int3(
		x - rhs,
		y - rhs,
		z - rhs
	);
}

int3 int3::operator-=( const int32_t rhs ) {
	return ( *this = *this - rhs );
}

int3 int3::operator-( const int3& rhs ) const {
	return int3(
		x - rhs.x,
		y - rhs.y,
		z - rhs.z
	);
}

int3 int3::operator-=( const int3& rhs ) {
	return ( *this = *this - rhs );
}

int3 int3::operator*( const int32_t rhs ) const {
	return int3(
		x * rhs,
		y * rhs,
		z * rhs
	);
}

int3 int3::operator*=( const int32_t rhs ) {
	return ( *this = *this * rhs );
}

int3 int3::operator*( const int3& rhs ) const {
	return int3(
		x * rhs.x,
		y * rhs.y,
		z * rhs.z
	);
}

int3 int3::operator*=( const int3& rhs ) {
	return ( *this = *this * rhs );
}

int3 int3::operator/( const int32_t rhs ) const {
	return int3(
		x / rhs,
		y / rhs,
		z / rhs
	);
}

int3 int3::operator/=( const int32_t rhs ) {
	return ( *this = *this / rhs );
}

int3 int3::operator/( const int3& rhs ) const {
	return int3(
		x / rhs.x,
		y / rhs.y,
		z / rhs.z
	);
}

int3 int3::operator/=( const int3& rhs ) {
	return ( *this = *this / rhs );
}

const int32_t& int3::operator[]( const uint32_t index ) const {
	assert( index < 3 );
	return data[index];
}

int32_t& int3::operator[]( const uint32_t index ) {
	assert( index < 3 );
	return data[index];
}

bool operator==( const int3& lhs, const int3& rhs ) {
	return floateq( lhs.x, rhs. x ) && floateq( lhs.y, rhs. y ) && floateq( lhs.z, rhs. z );
}

bool operator!=( const int3& lhs, const int3& rhs ) {
	return !( operator==( lhs, rhs ) );
}

bool3 operator<( const int3& lhs, const int3& rhs ) {
	return bool3(
		lhs.x < rhs.x,
		lhs.y < rhs.y,
		lhs.z < rhs.z
	);
}

bool3 operator<=( const int3& lhs, const int3& rhs ) {
	return bool3(
		lhs.x <= rhs.x,
		lhs.y <= rhs.y,
		lhs.z <= rhs.z
	);
}

bool3 operator>( const int3& lhs, const int3& rhs ) {
	return bool3(
		lhs.x > rhs.x,
		lhs.y > rhs.y,
		lhs.z > rhs.z
	);
}

bool3 operator>=( const int3& lhs, const int3& rhs ) {
	return bool3(
		lhs.x >= rhs.x,
		lhs.y >= rhs.y,
		lhs.z >= rhs.z
	);
}

