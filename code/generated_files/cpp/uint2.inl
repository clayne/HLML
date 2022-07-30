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

#include "uint2.h"

#include "hlml_defines.h"

uint2::uint2( const uint32_t scalar )
	: x( scalar )
	, y( scalar )
{
}

uint2::uint2( const uint32_t x, const uint32_t y )
	: x( x )
	, y( y )
{
}

uint2::uint2( const uint2& vec )
	: x( vec.x )
	, y( vec.y )
{
}

uint2::uint2( const bool2& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
{
}

uint2::uint2( const int2& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
{
}

uint2::uint2( const float2& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
{
}

uint2::uint2( const double2& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
{
}

uint2 uint2::operator=( const uint2& other )
{
	this->x = other.x;
	this->y = other.y;

	return *this;
}

uint32_t& uint2::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 2 );
	return v[index];
}

const uint32_t& uint2::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 2 );
	return v[index];
}

// swizzle functions
uint2 uint2::xx() const { return uint2( x, x ); }
uint2 uint2::xy() const { return uint2( x, y ); }
uint2 uint2::yx() const { return uint2( y, x ); }
uint2 uint2::yy() const { return uint2( y, y ); }
uint3 uint2::xxx() const { return uint3( x, x, x ); }
uint3 uint2::xxy() const { return uint3( x, x, y ); }
uint3 uint2::xyx() const { return uint3( x, y, x ); }
uint3 uint2::xyy() const { return uint3( x, y, y ); }
uint3 uint2::yxx() const { return uint3( y, x, x ); }
uint3 uint2::yxy() const { return uint3( y, x, y ); }
uint3 uint2::yyx() const { return uint3( y, y, x ); }
uint3 uint2::yyy() const { return uint3( y, y, y ); }
uint4 uint2::xxxx() const { return uint4( x, x, x, x ); }
uint4 uint2::xxxy() const { return uint4( x, x, x, y ); }
uint4 uint2::xxyx() const { return uint4( x, x, y, x ); }
uint4 uint2::xxyy() const { return uint4( x, x, y, y ); }
uint4 uint2::xyxx() const { return uint4( x, y, x, x ); }
uint4 uint2::xyxy() const { return uint4( x, y, x, y ); }
uint4 uint2::xyyx() const { return uint4( x, y, y, x ); }
uint4 uint2::xyyy() const { return uint4( x, y, y, y ); }
uint4 uint2::yxxx() const { return uint4( y, x, x, x ); }
uint4 uint2::yxxy() const { return uint4( y, x, x, y ); }
uint4 uint2::yxyx() const { return uint4( y, x, y, x ); }
uint4 uint2::yxyy() const { return uint4( y, x, y, y ); }
uint4 uint2::yyxx() const { return uint4( y, y, x, x ); }
uint4 uint2::yyxy() const { return uint4( y, y, x, y ); }
uint4 uint2::yyyx() const { return uint4( y, y, y, x ); }
uint4 uint2::yyyy() const { return uint4( y, y, y, y ); }

uint2 uint2::rr() const { return uint2( r, r ); }
uint2 uint2::rg() const { return uint2( r, g ); }
uint2 uint2::gr() const { return uint2( g, r ); }
uint2 uint2::gg() const { return uint2( g, g ); }
uint3 uint2::rrr() const { return uint3( r, r, r ); }
uint3 uint2::rrg() const { return uint3( r, r, g ); }
uint3 uint2::rgr() const { return uint3( r, g, r ); }
uint3 uint2::rgg() const { return uint3( r, g, g ); }
uint3 uint2::grr() const { return uint3( g, r, r ); }
uint3 uint2::grg() const { return uint3( g, r, g ); }
uint3 uint2::ggr() const { return uint3( g, g, r ); }
uint3 uint2::ggg() const { return uint3( g, g, g ); }
uint4 uint2::rrrr() const { return uint4( r, r, r, r ); }
uint4 uint2::rrrg() const { return uint4( r, r, r, g ); }
uint4 uint2::rrgr() const { return uint4( r, r, g, r ); }
uint4 uint2::rrgg() const { return uint4( r, r, g, g ); }
uint4 uint2::rgrr() const { return uint4( r, g, r, r ); }
uint4 uint2::rgrg() const { return uint4( r, g, r, g ); }
uint4 uint2::rggr() const { return uint4( r, g, g, r ); }
uint4 uint2::rggg() const { return uint4( r, g, g, g ); }
uint4 uint2::grrr() const { return uint4( g, r, r, r ); }
uint4 uint2::grrg() const { return uint4( g, r, r, g ); }
uint4 uint2::grgr() const { return uint4( g, r, g, r ); }
uint4 uint2::grgg() const { return uint4( g, r, g, g ); }
uint4 uint2::ggrr() const { return uint4( g, g, r, r ); }
uint4 uint2::ggrg() const { return uint4( g, g, r, g ); }
uint4 uint2::gggr() const { return uint4( g, g, g, r ); }
uint4 uint2::gggg() const { return uint4( g, g, g, g ); }

