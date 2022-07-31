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

#include "float4x4.h"
#include "float4.inl"

float4x4::float4x4( const float diagonal )
{
	rows[0][0] = diagonal;
	rows[1][1] = diagonal;
	rows[2][2] = diagonal;
	rows[3][3] = diagonal;
}

float4x4::float4x4( const float4& diagonal )
{
	rows[0][0] = diagonal[0];
	rows[1][1] = diagonal[1];
	rows[2][2] = diagonal[2];
	rows[3][3] = diagonal[3];
}

// Sets each row of the matrix to the corresponding vector.
float4x4::float4x4( const float4& row0, const float4& row1, const float4& row2, const float4& row3 )
{
	rows[0] = row0;
	rows[1] = row1;
	rows[2] = row2;
	rows[3] = row3;
}

// Sets each component of the matrix to the corresponding scalar value.
float4x4::float4x4( const float m00, const float m01, const float m02, const float m03,
					const float m10, const float m11, const float m12, const float m13,
					const float m20, const float m21, const float m22, const float m23,
					const float m30, const float m31, const float m32, const float m33 )
{
	rows[0] = float4( m00, m01, m02, m03 );
	rows[1] = float4( m10, m11, m12, m13 );
	rows[2] = float4( m20, m21, m22, m23 );
	rows[3] = float4( m30, m31, m32, m33 );
}

float4x4::float4x4( const float4x4& mat )
{
	rows[0] = mat[0];
	rows[1] = mat[1];
	rows[2] = mat[2];
	rows[3] = mat[3];
}

float4x4::float4x4( const bool2x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const bool2x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const bool2x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const bool3x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const bool3x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const bool3x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const bool4x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const bool4x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const bool4x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const int2x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const int2x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const int2x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const int3x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const int3x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const int3x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const int4x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const int4x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const int4x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const uint2x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const uint2x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const uint2x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const uint3x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const uint3x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const uint3x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const uint4x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const uint4x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const uint4x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const float2x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const float2x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const float2x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const float3x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const float3x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const float3x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const float4x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const float4x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const double2x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const double2x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const double2x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
}

float4x4::float4x4( const double3x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const double3x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const double3x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
}

float4x4::float4x4( const double4x2& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const double4x3& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4::float4x4( const double4x4& mat )
{
	rows[0] = float4( mat[0] );
	rows[1] = float4( mat[1] );
	rows[2] = float4( mat[2] );
	rows[3] = float4( mat[3] );
}

float4x4 float4x4::operator=( const float4x4& other )
{
	rows[0] = other[0];
	rows[1] = other[1];
	rows[2] = other[2];
	rows[3] = other[3];

	return *this;
}

float4& float4x4::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return rows[index];
}

const float4& float4x4::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return rows[index];
}
