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

#pragma once

#include "uint2.h"

struct uint3x2 {
	uint2 rows[3];

	inline uint3x2();
	inline uint3x2( const uint32_t diagonal );
	inline uint3x2( const uint2& diagonal );
	inline uint3x2( const uint2& row0, const uint2& row1, const uint2& row2 );
	inline uint3x2( const uint2 rows[3] );
	inline uint3x2( const uint32_t m00, const uint32_t m01, const uint32_t m10, const uint32_t m11, const uint32_t m20, const uint32_t m21 );
	inline uint3x2( const uint3x2& other );
	inline ~uint3x2() {}

	inline uint3x2 operator=( const uint3x2& other );

	inline uint3x2 operator+( const uint32_t rhs ) const;
	inline uint3x2 operator+=( const uint32_t rhs );
	inline uint3x2 operator+( const uint3x2& rhs ) const;
	inline uint3x2 operator+=( const uint3x2& rhs );
	inline uint3x2 operator-( const uint32_t rhs ) const;
	inline uint3x2 operator-=( const uint32_t rhs );
	inline uint3x2 operator-( const uint3x2& rhs ) const;
	inline uint3x2 operator-=( const uint3x2& rhs );
	inline uint3x2 operator*( const uint32_t rhs ) const;
	inline uint3x2 operator*=( const uint32_t rhs );
	inline uint3x2 operator*( const uint3x2& rhs ) const;
	inline uint3x2 operator*=( const uint3x2& rhs );
	inline uint3x2 operator/( const uint32_t rhs ) const;
	inline uint3x2 operator/=( const uint32_t rhs );
	inline uint3x2 operator/( const uint3x2& rhs ) const;
	inline uint3x2 operator/=( const uint3x2& rhs );

	inline uint2& operator[]( const uint32_t index );
	inline const uint2& operator[]( const uint32_t index ) const;
};

inline bool operator==( const uint3x2& lhs, const uint3x2& rhs );
inline bool operator!=( const uint3x2& lhs, const uint3x2& rhs );

#include "uint3x2.inl"