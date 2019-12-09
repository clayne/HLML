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

// hlml includes
#include "uint2x3.h"

// others
#include <math.h>
#include <memory.h>
#include <assert.h>

// forward declares
uint2x3 inverse( const uint2x3& mat );

uint2x3::uint2x3( const uint32_t diagonal )
{
	rows[0] = { diagonal, 0, 0 };
	rows[1] = { 0, diagonal, 0 };
}

uint2x3::uint2x3( const uint3& diagonal )
{
	rows[0] = { diagonal.x, 0, 0 };
	rows[1] = { 0, diagonal.y, 0 };
}

uint2x3::uint2x3( const uint3& row0, const uint3& row1 )
{
	rows[0] = row0;
	rows[1] = row1;
}

uint2x3::uint2x3( const uint3 rows[2] )
{
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
}

uint2x3::uint2x3( const uint32_t m00, const uint32_t m01, const uint32_t m02, const uint32_t m10, const uint32_t m11, const uint32_t m12 )
{
	rows[0] = { m00, m01, m02 };
	rows[1] = { m10, m11, m12 };
}

uint2x3::uint2x3( const uint2x3& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
}

uint2x3 uint2x3::operator=( const uint2x3& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
}

uint3& uint2x3::operator[]( const uint32_t index )
{
	assert( index < 2 );
	return rows[index];
}

const uint3& uint2x3::operator[]( const uint32_t index ) const
{
	assert( index < 2 );
	return rows[index];
}

