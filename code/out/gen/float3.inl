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

// hlml includes
#include "float2.h"
#include "float4.h"

#include "hlml_functions_scalar.h"

// others
#include <math.h>
#include <memory.h>
#include <assert.h>

float3::float3()
{
	memset( data, 0, 3 * sizeof( float ) );
}

float3::float3( const float x )
{
	this->x = this->y = this->z = x;
}

float3::float3( const float x, const float y, const float z )
{
	this->x = x;
	this->y = y;
	this->z = z;
}

float3::float3( const float2& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

float3::float3( const float3& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

float3::float3( const float4& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

float3 float3::operator=( const float2& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

float3 float3::operator=( const float3& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

float3 float3::operator=( const float4& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

const float& float3::operator[]( const uint32_t index ) const
{
	assert( index < 3 );
	return data[index];
}

float& float3::operator[]( const uint32_t index )
{
	assert( index < 3 );
	return data[index];
}

bool operator==( const float3& lhs, const float3& rhs )
{
	return floateq( lhs.x, rhs.x ) && floateq( lhs.y, rhs.y ) && floateq( lhs.z, rhs.z );
}

bool operator!=( const float3& lhs, const float3& rhs )
{
	return !( operator==( lhs, rhs ) );
}

