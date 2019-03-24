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

#include "bool2x2.h"
#include "bool2x3.h"
#include "bool2x4.h"
#include "bool3x2.h"
#include "bool3x3.h"
#include "bool3x4.h"
#include "bool4x2.h"
#include "bool4x3.h"
#include "bool4x4.h"

#include "int2x2.h"
#include "int2x3.h"
#include "int2x4.h"
#include "int3x2.h"
#include "int3x3.h"
#include "int3x4.h"
#include "int4x2.h"
#include "int4x3.h"
#include "int4x4.h"

#include "uint2x2.h"
#include "uint2x3.h"
#include "uint2x4.h"
#include "uint3x2.h"
#include "uint3x3.h"
#include "uint3x4.h"
#include "uint4x2.h"
#include "uint4x3.h"
#include "uint4x4.h"

#include "float2x2.h"
#include "float2x3.h"
#include "float2x4.h"
#include "float3x2.h"
#include "float3x3.h"
#include "float3x4.h"
#include "float4x2.h"
#include "float4x3.h"
#include "float4x4.h"

#include "double2x2.h"
#include "double2x3.h"
#include "double2x4.h"
#include "double3x2.h"
#include "double3x3.h"
#include "double3x4.h"
#include "double4x2.h"
#include "double4x3.h"
#include "double4x4.h"


// bool2x2
/// \relates bool2x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool2x2& mat );

/// \relates bool2x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool2x2 transpose( const bool2x2& mat );


// bool2x3
/// \relates bool2x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool2x3& mat );

/// \relates bool2x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool3x2 transpose( const bool2x3& mat );


// bool2x4
/// \relates bool2x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool2x4& mat );

/// \relates bool2x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool4x2 transpose( const bool2x4& mat );


// bool3x2
/// \relates bool3x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool3x2& mat );

/// \relates bool3x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool2x3 transpose( const bool3x2& mat );


// bool3x3
/// \relates bool3x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool3x3& mat );

/// \relates bool3x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool3x3 transpose( const bool3x3& mat );


// bool3x4
/// \relates bool3x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool3x4& mat );

/// \relates bool3x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool4x3 transpose( const bool3x4& mat );


// bool4x2
/// \relates bool4x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool4x2& mat );

/// \relates bool4x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool2x4 transpose( const bool4x2& mat );


// bool4x3
/// \relates bool4x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool4x3& mat );

/// \relates bool4x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool3x4 transpose( const bool4x3& mat );


// bool4x4
/// \relates bool4x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( bool4x4& mat );

/// \relates bool4x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline bool4x4 transpose( const bool4x4& mat );


// int2x2
/// \relates int2x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( int2x2& mat );

/// \relates int2x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int2x2 transpose( const int2x2& mat );

/// \relates int2x2
/// \brief Returns the determinant of the matrix.
inline int32_t determinant( const int2x2& mat );

/// \relates int2x2
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline int2x2 scale( const int2x2& mat, const int32_t scalar );

/// \relates int2x2
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline int2x2 scale( const int2x2& mat, const int3& vec );


// int2x3
/// \relates int2x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( int2x3& mat );

/// \relates int2x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int3x2 transpose( const int2x3& mat );

/// \relates int2x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline int2x3 scale( const int2x3& mat, const int32_t scalar );

/// \relates int2x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline int2x3 scale( const int2x3& mat, const int3& vec );


// int2x4
/// \relates int2x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( int2x4& mat );

/// \relates int2x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int4x2 transpose( const int2x4& mat );

/// \relates int2x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline int2x4 scale( const int2x4& mat, const int32_t scalar );

/// \relates int2x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline int2x4 scale( const int2x4& mat, const int3& vec );


// int3x2
/// \relates int3x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( int3x2& mat );

/// \relates int3x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int2x3 transpose( const int3x2& mat );


// int3x3
/// \relates int3x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( int3x3& mat );

/// \relates int3x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int3x3 transpose( const int3x3& mat );

/// \relates int3x3
/// \brief Returns the determinant of the matrix.
inline int32_t determinant( const int3x3& mat );

/// \relates int3x3
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline int3x3 translate( const int3x3& mat, const int2& vec );

/// \relates int3x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline int3x3 scale( const int3x3& mat, const int32_t scalar );

/// \relates int3x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline int3x3 scale( const int3x3& mat, const int3& vec );


// int3x4
/// \relates int3x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( int3x4& mat );

/// \relates int3x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int4x3 transpose( const int3x4& mat );

/// \relates int3x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline int3x4 translate( const int3x4& mat, const int3& vec );

/// \relates int3x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline int3x4 scale( const int3x4& mat, const int32_t scalar );

/// \relates int3x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline int3x4 scale( const int3x4& mat, const int3& vec );


// int4x2
/// \relates int4x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( int4x2& mat );

/// \relates int4x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int2x4 transpose( const int4x2& mat );


// int4x3
/// \relates int4x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( int4x3& mat );

/// \relates int4x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int3x4 transpose( const int4x3& mat );

/// \relates int4x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline int4x3 scale( const int4x3& mat, const int32_t scalar );

/// \relates int4x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline int4x3 scale( const int4x3& mat, const int3& vec );


// int4x4
/// \relates int4x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( int4x4& mat );

/// \relates int4x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline int4x4 transpose( const int4x4& mat );

/// \relates int4x4
/// \brief Returns the determinant of the matrix.
inline int32_t determinant( const int4x4& mat );

/// \relates int4x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline int4x4 translate( const int4x4& mat, const int3& vec );

/// \relates int4x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline int4x4 scale( const int4x4& mat, const int32_t scalar );

/// \relates int4x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline int4x4 scale( const int4x4& mat, const int3& vec );


// uint2x2
/// \relates uint2x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint2x2& mat );

/// \relates uint2x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint2x2 transpose( const uint2x2& mat );

/// \relates uint2x2
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline uint2x2 scale( const uint2x2& mat, const uint32_t scalar );

/// \relates uint2x2
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline uint2x2 scale( const uint2x2& mat, const uint3& vec );


// uint2x3
/// \relates uint2x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint2x3& mat );

/// \relates uint2x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint3x2 transpose( const uint2x3& mat );

/// \relates uint2x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline uint2x3 scale( const uint2x3& mat, const uint32_t scalar );

/// \relates uint2x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline uint2x3 scale( const uint2x3& mat, const uint3& vec );


// uint2x4
/// \relates uint2x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint2x4& mat );

/// \relates uint2x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint4x2 transpose( const uint2x4& mat );

/// \relates uint2x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline uint2x4 scale( const uint2x4& mat, const uint32_t scalar );

/// \relates uint2x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline uint2x4 scale( const uint2x4& mat, const uint3& vec );


// uint3x2
/// \relates uint3x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint3x2& mat );

/// \relates uint3x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint2x3 transpose( const uint3x2& mat );


// uint3x3
/// \relates uint3x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint3x3& mat );

/// \relates uint3x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint3x3 transpose( const uint3x3& mat );

/// \relates uint3x3
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline uint3x3 translate( const uint3x3& mat, const uint2& vec );

/// \relates uint3x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline uint3x3 scale( const uint3x3& mat, const uint32_t scalar );

/// \relates uint3x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline uint3x3 scale( const uint3x3& mat, const uint3& vec );


// uint3x4
/// \relates uint3x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint3x4& mat );

/// \relates uint3x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint4x3 transpose( const uint3x4& mat );

/// \relates uint3x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline uint3x4 translate( const uint3x4& mat, const uint3& vec );

/// \relates uint3x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline uint3x4 scale( const uint3x4& mat, const uint32_t scalar );

/// \relates uint3x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline uint3x4 scale( const uint3x4& mat, const uint3& vec );


// uint4x2
/// \relates uint4x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint4x2& mat );

/// \relates uint4x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint2x4 transpose( const uint4x2& mat );


// uint4x3
/// \relates uint4x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint4x3& mat );

/// \relates uint4x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint3x4 transpose( const uint4x3& mat );

/// \relates uint4x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline uint4x3 scale( const uint4x3& mat, const uint32_t scalar );

/// \relates uint4x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline uint4x3 scale( const uint4x3& mat, const uint3& vec );


// uint4x4
/// \relates uint4x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( uint4x4& mat );

/// \relates uint4x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline uint4x4 transpose( const uint4x4& mat );

/// \relates uint4x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline uint4x4 translate( const uint4x4& mat, const uint3& vec );

/// \relates uint4x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline uint4x4 scale( const uint4x4& mat, const uint32_t scalar );

/// \relates uint4x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline uint4x4 scale( const uint4x4& mat, const uint3& vec );


// float2x2
/// \relates float2x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( float2x2& mat );

/// \relates float2x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float2x2 transpose( const float2x2& mat );

/// \relates float2x2
/// \brief Returns a copy of the matrix that is inversed.
/// Currently this is only applicable for square matrices.  Pseudo-inverse support for non-square matrices is coming soon.
inline float2x2 inverse( const float2x2& mat );

/// \relates float2x2
/// \brief Returns the determinant of the matrix.
inline float determinant( const float2x2& mat );

/// \relates float2x2
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline float2x2 scale( const float2x2& mat, const float scalar );

/// \relates float2x2
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline float2x2 scale( const float2x2& mat, const float3& vec );


// float2x3
/// \relates float2x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( float2x3& mat );

/// \relates float2x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float3x2 transpose( const float2x3& mat );

/// \relates float2x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline float2x3 scale( const float2x3& mat, const float scalar );

/// \relates float2x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline float2x3 scale( const float2x3& mat, const float3& vec );


// float2x4
/// \relates float2x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( float2x4& mat );

/// \relates float2x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float4x2 transpose( const float2x4& mat );

/// \relates float2x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline float2x4 scale( const float2x4& mat, const float scalar );

/// \relates float2x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline float2x4 scale( const float2x4& mat, const float3& vec );


// float3x2
/// \relates float3x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( float3x2& mat );

/// \relates float3x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float2x3 transpose( const float3x2& mat );


// float3x3
/// \relates float3x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( float3x3& mat );

/// \relates float3x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float3x3 transpose( const float3x3& mat );

/// \relates float3x3
/// \brief Returns a copy of the matrix that is inversed.
/// Currently this is only applicable for square matrices.  Pseudo-inverse support for non-square matrices is coming soon.
inline float3x3 inverse( const float3x3& mat );

/// \relates float3x3
/// \brief Returns the determinant of the matrix.
inline float determinant( const float3x3& mat );

/// \relates float3x3
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline float3x3 translate( const float3x3& mat, const float2& vec );

/// \relates float3x3
/// \brief Returns a copy of the matrix that has had a rotation applied to it in radians on one or more of the following axes.
inline float3x3 rotate( const float3x3& mat, const float rad );

/// \relates float3x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline float3x3 scale( const float3x3& mat, const float scalar );

/// \relates float3x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline float3x3 scale( const float3x3& mat, const float3& vec );


// float3x4
/// \relates float3x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( float3x4& mat );

/// \relates float3x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float4x3 transpose( const float3x4& mat );

/// \relates float3x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline float3x4 translate( const float3x4& mat, const float3& vec );

/// \relates float3x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline float3x4 scale( const float3x4& mat, const float scalar );

/// \relates float3x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline float3x4 scale( const float3x4& mat, const float3& vec );


// float4x2
/// \relates float4x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( float4x2& mat );

/// \relates float4x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float2x4 transpose( const float4x2& mat );


// float4x3
/// \relates float4x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( float4x3& mat );

/// \relates float4x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float3x4 transpose( const float4x3& mat );

/// \relates float4x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline float4x3 scale( const float4x3& mat, const float scalar );

/// \relates float4x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline float4x3 scale( const float4x3& mat, const float3& vec );


// float4x4
/// \relates float4x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( float4x4& mat );

/// \relates float4x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline float4x4 transpose( const float4x4& mat );

/// \relates float4x4
/// \brief Returns a copy of the matrix that is inversed.
/// Currently this is only applicable for square matrices.  Pseudo-inverse support for non-square matrices is coming soon.
inline float4x4 inverse( const float4x4& mat );

/// \relates float4x4
/// \brief Returns the determinant of the matrix.
inline float determinant( const float4x4& mat );

/// \relates float4x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline float4x4 translate( const float4x4& mat, const float3& vec );

/// \relates float4x4
/// \brief Returns a copy of the matrix that has had a rotation applied to it in radians on one or more of the following axes.
inline float4x4 rotate( const float4x4& mat, const float rad, const float3& axis );

/// \relates float4x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline float4x4 scale( const float4x4& mat, const float scalar );

/// \relates float4x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline float4x4 scale( const float4x4& mat, const float3& vec );

/// \relates float4x4
/// \brief Returns an orthographic projection matrix.
inline float4x4 ortho( const float left, const float right, const float top, const float bottom, const float znear, const float zfar );

/// \relates float4x4
/// \brief Returns a perspective projection matrix based on a vertical field-of-view in degrees and an aspect ratio.
inline float4x4 perspective( const float fovdeg, const float aspect, const float znear, const float zfar );

/// \relates float4x4
/// \brief Returns a orthonormal matrix that is oriented at position eye to look at position target.
inline float4x4 lookat( const float3& eye, const float3& target, const float3& up );


// double2x2
/// \relates double2x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( double2x2& mat );

/// \relates double2x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double2x2 transpose( const double2x2& mat );

/// \relates double2x2
/// \brief Returns a copy of the matrix that is inversed.
/// Currently this is only applicable for square matrices.  Pseudo-inverse support for non-square matrices is coming soon.
inline double2x2 inverse( const double2x2& mat );

/// \relates double2x2
/// \brief Returns the determinant of the matrix.
inline double determinant( const double2x2& mat );

/// \relates double2x2
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline double2x2 scale( const double2x2& mat, const double scalar );

/// \relates double2x2
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline double2x2 scale( const double2x2& mat, const double3& vec );


// double2x3
/// \relates double2x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( double2x3& mat );

/// \relates double2x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double3x2 transpose( const double2x3& mat );

/// \relates double2x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline double2x3 scale( const double2x3& mat, const double scalar );

/// \relates double2x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline double2x3 scale( const double2x3& mat, const double3& vec );


// double2x4
/// \relates double2x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( double2x4& mat );

/// \relates double2x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double4x2 transpose( const double2x4& mat );

/// \relates double2x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline double2x4 scale( const double2x4& mat, const double scalar );

/// \relates double2x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline double2x4 scale( const double2x4& mat, const double3& vec );


// double3x2
/// \relates double3x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( double3x2& mat );

/// \relates double3x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double2x3 transpose( const double3x2& mat );


// double3x3
/// \relates double3x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( double3x3& mat );

/// \relates double3x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double3x3 transpose( const double3x3& mat );

/// \relates double3x3
/// \brief Returns a copy of the matrix that is inversed.
/// Currently this is only applicable for square matrices.  Pseudo-inverse support for non-square matrices is coming soon.
inline double3x3 inverse( const double3x3& mat );

/// \relates double3x3
/// \brief Returns the determinant of the matrix.
inline double determinant( const double3x3& mat );

/// \relates double3x3
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline double3x3 translate( const double3x3& mat, const double2& vec );

/// \relates double3x3
/// \brief Returns a copy of the matrix that has had a rotation applied to it in radians on one or more of the following axes.
inline double3x3 rotate( const double3x3& mat, const double rad );

/// \relates double3x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline double3x3 scale( const double3x3& mat, const double scalar );

/// \relates double3x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline double3x3 scale( const double3x3& mat, const double3& vec );


// double3x4
/// \relates double3x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( double3x4& mat );

/// \relates double3x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double4x3 transpose( const double3x4& mat );

/// \relates double3x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline double3x4 translate( const double3x4& mat, const double3& vec );

/// \relates double3x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline double3x4 scale( const double3x4& mat, const double scalar );

/// \relates double3x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline double3x4 scale( const double3x4& mat, const double3& vec );


// double4x2
/// \relates double4x2
/// \brief Sets the matrix to an identity matrix.
inline void identity( double4x2& mat );

/// \relates double4x2
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double2x4 transpose( const double4x2& mat );


// double4x3
/// \relates double4x3
/// \brief Sets the matrix to an identity matrix.
inline void identity( double4x3& mat );

/// \relates double4x3
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double3x4 transpose( const double4x3& mat );

/// \relates double4x3
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline double4x3 scale( const double4x3& mat, const double scalar );

/// \relates double4x3
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline double4x3 scale( const double4x3& mat, const double3& vec );


// double4x4
/// \relates double4x4
/// \brief Sets the matrix to an identity matrix.
inline void identity( double4x4& mat );

/// \relates double4x4
/// \brief Returns a copy of the matrix that is transposed, where the value of each row is set to the value of each column and vice versa.
inline double4x4 transpose( const double4x4& mat );

/// \relates double4x4
/// \brief Returns a copy of the matrix that is inversed.
/// Currently this is only applicable for square matrices.  Pseudo-inverse support for non-square matrices is coming soon.
inline double4x4 inverse( const double4x4& mat );

/// \relates double4x4
/// \brief Returns the determinant of the matrix.
inline double determinant( const double4x4& mat );

/// \relates double4x4
/// \brief Returns a copy of the matrix where each component of the 3rd column has been added by the given vector.
inline double4x4 translate( const double4x4& mat, const double3& vec );

/// \relates double4x4
/// \brief Returns a copy of the matrix that has had a rotation applied to it in radians on one or more of the following axes.
inline double4x4 rotate( const double4x4& mat, const double rad, const double3& axis );

/// \relates double4x4
/// \brief Returns a copy of the matrix that has had a uniform scale applied to it.
inline double4x4 scale( const double4x4& mat, const double scalar );

/// \relates double4x4
/// \brief Returns a copy of the matrix that has had a non-uniform scale applied to it.
inline double4x4 scale( const double4x4& mat, const double3& vec );

/// \relates double4x4
/// \brief Returns an orthographic projection matrix.
inline double4x4 ortho( const double left, const double right, const double top, const double bottom, const double znear, const double zfar );

/// \relates double4x4
/// \brief Returns a perspective projection matrix based on a vertical field-of-view in degrees and an aspect ratio.
inline double4x4 perspective( const double fovdeg, const double aspect, const double znear, const double zfar );

/// \relates double4x4
/// \brief Returns a orthonormal matrix that is oriented at position eye to look at position target.
inline double4x4 lookat( const double3& eye, const double3& target, const double3& up );


#include "hlml_functions_matrix.inl"
