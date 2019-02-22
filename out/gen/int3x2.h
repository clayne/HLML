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

#pragma once

#include "int2.h"

struct int3x2 {
	int2 rows[3];

	inline int3x2();
	inline int3x2( const int32_t diagonal );
	inline int3x2( const int2& diagonal );
	inline int3x2( const int2& row0, const int2& row1, const int2& row2 );
	inline int3x2( const int2 rows[3] );
	inline int3x2( const int32_t m00, const int32_t m01, const int32_t m10, const int32_t m11, const int32_t m20, const int32_t m21 );
	inline int3x2( const int3x2& other );
	inline ~int3x2() {}

	inline int3x2 operator=( const int3x2& other );
	inline int3x2 operator+( const int32_t rhs ) const;
	inline int3x2 operator+=( const int32_t rhs );
	inline int3x2 operator+( const int3x2& rhs ) const;
	inline int3x2 operator+=( const int3x2& rhs );
	inline int3x2 operator-( const int32_t rhs ) const;
	inline int3x2 operator-=( const int32_t rhs );
	inline int3x2 operator-( const int3x2& rhs ) const;
	inline int3x2 operator-=( const int3x2& rhs );
	inline int3x2 operator*( const int32_t rhs ) const;
	inline int3x2 operator*=( const int32_t rhs );
	inline int3x2 operator*( const int3x2& rhs ) const;
	inline int3x2 operator*=( const int3x2& rhs );
	inline int3x2 operator/( const int32_t rhs ) const;
	inline int3x2 operator/=( const int32_t rhs );
	inline int3x2 operator/( const int3x2& rhs ) const;
	inline int3x2 operator/=( const int3x2& rhs );

	inline int2& operator[]( const uint32_t index );
	inline const int2& operator[]( const uint32_t index ) const;
};

inline bool operator==( const int3x2& lhs, const int3x2& rhs );
inline bool operator!=( const int3x2& lhs, const int3x2& rhs );

#include "int3x2.inl"