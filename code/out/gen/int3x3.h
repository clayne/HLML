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

/// A matrix of 3 int3s.
struct int3x3
{
	int3 rows[3];

	/// Default constructor.  Sets the matrix to an identity matrix.
	inline int3x3();

	/// \brief Sets each of the diagonal values of the matrix to the given scalar value.
	/// Setting the scalar to 1 will give an identity matrix.
	inline int3x3( const int32_t diagonal );

	/// \brief Sets the diagonal values of the matrix to the corresponding components of the given vector.
	/// Setting each component of the vector to 1 will give an identity matrix.
	inline int3x3( const int3& diagonal );

	/// Sets each row of the matrix to the given vectors.
	inline int3x3( const int3& row0, const int3& row1, const int3& row2 );

	/// Sets each row of the matrix to the corresponding vector in the array.
	inline int3x3( const int3 rows[3] );

	/// Sets each component of the vector to the corresponding scalar value (row major).
	inline int3x3( const int32_t m00, const int32_t m01, const int32_t m02, const int32_t m10, const int32_t m11, const int32_t m12, const int32_t m20, const int32_t m21, const int32_t m22 );

	/// Copy constructor.  Sets each row of the matrix to the rows in the other matrix.
	inline int3x3( const int3x3& other );

	inline ~int3x3() {}

	/// Copies each row of the given matrix via a single memcpy.
	inline int3x3 operator=( const int3x3& other );

	/// \brief Returns the row at the given index of the matrix.
	/// Index CANNOT be lower than 0 or higher than 2.
	inline int3& operator[]( const uint32_t index );

	/// \brief Returns the row at the given index of the matrix.
	/// Index CANNOT be lower than 0 or higher than 2.
	inline const int3& operator[]( const uint32_t index ) const;
};

/// \relates int3x3
/// \brief Returns true if the all the components of the left-hand-side int3x3 match the other one, otherwise returns false.
inline bool operator==( const int3x3& lhs, const int3x3& rhs );

/// \relates int3x3
/// \brief Returns true if not all of the components of the left-hand-side int3x3 match the other one, otherwise returns false.
inline bool operator!=( const int3x3& lhs, const int3x3& rhs );

