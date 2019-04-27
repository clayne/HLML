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

#include "bool4.h"

#include <stdint.h>

struct int2;
struct int3;
struct float3;

// ignore prohibition of anymous structs for GCC
#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#endif

/// \brief A vector of 4 int32_ts with components xyzw and/or rgba.
/// Components are also stored as elements in an array via a union.
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

		int32_t data[4] = { 0 };
	};

	/// Default constructor.  Initializes all values to zero.
	inline int4();

	/// Initializes all components of the vector to the given scalar value.
	inline explicit int4( const int32_t x );

	/// Sets the xyzw members of the vector to the corresponding parameters.
	inline int4( const int32_t x, const int32_t y, const int32_t z, const int32_t w );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int4( const int2& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int4( const int3& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline int4( const int4& other );

	~int4() {}

	/// Copies the elements of the given vector via a single memcpy.
	inline int4 operator=( const int2& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline int4 operator=( const int3& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline int4 operator=( const int4& rhs );

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline const int32_t& operator[]( const uint32_t index ) const;

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline int32_t& operator[]( const uint32_t index );

	// swizzle funcs
	inline int2 xx() const { return int2( x, x ); }
	inline int2 yx() const { return int2( y, x ); }
	inline int2 xy() const { return int2( x, y ); }
	inline int2 yy() const { return int2( y, y ); }

	inline int3 xxx() const { return int3( x, x, x ); }
	inline int3 yxx() const { return int3( y, x, x ); }
	inline int3 zxx() const { return int3( z, x, x ); }
	inline int3 xyx() const { return int3( x, y, x ); }
	inline int3 yyx() const { return int3( y, y, x ); }
	inline int3 zyx() const { return int3( z, y, x ); }
	inline int3 xzx() const { return int3( x, z, x ); }
	inline int3 yzx() const { return int3( y, z, x ); }
	inline int3 zzx() const { return int3( z, z, x ); }
	inline int3 xxy() const { return int3( x, x, y ); }
	inline int3 yxy() const { return int3( y, x, y ); }
	inline int3 zxy() const { return int3( z, x, y ); }
	inline int3 xyy() const { return int3( x, y, y ); }
	inline int3 yyy() const { return int3( y, y, y ); }
	inline int3 zyy() const { return int3( z, y, y ); }
	inline int3 xzy() const { return int3( x, z, y ); }
	inline int3 yzy() const { return int3( y, z, y ); }
	inline int3 zzy() const { return int3( z, z, y ); }
	inline int3 xxz() const { return int3( x, x, z ); }
	inline int3 yxz() const { return int3( y, x, z ); }
	inline int3 zxz() const { return int3( z, x, z ); }
	inline int3 xyz() const { return int3( x, y, z ); }
	inline int3 yyz() const { return int3( y, y, z ); }
	inline int3 zyz() const { return int3( z, y, z ); }
	inline int3 xzz() const { return int3( x, z, z ); }
	inline int3 yzz() const { return int3( y, z, z ); }
	inline int3 zzz() const { return int3( z, z, z ); }

	inline int4 xxxx() const { return int4( x, x, x, x ); }
	inline int4 yxxx() const { return int4( y, x, x, x ); }
	inline int4 zxxx() const { return int4( z, x, x, x ); }
	inline int4 wxxx() const { return int4( w, x, x, x ); }
	inline int4 xyxx() const { return int4( x, y, x, x ); }
	inline int4 yyxx() const { return int4( y, y, x, x ); }
	inline int4 zyxx() const { return int4( z, y, x, x ); }
	inline int4 wyxx() const { return int4( w, y, x, x ); }
	inline int4 xzxx() const { return int4( x, z, x, x ); }
	inline int4 yzxx() const { return int4( y, z, x, x ); }
	inline int4 zzxx() const { return int4( z, z, x, x ); }
	inline int4 wzxx() const { return int4( w, z, x, x ); }
	inline int4 xwxx() const { return int4( x, w, x, x ); }
	inline int4 ywxx() const { return int4( y, w, x, x ); }
	inline int4 zwxx() const { return int4( z, w, x, x ); }
	inline int4 wwxx() const { return int4( w, w, x, x ); }
	inline int4 xxyx() const { return int4( x, x, y, x ); }
	inline int4 yxyx() const { return int4( y, x, y, x ); }
	inline int4 zxyx() const { return int4( z, x, y, x ); }
	inline int4 wxyx() const { return int4( w, x, y, x ); }
	inline int4 xyyx() const { return int4( x, y, y, x ); }
	inline int4 yyyx() const { return int4( y, y, y, x ); }
	inline int4 zyyx() const { return int4( z, y, y, x ); }
	inline int4 wyyx() const { return int4( w, y, y, x ); }
	inline int4 xzyx() const { return int4( x, z, y, x ); }
	inline int4 yzyx() const { return int4( y, z, y, x ); }
	inline int4 zzyx() const { return int4( z, z, y, x ); }
	inline int4 wzyx() const { return int4( w, z, y, x ); }
	inline int4 xwyx() const { return int4( x, w, y, x ); }
	inline int4 ywyx() const { return int4( y, w, y, x ); }
	inline int4 zwyx() const { return int4( z, w, y, x ); }
	inline int4 wwyx() const { return int4( w, w, y, x ); }
	inline int4 xxzx() const { return int4( x, x, z, x ); }
	inline int4 yxzx() const { return int4( y, x, z, x ); }
	inline int4 zxzx() const { return int4( z, x, z, x ); }
	inline int4 wxzx() const { return int4( w, x, z, x ); }
	inline int4 xyzx() const { return int4( x, y, z, x ); }
	inline int4 yyzx() const { return int4( y, y, z, x ); }
	inline int4 zyzx() const { return int4( z, y, z, x ); }
	inline int4 wyzx() const { return int4( w, y, z, x ); }
	inline int4 xzzx() const { return int4( x, z, z, x ); }
	inline int4 yzzx() const { return int4( y, z, z, x ); }
	inline int4 zzzx() const { return int4( z, z, z, x ); }
	inline int4 wzzx() const { return int4( w, z, z, x ); }
	inline int4 xwzx() const { return int4( x, w, z, x ); }
	inline int4 ywzx() const { return int4( y, w, z, x ); }
	inline int4 zwzx() const { return int4( z, w, z, x ); }
	inline int4 wwzx() const { return int4( w, w, z, x ); }
	inline int4 xxwx() const { return int4( x, x, w, x ); }
	inline int4 yxwx() const { return int4( y, x, w, x ); }
	inline int4 zxwx() const { return int4( z, x, w, x ); }
	inline int4 wxwx() const { return int4( w, x, w, x ); }
	inline int4 xywx() const { return int4( x, y, w, x ); }
	inline int4 yywx() const { return int4( y, y, w, x ); }
	inline int4 zywx() const { return int4( z, y, w, x ); }
	inline int4 wywx() const { return int4( w, y, w, x ); }
	inline int4 xzwx() const { return int4( x, z, w, x ); }
	inline int4 yzwx() const { return int4( y, z, w, x ); }
	inline int4 zzwx() const { return int4( z, z, w, x ); }
	inline int4 wzwx() const { return int4( w, z, w, x ); }
	inline int4 xwwx() const { return int4( x, w, w, x ); }
	inline int4 ywwx() const { return int4( y, w, w, x ); }
	inline int4 zwwx() const { return int4( z, w, w, x ); }
	inline int4 wwwx() const { return int4( w, w, w, x ); }
	inline int4 xxxy() const { return int4( x, x, x, y ); }
	inline int4 yxxy() const { return int4( y, x, x, y ); }
	inline int4 zxxy() const { return int4( z, x, x, y ); }
	inline int4 wxxy() const { return int4( w, x, x, y ); }
	inline int4 xyxy() const { return int4( x, y, x, y ); }
	inline int4 yyxy() const { return int4( y, y, x, y ); }
	inline int4 zyxy() const { return int4( z, y, x, y ); }
	inline int4 wyxy() const { return int4( w, y, x, y ); }
	inline int4 xzxy() const { return int4( x, z, x, y ); }
	inline int4 yzxy() const { return int4( y, z, x, y ); }
	inline int4 zzxy() const { return int4( z, z, x, y ); }
	inline int4 wzxy() const { return int4( w, z, x, y ); }
	inline int4 xwxy() const { return int4( x, w, x, y ); }
	inline int4 ywxy() const { return int4( y, w, x, y ); }
	inline int4 zwxy() const { return int4( z, w, x, y ); }
	inline int4 wwxy() const { return int4( w, w, x, y ); }
	inline int4 xxyy() const { return int4( x, x, y, y ); }
	inline int4 yxyy() const { return int4( y, x, y, y ); }
	inline int4 zxyy() const { return int4( z, x, y, y ); }
	inline int4 wxyy() const { return int4( w, x, y, y ); }
	inline int4 xyyy() const { return int4( x, y, y, y ); }
	inline int4 yyyy() const { return int4( y, y, y, y ); }
	inline int4 zyyy() const { return int4( z, y, y, y ); }
	inline int4 wyyy() const { return int4( w, y, y, y ); }
	inline int4 xzyy() const { return int4( x, z, y, y ); }
	inline int4 yzyy() const { return int4( y, z, y, y ); }
	inline int4 zzyy() const { return int4( z, z, y, y ); }
	inline int4 wzyy() const { return int4( w, z, y, y ); }
	inline int4 xwyy() const { return int4( x, w, y, y ); }
	inline int4 ywyy() const { return int4( y, w, y, y ); }
	inline int4 zwyy() const { return int4( z, w, y, y ); }
	inline int4 wwyy() const { return int4( w, w, y, y ); }
	inline int4 xxzy() const { return int4( x, x, z, y ); }
	inline int4 yxzy() const { return int4( y, x, z, y ); }
	inline int4 zxzy() const { return int4( z, x, z, y ); }
	inline int4 wxzy() const { return int4( w, x, z, y ); }
	inline int4 xyzy() const { return int4( x, y, z, y ); }
	inline int4 yyzy() const { return int4( y, y, z, y ); }
	inline int4 zyzy() const { return int4( z, y, z, y ); }
	inline int4 wyzy() const { return int4( w, y, z, y ); }
	inline int4 xzzy() const { return int4( x, z, z, y ); }
	inline int4 yzzy() const { return int4( y, z, z, y ); }
	inline int4 zzzy() const { return int4( z, z, z, y ); }
	inline int4 wzzy() const { return int4( w, z, z, y ); }
	inline int4 xwzy() const { return int4( x, w, z, y ); }
	inline int4 ywzy() const { return int4( y, w, z, y ); }
	inline int4 zwzy() const { return int4( z, w, z, y ); }
	inline int4 wwzy() const { return int4( w, w, z, y ); }
	inline int4 xxwy() const { return int4( x, x, w, y ); }
	inline int4 yxwy() const { return int4( y, x, w, y ); }
	inline int4 zxwy() const { return int4( z, x, w, y ); }
	inline int4 wxwy() const { return int4( w, x, w, y ); }
	inline int4 xywy() const { return int4( x, y, w, y ); }
	inline int4 yywy() const { return int4( y, y, w, y ); }
	inline int4 zywy() const { return int4( z, y, w, y ); }
	inline int4 wywy() const { return int4( w, y, w, y ); }
	inline int4 xzwy() const { return int4( x, z, w, y ); }
	inline int4 yzwy() const { return int4( y, z, w, y ); }
	inline int4 zzwy() const { return int4( z, z, w, y ); }
	inline int4 wzwy() const { return int4( w, z, w, y ); }
	inline int4 xwwy() const { return int4( x, w, w, y ); }
	inline int4 ywwy() const { return int4( y, w, w, y ); }
	inline int4 zwwy() const { return int4( z, w, w, y ); }
	inline int4 wwwy() const { return int4( w, w, w, y ); }
	inline int4 xxxz() const { return int4( x, x, x, z ); }
	inline int4 yxxz() const { return int4( y, x, x, z ); }
	inline int4 zxxz() const { return int4( z, x, x, z ); }
	inline int4 wxxz() const { return int4( w, x, x, z ); }
	inline int4 xyxz() const { return int4( x, y, x, z ); }
	inline int4 yyxz() const { return int4( y, y, x, z ); }
	inline int4 zyxz() const { return int4( z, y, x, z ); }
	inline int4 wyxz() const { return int4( w, y, x, z ); }
	inline int4 xzxz() const { return int4( x, z, x, z ); }
	inline int4 yzxz() const { return int4( y, z, x, z ); }
	inline int4 zzxz() const { return int4( z, z, x, z ); }
	inline int4 wzxz() const { return int4( w, z, x, z ); }
	inline int4 xwxz() const { return int4( x, w, x, z ); }
	inline int4 ywxz() const { return int4( y, w, x, z ); }
	inline int4 zwxz() const { return int4( z, w, x, z ); }
	inline int4 wwxz() const { return int4( w, w, x, z ); }
	inline int4 xxyz() const { return int4( x, x, y, z ); }
	inline int4 yxyz() const { return int4( y, x, y, z ); }
	inline int4 zxyz() const { return int4( z, x, y, z ); }
	inline int4 wxyz() const { return int4( w, x, y, z ); }
	inline int4 xyyz() const { return int4( x, y, y, z ); }
	inline int4 yyyz() const { return int4( y, y, y, z ); }
	inline int4 zyyz() const { return int4( z, y, y, z ); }
	inline int4 wyyz() const { return int4( w, y, y, z ); }
	inline int4 xzyz() const { return int4( x, z, y, z ); }
	inline int4 yzyz() const { return int4( y, z, y, z ); }
	inline int4 zzyz() const { return int4( z, z, y, z ); }
	inline int4 wzyz() const { return int4( w, z, y, z ); }
	inline int4 xwyz() const { return int4( x, w, y, z ); }
	inline int4 ywyz() const { return int4( y, w, y, z ); }
	inline int4 zwyz() const { return int4( z, w, y, z ); }
	inline int4 wwyz() const { return int4( w, w, y, z ); }
	inline int4 xxzz() const { return int4( x, x, z, z ); }
	inline int4 yxzz() const { return int4( y, x, z, z ); }
	inline int4 zxzz() const { return int4( z, x, z, z ); }
	inline int4 wxzz() const { return int4( w, x, z, z ); }
	inline int4 xyzz() const { return int4( x, y, z, z ); }
	inline int4 yyzz() const { return int4( y, y, z, z ); }
	inline int4 zyzz() const { return int4( z, y, z, z ); }
	inline int4 wyzz() const { return int4( w, y, z, z ); }
	inline int4 xzzz() const { return int4( x, z, z, z ); }
	inline int4 yzzz() const { return int4( y, z, z, z ); }
	inline int4 zzzz() const { return int4( z, z, z, z ); }
	inline int4 wzzz() const { return int4( w, z, z, z ); }
	inline int4 xwzz() const { return int4( x, w, z, z ); }
	inline int4 ywzz() const { return int4( y, w, z, z ); }
	inline int4 zwzz() const { return int4( z, w, z, z ); }
	inline int4 wwzz() const { return int4( w, w, z, z ); }
	inline int4 xxwz() const { return int4( x, x, w, z ); }
	inline int4 yxwz() const { return int4( y, x, w, z ); }
	inline int4 zxwz() const { return int4( z, x, w, z ); }
	inline int4 wxwz() const { return int4( w, x, w, z ); }
	inline int4 xywz() const { return int4( x, y, w, z ); }
	inline int4 yywz() const { return int4( y, y, w, z ); }
	inline int4 zywz() const { return int4( z, y, w, z ); }
	inline int4 wywz() const { return int4( w, y, w, z ); }
	inline int4 xzwz() const { return int4( x, z, w, z ); }
	inline int4 yzwz() const { return int4( y, z, w, z ); }
	inline int4 zzwz() const { return int4( z, z, w, z ); }
	inline int4 wzwz() const { return int4( w, z, w, z ); }
	inline int4 xwwz() const { return int4( x, w, w, z ); }
	inline int4 ywwz() const { return int4( y, w, w, z ); }
	inline int4 zwwz() const { return int4( z, w, w, z ); }
	inline int4 wwwz() const { return int4( w, w, w, z ); }
	inline int4 xxxw() const { return int4( x, x, x, w ); }
	inline int4 yxxw() const { return int4( y, x, x, w ); }
	inline int4 zxxw() const { return int4( z, x, x, w ); }
	inline int4 wxxw() const { return int4( w, x, x, w ); }
	inline int4 xyxw() const { return int4( x, y, x, w ); }
	inline int4 yyxw() const { return int4( y, y, x, w ); }
	inline int4 zyxw() const { return int4( z, y, x, w ); }
	inline int4 wyxw() const { return int4( w, y, x, w ); }
	inline int4 xzxw() const { return int4( x, z, x, w ); }
	inline int4 yzxw() const { return int4( y, z, x, w ); }
	inline int4 zzxw() const { return int4( z, z, x, w ); }
	inline int4 wzxw() const { return int4( w, z, x, w ); }
	inline int4 xwxw() const { return int4( x, w, x, w ); }
	inline int4 ywxw() const { return int4( y, w, x, w ); }
	inline int4 zwxw() const { return int4( z, w, x, w ); }
	inline int4 wwxw() const { return int4( w, w, x, w ); }
	inline int4 xxyw() const { return int4( x, x, y, w ); }
	inline int4 yxyw() const { return int4( y, x, y, w ); }
	inline int4 zxyw() const { return int4( z, x, y, w ); }
	inline int4 wxyw() const { return int4( w, x, y, w ); }
	inline int4 xyyw() const { return int4( x, y, y, w ); }
	inline int4 yyyw() const { return int4( y, y, y, w ); }
	inline int4 zyyw() const { return int4( z, y, y, w ); }
	inline int4 wyyw() const { return int4( w, y, y, w ); }
	inline int4 xzyw() const { return int4( x, z, y, w ); }
	inline int4 yzyw() const { return int4( y, z, y, w ); }
	inline int4 zzyw() const { return int4( z, z, y, w ); }
	inline int4 wzyw() const { return int4( w, z, y, w ); }
	inline int4 xwyw() const { return int4( x, w, y, w ); }
	inline int4 ywyw() const { return int4( y, w, y, w ); }
	inline int4 zwyw() const { return int4( z, w, y, w ); }
	inline int4 wwyw() const { return int4( w, w, y, w ); }
	inline int4 xxzw() const { return int4( x, x, z, w ); }
	inline int4 yxzw() const { return int4( y, x, z, w ); }
	inline int4 zxzw() const { return int4( z, x, z, w ); }
	inline int4 wxzw() const { return int4( w, x, z, w ); }
	inline int4 xyzw() const { return int4( x, y, z, w ); }
	inline int4 yyzw() const { return int4( y, y, z, w ); }
	inline int4 zyzw() const { return int4( z, y, z, w ); }
	inline int4 wyzw() const { return int4( w, y, z, w ); }
	inline int4 xzzw() const { return int4( x, z, z, w ); }
	inline int4 yzzw() const { return int4( y, z, z, w ); }
	inline int4 zzzw() const { return int4( z, z, z, w ); }
	inline int4 wzzw() const { return int4( w, z, z, w ); }
	inline int4 xwzw() const { return int4( x, w, z, w ); }
	inline int4 ywzw() const { return int4( y, w, z, w ); }
	inline int4 zwzw() const { return int4( z, w, z, w ); }
	inline int4 wwzw() const { return int4( w, w, z, w ); }
	inline int4 xxww() const { return int4( x, x, w, w ); }
	inline int4 yxww() const { return int4( y, x, w, w ); }
	inline int4 zxww() const { return int4( z, x, w, w ); }
	inline int4 wxww() const { return int4( w, x, w, w ); }
	inline int4 xyww() const { return int4( x, y, w, w ); }
	inline int4 yyww() const { return int4( y, y, w, w ); }
	inline int4 zyww() const { return int4( z, y, w, w ); }
	inline int4 wyww() const { return int4( w, y, w, w ); }
	inline int4 xzww() const { return int4( x, z, w, w ); }
	inline int4 yzww() const { return int4( y, z, w, w ); }
	inline int4 zzww() const { return int4( z, z, w, w ); }
	inline int4 wzww() const { return int4( w, z, w, w ); }
	inline int4 xwww() const { return int4( x, w, w, w ); }
	inline int4 ywww() const { return int4( y, w, w, w ); }
	inline int4 zwww() const { return int4( z, w, w, w ); }
	inline int4 wwww() const { return int4( w, w, w, w ); }

};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#endif

/// \relates int4
/// \brief Returns true if the all the components of the left-hand-side int4 match the other one, otherwise returns false.
inline bool operator==( const int4& lhs, const int4& rhs );

/// \relates int4
/// \brief Returns true if not all of the components of the left-hand-side int4 match the other one, otherwise returns false.
inline bool operator!=( const int4& lhs, const int4& rhs );

#include "int4.inl"
