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

#include "double4.h"

#include "hlml_defines.h"

double4::double4( const double scalar )
{
	this->x = scalar;
	this->y = scalar;
	this->z = scalar;
	this->w = scalar;
}

double4::double4( const double x, const double y, const double z, const double w )
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

double4::double4( const double2& other )
{
	this->x = other.x;
	this->y = other.y;
}

double4::double4( const double3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

double4::double4( const double4& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	this->w = other.w;
}

double4 double4::operator=( const double2& other )
{
	this->x = other.x;
	this->y = other.y;

	return *this;
}

double4 double4::operator=( const double3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;

	return *this;
}

double4 double4::operator=( const double4& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	this->w = other.w;

	return *this;
}

double& double4::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return v[index];
}

const double& double4::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return v[index];
}

#include "double4_swizzle_types.inl"
