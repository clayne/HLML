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

#include "bool2.h"

#include <stdint.h>
#include "../hlml_types.h"

struct int3;
struct int4;

// ignore prohibition of anymous structs for GCC
#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#elif defined( _MSC_VER )
#pragma warning( push )
#pragma warning( disable : 4201 ) // C4201 - nonstandard extension used : nameless struct/union
#endif

/// \brief A vector of 2 int32_ts with components xy.
/// Components are also stored as elements in an array via a union.
struct int2
{
	union
	{
		struct
		{
			int32_t x;
			int32_t y;
		};

		struct
		{
			int32_t r;
			int32_t g;
		};

		int32_t data[2] = { 0 };
	};

	/// Default constructor.  Initializes all values to zero.
	inline int2();

	/// Initializes all components of the vector to the given scalar value.
	inline explicit int2( const int32_t x );

	/// Sets the xy members of the vector to the corresponding parameters.
	inline int2( const int32_t x, const int32_t y );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int2( const int2& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int2( const int3& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int2( const int4& other );

	~int2() {}

	/// Copies the elements of the given vector via a single memcpy.
	inline int2 operator=( const int2& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline int2 operator=( const int3& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline int2 operator=( const int4& rhs );

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 1.
	inline const int32_t& operator[]( const uint32_t index ) const;

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 1.
	inline int32_t& operator[]( const uint32_t index );

	// swizzle funcs
	inline int2 xx() const;
	inline int2 yx() const;
	inline int2 xy() const;
	inline int2 yy() const;
};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif

/// \relates int2
/// \brief Returns true if the all the components of the left-hand-side int2 match the other one, otherwise returns false.
inline bool operator==( const int2& lhs, const int2& rhs );

/// \relates int2
/// \brief Returns true if not all of the components of the left-hand-side int2 match the other one, otherwise returns false.
inline bool operator!=( const int2& lhs, const int2& rhs );

