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
#include "float2x2.h"
#include "float3x2.h"

// A matrix of 2 float3s.
struct float2x3
{
	float3 rows[2];

	// Default constructor.  Sets the matrix to an identity matrix.
	inline float2x3() {}

	// Sets each of the diagonal values of the matrix to the given scalar value.
	// Setting the scalar to 1 will give an identity matrix.
	inline float2x3( const float diagonal );

	// Sets the diagonal values of the matrix to the corresponding components of the given vector.
	// Setting each component of the vector to 1 will give an identity matrix.
	inline float2x3( const float3& diagonal );

	// Sets each row of the matrix to the given vectors.
	inline float2x3( const float3& row0, const float3& row1 );

	// Sets each row of the matrix to the corresponding vector in the array.
	inline float2x3( const float3 rows[2] );

	// Sets each component of the vector to the corresponding scalar value (row major).
	inline float2x3( const float m00, const float m01, const float m02, const float m10, const float m11, const float m12 );

	// Copy constructor.  Sets each row of the matrix to the rows in the other matrix.
	inline float2x3( const float2x3& other );

	inline ~float2x3() {}

	// Copies each row of the given matrix via a single memcpy.
	inline float2x3 operator=( const float2x3& other );

	// Returns the row at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 1.
	inline float3& operator[]( const uint32_t index );

	// Returns the row at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 1.
	inline const float3& operator[]( const uint32_t index ) const;
};
