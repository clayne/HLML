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

#include "float3.h"

struct float3x3 {
	float3 rows[3];

	inline float3x3();
	inline float3x3( const float diagonal );
	inline float3x3( const float3& diagonal );
	inline float3x3( const float3& row0, const float3& row1, const float3& row2 );
	inline float3x3( const float3 rows[3] );
	inline float3x3( const float m00, const float m01, const float m02, const float m10, const float m11, const float m12, const float m20, const float m21, const float m22 );
	inline float3x3( const float3x3& other );
	inline ~float3x3() {}

	inline float3x3 operator=( const float3x3& other );

	inline float3x3 operator+( const float rhs ) const;
	inline float3x3 operator+=( const float rhs );
	inline float3x3 operator+( const float3x3& rhs ) const;
	inline float3x3 operator+=( const float3x3& rhs );
	inline float3x3 operator-( const float rhs ) const;
	inline float3x3 operator-=( const float rhs );
	inline float3x3 operator-( const float3x3& rhs ) const;
	inline float3x3 operator-=( const float3x3& rhs );
	inline float3x3 operator*( const float rhs ) const;
	inline float3x3 operator*=( const float rhs );
	inline float3x3 operator*( const float3x3& rhs ) const;
	inline float3x3 operator*=( const float3x3& rhs );
	inline float3x3 operator/( const float rhs ) const;
	inline float3x3 operator/=( const float rhs );
	inline float3x3 operator/( const float3x3& rhs ) const;
	inline float3x3 operator/=( const float3x3& rhs );

	inline float3& operator[]( const uint32_t index );
	inline const float3& operator[]( const uint32_t index ) const;
};

inline bool operator==( const float3x3& lhs, const float3x3& rhs );
inline bool operator!=( const float3x3& lhs, const float3x3& rhs );

#include "float3x3.inl"