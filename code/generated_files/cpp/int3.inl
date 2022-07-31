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

#include "int3.h"

#include "hlml_defines.h"

int3::int3( const int32_t scalar )
	: x( scalar )
	, y( scalar )
	, z( scalar )
{
}

int3::int3( const int32_t x, const int32_t y, const int32_t z )
	: x( x )
	, y( y )
	, z( z )
{
}

int3::int3( const int3& vec )
	: x( vec.x )
	, y( vec.y )
	, z( vec.z )
{
}

int3::int3( const bool2& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
{
}

int3::int3( const bool3& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3::int3( const bool4& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3::int3( const int2& vec )
	: x( vec.x )
	, y( vec.y )
{
}

int3::int3( const int4& vec )
	: x( vec.x )
	, y( vec.y )
	, z( vec.z )
{
}

int3::int3( const uint2& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
{
}

int3::int3( const uint3& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3::int3( const uint4& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3::int3( const float2& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
{
}

int3::int3( const float3& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3::int3( const float4& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3::int3( const double2& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
{
}

int3::int3( const double3& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3::int3( const double4& vec )
	: x( (int32_t) vec.x )
	, y( (int32_t) vec.y )
	, z( (int32_t) vec.z )
{
}

int3 int3::operator=( const int2& other )
{
	this->x = other.x;
	this->y = other.y;

	return *this;
}

int3 int3::operator=( const int3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;

	return *this;
}

int32_t& int3::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 3 );
	return v[index];
}

const int32_t& int3::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 3 );
	return v[index];
}
