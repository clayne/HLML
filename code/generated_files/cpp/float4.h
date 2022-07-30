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

struct float2;
struct float3;

struct bool4;
struct int4;
struct uint4;
struct double4;

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

struct float4
{
	union
	{
		struct
		{
			float x;
			float y;
			float z;
			float w;
		};

		struct
		{
			float r;
			float g;
			float b;
			float a;
		};

		float v[4];
	};

	// Default constructor.
	HLML_INLINE float4() {}

	// Initialises all components of the vector to the given scalar.
	HLML_INLINE explicit float4( const float scalar );

	// Initialises all components of the vector to the corresponding scalars.
	HLML_INLINE float4( const float x, const float y, const float z, const float w );

	// Copy constructor.  Copies all elements of 'other' into the vector.
	HLML_INLINE float4( const float2& other );

	// Copy constructor.  Copies all elements of 'other' into the vector.
	HLML_INLINE float4( const float3& other );

	// Copy constructor.  Copies all elements of 'other' into the vector.
	HLML_INLINE float4( const float4& other );

	// Conversion constructor.  Casts all components of 'vec' from type bool32_t to type float.
	HLML_INLINE explicit float4( const bool4& vec );

	// Conversion constructor.  Casts all components of 'vec' from type int32_t to type float.
	HLML_INLINE explicit float4( const int4& vec );

	// Conversion constructor.  Casts all components of 'vec' from type uint32_t to type float.
	HLML_INLINE explicit float4( const uint4& vec );

	// Conversion constructor.  Casts all components of 'vec' from type double to type float.
	HLML_INLINE explicit float4( const double4& vec );

	~float4() {}

	// Copies all elements of 'other' into the vector.
	HLML_INLINE float4 operator=( const float2& other );

	// Copies all elements of 'other' into the vector.
	HLML_INLINE float4 operator=( const float3& other );

	// Copies all elements of 'other' into the vector.
	HLML_INLINE float4 operator=( const float4& other );

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or greater than 3.
	HLML_INLINE float& operator[]( const int32_t index );

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or greater than 3.
	HLML_INLINE const float& operator[]( const int32_t index ) const;

	// swizzle functions
	HLML_INLINE float2 xx() const;
	HLML_INLINE float2 xy() const;
	HLML_INLINE float2 xz() const;
	HLML_INLINE float2 xw() const;
	HLML_INLINE float2 yx() const;
	HLML_INLINE float2 yy() const;
	HLML_INLINE float2 yz() const;
	HLML_INLINE float2 yw() const;
	HLML_INLINE float2 zx() const;
	HLML_INLINE float2 zy() const;
	HLML_INLINE float2 zz() const;
	HLML_INLINE float2 zw() const;
	HLML_INLINE float2 wx() const;
	HLML_INLINE float2 wy() const;
	HLML_INLINE float2 wz() const;
	HLML_INLINE float2 ww() const;
	HLML_INLINE float3 xxx() const;
	HLML_INLINE float3 xxy() const;
	HLML_INLINE float3 xxz() const;
	HLML_INLINE float3 xxw() const;
	HLML_INLINE float3 xyx() const;
	HLML_INLINE float3 xyy() const;
	HLML_INLINE float3 xyz() const;
	HLML_INLINE float3 xyw() const;
	HLML_INLINE float3 xzx() const;
	HLML_INLINE float3 xzy() const;
	HLML_INLINE float3 xzz() const;
	HLML_INLINE float3 xzw() const;
	HLML_INLINE float3 xwx() const;
	HLML_INLINE float3 xwy() const;
	HLML_INLINE float3 xwz() const;
	HLML_INLINE float3 xww() const;
	HLML_INLINE float3 yxx() const;
	HLML_INLINE float3 yxy() const;
	HLML_INLINE float3 yxz() const;
	HLML_INLINE float3 yxw() const;
	HLML_INLINE float3 yyx() const;
	HLML_INLINE float3 yyy() const;
	HLML_INLINE float3 yyz() const;
	HLML_INLINE float3 yyw() const;
	HLML_INLINE float3 yzx() const;
	HLML_INLINE float3 yzy() const;
	HLML_INLINE float3 yzz() const;
	HLML_INLINE float3 yzw() const;
	HLML_INLINE float3 ywx() const;
	HLML_INLINE float3 ywy() const;
	HLML_INLINE float3 ywz() const;
	HLML_INLINE float3 yww() const;
	HLML_INLINE float3 zxx() const;
	HLML_INLINE float3 zxy() const;
	HLML_INLINE float3 zxz() const;
	HLML_INLINE float3 zxw() const;
	HLML_INLINE float3 zyx() const;
	HLML_INLINE float3 zyy() const;
	HLML_INLINE float3 zyz() const;
	HLML_INLINE float3 zyw() const;
	HLML_INLINE float3 zzx() const;
	HLML_INLINE float3 zzy() const;
	HLML_INLINE float3 zzz() const;
	HLML_INLINE float3 zzw() const;
	HLML_INLINE float3 zwx() const;
	HLML_INLINE float3 zwy() const;
	HLML_INLINE float3 zwz() const;
	HLML_INLINE float3 zww() const;
	HLML_INLINE float3 wxx() const;
	HLML_INLINE float3 wxy() const;
	HLML_INLINE float3 wxz() const;
	HLML_INLINE float3 wxw() const;
	HLML_INLINE float3 wyx() const;
	HLML_INLINE float3 wyy() const;
	HLML_INLINE float3 wyz() const;
	HLML_INLINE float3 wyw() const;
	HLML_INLINE float3 wzx() const;
	HLML_INLINE float3 wzy() const;
	HLML_INLINE float3 wzz() const;
	HLML_INLINE float3 wzw() const;
	HLML_INLINE float3 wwx() const;
	HLML_INLINE float3 wwy() const;
	HLML_INLINE float3 wwz() const;
	HLML_INLINE float3 www() const;
	HLML_INLINE float4 xxxx() const;
	HLML_INLINE float4 xxxy() const;
	HLML_INLINE float4 xxxz() const;
	HLML_INLINE float4 xxxw() const;
	HLML_INLINE float4 xxyx() const;
	HLML_INLINE float4 xxyy() const;
	HLML_INLINE float4 xxyz() const;
	HLML_INLINE float4 xxyw() const;
	HLML_INLINE float4 xxzx() const;
	HLML_INLINE float4 xxzy() const;
	HLML_INLINE float4 xxzz() const;
	HLML_INLINE float4 xxzw() const;
	HLML_INLINE float4 xxwx() const;
	HLML_INLINE float4 xxwy() const;
	HLML_INLINE float4 xxwz() const;
	HLML_INLINE float4 xxww() const;
	HLML_INLINE float4 xyxx() const;
	HLML_INLINE float4 xyxy() const;
	HLML_INLINE float4 xyxz() const;
	HLML_INLINE float4 xyxw() const;
	HLML_INLINE float4 xyyx() const;
	HLML_INLINE float4 xyyy() const;
	HLML_INLINE float4 xyyz() const;
	HLML_INLINE float4 xyyw() const;
	HLML_INLINE float4 xyzx() const;
	HLML_INLINE float4 xyzy() const;
	HLML_INLINE float4 xyzz() const;
	HLML_INLINE float4 xyzw() const;
	HLML_INLINE float4 xywx() const;
	HLML_INLINE float4 xywy() const;
	HLML_INLINE float4 xywz() const;
	HLML_INLINE float4 xyww() const;
	HLML_INLINE float4 xzxx() const;
	HLML_INLINE float4 xzxy() const;
	HLML_INLINE float4 xzxz() const;
	HLML_INLINE float4 xzxw() const;
	HLML_INLINE float4 xzyx() const;
	HLML_INLINE float4 xzyy() const;
	HLML_INLINE float4 xzyz() const;
	HLML_INLINE float4 xzyw() const;
	HLML_INLINE float4 xzzx() const;
	HLML_INLINE float4 xzzy() const;
	HLML_INLINE float4 xzzz() const;
	HLML_INLINE float4 xzzw() const;
	HLML_INLINE float4 xzwx() const;
	HLML_INLINE float4 xzwy() const;
	HLML_INLINE float4 xzwz() const;
	HLML_INLINE float4 xzww() const;
	HLML_INLINE float4 xwxx() const;
	HLML_INLINE float4 xwxy() const;
	HLML_INLINE float4 xwxz() const;
	HLML_INLINE float4 xwxw() const;
	HLML_INLINE float4 xwyx() const;
	HLML_INLINE float4 xwyy() const;
	HLML_INLINE float4 xwyz() const;
	HLML_INLINE float4 xwyw() const;
	HLML_INLINE float4 xwzx() const;
	HLML_INLINE float4 xwzy() const;
	HLML_INLINE float4 xwzz() const;
	HLML_INLINE float4 xwzw() const;
	HLML_INLINE float4 xwwx() const;
	HLML_INLINE float4 xwwy() const;
	HLML_INLINE float4 xwwz() const;
	HLML_INLINE float4 xwww() const;
	HLML_INLINE float4 yxxx() const;
	HLML_INLINE float4 yxxy() const;
	HLML_INLINE float4 yxxz() const;
	HLML_INLINE float4 yxxw() const;
	HLML_INLINE float4 yxyx() const;
	HLML_INLINE float4 yxyy() const;
	HLML_INLINE float4 yxyz() const;
	HLML_INLINE float4 yxyw() const;
	HLML_INLINE float4 yxzx() const;
	HLML_INLINE float4 yxzy() const;
	HLML_INLINE float4 yxzz() const;
	HLML_INLINE float4 yxzw() const;
	HLML_INLINE float4 yxwx() const;
	HLML_INLINE float4 yxwy() const;
	HLML_INLINE float4 yxwz() const;
	HLML_INLINE float4 yxww() const;
	HLML_INLINE float4 yyxx() const;
	HLML_INLINE float4 yyxy() const;
	HLML_INLINE float4 yyxz() const;
	HLML_INLINE float4 yyxw() const;
	HLML_INLINE float4 yyyx() const;
	HLML_INLINE float4 yyyy() const;
	HLML_INLINE float4 yyyz() const;
	HLML_INLINE float4 yyyw() const;
	HLML_INLINE float4 yyzx() const;
	HLML_INLINE float4 yyzy() const;
	HLML_INLINE float4 yyzz() const;
	HLML_INLINE float4 yyzw() const;
	HLML_INLINE float4 yywx() const;
	HLML_INLINE float4 yywy() const;
	HLML_INLINE float4 yywz() const;
	HLML_INLINE float4 yyww() const;
	HLML_INLINE float4 yzxx() const;
	HLML_INLINE float4 yzxy() const;
	HLML_INLINE float4 yzxz() const;
	HLML_INLINE float4 yzxw() const;
	HLML_INLINE float4 yzyx() const;
	HLML_INLINE float4 yzyy() const;
	HLML_INLINE float4 yzyz() const;
	HLML_INLINE float4 yzyw() const;
	HLML_INLINE float4 yzzx() const;
	HLML_INLINE float4 yzzy() const;
	HLML_INLINE float4 yzzz() const;
	HLML_INLINE float4 yzzw() const;
	HLML_INLINE float4 yzwx() const;
	HLML_INLINE float4 yzwy() const;
	HLML_INLINE float4 yzwz() const;
	HLML_INLINE float4 yzww() const;
	HLML_INLINE float4 ywxx() const;
	HLML_INLINE float4 ywxy() const;
	HLML_INLINE float4 ywxz() const;
	HLML_INLINE float4 ywxw() const;
	HLML_INLINE float4 ywyx() const;
	HLML_INLINE float4 ywyy() const;
	HLML_INLINE float4 ywyz() const;
	HLML_INLINE float4 ywyw() const;
	HLML_INLINE float4 ywzx() const;
	HLML_INLINE float4 ywzy() const;
	HLML_INLINE float4 ywzz() const;
	HLML_INLINE float4 ywzw() const;
	HLML_INLINE float4 ywwx() const;
	HLML_INLINE float4 ywwy() const;
	HLML_INLINE float4 ywwz() const;
	HLML_INLINE float4 ywww() const;
	HLML_INLINE float4 zxxx() const;
	HLML_INLINE float4 zxxy() const;
	HLML_INLINE float4 zxxz() const;
	HLML_INLINE float4 zxxw() const;
	HLML_INLINE float4 zxyx() const;
	HLML_INLINE float4 zxyy() const;
	HLML_INLINE float4 zxyz() const;
	HLML_INLINE float4 zxyw() const;
	HLML_INLINE float4 zxzx() const;
	HLML_INLINE float4 zxzy() const;
	HLML_INLINE float4 zxzz() const;
	HLML_INLINE float4 zxzw() const;
	HLML_INLINE float4 zxwx() const;
	HLML_INLINE float4 zxwy() const;
	HLML_INLINE float4 zxwz() const;
	HLML_INLINE float4 zxww() const;
	HLML_INLINE float4 zyxx() const;
	HLML_INLINE float4 zyxy() const;
	HLML_INLINE float4 zyxz() const;
	HLML_INLINE float4 zyxw() const;
	HLML_INLINE float4 zyyx() const;
	HLML_INLINE float4 zyyy() const;
	HLML_INLINE float4 zyyz() const;
	HLML_INLINE float4 zyyw() const;
	HLML_INLINE float4 zyzx() const;
	HLML_INLINE float4 zyzy() const;
	HLML_INLINE float4 zyzz() const;
	HLML_INLINE float4 zyzw() const;
	HLML_INLINE float4 zywx() const;
	HLML_INLINE float4 zywy() const;
	HLML_INLINE float4 zywz() const;
	HLML_INLINE float4 zyww() const;
	HLML_INLINE float4 zzxx() const;
	HLML_INLINE float4 zzxy() const;
	HLML_INLINE float4 zzxz() const;
	HLML_INLINE float4 zzxw() const;
	HLML_INLINE float4 zzyx() const;
	HLML_INLINE float4 zzyy() const;
	HLML_INLINE float4 zzyz() const;
	HLML_INLINE float4 zzyw() const;
	HLML_INLINE float4 zzzx() const;
	HLML_INLINE float4 zzzy() const;
	HLML_INLINE float4 zzzz() const;
	HLML_INLINE float4 zzzw() const;
	HLML_INLINE float4 zzwx() const;
	HLML_INLINE float4 zzwy() const;
	HLML_INLINE float4 zzwz() const;
	HLML_INLINE float4 zzww() const;
	HLML_INLINE float4 zwxx() const;
	HLML_INLINE float4 zwxy() const;
	HLML_INLINE float4 zwxz() const;
	HLML_INLINE float4 zwxw() const;
	HLML_INLINE float4 zwyx() const;
	HLML_INLINE float4 zwyy() const;
	HLML_INLINE float4 zwyz() const;
	HLML_INLINE float4 zwyw() const;
	HLML_INLINE float4 zwzx() const;
	HLML_INLINE float4 zwzy() const;
	HLML_INLINE float4 zwzz() const;
	HLML_INLINE float4 zwzw() const;
	HLML_INLINE float4 zwwx() const;
	HLML_INLINE float4 zwwy() const;
	HLML_INLINE float4 zwwz() const;
	HLML_INLINE float4 zwww() const;
	HLML_INLINE float4 wxxx() const;
	HLML_INLINE float4 wxxy() const;
	HLML_INLINE float4 wxxz() const;
	HLML_INLINE float4 wxxw() const;
	HLML_INLINE float4 wxyx() const;
	HLML_INLINE float4 wxyy() const;
	HLML_INLINE float4 wxyz() const;
	HLML_INLINE float4 wxyw() const;
	HLML_INLINE float4 wxzx() const;
	HLML_INLINE float4 wxzy() const;
	HLML_INLINE float4 wxzz() const;
	HLML_INLINE float4 wxzw() const;
	HLML_INLINE float4 wxwx() const;
	HLML_INLINE float4 wxwy() const;
	HLML_INLINE float4 wxwz() const;
	HLML_INLINE float4 wxww() const;
	HLML_INLINE float4 wyxx() const;
	HLML_INLINE float4 wyxy() const;
	HLML_INLINE float4 wyxz() const;
	HLML_INLINE float4 wyxw() const;
	HLML_INLINE float4 wyyx() const;
	HLML_INLINE float4 wyyy() const;
	HLML_INLINE float4 wyyz() const;
	HLML_INLINE float4 wyyw() const;
	HLML_INLINE float4 wyzx() const;
	HLML_INLINE float4 wyzy() const;
	HLML_INLINE float4 wyzz() const;
	HLML_INLINE float4 wyzw() const;
	HLML_INLINE float4 wywx() const;
	HLML_INLINE float4 wywy() const;
	HLML_INLINE float4 wywz() const;
	HLML_INLINE float4 wyww() const;
	HLML_INLINE float4 wzxx() const;
	HLML_INLINE float4 wzxy() const;
	HLML_INLINE float4 wzxz() const;
	HLML_INLINE float4 wzxw() const;
	HLML_INLINE float4 wzyx() const;
	HLML_INLINE float4 wzyy() const;
	HLML_INLINE float4 wzyz() const;
	HLML_INLINE float4 wzyw() const;
	HLML_INLINE float4 wzzx() const;
	HLML_INLINE float4 wzzy() const;
	HLML_INLINE float4 wzzz() const;
	HLML_INLINE float4 wzzw() const;
	HLML_INLINE float4 wzwx() const;
	HLML_INLINE float4 wzwy() const;
	HLML_INLINE float4 wzwz() const;
	HLML_INLINE float4 wzww() const;
	HLML_INLINE float4 wwxx() const;
	HLML_INLINE float4 wwxy() const;
	HLML_INLINE float4 wwxz() const;
	HLML_INLINE float4 wwxw() const;
	HLML_INLINE float4 wwyx() const;
	HLML_INLINE float4 wwyy() const;
	HLML_INLINE float4 wwyz() const;
	HLML_INLINE float4 wwyw() const;
	HLML_INLINE float4 wwzx() const;
	HLML_INLINE float4 wwzy() const;
	HLML_INLINE float4 wwzz() const;
	HLML_INLINE float4 wwzw() const;
	HLML_INLINE float4 wwwx() const;
	HLML_INLINE float4 wwwy() const;
	HLML_INLINE float4 wwwz() const;
	HLML_INLINE float4 wwww() const;

	HLML_INLINE float2 rr() const;
	HLML_INLINE float2 rg() const;
	HLML_INLINE float2 rb() const;
	HLML_INLINE float2 ra() const;
	HLML_INLINE float2 gr() const;
	HLML_INLINE float2 gg() const;
	HLML_INLINE float2 gb() const;
	HLML_INLINE float2 ga() const;
	HLML_INLINE float2 br() const;
	HLML_INLINE float2 bg() const;
	HLML_INLINE float2 bb() const;
	HLML_INLINE float2 ba() const;
	HLML_INLINE float2 ar() const;
	HLML_INLINE float2 ag() const;
	HLML_INLINE float2 ab() const;
	HLML_INLINE float2 aa() const;
	HLML_INLINE float3 rrr() const;
	HLML_INLINE float3 rrg() const;
	HLML_INLINE float3 rrb() const;
	HLML_INLINE float3 rra() const;
	HLML_INLINE float3 rgr() const;
	HLML_INLINE float3 rgg() const;
	HLML_INLINE float3 rgb() const;
	HLML_INLINE float3 rga() const;
	HLML_INLINE float3 rbr() const;
	HLML_INLINE float3 rbg() const;
	HLML_INLINE float3 rbb() const;
	HLML_INLINE float3 rba() const;
	HLML_INLINE float3 rar() const;
	HLML_INLINE float3 rag() const;
	HLML_INLINE float3 rab() const;
	HLML_INLINE float3 raa() const;
	HLML_INLINE float3 grr() const;
	HLML_INLINE float3 grg() const;
	HLML_INLINE float3 grb() const;
	HLML_INLINE float3 gra() const;
	HLML_INLINE float3 ggr() const;
	HLML_INLINE float3 ggg() const;
	HLML_INLINE float3 ggb() const;
	HLML_INLINE float3 gga() const;
	HLML_INLINE float3 gbr() const;
	HLML_INLINE float3 gbg() const;
	HLML_INLINE float3 gbb() const;
	HLML_INLINE float3 gba() const;
	HLML_INLINE float3 gar() const;
	HLML_INLINE float3 gag() const;
	HLML_INLINE float3 gab() const;
	HLML_INLINE float3 gaa() const;
	HLML_INLINE float3 brr() const;
	HLML_INLINE float3 brg() const;
	HLML_INLINE float3 brb() const;
	HLML_INLINE float3 bra() const;
	HLML_INLINE float3 bgr() const;
	HLML_INLINE float3 bgg() const;
	HLML_INLINE float3 bgb() const;
	HLML_INLINE float3 bga() const;
	HLML_INLINE float3 bbr() const;
	HLML_INLINE float3 bbg() const;
	HLML_INLINE float3 bbb() const;
	HLML_INLINE float3 bba() const;
	HLML_INLINE float3 bar() const;
	HLML_INLINE float3 bag() const;
	HLML_INLINE float3 bab() const;
	HLML_INLINE float3 baa() const;
	HLML_INLINE float3 arr() const;
	HLML_INLINE float3 arg() const;
	HLML_INLINE float3 arb() const;
	HLML_INLINE float3 ara() const;
	HLML_INLINE float3 agr() const;
	HLML_INLINE float3 agg() const;
	HLML_INLINE float3 agb() const;
	HLML_INLINE float3 aga() const;
	HLML_INLINE float3 abr() const;
	HLML_INLINE float3 abg() const;
	HLML_INLINE float3 abb() const;
	HLML_INLINE float3 aba() const;
	HLML_INLINE float3 aar() const;
	HLML_INLINE float3 aag() const;
	HLML_INLINE float3 aab() const;
	HLML_INLINE float3 aaa() const;
	HLML_INLINE float4 rrrr() const;
	HLML_INLINE float4 rrrg() const;
	HLML_INLINE float4 rrrb() const;
	HLML_INLINE float4 rrra() const;
	HLML_INLINE float4 rrgr() const;
	HLML_INLINE float4 rrgg() const;
	HLML_INLINE float4 rrgb() const;
	HLML_INLINE float4 rrga() const;
	HLML_INLINE float4 rrbr() const;
	HLML_INLINE float4 rrbg() const;
	HLML_INLINE float4 rrbb() const;
	HLML_INLINE float4 rrba() const;
	HLML_INLINE float4 rrar() const;
	HLML_INLINE float4 rrag() const;
	HLML_INLINE float4 rrab() const;
	HLML_INLINE float4 rraa() const;
	HLML_INLINE float4 rgrr() const;
	HLML_INLINE float4 rgrg() const;
	HLML_INLINE float4 rgrb() const;
	HLML_INLINE float4 rgra() const;
	HLML_INLINE float4 rggr() const;
	HLML_INLINE float4 rggg() const;
	HLML_INLINE float4 rggb() const;
	HLML_INLINE float4 rgga() const;
	HLML_INLINE float4 rgbr() const;
	HLML_INLINE float4 rgbg() const;
	HLML_INLINE float4 rgbb() const;
	HLML_INLINE float4 rgba() const;
	HLML_INLINE float4 rgar() const;
	HLML_INLINE float4 rgag() const;
	HLML_INLINE float4 rgab() const;
	HLML_INLINE float4 rgaa() const;
	HLML_INLINE float4 rbrr() const;
	HLML_INLINE float4 rbrg() const;
	HLML_INLINE float4 rbrb() const;
	HLML_INLINE float4 rbra() const;
	HLML_INLINE float4 rbgr() const;
	HLML_INLINE float4 rbgg() const;
	HLML_INLINE float4 rbgb() const;
	HLML_INLINE float4 rbga() const;
	HLML_INLINE float4 rbbr() const;
	HLML_INLINE float4 rbbg() const;
	HLML_INLINE float4 rbbb() const;
	HLML_INLINE float4 rbba() const;
	HLML_INLINE float4 rbar() const;
	HLML_INLINE float4 rbag() const;
	HLML_INLINE float4 rbab() const;
	HLML_INLINE float4 rbaa() const;
	HLML_INLINE float4 rarr() const;
	HLML_INLINE float4 rarg() const;
	HLML_INLINE float4 rarb() const;
	HLML_INLINE float4 rara() const;
	HLML_INLINE float4 ragr() const;
	HLML_INLINE float4 ragg() const;
	HLML_INLINE float4 ragb() const;
	HLML_INLINE float4 raga() const;
	HLML_INLINE float4 rabr() const;
	HLML_INLINE float4 rabg() const;
	HLML_INLINE float4 rabb() const;
	HLML_INLINE float4 raba() const;
	HLML_INLINE float4 raar() const;
	HLML_INLINE float4 raag() const;
	HLML_INLINE float4 raab() const;
	HLML_INLINE float4 raaa() const;
	HLML_INLINE float4 grrr() const;
	HLML_INLINE float4 grrg() const;
	HLML_INLINE float4 grrb() const;
	HLML_INLINE float4 grra() const;
	HLML_INLINE float4 grgr() const;
	HLML_INLINE float4 grgg() const;
	HLML_INLINE float4 grgb() const;
	HLML_INLINE float4 grga() const;
	HLML_INLINE float4 grbr() const;
	HLML_INLINE float4 grbg() const;
	HLML_INLINE float4 grbb() const;
	HLML_INLINE float4 grba() const;
	HLML_INLINE float4 grar() const;
	HLML_INLINE float4 grag() const;
	HLML_INLINE float4 grab() const;
	HLML_INLINE float4 graa() const;
	HLML_INLINE float4 ggrr() const;
	HLML_INLINE float4 ggrg() const;
	HLML_INLINE float4 ggrb() const;
	HLML_INLINE float4 ggra() const;
	HLML_INLINE float4 gggr() const;
	HLML_INLINE float4 gggg() const;
	HLML_INLINE float4 gggb() const;
	HLML_INLINE float4 ggga() const;
	HLML_INLINE float4 ggbr() const;
	HLML_INLINE float4 ggbg() const;
	HLML_INLINE float4 ggbb() const;
	HLML_INLINE float4 ggba() const;
	HLML_INLINE float4 ggar() const;
	HLML_INLINE float4 ggag() const;
	HLML_INLINE float4 ggab() const;
	HLML_INLINE float4 ggaa() const;
	HLML_INLINE float4 gbrr() const;
	HLML_INLINE float4 gbrg() const;
	HLML_INLINE float4 gbrb() const;
	HLML_INLINE float4 gbra() const;
	HLML_INLINE float4 gbgr() const;
	HLML_INLINE float4 gbgg() const;
	HLML_INLINE float4 gbgb() const;
	HLML_INLINE float4 gbga() const;
	HLML_INLINE float4 gbbr() const;
	HLML_INLINE float4 gbbg() const;
	HLML_INLINE float4 gbbb() const;
	HLML_INLINE float4 gbba() const;
	HLML_INLINE float4 gbar() const;
	HLML_INLINE float4 gbag() const;
	HLML_INLINE float4 gbab() const;
	HLML_INLINE float4 gbaa() const;
	HLML_INLINE float4 garr() const;
	HLML_INLINE float4 garg() const;
	HLML_INLINE float4 garb() const;
	HLML_INLINE float4 gara() const;
	HLML_INLINE float4 gagr() const;
	HLML_INLINE float4 gagg() const;
	HLML_INLINE float4 gagb() const;
	HLML_INLINE float4 gaga() const;
	HLML_INLINE float4 gabr() const;
	HLML_INLINE float4 gabg() const;
	HLML_INLINE float4 gabb() const;
	HLML_INLINE float4 gaba() const;
	HLML_INLINE float4 gaar() const;
	HLML_INLINE float4 gaag() const;
	HLML_INLINE float4 gaab() const;
	HLML_INLINE float4 gaaa() const;
	HLML_INLINE float4 brrr() const;
	HLML_INLINE float4 brrg() const;
	HLML_INLINE float4 brrb() const;
	HLML_INLINE float4 brra() const;
	HLML_INLINE float4 brgr() const;
	HLML_INLINE float4 brgg() const;
	HLML_INLINE float4 brgb() const;
	HLML_INLINE float4 brga() const;
	HLML_INLINE float4 brbr() const;
	HLML_INLINE float4 brbg() const;
	HLML_INLINE float4 brbb() const;
	HLML_INLINE float4 brba() const;
	HLML_INLINE float4 brar() const;
	HLML_INLINE float4 brag() const;
	HLML_INLINE float4 brab() const;
	HLML_INLINE float4 braa() const;
	HLML_INLINE float4 bgrr() const;
	HLML_INLINE float4 bgrg() const;
	HLML_INLINE float4 bgrb() const;
	HLML_INLINE float4 bgra() const;
	HLML_INLINE float4 bggr() const;
	HLML_INLINE float4 bggg() const;
	HLML_INLINE float4 bggb() const;
	HLML_INLINE float4 bgga() const;
	HLML_INLINE float4 bgbr() const;
	HLML_INLINE float4 bgbg() const;
	HLML_INLINE float4 bgbb() const;
	HLML_INLINE float4 bgba() const;
	HLML_INLINE float4 bgar() const;
	HLML_INLINE float4 bgag() const;
	HLML_INLINE float4 bgab() const;
	HLML_INLINE float4 bgaa() const;
	HLML_INLINE float4 bbrr() const;
	HLML_INLINE float4 bbrg() const;
	HLML_INLINE float4 bbrb() const;
	HLML_INLINE float4 bbra() const;
	HLML_INLINE float4 bbgr() const;
	HLML_INLINE float4 bbgg() const;
	HLML_INLINE float4 bbgb() const;
	HLML_INLINE float4 bbga() const;
	HLML_INLINE float4 bbbr() const;
	HLML_INLINE float4 bbbg() const;
	HLML_INLINE float4 bbbb() const;
	HLML_INLINE float4 bbba() const;
	HLML_INLINE float4 bbar() const;
	HLML_INLINE float4 bbag() const;
	HLML_INLINE float4 bbab() const;
	HLML_INLINE float4 bbaa() const;
	HLML_INLINE float4 barr() const;
	HLML_INLINE float4 barg() const;
	HLML_INLINE float4 barb() const;
	HLML_INLINE float4 bara() const;
	HLML_INLINE float4 bagr() const;
	HLML_INLINE float4 bagg() const;
	HLML_INLINE float4 bagb() const;
	HLML_INLINE float4 baga() const;
	HLML_INLINE float4 babr() const;
	HLML_INLINE float4 babg() const;
	HLML_INLINE float4 babb() const;
	HLML_INLINE float4 baba() const;
	HLML_INLINE float4 baar() const;
	HLML_INLINE float4 baag() const;
	HLML_INLINE float4 baab() const;
	HLML_INLINE float4 baaa() const;
	HLML_INLINE float4 arrr() const;
	HLML_INLINE float4 arrg() const;
	HLML_INLINE float4 arrb() const;
	HLML_INLINE float4 arra() const;
	HLML_INLINE float4 argr() const;
	HLML_INLINE float4 argg() const;
	HLML_INLINE float4 argb() const;
	HLML_INLINE float4 arga() const;
	HLML_INLINE float4 arbr() const;
	HLML_INLINE float4 arbg() const;
	HLML_INLINE float4 arbb() const;
	HLML_INLINE float4 arba() const;
	HLML_INLINE float4 arar() const;
	HLML_INLINE float4 arag() const;
	HLML_INLINE float4 arab() const;
	HLML_INLINE float4 araa() const;
	HLML_INLINE float4 agrr() const;
	HLML_INLINE float4 agrg() const;
	HLML_INLINE float4 agrb() const;
	HLML_INLINE float4 agra() const;
	HLML_INLINE float4 aggr() const;
	HLML_INLINE float4 aggg() const;
	HLML_INLINE float4 aggb() const;
	HLML_INLINE float4 agga() const;
	HLML_INLINE float4 agbr() const;
	HLML_INLINE float4 agbg() const;
	HLML_INLINE float4 agbb() const;
	HLML_INLINE float4 agba() const;
	HLML_INLINE float4 agar() const;
	HLML_INLINE float4 agag() const;
	HLML_INLINE float4 agab() const;
	HLML_INLINE float4 agaa() const;
	HLML_INLINE float4 abrr() const;
	HLML_INLINE float4 abrg() const;
	HLML_INLINE float4 abrb() const;
	HLML_INLINE float4 abra() const;
	HLML_INLINE float4 abgr() const;
	HLML_INLINE float4 abgg() const;
	HLML_INLINE float4 abgb() const;
	HLML_INLINE float4 abga() const;
	HLML_INLINE float4 abbr() const;
	HLML_INLINE float4 abbg() const;
	HLML_INLINE float4 abbb() const;
	HLML_INLINE float4 abba() const;
	HLML_INLINE float4 abar() const;
	HLML_INLINE float4 abag() const;
	HLML_INLINE float4 abab() const;
	HLML_INLINE float4 abaa() const;
	HLML_INLINE float4 aarr() const;
	HLML_INLINE float4 aarg() const;
	HLML_INLINE float4 aarb() const;
	HLML_INLINE float4 aara() const;
	HLML_INLINE float4 aagr() const;
	HLML_INLINE float4 aagg() const;
	HLML_INLINE float4 aagb() const;
	HLML_INLINE float4 aaga() const;
	HLML_INLINE float4 aabr() const;
	HLML_INLINE float4 aabg() const;
	HLML_INLINE float4 aabb() const;
	HLML_INLINE float4 aaba() const;
	HLML_INLINE float4 aaar() const;
	HLML_INLINE float4 aaag() const;
	HLML_INLINE float4 aaab() const;
	HLML_INLINE float4 aaaa() const;

};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif
