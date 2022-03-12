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

struct uint4x4
{
	uint4 rows[4];

	// Default constructor.
	HLML_INLINE uint4x4() {}

	// Sets each diagonal component of the matrix to the given scalar.
	HLML_INLINE explicit uint4x4( const uint32_t diagonal );

	// Sets each diagonal component of the matrix to the corresponding vector component.
	uint4x4( const uint4& diagonal );

	// Sets each row of the matrix to the corresponding vector.
	uint4x4( const uint4& row0, const uint4& row1, const uint4& row2, const uint4& row3 );

	// Sets each component of the matrix to the corresponding scalar value.
	HLML_INLINE uint4x4( const uint32_t m00, const uint32_t m01, const uint32_t m02, const uint32_t m03,
					const uint32_t m10, const uint32_t m11, const uint32_t m12, const uint32_t m13,
					const uint32_t m20, const uint32_t m21, const uint32_t m22, const uint32_t m23,
					const uint32_t m30, const uint32_t m31, const uint32_t m32, const uint32_t m33 );

	// Copy constructor.
	HLML_INLINE uint4x4( const uint4x4& other );

	HLML_INLINE ~uint4x4() {}

	// Sets each row of the matrix to be the same as the parameter.
	HLML_INLINE uint4x4 operator=( const uint4x4& other );

	// Returns the row vector at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 4.
	HLML_INLINE uint4& operator[]( const int32_t index );

	// Returns the row vector at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 4.
	HLML_INLINE const uint4& operator[]( const int32_t index ) const;
};