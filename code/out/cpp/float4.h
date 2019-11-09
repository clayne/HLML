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

#include "float2.h"
#include "float3.h"
struct float3;

// ignore prohibition of anymous structs for GCC
#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#elif defined( _MSC_VER )
#pragma warning( push )
#pragma warning( disable : 4201 ) // C4201 - nonstandard extension used : nameless struct/union
#endif

/// \brief A vector of 4 floats with components xyzw.
/// Components are also stored as elements in an array via a union.
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

		float data[4];
	};


	/// Default constructor.  Initializes all values to zero.
	inline float4();

	/// Initializes all components of the vector to the given scalar value.
	inline explicit float4( const float x );

	/// Sets the xyzw members of the vector to the corresponding parameters.
	inline float4( const float x, const float y, const float z, const float w );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline float4( const float2& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline float4( const float3& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline float4( const float4& other );

	~float4() {}

	/// Copies the elements of the given vector via a single memcpy.
	inline float4 operator=( const float2& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline float4 operator=( const float3& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline float4 operator=( const float4& rhs );

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline const float& operator[]( const uint32_t index ) const;

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline float& operator[]( const uint32_t index );

	// swizzle funcs
	inline float2 xx() const;
	inline float2 yx() const;
	inline float2 xy() const;
	inline float2 yy() const;
	inline float3 xxx() const;
	inline float3 yxx() const;
	inline float3 zxx() const;
	inline float3 xyx() const;
	inline float3 yyx() const;
	inline float3 zyx() const;
	inline float3 xzx() const;
	inline float3 yzx() const;
	inline float3 zzx() const;
	inline float3 xxy() const;
	inline float3 yxy() const;
	inline float3 zxy() const;
	inline float3 xyy() const;
	inline float3 yyy() const;
	inline float3 zyy() const;
	inline float3 xzy() const;
	inline float3 yzy() const;
	inline float3 zzy() const;
	inline float3 xxz() const;
	inline float3 yxz() const;
	inline float3 zxz() const;
	inline float3 xyz() const;
	inline float3 yyz() const;
	inline float3 zyz() const;
	inline float3 xzz() const;
	inline float3 yzz() const;
	inline float3 zzz() const;
	inline float4 xxxx() const;
	inline float4 yxxx() const;
	inline float4 zxxx() const;
	inline float4 wxxx() const;
	inline float4 xyxx() const;
	inline float4 yyxx() const;
	inline float4 zyxx() const;
	inline float4 wyxx() const;
	inline float4 xzxx() const;
	inline float4 yzxx() const;
	inline float4 zzxx() const;
	inline float4 wzxx() const;
	inline float4 xwxx() const;
	inline float4 ywxx() const;
	inline float4 zwxx() const;
	inline float4 wwxx() const;
	inline float4 xxyx() const;
	inline float4 yxyx() const;
	inline float4 zxyx() const;
	inline float4 wxyx() const;
	inline float4 xyyx() const;
	inline float4 yyyx() const;
	inline float4 zyyx() const;
	inline float4 wyyx() const;
	inline float4 xzyx() const;
	inline float4 yzyx() const;
	inline float4 zzyx() const;
	inline float4 wzyx() const;
	inline float4 xwyx() const;
	inline float4 ywyx() const;
	inline float4 zwyx() const;
	inline float4 wwyx() const;
	inline float4 xxzx() const;
	inline float4 yxzx() const;
	inline float4 zxzx() const;
	inline float4 wxzx() const;
	inline float4 xyzx() const;
	inline float4 yyzx() const;
	inline float4 zyzx() const;
	inline float4 wyzx() const;
	inline float4 xzzx() const;
	inline float4 yzzx() const;
	inline float4 zzzx() const;
	inline float4 wzzx() const;
	inline float4 xwzx() const;
	inline float4 ywzx() const;
	inline float4 zwzx() const;
	inline float4 wwzx() const;
	inline float4 xxwx() const;
	inline float4 yxwx() const;
	inline float4 zxwx() const;
	inline float4 wxwx() const;
	inline float4 xywx() const;
	inline float4 yywx() const;
	inline float4 zywx() const;
	inline float4 wywx() const;
	inline float4 xzwx() const;
	inline float4 yzwx() const;
	inline float4 zzwx() const;
	inline float4 wzwx() const;
	inline float4 xwwx() const;
	inline float4 ywwx() const;
	inline float4 zwwx() const;
	inline float4 wwwx() const;
	inline float4 xxxy() const;
	inline float4 yxxy() const;
	inline float4 zxxy() const;
	inline float4 wxxy() const;
	inline float4 xyxy() const;
	inline float4 yyxy() const;
	inline float4 zyxy() const;
	inline float4 wyxy() const;
	inline float4 xzxy() const;
	inline float4 yzxy() const;
	inline float4 zzxy() const;
	inline float4 wzxy() const;
	inline float4 xwxy() const;
	inline float4 ywxy() const;
	inline float4 zwxy() const;
	inline float4 wwxy() const;
	inline float4 xxyy() const;
	inline float4 yxyy() const;
	inline float4 zxyy() const;
	inline float4 wxyy() const;
	inline float4 xyyy() const;
	inline float4 yyyy() const;
	inline float4 zyyy() const;
	inline float4 wyyy() const;
	inline float4 xzyy() const;
	inline float4 yzyy() const;
	inline float4 zzyy() const;
	inline float4 wzyy() const;
	inline float4 xwyy() const;
	inline float4 ywyy() const;
	inline float4 zwyy() const;
	inline float4 wwyy() const;
	inline float4 xxzy() const;
	inline float4 yxzy() const;
	inline float4 zxzy() const;
	inline float4 wxzy() const;
	inline float4 xyzy() const;
	inline float4 yyzy() const;
	inline float4 zyzy() const;
	inline float4 wyzy() const;
	inline float4 xzzy() const;
	inline float4 yzzy() const;
	inline float4 zzzy() const;
	inline float4 wzzy() const;
	inline float4 xwzy() const;
	inline float4 ywzy() const;
	inline float4 zwzy() const;
	inline float4 wwzy() const;
	inline float4 xxwy() const;
	inline float4 yxwy() const;
	inline float4 zxwy() const;
	inline float4 wxwy() const;
	inline float4 xywy() const;
	inline float4 yywy() const;
	inline float4 zywy() const;
	inline float4 wywy() const;
	inline float4 xzwy() const;
	inline float4 yzwy() const;
	inline float4 zzwy() const;
	inline float4 wzwy() const;
	inline float4 xwwy() const;
	inline float4 ywwy() const;
	inline float4 zwwy() const;
	inline float4 wwwy() const;
	inline float4 xxxz() const;
	inline float4 yxxz() const;
	inline float4 zxxz() const;
	inline float4 wxxz() const;
	inline float4 xyxz() const;
	inline float4 yyxz() const;
	inline float4 zyxz() const;
	inline float4 wyxz() const;
	inline float4 xzxz() const;
	inline float4 yzxz() const;
	inline float4 zzxz() const;
	inline float4 wzxz() const;
	inline float4 xwxz() const;
	inline float4 ywxz() const;
	inline float4 zwxz() const;
	inline float4 wwxz() const;
	inline float4 xxyz() const;
	inline float4 yxyz() const;
	inline float4 zxyz() const;
	inline float4 wxyz() const;
	inline float4 xyyz() const;
	inline float4 yyyz() const;
	inline float4 zyyz() const;
	inline float4 wyyz() const;
	inline float4 xzyz() const;
	inline float4 yzyz() const;
	inline float4 zzyz() const;
	inline float4 wzyz() const;
	inline float4 xwyz() const;
	inline float4 ywyz() const;
	inline float4 zwyz() const;
	inline float4 wwyz() const;
	inline float4 xxzz() const;
	inline float4 yxzz() const;
	inline float4 zxzz() const;
	inline float4 wxzz() const;
	inline float4 xyzz() const;
	inline float4 yyzz() const;
	inline float4 zyzz() const;
	inline float4 wyzz() const;
	inline float4 xzzz() const;
	inline float4 yzzz() const;
	inline float4 zzzz() const;
	inline float4 wzzz() const;
	inline float4 xwzz() const;
	inline float4 ywzz() const;
	inline float4 zwzz() const;
	inline float4 wwzz() const;
	inline float4 xxwz() const;
	inline float4 yxwz() const;
	inline float4 zxwz() const;
	inline float4 wxwz() const;
	inline float4 xywz() const;
	inline float4 yywz() const;
	inline float4 zywz() const;
	inline float4 wywz() const;
	inline float4 xzwz() const;
	inline float4 yzwz() const;
	inline float4 zzwz() const;
	inline float4 wzwz() const;
	inline float4 xwwz() const;
	inline float4 ywwz() const;
	inline float4 zwwz() const;
	inline float4 wwwz() const;
	inline float4 xxxw() const;
	inline float4 yxxw() const;
	inline float4 zxxw() const;
	inline float4 wxxw() const;
	inline float4 xyxw() const;
	inline float4 yyxw() const;
	inline float4 zyxw() const;
	inline float4 wyxw() const;
	inline float4 xzxw() const;
	inline float4 yzxw() const;
	inline float4 zzxw() const;
	inline float4 wzxw() const;
	inline float4 xwxw() const;
	inline float4 ywxw() const;
	inline float4 zwxw() const;
	inline float4 wwxw() const;
	inline float4 xxyw() const;
	inline float4 yxyw() const;
	inline float4 zxyw() const;
	inline float4 wxyw() const;
	inline float4 xyyw() const;
	inline float4 yyyw() const;
	inline float4 zyyw() const;
	inline float4 wyyw() const;
	inline float4 xzyw() const;
	inline float4 yzyw() const;
	inline float4 zzyw() const;
	inline float4 wzyw() const;
	inline float4 xwyw() const;
	inline float4 ywyw() const;
	inline float4 zwyw() const;
	inline float4 wwyw() const;
	inline float4 xxzw() const;
	inline float4 yxzw() const;
	inline float4 zxzw() const;
	inline float4 wxzw() const;
	inline float4 xyzw() const;
	inline float4 yyzw() const;
	inline float4 zyzw() const;
	inline float4 wyzw() const;
	inline float4 xzzw() const;
	inline float4 yzzw() const;
	inline float4 zzzw() const;
	inline float4 wzzw() const;
	inline float4 xwzw() const;
	inline float4 ywzw() const;
	inline float4 zwzw() const;
	inline float4 wwzw() const;
	inline float4 xxww() const;
	inline float4 yxww() const;
	inline float4 zxww() const;
	inline float4 wxww() const;
	inline float4 xyww() const;
	inline float4 yyww() const;
	inline float4 zyww() const;
	inline float4 wyww() const;
	inline float4 xzww() const;
	inline float4 yzww() const;
	inline float4 zzww() const;
	inline float4 wzww() const;
	inline float4 xwww() const;
	inline float4 ywww() const;
	inline float4 zwww() const;
	inline float4 wwww() const;
};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif

