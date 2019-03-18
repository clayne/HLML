/*
===========================================================================

hlml.
Copyright (c) Dan Moody 2019 - Present.

This file is part of hlml.

hlml is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

hlml is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with hlml.  If not, see <http://www.gnu.org/licenses/>.

===========================================================================
*/

// GENERATED FILE.  DO NOT EDIT.

#pragma once

#include "bool2.h"
#include "bool3x3.h"
#include "bool2x3.h"

/// A matrix of 3 bool2s.
struct bool3x2
{
	bool2 rows[3];

	/// Default constructor.  Sets the matrix to an identity matrix.
	inline bool3x2();

	/// \brief Sets each of the diagonal values of the matrix to the given scalar value.
	/// Setting the scalar to 1 will give an identity matrix.
	inline bool3x2( const bool diagonal );

	/// \brief Sets the diagonal values of the matrix to the corresponding components of the given vector.
	/// Setting each component of the vector to 1 will give an identity matrix.
	inline bool3x2( const bool2& diagonal );

	/// Sets each row of the matrix to the given vectors.
	inline bool3x2( const bool2& row0, const bool2& row1, const bool2& row2 );

	/// Sets each row of the matrix to the corresponding vector in the array.
	inline bool3x2( const bool2 rows[3] );

	/// Sets each component of the vector to the corresponding scalar value (row major).
	inline bool3x2( const bool m00, const bool m01, const bool m10, const bool m11, const bool m20, const bool m21 );

	/// Copy constructor.  Sets each row of the matrix to the rows in the other matrix.
	inline bool3x2( const bool3x2& other );

	inline ~bool3x2() {}

	/// Copies each row of the given matrix via a single memcpy.
	inline bool3x2 operator=( const bool3x2& other );

	/// \brief Returns the row at the given index of the matrix.
	/// Index CANNOT be lower than 0 or higher than 2.
	inline bool2& operator[]( const uint32_t index );

	/// \brief Returns the row at the given index of the matrix.
	/// Index CANNOT be lower than 0 or higher than 2.
	inline const bool2& operator[]( const uint32_t index ) const;
};

/// \relates bool3x2
/// \brief Returns true if the all the components of the left-hand-side bool3x2 match the other one, otherwise returns false.
inline bool operator==( const bool3x2& lhs, const bool3x2& rhs );

/// \relates bool3x2
/// \brief Returns true if not all of the components of the left-hand-side bool3x2 match the other one, otherwise returns false.
inline bool operator!=( const bool3x2& lhs, const bool3x2& rhs );

#include "bool3x2.inl"