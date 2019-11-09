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
#include "bool2.h"
#include "bool3.h"
#include "bool4.h"

// others
#include <math.h>
#include <memory.h>
#include <assert.h>

bool2::bool2()
{
	x = false;
	y = false;
}

bool2::bool2( const bool32_t x )
{
	this->x = this->y = x;
}

bool2::bool2( const bool32_t x, const bool32_t y )
{
	this->x = x;
	this->y = y;
}

bool2::bool2( const bool2& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

bool2::bool2( const bool3& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

bool2::bool2( const bool4& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

bool2 bool2::operator=( const bool2& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

bool2 bool2::operator=( const bool3& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

bool2 bool2::operator=( const bool4& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

const bool32_t& bool2::operator[]( const uint32_t index ) const
{
	assert( index < 2 );
	return data[index];
}

bool32_t& bool2::operator[]( const uint32_t index )
{
	assert( index < 2 );
	return data[index];
}

bool2 bool2::xx() const { return bool2( x, x ); }
bool2 bool2::yx() const { return bool2( y, x ); }
bool2 bool2::xy() const { return bool2( x, y ); }
bool2 bool2::yy() const { return bool2( y, y ); }

