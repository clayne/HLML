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

#include "uint3.h"

struct uint4x3 {
	uint3 rows[4];

	inline uint4x3();
	inline uint4x3( const uint32_t diagonal );
	inline uint4x3( const uint3& diagonal );
	inline uint4x3( const uint3& row0, const uint3& row1, const uint3& row2, const uint3& row3 );
	inline uint4x3( const uint3 rows[4] );
	inline uint4x3( const uint32_t m00, const uint32_t m01, const uint32_t m02, const uint32_t m10, const uint32_t m11, const uint32_t m12, const uint32_t m20, const uint32_t m21, const uint32_t m22, const uint32_t m30, const uint32_t m31, const uint32_t m32 );
	inline uint4x3( const uint4x3& other );
	inline ~uint4x3() {}

	inline uint4x3 operator=( const uint4x3& other );

	inline uint4x3 operator+( const uint32_t rhs ) const;
	inline uint4x3 operator+=( const uint32_t rhs );
	inline uint4x3 operator+( const uint4x3& rhs ) const;
	inline uint4x3 operator+=( const uint4x3& rhs );
	inline uint4x3 operator-( const uint32_t rhs ) const;
	inline uint4x3 operator-=( const uint32_t rhs );
	inline uint4x3 operator-( const uint4x3& rhs ) const;
	inline uint4x3 operator-=( const uint4x3& rhs );
	inline uint4x3 operator*( const uint32_t rhs ) const;
	inline uint4x3 operator*=( const uint32_t rhs );
	inline uint4x3 operator*( const uint4x3& rhs ) const;
	inline uint4x3 operator*=( const uint4x3& rhs );
	inline uint4x3 operator/( const uint32_t rhs ) const;
	inline uint4x3 operator/=( const uint32_t rhs );
	inline uint4x3 operator/( const uint4x3& rhs ) const;
	inline uint4x3 operator/=( const uint4x3& rhs );

	inline uint3& operator[]( const uint32_t index );
	inline const uint3& operator[]( const uint32_t index ) const;
};

inline bool operator==( const uint4x3& lhs, const uint4x3& rhs );
inline bool operator!=( const uint4x3& lhs, const uint4x3& rhs );

#include "uint4x3.inl"