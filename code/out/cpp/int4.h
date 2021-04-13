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

#include "bool4.h"

#include <stdint.h>
#include "../hlml_types.h"

#include "int2.h"
#include "int3.h"
struct float3;

// ignore prohibition of anymous structs for GCC
#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#elif defined( _MSC_VER )
#pragma warning( push )
#pragma warning( disable : 4201 ) // C4201 - nonstandard extension used : nameless struct/union
#endif

// A vector of 4 int32_ts with components xyzw.
// Components are also stored as elements in an array via a union.
struct int4
{
	union
	{
		struct
		{
			int32_t x;
			int32_t y;
			int32_t z;
			int32_t w;
		};

		struct
		{
			int32_t r;
			int32_t g;
			int32_t b;
			int32_t a;
		};

		int32_t data[4];
	};


	// Default constructor.  Initializes all values to zero.
	inline int4() {}

	// Initializes all components of the vector to the given scalar value.
	inline explicit int4( const int32_t x );

	// Sets the xyzw members of the vector to the corresponding parameters.
	inline int4( const int32_t x, const int32_t y, const int32_t z, const int32_t w );

	// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int4( const int2& other );

	// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int4( const int3& other );

	// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int4( const int4& other );

	~int4() {}

	// Copies the elements of the given vector via a single memcpy.
	inline int4 operator=( const int2& rhs );

	// Copies the elements of the given vector via a single memcpy.
	inline int4 operator=( const int3& rhs );

	// Copies the elements of the given vector via a single memcpy.
	inline int4 operator=( const int4& rhs );

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or higher than 3.
	inline const int32_t& operator[]( const uint32_t index ) const;

	// Returns the vector component at the given index.
	// Index CANNOT be lower than 0 or higher than 3.
	inline int32_t& operator[]( const uint32_t index );

	// swizzle funcs
	inline int2 xx() const;
	inline int2 yx() const;
	inline int2 xy() const;
	inline int2 yy() const;
	inline int3 xxx() const;
	inline int3 yxx() const;
	inline int3 zxx() const;
	inline int3 xyx() const;
	inline int3 yyx() const;
	inline int3 zyx() const;
	inline int3 xzx() const;
	inline int3 yzx() const;
	inline int3 zzx() const;
	inline int3 xxy() const;
	inline int3 yxy() const;
	inline int3 zxy() const;
	inline int3 xyy() const;
	inline int3 yyy() const;
	inline int3 zyy() const;
	inline int3 xzy() const;
	inline int3 yzy() const;
	inline int3 zzy() const;
	inline int3 xxz() const;
	inline int3 yxz() const;
	inline int3 zxz() const;
	inline int3 xyz() const;
	inline int3 yyz() const;
	inline int3 zyz() const;
	inline int3 xzz() const;
	inline int3 yzz() const;
	inline int3 zzz() const;
	inline int4 xxxx() const;
	inline int4 yxxx() const;
	inline int4 zxxx() const;
	inline int4 wxxx() const;
	inline int4 xyxx() const;
	inline int4 yyxx() const;
	inline int4 zyxx() const;
	inline int4 wyxx() const;
	inline int4 xzxx() const;
	inline int4 yzxx() const;
	inline int4 zzxx() const;
	inline int4 wzxx() const;
	inline int4 xwxx() const;
	inline int4 ywxx() const;
	inline int4 zwxx() const;
	inline int4 wwxx() const;
	inline int4 xxyx() const;
	inline int4 yxyx() const;
	inline int4 zxyx() const;
	inline int4 wxyx() const;
	inline int4 xyyx() const;
	inline int4 yyyx() const;
	inline int4 zyyx() const;
	inline int4 wyyx() const;
	inline int4 xzyx() const;
	inline int4 yzyx() const;
	inline int4 zzyx() const;
	inline int4 wzyx() const;
	inline int4 xwyx() const;
	inline int4 ywyx() const;
	inline int4 zwyx() const;
	inline int4 wwyx() const;
	inline int4 xxzx() const;
	inline int4 yxzx() const;
	inline int4 zxzx() const;
	inline int4 wxzx() const;
	inline int4 xyzx() const;
	inline int4 yyzx() const;
	inline int4 zyzx() const;
	inline int4 wyzx() const;
	inline int4 xzzx() const;
	inline int4 yzzx() const;
	inline int4 zzzx() const;
	inline int4 wzzx() const;
	inline int4 xwzx() const;
	inline int4 ywzx() const;
	inline int4 zwzx() const;
	inline int4 wwzx() const;
	inline int4 xxwx() const;
	inline int4 yxwx() const;
	inline int4 zxwx() const;
	inline int4 wxwx() const;
	inline int4 xywx() const;
	inline int4 yywx() const;
	inline int4 zywx() const;
	inline int4 wywx() const;
	inline int4 xzwx() const;
	inline int4 yzwx() const;
	inline int4 zzwx() const;
	inline int4 wzwx() const;
	inline int4 xwwx() const;
	inline int4 ywwx() const;
	inline int4 zwwx() const;
	inline int4 wwwx() const;
	inline int4 xxxy() const;
	inline int4 yxxy() const;
	inline int4 zxxy() const;
	inline int4 wxxy() const;
	inline int4 xyxy() const;
	inline int4 yyxy() const;
	inline int4 zyxy() const;
	inline int4 wyxy() const;
	inline int4 xzxy() const;
	inline int4 yzxy() const;
	inline int4 zzxy() const;
	inline int4 wzxy() const;
	inline int4 xwxy() const;
	inline int4 ywxy() const;
	inline int4 zwxy() const;
	inline int4 wwxy() const;
	inline int4 xxyy() const;
	inline int4 yxyy() const;
	inline int4 zxyy() const;
	inline int4 wxyy() const;
	inline int4 xyyy() const;
	inline int4 yyyy() const;
	inline int4 zyyy() const;
	inline int4 wyyy() const;
	inline int4 xzyy() const;
	inline int4 yzyy() const;
	inline int4 zzyy() const;
	inline int4 wzyy() const;
	inline int4 xwyy() const;
	inline int4 ywyy() const;
	inline int4 zwyy() const;
	inline int4 wwyy() const;
	inline int4 xxzy() const;
	inline int4 yxzy() const;
	inline int4 zxzy() const;
	inline int4 wxzy() const;
	inline int4 xyzy() const;
	inline int4 yyzy() const;
	inline int4 zyzy() const;
	inline int4 wyzy() const;
	inline int4 xzzy() const;
	inline int4 yzzy() const;
	inline int4 zzzy() const;
	inline int4 wzzy() const;
	inline int4 xwzy() const;
	inline int4 ywzy() const;
	inline int4 zwzy() const;
	inline int4 wwzy() const;
	inline int4 xxwy() const;
	inline int4 yxwy() const;
	inline int4 zxwy() const;
	inline int4 wxwy() const;
	inline int4 xywy() const;
	inline int4 yywy() const;
	inline int4 zywy() const;
	inline int4 wywy() const;
	inline int4 xzwy() const;
	inline int4 yzwy() const;
	inline int4 zzwy() const;
	inline int4 wzwy() const;
	inline int4 xwwy() const;
	inline int4 ywwy() const;
	inline int4 zwwy() const;
	inline int4 wwwy() const;
	inline int4 xxxz() const;
	inline int4 yxxz() const;
	inline int4 zxxz() const;
	inline int4 wxxz() const;
	inline int4 xyxz() const;
	inline int4 yyxz() const;
	inline int4 zyxz() const;
	inline int4 wyxz() const;
	inline int4 xzxz() const;
	inline int4 yzxz() const;
	inline int4 zzxz() const;
	inline int4 wzxz() const;
	inline int4 xwxz() const;
	inline int4 ywxz() const;
	inline int4 zwxz() const;
	inline int4 wwxz() const;
	inline int4 xxyz() const;
	inline int4 yxyz() const;
	inline int4 zxyz() const;
	inline int4 wxyz() const;
	inline int4 xyyz() const;
	inline int4 yyyz() const;
	inline int4 zyyz() const;
	inline int4 wyyz() const;
	inline int4 xzyz() const;
	inline int4 yzyz() const;
	inline int4 zzyz() const;
	inline int4 wzyz() const;
	inline int4 xwyz() const;
	inline int4 ywyz() const;
	inline int4 zwyz() const;
	inline int4 wwyz() const;
	inline int4 xxzz() const;
	inline int4 yxzz() const;
	inline int4 zxzz() const;
	inline int4 wxzz() const;
	inline int4 xyzz() const;
	inline int4 yyzz() const;
	inline int4 zyzz() const;
	inline int4 wyzz() const;
	inline int4 xzzz() const;
	inline int4 yzzz() const;
	inline int4 zzzz() const;
	inline int4 wzzz() const;
	inline int4 xwzz() const;
	inline int4 ywzz() const;
	inline int4 zwzz() const;
	inline int4 wwzz() const;
	inline int4 xxwz() const;
	inline int4 yxwz() const;
	inline int4 zxwz() const;
	inline int4 wxwz() const;
	inline int4 xywz() const;
	inline int4 yywz() const;
	inline int4 zywz() const;
	inline int4 wywz() const;
	inline int4 xzwz() const;
	inline int4 yzwz() const;
	inline int4 zzwz() const;
	inline int4 wzwz() const;
	inline int4 xwwz() const;
	inline int4 ywwz() const;
	inline int4 zwwz() const;
	inline int4 wwwz() const;
	inline int4 xxxw() const;
	inline int4 yxxw() const;
	inline int4 zxxw() const;
	inline int4 wxxw() const;
	inline int4 xyxw() const;
	inline int4 yyxw() const;
	inline int4 zyxw() const;
	inline int4 wyxw() const;
	inline int4 xzxw() const;
	inline int4 yzxw() const;
	inline int4 zzxw() const;
	inline int4 wzxw() const;
	inline int4 xwxw() const;
	inline int4 ywxw() const;
	inline int4 zwxw() const;
	inline int4 wwxw() const;
	inline int4 xxyw() const;
	inline int4 yxyw() const;
	inline int4 zxyw() const;
	inline int4 wxyw() const;
	inline int4 xyyw() const;
	inline int4 yyyw() const;
	inline int4 zyyw() const;
	inline int4 wyyw() const;
	inline int4 xzyw() const;
	inline int4 yzyw() const;
	inline int4 zzyw() const;
	inline int4 wzyw() const;
	inline int4 xwyw() const;
	inline int4 ywyw() const;
	inline int4 zwyw() const;
	inline int4 wwyw() const;
	inline int4 xxzw() const;
	inline int4 yxzw() const;
	inline int4 zxzw() const;
	inline int4 wxzw() const;
	inline int4 xyzw() const;
	inline int4 yyzw() const;
	inline int4 zyzw() const;
	inline int4 wyzw() const;
	inline int4 xzzw() const;
	inline int4 yzzw() const;
	inline int4 zzzw() const;
	inline int4 wzzw() const;
	inline int4 xwzw() const;
	inline int4 ywzw() const;
	inline int4 zwzw() const;
	inline int4 wwzw() const;
	inline int4 xxww() const;
	inline int4 yxww() const;
	inline int4 zxww() const;
	inline int4 wxww() const;
	inline int4 xyww() const;
	inline int4 yyww() const;
	inline int4 zyww() const;
	inline int4 wyww() const;
	inline int4 xzww() const;
	inline int4 yzww() const;
	inline int4 zzww() const;
	inline int4 wzww() const;
	inline int4 xwww() const;
	inline int4 ywww() const;
	inline int4 zwww() const;
	inline int4 wwww() const;
};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif

