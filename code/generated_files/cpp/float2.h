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

struct float3;
struct float4;

struct bool2;
struct int2;
struct uint2;
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

struct float2
{
	union
	{
		struct
		{
			float x;
			float y;
		};

		struct
		{
			float r;
			float g;
		};

		float v[2];
	};

	// Default constructor.
	HLML_INLINE float2() {}

	// Initialises all components of the vector to the given scalar.
	HLML_INLINE explicit float2( const float scalar );

	// Initialises all components of the vector to the corresponding scalars.
	HLML_INLINE float2( const float x, const float y );

	// Copy constructor.  Copies all elements of 'other' into the vector.
	HLML_INLINE float2( const float2& other );

	// Conversion constructor.  Casts all components of 'vec' from type bool32_t to type float.
	HLML_INLINE explicit float2( const bool2& vec );

	// Conversion constructor.  Casts all components of 'vec' from type int32_t to type float.
	HLML_INLINE explicit float2( const int2& vec );

	// Conversion constructor.  Casts all components of 'vec' from type uint32_t to type float.
	HLML_INLINE explicit float2( const uint2& vec );

	// Conversion constructor.  Casts all components of 'vec' from type double to type float.
	HLML_INLINE explicit float2( const double2& vec );

	~float2() {}

	// Copies all elements of 'other' into the vector.
	HLML_INLINE float2 operator=( const float2& other );

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or greater than 1.
	HLML_INLINE float& operator[]( const int32_t index );

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or greater than 1.
	HLML_INLINE const float& operator[]( const int32_t index ) const;

	// swizzle functions
	HLML_INLINE float2 xx() const;
	HLML_INLINE float2 xy() const;
	HLML_INLINE float2 yx() const;
	HLML_INLINE float2 yy() const;
	HLML_INLINE float3 xxx() const;
	HLML_INLINE float3 xxy() const;
	HLML_INLINE float3 xyx() const;
	HLML_INLINE float3 xyy() const;
	HLML_INLINE float3 yxx() const;
	HLML_INLINE float3 yxy() const;
	HLML_INLINE float3 yyx() const;
	HLML_INLINE float3 yyy() const;
	HLML_INLINE float4 xxxx() const;
	HLML_INLINE float4 xxxy() const;
	HLML_INLINE float4 xxyx() const;
	HLML_INLINE float4 xxyy() const;
	HLML_INLINE float4 xyxx() const;
	HLML_INLINE float4 xyxy() const;
	HLML_INLINE float4 xyyx() const;
	HLML_INLINE float4 xyyy() const;
	HLML_INLINE float4 yxxx() const;
	HLML_INLINE float4 yxxy() const;
	HLML_INLINE float4 yxyx() const;
	HLML_INLINE float4 yxyy() const;
	HLML_INLINE float4 yyxx() const;
	HLML_INLINE float4 yyxy() const;
	HLML_INLINE float4 yyyx() const;
	HLML_INLINE float4 yyyy() const;

	HLML_INLINE float2 rr() const;
	HLML_INLINE float2 rg() const;
	HLML_INLINE float2 gr() const;
	HLML_INLINE float2 gg() const;
	HLML_INLINE float3 rrr() const;
	HLML_INLINE float3 rrg() const;
	HLML_INLINE float3 rgr() const;
	HLML_INLINE float3 rgg() const;
	HLML_INLINE float3 grr() const;
	HLML_INLINE float3 grg() const;
	HLML_INLINE float3 ggr() const;
	HLML_INLINE float3 ggg() const;
	HLML_INLINE float4 rrrr() const;
	HLML_INLINE float4 rrrg() const;
	HLML_INLINE float4 rrgr() const;
	HLML_INLINE float4 rrgg() const;
	HLML_INLINE float4 rgrr() const;
	HLML_INLINE float4 rgrg() const;
	HLML_INLINE float4 rggr() const;
	HLML_INLINE float4 rggg() const;
	HLML_INLINE float4 grrr() const;
	HLML_INLINE float4 grrg() const;
	HLML_INLINE float4 grgr() const;
	HLML_INLINE float4 grgg() const;
	HLML_INLINE float4 ggrr() const;
	HLML_INLINE float4 ggrg() const;
	HLML_INLINE float4 gggr() const;
	HLML_INLINE float4 gggg() const;

};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif
