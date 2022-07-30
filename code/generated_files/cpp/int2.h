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

struct int3;
struct int4;

struct bool2;
struct uint2;
struct float2;
struct double2;

#include "hlml_types.h"
#include "hlml_defines.h"

// ignore prohibition of anymous structs for GCC
#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#elif defined( _MSC_VER )
#pragma warning( push )
#pragma warning( disable : 4201 ) // C4201 - nonstandard extension used : nameless struct/union
#endif

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

		int32_t v[2];
	};

	// Default constructor.
	HLML_INLINE int2() {}

	// Initialises all components of the vector to the given scalar.
	HLML_INLINE explicit int2( const int32_t scalar );

	// Initialises all components of the vector to the corresponding scalars.
	HLML_INLINE int2( const int32_t x, const int32_t y );

	// Copy constructor.  Copies all elements of 'other' into the vector.
	HLML_INLINE int2( const int2& other );

	// Conversion constructor.  Casts all components of 'vec' from type bool32_t to type int32_t.
	HLML_INLINE explicit int2( const bool2& vec );

	// Conversion constructor.  Casts all components of 'vec' from type uint32_t to type int32_t.
	HLML_INLINE explicit int2( const uint2& vec );

	// Conversion constructor.  Casts all components of 'vec' from type float to type int32_t.
	HLML_INLINE explicit int2( const float2& vec );

	// Conversion constructor.  Casts all components of 'vec' from type double to type int32_t.
	HLML_INLINE explicit int2( const double2& vec );

	~int2() {}

	// Copies all elements of 'other' into the vector.
	HLML_INLINE int2 operator=( const int2& other );

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or greater than 1.
	HLML_INLINE int32_t& operator[]( const int32_t index );

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or greater than 1.
	HLML_INLINE const int32_t& operator[]( const int32_t index ) const;

	// swizzle functions
	HLML_INLINE int2 xx() const;
	HLML_INLINE int2 xy() const;
	HLML_INLINE int2 yx() const;
	HLML_INLINE int2 yy() const;
	HLML_INLINE int3 xxx() const;
	HLML_INLINE int3 xxy() const;
	HLML_INLINE int3 xyx() const;
	HLML_INLINE int3 xyy() const;
	HLML_INLINE int3 yxx() const;
	HLML_INLINE int3 yxy() const;
	HLML_INLINE int3 yyx() const;
	HLML_INLINE int3 yyy() const;
	HLML_INLINE int4 xxxx() const;
	HLML_INLINE int4 xxxy() const;
	HLML_INLINE int4 xxyx() const;
	HLML_INLINE int4 xxyy() const;
	HLML_INLINE int4 xyxx() const;
	HLML_INLINE int4 xyxy() const;
	HLML_INLINE int4 xyyx() const;
	HLML_INLINE int4 xyyy() const;
	HLML_INLINE int4 yxxx() const;
	HLML_INLINE int4 yxxy() const;
	HLML_INLINE int4 yxyx() const;
	HLML_INLINE int4 yxyy() const;
	HLML_INLINE int4 yyxx() const;
	HLML_INLINE int4 yyxy() const;
	HLML_INLINE int4 yyyx() const;
	HLML_INLINE int4 yyyy() const;

	HLML_INLINE int2 rr() const;
	HLML_INLINE int2 rg() const;
	HLML_INLINE int2 gr() const;
	HLML_INLINE int2 gg() const;
	HLML_INLINE int3 rrr() const;
	HLML_INLINE int3 rrg() const;
	HLML_INLINE int3 rgr() const;
	HLML_INLINE int3 rgg() const;
	HLML_INLINE int3 grr() const;
	HLML_INLINE int3 grg() const;
	HLML_INLINE int3 ggr() const;
	HLML_INLINE int3 ggg() const;
	HLML_INLINE int4 rrrr() const;
	HLML_INLINE int4 rrrg() const;
	HLML_INLINE int4 rrgr() const;
	HLML_INLINE int4 rrgg() const;
	HLML_INLINE int4 rgrr() const;
	HLML_INLINE int4 rgrg() const;
	HLML_INLINE int4 rggr() const;
	HLML_INLINE int4 rggg() const;
	HLML_INLINE int4 grrr() const;
	HLML_INLINE int4 grrg() const;
	HLML_INLINE int4 grgr() const;
	HLML_INLINE int4 grgg() const;
	HLML_INLINE int4 ggrr() const;
	HLML_INLINE int4 ggrg() const;
	HLML_INLINE int4 gggr() const;
	HLML_INLINE int4 gggg() const;

};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif
