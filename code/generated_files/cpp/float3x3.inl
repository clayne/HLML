/*
===========================================================================

HLML.

MIT License

Copyright (c) 2019 Dan Moody

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

===========================================================================
*/

// THIS FILE WAS AUTOMATICALLY GENERATED BY A TOOL.
// EDITING THIS FILE MAY CAUSE SIDE EFFECTS.
// DO SO AT YOUR OWN RISK.

#pragma once

#include "float3x3.h"
#include "float3.inl"

float3x3::float3x3( const float diagonal )
{
	rows[0][0] = diagonal;
	rows[1][1] = diagonal;
	rows[2][2] = diagonal;
}

float3x3::float3x3( const float3& diagonal )
{
	rows[0][0] = diagonal[0];
	rows[1][1] = diagonal[1];
	rows[2][2] = diagonal[2];
}

// Sets each row of the matrix to the corresponding vector.
float3x3::float3x3( const float3& row0, const float3& row1, const float3& row2 )
{
	rows[0] = row0;
	rows[1] = row1;
	rows[2] = row2;
}

// Sets each component of the matrix to the corresponding scalar value.
float3x3::float3x3( const float m00, const float m01, const float m02,
					const float m10, const float m11, const float m12,
					const float m20, const float m21, const float m22 )
{
	rows[0] = float3( m00, m01, m02 );
	rows[1] = float3( m10, m11, m12 );
	rows[2] = float3( m20, m21, m22 );
}

float3x3::float3x3( const float3x3& mat )
{
	rows[0] = mat[0];
	rows[1] = mat[1];
	rows[2] = mat[2];
}

float3x3::float3x3( const bool2x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const bool2x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const bool2x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const bool3x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const bool3x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const bool3x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const bool4x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const bool4x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const bool4x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const int2x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const int2x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const int2x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const int3x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const int3x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const int3x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const int4x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const int4x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const int4x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const uint2x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const uint2x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const uint2x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const uint3x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const uint3x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const uint3x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const uint4x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const uint4x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const uint4x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const float2x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const float2x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const float2x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const float3x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const float3x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const float4x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const float4x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const float4x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const double2x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const double2x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const double2x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
}

float3x3::float3x3( const double3x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const double3x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const double3x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const double4x2& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const double4x3& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3::float3x3( const double4x4& mat )
{
	rows[0] = float3( mat[0] );
	rows[1] = float3( mat[1] );
	rows[2] = float3( mat[2] );
}

float3x3 float3x3::operator=( const float3x3& other )
{
	rows[0] = other[0];
	rows[1] = other[1];
	rows[2] = other[2];

	return *this;
}

float3& float3x3::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 3 );
	return rows[index];
}

const float3& float3x3::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 3 );
	return rows[index];
}
