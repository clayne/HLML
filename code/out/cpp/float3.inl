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
#include "float2.h"
#include "float3.h"
#include "float4.h"

#include "hlml_functions_scalar.h"

// others
#include <math.h>
#include <memory.h>
#include <assert.h>

float3::float3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
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

float2 float3::xx() const { return float2( x, x ); }
float2 float3::yx() const { return float2( y, x ); }
float2 float3::xy() const { return float2( x, y ); }
float2 float3::yy() const { return float2( y, y ); }

float3 float3::xxx() const { return float3( x, x, x ); }
float3 float3::yxx() const { return float3( y, x, x ); }
float3 float3::zxx() const { return float3( z, x, x ); }
float3 float3::xyx() const { return float3( x, y, x ); }
float3 float3::yyx() const { return float3( y, y, x ); }
float3 float3::zyx() const { return float3( z, y, x ); }
float3 float3::xzx() const { return float3( x, z, x ); }
float3 float3::yzx() const { return float3( y, z, x ); }
float3 float3::zzx() const { return float3( z, z, x ); }
float3 float3::xxy() const { return float3( x, x, y ); }
float3 float3::yxy() const { return float3( y, x, y ); }
float3 float3::zxy() const { return float3( z, x, y ); }
float3 float3::xyy() const { return float3( x, y, y ); }
float3 float3::yyy() const { return float3( y, y, y ); }
float3 float3::zyy() const { return float3( z, y, y ); }
float3 float3::xzy() const { return float3( x, z, y ); }
float3 float3::yzy() const { return float3( y, z, y ); }
float3 float3::zzy() const { return float3( z, z, y ); }
float3 float3::xxz() const { return float3( x, x, z ); }
float3 float3::yxz() const { return float3( y, x, z ); }
float3 float3::zxz() const { return float3( z, x, z ); }
float3 float3::xyz() const { return float3( x, y, z ); }
float3 float3::yyz() const { return float3( y, y, z ); }
float3 float3::zyz() const { return float3( z, y, z ); }
float3 float3::xzz() const { return float3( x, z, z ); }
float3 float3::yzz() const { return float3( y, z, z ); }
float3 float3::zzz() const { return float3( z, z, z ); }

