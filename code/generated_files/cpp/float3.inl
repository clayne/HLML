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

#include "float3.h"

#include "hlml_defines.h"

float3::float3( const float scalar )
{
	this->x = scalar;
	this->y = scalar;
	this->z = scalar;
}

float3::float3( const float x, const float y, const float z )
{
	this->x = x;
	this->y = y;
	this->z = z;
}

float3::float3( const float2& other )
{
	this->x = other.x;
	this->y = other.y;
}

float3::float3( const float3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

float3 float3::operator=( const float2& other )
{
	this->x = other.x;
	this->y = other.y;

	return *this;
}

float3 float3::operator=( const float3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;

	return *this;
}

float& float3::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 3 );
	return v[index];
}

const float& float3::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 3 );
	return v[index];
}

#include "float3_swizzle_types.inl"
