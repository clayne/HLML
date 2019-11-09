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
#include "double2x2.h"
#include "double4x2.h"

/// A matrix of 2 double4s.
struct double2x4
{
	double4 rows[2];

	/// Default constructor.  Sets the matrix to an identity matrix.
	inline double2x4();

	/// \brief Sets each of the diagonal values of the matrix to the given scalar value.
	/// Setting the scalar to 1 will give an identity matrix.
	inline double2x4( const double diagonal );

	/// \brief Sets the diagonal values of the matrix to the corresponding components of the given vector.
	/// Setting each component of the vector to 1 will give an identity matrix.
	inline double2x4( const double4& diagonal );

	/// Sets each row of the matrix to the given vectors.
	inline double2x4( const double4& row0, const double4& row1 );

	/// Sets each row of the matrix to the corresponding vector in the array.
	inline double2x4( const double4 rows[2] );

	/// Sets each component of the vector to the corresponding scalar value (row major).
	inline double2x4( const double m00, const double m01, const double m02, const double m03, const double m10, const double m11, const double m12, const double m13 );

	/// Copy constructor.  Sets each row of the matrix to the rows in the other matrix.
	inline double2x4( const double2x4& other );

	inline ~double2x4() {}

	/// Copies each row of the given matrix via a single memcpy.
	inline double2x4 operator=( const double2x4& other );

	/// \brief Returns the row at the given index of the matrix.
	/// Index CANNOT be lower than 0 or higher than 1.
	inline double4& operator[]( const uint32_t index );

	/// \brief Returns the row at the given index of the matrix.
	/// Index CANNOT be lower than 0 or higher than 1.
	inline const double4& operator[]( const uint32_t index ) const;
};

