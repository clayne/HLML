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
#include "int2.h"
#include "int3.h"
#include "int4.h"

// others
#include <math.h>
#include <memory.h>
#include <assert.h>

int2::int2()
{
	x = 0;
	y = 0;
}

int2::int2( const int32_t x )
{
	this->x = this->y = x;
}

int2::int2( const int32_t x, const int32_t y )
{
	this->x = x;
	this->y = y;
}

int2::int2( const int2& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

int2::int2( const int3& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

int2::int2( const int4& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

int2 int2::operator=( const int2& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

int2 int2::operator=( const int3& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

int2 int2::operator=( const int4& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

const int32_t& int2::operator[]( const uint32_t index ) const
{
	assert( index < 2 );
	return data[index];
}

int32_t& int2::operator[]( const uint32_t index )
{
	assert( index < 2 );
	return data[index];
}

int2 int2::xx() const { return int2( x, x ); }
int2 int2::yx() const { return int2( y, x ); }
int2 int2::xy() const { return int2( x, y ); }
int2 int2::yy() const { return int2( y, y ); }

bool operator==( const int2& lhs, const int2& rhs )
{
	return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y );
}

inline bool operator!=( const int2& lhs, const int2& rhs )
{
	return !( operator==( lhs, rhs ) );
}

