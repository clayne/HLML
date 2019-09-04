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

// others
#include <math.h>

// forward declares
float2x4 inverse( const float2x4& mat );

float2x4::float2x4()
{
	rows[0] = { 1, 0, 0, 0 };
	rows[1] = { 0, 1, 0, 0 };
}

float2x4::float2x4( const float diagonal )
{
	rows[0] = { diagonal, 0, 0, 0 };
	rows[1] = { 0, diagonal, 0, 0 };
}

float2x4::float2x4( const float4& diagonal )
{
	rows[0] = { diagonal.x, 0, 0, 0 };
	rows[1] = { 0, diagonal.y, 0, 0 };
}

float2x4::float2x4( const float4& row0, const float4& row1 )
{
	rows[0] = row0;
	rows[1] = row1;
}

float2x4::float2x4( const float4 rows[2] )
{
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
}

float2x4::float2x4( const float m00, const float m01, const float m02, const float m03, const float m10, const float m11, const float m12, const float m13 )
{
	rows[0] = { m00, m01, m02, m03 };
	rows[1] = { m10, m11, m12, m13 };
}

float2x4::float2x4( const float2x4& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
}

float2x4 float2x4::operator=( const float2x4& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
}

float4& float2x4::operator[]( const uint32_t index )
{
	assert( index < 2 );
	return rows[index];
}

const float4& float2x4::operator[]( const uint32_t index ) const
{
	assert( index < 2 );
	return rows[index];
}

bool operator==( const float2x4& lhs, const float2x4& rhs )
{
	return lhs[0] == rhs[0]
		&& lhs[1] == rhs[1];
}

bool operator!=( const float2x4& lhs, const float2x4& rhs )
{
	return !( operator==( lhs, rhs ) );
}

