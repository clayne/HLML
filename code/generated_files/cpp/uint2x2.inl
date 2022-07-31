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

#include "uint2x2.h"
#include "uint2.inl"

uint2x2::uint2x2( const uint32_t diagonal )
{
	rows[0][0] = diagonal;
	rows[1][1] = diagonal;
}

uint2x2::uint2x2( const uint2& diagonal )
{
	rows[0][0] = diagonal[0];
	rows[1][1] = diagonal[1];
}

// Sets each row of the matrix to the corresponding vector.
uint2x2::uint2x2( const uint2& row0, const uint2& row1 )
{
	rows[0] = row0;
	rows[1] = row1;
}

// Sets each component of the matrix to the corresponding scalar value.
uint2x2::uint2x2( const uint32_t m00, const uint32_t m01,
					const uint32_t m10, const uint32_t m11 )
{
	rows[0] = uint2( m00, m01 );
	rows[1] = uint2( m10, m11 );
}

uint2x2::uint2x2( const uint2x2& mat )
{
	rows[0] = mat[0];
	rows[1] = mat[1];
}

uint2x2::uint2x2( const bool2x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool2x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool2x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool3x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool3x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool3x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool4x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool4x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const bool4x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int2x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int2x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int2x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int3x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int3x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int3x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int4x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int4x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const int4x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint2x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint2x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint3x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint3x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint3x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint4x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint4x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const uint4x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float2x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float2x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float2x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float3x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float3x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float3x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float4x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float4x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const float4x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double2x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double2x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double2x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double3x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double3x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double3x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double4x2& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double4x3& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2::uint2x2( const double4x4& mat )
{
	rows[0] = uint2( mat[0] );
	rows[1] = uint2( mat[1] );
}

uint2x2 uint2x2::operator=( const uint2x2& other )
{
	rows[0] = other[0];
	rows[1] = other[1];

	return *this;
}

uint2& uint2x2::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 2 );
	return rows[index];
}

const uint2& uint2x2::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 2 );
	return rows[index];
}
