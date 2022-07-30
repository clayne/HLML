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

struct bool3x4;
struct int3x4;
struct uint3x4;
struct double3x4;

#include "float4.h"

struct float3x4
{
	float4 rows[3];

	// Default constructor.
	HLML_INLINE float3x4() {}

	// Sets each diagonal component of the matrix to the given scalar.
	HLML_INLINE explicit float3x4( const float diagonal );

	// Sets each diagonal component of the matrix to the corresponding vector component.
	HLML_INLINE float3x4( const float4& diagonal );

	// Sets each row of the matrix to the corresponding vector.
	HLML_INLINE float3x4( const float4& row0, const float4& row1, const float4& row2 );

	// Sets each component of the matrix to the corresponding scalar value.
	HLML_INLINE float3x4( const float m00, const float m01, const float m02, const float m03,
					const float m10, const float m11, const float m12, const float m13,
					const float m20, const float m21, const float m22, const float m23 );

	// Copy constructor.
	HLML_INLINE float3x4( const float3x4& mat );

	// Conversion constructor.  Casts all components of 'mat' from type bool32_t to type float.
	HLML_INLINE explicit float3x4( const bool3x4& mat );

	// Conversion constructor.  Casts all components of 'mat' from type int32_t to type float.
	HLML_INLINE explicit float3x4( const int3x4& mat );

	// Conversion constructor.  Casts all components of 'mat' from type uint32_t to type float.
	HLML_INLINE explicit float3x4( const uint3x4& mat );

	// Conversion constructor.  Casts all components of 'mat' from type double to type float.
	HLML_INLINE explicit float3x4( const double3x4& mat );

	HLML_INLINE ~float3x4() {}

	// Sets each row of the matrix to be the same as the parameter.
	HLML_INLINE float3x4 operator=( const float3x4& mat );

	// Returns the row vector at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 3.
	HLML_INLINE float4& operator[]( const int32_t index );

	// Returns the row vector at the given index of the matrix.
	// Index CANNOT be lower than 0 or higher than 3.
	HLML_INLINE const float4& operator[]( const int32_t index ) const;
};
