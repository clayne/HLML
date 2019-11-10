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
#pragma once

#include <xmmintrin.h>

#if 1
#define HLML_ZERO_SSE		_mm_set1_ps( 0.0f )
#define HLML_ONE_SSE		_mm_set1_ps( 1.0f )

#define HLML_RAD_TO_DEG_SSE	_mm_set1_ps( 57.2957795130823208768f )
#define HLML_DEG_TO_RAD_SSE	_mm_set1_ps( 0.01745329251994329577f )
#else
static const __m128 HLML_ZERO_SSE		= _mm_set1_ps( 0.0f );
static const __m128 HLML_ONE_SSE		= _mm_set1_ps( 1.0f );

static const __m128	HLML_RAD_TO_DEG_SSE	= _mm_set1_ps( 57.2957795130823208768f );
static const __m128	HLML_DEG_TO_RAD_SSE	= _mm_set1_ps( 0.01745329251994329577f );
#endif
