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

#include "../hlml_constants.h"

#include <math.h>
#include <stdint.h>

// int32_t
/// \brief Returns -1 if x is < 0, 0 if x == 0, or 1 if x > 1.
/// This function does no branching.
inline int32_t sign( const int32_t x )
{
	return ( 0 < x ) - ( x < 0 );
}

/// \brief Returns x if its smaller than y, otherwise returns y.
inline int32_t min( const int32_t x, const int32_t y )
{
	return ( x < y ) ? x : y;
}

/// \brief Returns x if its bigger than y, otherwise returns y.
inline int32_t max( const int32_t x, const int32_t y )
{
	return ( x > y ) ? x : y;
}

/// \brief If x is lower than low or higher than high then returns low or high respectively, otherwise returns x.
inline int32_t clamp( const int32_t x, const int32_t low, const int32_t high )
{
	return min( max( x, low ), high );
}

inline int32_t step( const int32_t x, const int32_t y )
{
	return ( y > x ? 1 : 0 );
}


// uint32_t
/// \brief Returns x if its smaller than y, otherwise returns y.
inline uint32_t min( const uint32_t x, const uint32_t y )
{
	return ( x < y ) ? x : y;
}

/// \brief Returns x if its bigger than y, otherwise returns y.
inline uint32_t max( const uint32_t x, const uint32_t y )
{
	return ( x > y ) ? x : y;
}

/// \brief If x is lower than low or higher than high then returns low or high respectively, otherwise returns x.
inline uint32_t clamp( const uint32_t x, const uint32_t low, const uint32_t high )
{
	return min( max( x, low ), high );
}

inline uint32_t step( const uint32_t x, const uint32_t y )
{
	return ( y > x ? 1U : 0U );
}


// float
/// \brief Returns true if the two given floating-point numbers are within a small enough epsilon range of each other that takes into account floating-point inaccuracy.
inline bool floateq( const float lhs, const float rhs, const float epsilon = (float)( HLML_EPSILON ) )
{
	return fabsf( lhs - rhs ) < epsilon;
}

/// \brief Returns -1 if x is < 0, 0 if x == 0, or 1 if x > 1.
/// This function does no branching.
inline int32_t sign( const float x )
{
	return ( 0.0f < x ) - ( x < 0.0f );
}

/// \brief Returns the given degrees to radians.
inline float radians( const float deg )
{
	return deg * (float)( HLML_PI ) / 180.0f;
}

/// \brief Returns the given radians to degrees.
inline float degrees( const float rad )
{
	return rad * 180.0f / (float)( HLML_PI );
}

/// \brief Returns x if its smaller than y, otherwise returns y.
inline float min( const float x, const float y )
{
	return ( x < y ) ? x : y;
}

/// \brief Returns x if its bigger than y, otherwise returns y.
inline float max( const float x, const float y )
{
	return ( x > y ) ? x : y;
}

/// \brief If x is lower than low or higher than high then returns low or high respectively, otherwise returns x.
inline float clamp( const float x, const float low, const float high )
{
	return min( max( x, low ), high );
}

/// \relates float
/// \brief Returns a copy of the float with each component clamped between the range 0 and 1.
inline float saturate( const float x )
{
	return clamp( x, 0.0f, 1.0f );
}

/// \relates float
/// \brief Returns a linearly interpolated float between types "a" and "b".
inline float lerp( const float a, const float b, const float t )
{
	return ( 1.0f - t ) * a + t * b;
}

inline float step( const float x, const float y )
{
	return ( y > x ? 1.0f : 0.0f );
}

/// \relates float
/// \brief Performs a sigmoid-like interpolation and clamp.
inline float smoothstep( const float low, const float high, const float x )
{
	float t = saturate( ( x - low ) / ( high - low ) );
	return t * t * ( 3.0f - 2.0f * t );
}

/// \relates float
/// \brief Performs a 'smoother' version of smoothstep, as design by Ken Perlin.
/// https://en.wikipedia.org/wiki/Smoothstep#Variations
inline float smootherstep( const float low, const float high, const float x )
{
	float t = saturate( ( x - low ) / ( high - low ) );
	return t * t * t * ( t * ( t * 6.0f - 15.0f ) + 10.0f );
}


// double
/// \brief Returns true if the two given floating-point numbers are within a small enough epsilon range of each other that takes into account floating-point inaccuracy.
inline bool doubleeq( const double lhs, const double rhs, const double epsilon = HLML_EPSILON )
{
	return fabs( lhs - rhs ) < epsilon;
}

/// \brief Returns -1 if x is < 0, 0 if x == 0, or 1 if x > 1.
/// This function does no branching.
inline int32_t sign( const double x )
{
	return ( 0.0 < x ) - ( x < 0.0 );
}

/// \brief Returns the given degrees to radians.
inline double radians( const double deg )
{
	return deg * HLML_PI / 180.0;
}

/// \brief Returns the given radians to degrees.
inline double degrees( const double rad )
{
	return rad * 180.0 / HLML_PI;
}

/// \brief Returns x if its smaller than y, otherwise returns y.
inline double min( const double x, const double y )
{
	return ( x < y ) ? x : y;
}

/// \brief Returns x if its bigger than y, otherwise returns y.
inline double max( const double x, const double y )
{
	return ( x > y ) ? x : y;
}

/// \brief If x is lower than low or higher than high then returns low or high respectively, otherwise returns x.
inline double clamp( const double x, const double low, const double high )
{
	return min( max( x, low ), high );
}

/// \relates double
/// \brief Returns a copy of the double with each component clamped between the range 0 and 1.
inline double saturate( const double x )
{
	return clamp( x, 0.0, 1.0 );
}

/// \relates double
/// \brief Returns a linearly interpolated double between types "a" and "b".
inline double lerp( const double a, const double b, const double t )
{
	return ( 1.0 - t ) * a + t * b;
}

inline double step( const double x, const double y )
{
	return ( y > x ? 1.0 : 0.0 );
}

/// \relates double
/// \brief Performs a sigmoid-like interpolation and clamp.
inline double smoothstep( const double low, const double high, const double x )
{
	double t = saturate( ( x - low ) / ( high - low ) );
	return t * t * ( 3.0 - 2.0 * t );
}

/// \relates double
/// \brief Performs a 'smoother' version of smoothstep, as design by Ken Perlin.
/// https://en.wikipedia.org/wiki/Smoothstep#Variations
inline double smootherstep( const double low, const double high, const double x )
{
	double t = saturate( ( x - low ) / ( high - low ) );
	return t * t * t * ( t * ( t * 6.0 - 15.0 ) + 10.0 );
}


