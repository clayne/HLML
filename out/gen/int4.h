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

#include "bool4.h"

#include <stdint.h>

struct int2;
struct int3;
struct float3;

struct int4 {
	union {
		struct {
			int32_t x;
			int32_t y;
			int32_t z;
			int32_t w;
		};

		struct {
			int32_t r;
			int32_t g;
			int32_t b;
			int32_t a;
		};

		int32_t data[4] = { 0 };
	};

	inline int4();
	inline explicit int4( const int32_t x );
	inline int4( const int32_t x, const int32_t y, const int32_t z, const int32_t w );
	inline int4( const int2& other );
	inline int4( const int3& other );
	inline int4( const int4& other );
	~int4() {}

	inline int4 operator=( const int2& rhs );
	inline int4 operator=( const int3& rhs );
	inline int4 operator=( const int4& rhs );

	inline int4 operator+( const int32_t rhs ) const;
	inline int4 operator+=( const int32_t rhs );
	inline int4 operator+( const int4& rhs ) const;
	inline int4 operator+=( const int4& rhs );
	inline int4 operator-( const int32_t rhs ) const;
	inline int4 operator-=( const int32_t rhs );
	inline int4 operator-( const int4& rhs ) const;
	inline int4 operator-=( const int4& rhs );
	inline int4 operator*( const int32_t rhs ) const;
	inline int4 operator*=( const int32_t rhs );
	inline int4 operator*( const int4& rhs ) const;
	inline int4 operator*=( const int4& rhs );
	inline int4 operator/( const int32_t rhs ) const;
	inline int4 operator/=( const int32_t rhs );
	inline int4 operator/( const int4& rhs ) const;
	inline int4 operator/=( const int4& rhs );

	inline const int32_t& operator[]( const uint32_t index ) const;
	inline int32_t& operator[]( const uint32_t index );
};

inline bool operator==( const int4& lhs, const int4& rhs );
inline bool operator!=( const int4& lhs, const int4& rhs );

inline bool4 operator<( const int4& lhs, const int4& rhs );
inline bool4 operator<=( const int4& lhs, const int4& rhs );
inline bool4 operator>( const int4& lhs, const int4& rhs );
inline bool4 operator>=( const int4& lhs, const int4& rhs );

#include "int4.inl"