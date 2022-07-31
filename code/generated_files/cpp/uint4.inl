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

#include "uint4.h"

#include "hlml_defines.h"

uint4::uint4( const uint32_t scalar )
	: x( scalar )
	, y( scalar )
	, z( scalar )
	, w( scalar )
{
}

uint4::uint4( const uint32_t x, const uint32_t y, const uint32_t z, const uint32_t w )
	: x( x )
	, y( y )
	, z( z )
	, w( w )
{
}

uint4::uint4( const uint2& vec )
	: x( vec.x )
	, y( vec.y )
{
}

uint4::uint4( const uint3& vec )
	: x( vec.x )
	, y( vec.y )
	, z( vec.z )
{
}

uint4::uint4( const uint4& vec )
	: x( vec.x )
	, y( vec.y )
	, z( vec.z )
	, w( vec.w )
{
}

uint4::uint4( const bool4& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
	, z( (uint32_t) vec.z )
	, w( (uint32_t) vec.w )
{
}

uint4::uint4( const int4& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
	, z( (uint32_t) vec.z )
	, w( (uint32_t) vec.w )
{
}

uint4::uint4( const float4& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
	, z( (uint32_t) vec.z )
	, w( (uint32_t) vec.w )
{
}

uint4::uint4( const double4& vec )
	: x( (uint32_t) vec.x )
	, y( (uint32_t) vec.y )
	, z( (uint32_t) vec.z )
	, w( (uint32_t) vec.w )
{
}

uint4 uint4::operator=( const uint2& other )
{
	this->x = other.x;
	this->y = other.y;

	return *this;
}

uint4 uint4::operator=( const uint3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;

	return *this;
}

uint4 uint4::operator=( const uint4& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	this->w = other.w;

	return *this;
}

uint32_t& uint4::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return v[index];
}

const uint32_t& uint4::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return v[index];
}
