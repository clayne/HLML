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

#include <stdint.h>
#include "../hlml_types.h"

struct bool3;
struct bool4;

// ignore prohibition of anymous structs for GCC
#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#elif defined( _MSC_VER )
#pragma warning( push )
#pragma warning( disable : 4201 ) // C4201 - nonstandard extension used : nameless struct/union
#endif

/// \brief A vector of 2 bool32_ts with components xy.
/// Components are also stored as elements in an array via a union.
struct bool2
{
	union
	{
		struct
		{
			bool32_t x;
			bool32_t y;
		};

		bool32_t data[2] = { 0 };
	};

	/// Default constructor.  Initializes all values to zero.
	inline bool2();

	/// Initializes all components of the vector to the given scalar value.
	inline explicit bool2( const bool32_t x );

	/// Sets the xy members of the vector to the corresponding parameters.
	inline bool2( const bool32_t x, const bool32_t y );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline bool2( const bool2& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline bool2( const bool3& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline bool2( const bool4& other );

	~bool2() {}

	/// Copies the elements of the given vector via a single memcpy.
	inline bool2 operator=( const bool2& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline bool2 operator=( const bool3& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline bool2 operator=( const bool4& rhs );

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 1.
	inline const bool32_t& operator[]( const uint32_t index ) const;

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 1.
	inline bool32_t& operator[]( const uint32_t index );

	// swizzle funcs
	inline bool2 xx() const { return bool2( x, x ); }
	inline bool2 yx() const { return bool2( y, x ); }
	inline bool2 xy() const { return bool2( x, y ); }
	inline bool2 yy() const { return bool2( y, y ); }

};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif

/// \relates bool2
/// \brief Returns true if the all the components of the left-hand-side bool2 match the other one, otherwise returns false.
inline bool operator==( const bool2& lhs, const bool2& rhs );

/// \relates bool2
/// \brief Returns true if not all of the components of the left-hand-side bool2 match the other one, otherwise returns false.
inline bool operator!=( const bool2& lhs, const bool2& rhs );

#include "bool2.inl"
