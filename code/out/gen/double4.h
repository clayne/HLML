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

#include "bool4.h"

#include <stdint.h>

struct double2;
struct double3;
struct float3;

/// \brief A vector of 4 doubles with components xyzw and/or rgba.
/// Components are also stored as elements in an array via a union.
struct double4 {
	union {
		struct {
			double x;
			double y;
			double z;
			double w;
		};

		struct {
			double r;
			double g;
			double b;
			double a;
		};

		double data[4] = { 0 };
	};

	/// Default constructor.  Initializes all values to zero.
	inline double4();

	/// Initializes all components of the vector to the given scalar value.
	inline explicit double4( const double x );

	/// Sets the xyzw members of the vector to the corresponding parameters.
	inline double4( const double x, const double y, const double z, const double w );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline double4( const double2& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline double4( const double3& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline double4( const double4& other );

	~double4() {}

	/// Copies the elements of the given vector via a single memcpy.
	inline double4 operator=( const double2& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline double4 operator=( const double3& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline double4 operator=( const double4& rhs );

/// \relates double4
/// \brief Returns a copy that has been component-wise added by the given scalar value.
	inline double4 operator+( const double rhs ) const;

	/// \relates double4
	/// \brief Adds each component by the given scalar value.
	inline double4 operator+=( const double rhs );

	/// Returns a copy of the vector that has been component-wise added by the other vector.
	inline double4 operator+( const double4& rhs ) const;

	/// Component-wise adds each component of the vector by the other vector.
	inline double4 operator+=( const double4& rhs );

/// \relates double4
/// \brief Returns a copy that has been component-wise subtracted by the given scalar value.
	inline double4 operator-( const double rhs ) const;

	/// \relates double4
	/// \brief Subtracts each component by the given scalar value.
	inline double4 operator-=( const double rhs );

	/// Returns a copy of the vector that has been component-wise subtracted by the other vector.
	inline double4 operator-( const double4& rhs ) const;

	/// Component-wise subtracts each component of the vector by the other vector.
	inline double4 operator-=( const double4& rhs );

/// \relates double4
/// \brief Returns a copy that has been component-wise multiplied by the given scalar value.
	inline double4 operator*( const double rhs ) const;

	/// \relates double4
	/// \brief Multiplies each component by the given scalar value.
	inline double4 operator*=( const double rhs );

	/// Returns a copy of the vector that has been component-wise multiplied by the other vector.
	inline double4 operator*( const double4& rhs ) const;

	/// Component-wise multiplies each component of the vector by the other vector.
	inline double4 operator*=( const double4& rhs );

/// \relates double4
/// \brief Returns a copy that has been component-wise divided by the given scalar value.
	inline double4 operator/( const double rhs ) const;

	/// \relates double4
	/// \brief Divides each component by the given scalar value.
	inline double4 operator/=( const double rhs );

	/// Returns a copy of the vector that has been component-wise divided by the other vector.
	inline double4 operator/( const double4& rhs ) const;

	/// Component-wise divides each component of the vector by the other vector.
	inline double4 operator/=( const double4& rhs );

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline const double& operator[]( const uint32_t index ) const;

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline double& operator[]( const uint32_t index );
};

/// \relates double4
/// \brief Returns true if the all the components of the left-hand-side double4 match the other one, otherwise returns false.
inline bool operator==( const double4& lhs, const double4& rhs );

/// \relates double4
/// \brief Returns true if not all of the components of the left-hand-side double4 match the other one, otherwise returns false.
inline bool operator!=( const double4& lhs, const double4& rhs );

/// \relates double4
/// \brief Returns a bool4 where each component is true if the component of the left-hand type is less than the corresponding right-hand type component.
inline bool4 operator<( const double4& lhs, const double4& rhs );

/// \relates double4
/// \brief Returns a bool4 where each component is true if the component of the left-hand type is less than or equal to the corresponding right-hand type component.
inline bool4 operator<=( const double4& lhs, const double4& rhs );

/// \relates double4
/// \brief Returns a bool4 where each component is true if the component of the left-hand type is greater than the corresponding right-hand type component.
inline bool4 operator>( const double4& lhs, const double4& rhs );

/// \relates double4
/// \brief Returns a bool4 where each component is true if the component of the left-hand type is greater than or equal to the corresponding right-hand type component.
inline bool4 operator>=( const double4& lhs, const double4& rhs );


#include "double4.inl"