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

struct double4x4
{
	double4 rows[4];

	// Default constructor.
	HLML_INLINE double4x4() {}

	// Sets each diagonal component of the matrix to the given scalar.
	HLML_INLINE explicit double4x4( const double diagonal );

	// Sets each diagonal component of the matrix to the corresponding vector component.
	double4x4( const double4& diagonal );

	// Sets each row of the matrix to the corresponding vector.
	double4x4( const double4& row0, const double4& row1, const double4& row2, const double4& row3 );

	// Sets each component of the matrix to the corresponding scalar value.
	HLML_INLINE double4x4( const double m00, const double m01, const double m02, const double m03,
					const double m10, const double m11, const double m12, const double m13,
					const double m20, const double m21, const double m22, const double m23,
					const double m30, const double m31, const double m32, const double m33 );

	// Copy constructor.
	HLML_INLINE double4x4( const double4x4& other );

	HLML_INLINE ~double4x4() {}

	// Sets each row of the matrix to be the same as the parameter.
	HLML_INLINE double4x4 operator=( const double4x4& other );

	// Returns the row vector at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 4.
	HLML_INLINE double4& operator[]( const int32_t index );

	// Returns the row vector at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 4.
	HLML_INLINE const double4& operator[]( const int32_t index ) const;
};
