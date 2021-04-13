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

#include "int2.h"
#include "int3x3.h"
#include "int2x3.h"

// A matrix of 3 int2s.
struct int3x2
{
	int2 rows[3];

	// Default constructor.  Sets the matrix to an identity matrix.
	inline int3x2() {}

	// Sets each of the diagonal values of the matrix to the given scalar value.
	// Setting the scalar to 1 will give an identity matrix.
	inline int3x2( const int32_t diagonal );

	// Sets the diagonal values of the matrix to the corresponding components of the given vector.
	// Setting each component of the vector to 1 will give an identity matrix.
	inline int3x2( const int2& diagonal );

	// Sets each row of the matrix to the given vectors.
	inline int3x2( const int2& row0, const int2& row1, const int2& row2 );

	// Sets each row of the matrix to the corresponding vector in the array.
	inline int3x2( const int2 rows[3] );

	// Sets each component of the vector to the corresponding scalar value (row major).
	inline int3x2( const int32_t m00, const int32_t m01, const int32_t m10, const int32_t m11, const int32_t m20, const int32_t m21 );

	// Copy constructor.  Sets each row of the matrix to the rows in the other matrix.
	inline int3x2( const int3x2& other );

	inline ~int3x2() {}

	// Copies each row of the given matrix via a single memcpy.
	inline int3x2 operator=( const int3x2& other );

	// Returns the row at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 2.
	inline int2& operator[]( const uint32_t index );

	// Returns the row at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 2.
	inline const int2& operator[]( const uint32_t index ) const;
};

