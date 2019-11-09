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
#include "double2x4.h"

// others
#include <math.h>
#include <memory.h>
#include <assert.h>

// forward declares
double2x4 inverse( const double2x4& mat );

double2x4::double2x4()
{
	rows[0] = { 1, 0, 0, 0 };
	rows[1] = { 0, 1, 0, 0 };
}

double2x4::double2x4( const double diagonal )
{
	rows[0] = { diagonal, 0, 0, 0 };
	rows[1] = { 0, diagonal, 0, 0 };
}

double2x4::double2x4( const double4& diagonal )
{
	rows[0] = { diagonal.x, 0, 0, 0 };
	rows[1] = { 0, diagonal.y, 0, 0 };
}

double2x4::double2x4( const double4& row0, const double4& row1 )
{
	rows[0] = row0;
	rows[1] = row1;
}

double2x4::double2x4( const double4 rows[2] )
{
	this->rows[0] = rows[0];
	this->rows[1] = rows[1];
}

double2x4::double2x4( const double m00, const double m01, const double m02, const double m03, const double m10, const double m11, const double m12, const double m13 )
{
	rows[0] = { m00, m01, m02, m03 };
	rows[1] = { m10, m11, m12, m13 };
}

double2x4::double2x4( const double2x4& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
}

double2x4 double2x4::operator=( const double2x4& other )
{
	memcpy( rows, other.rows, sizeof( rows ) );
	return *this;
}

double4& double2x4::operator[]( const uint32_t index )
{
	assert( index < 2 );
	return rows[index];
}

const double4& double2x4::operator[]( const uint32_t index ) const
{
	assert( index < 2 );
	return rows[index];
}

