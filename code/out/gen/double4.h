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
#include "../hlml_types.h"

struct double2;
struct double3;
struct float3;

// ignore prohibition of anymous structs for GCC
#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#elif defined( _MSC_VER )
#pragma warning( push )
#pragma warning( disable : 4201 ) // C4201 - nonstandard extension used : nameless struct/union
#endif

/// \brief A vector of 4 doubles with components xyzw and/or rgba.
/// Components are also stored as elements in an array via a union.
struct double4
{
	union
	{
		struct
		{
			double x;
			double y;
			double z;
			double w;
		};

		struct
		{
			double r;
			double g;
			double b;
			double a;
		};

		double data[4] = { 0 };
	};

	/// Default constructor.  Initializes all values to zero.
	inline double4();

	/// Initializes all components of the vector to the given scalar value.
	inline explicit double4( const double x );

	/// Sets the xyzw members of the vector to the corresponding parameters.
	inline double4( const double x, const double y, const double z, const double w );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline double4( const double2& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline double4( const double3& other );

	/// Copy constructor.  Copies the elements of the given vector via memcpy.
	inline double4( const double4& other );

	~double4() {}

	/// Copies the elements of the given vector via a single memcpy.
	inline double4 operator=( const double2& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline double4 operator=( const double3& rhs );

	/// Copies the elements of the given vector via a single memcpy.
	inline double4 operator=( const double4& rhs );

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline const double& operator[]( const uint32_t index ) const;

	/// \brief Returns the vector component at the given index.
	/// Index CANNOT be lower than 0 or higher than 3.
	inline double& operator[]( const uint32_t index );

	// swizzle funcs
	inline double2 xx() const { return double2( x, x ); }
	inline double2 yx() const { return double2( y, x ); }
	inline double2 xy() const { return double2( x, y ); }
	inline double2 yy() const { return double2( y, y ); }

	inline double3 xxx() const { return double3( x, x, x ); }
	inline double3 yxx() const { return double3( y, x, x ); }
	inline double3 zxx() const { return double3( z, x, x ); }
	inline double3 xyx() const { return double3( x, y, x ); }
	inline double3 yyx() const { return double3( y, y, x ); }
	inline double3 zyx() const { return double3( z, y, x ); }
	inline double3 xzx() const { return double3( x, z, x ); }
	inline double3 yzx() const { return double3( y, z, x ); }
	inline double3 zzx() const { return double3( z, z, x ); }
	inline double3 xxy() const { return double3( x, x, y ); }
	inline double3 yxy() const { return double3( y, x, y ); }
	inline double3 zxy() const { return double3( z, x, y ); }
	inline double3 xyy() const { return double3( x, y, y ); }
	inline double3 yyy() const { return double3( y, y, y ); }
	inline double3 zyy() const { return double3( z, y, y ); }
	inline double3 xzy() const { return double3( x, z, y ); }
	inline double3 yzy() const { return double3( y, z, y ); }
	inline double3 zzy() const { return double3( z, z, y ); }
	inline double3 xxz() const { return double3( x, x, z ); }
	inline double3 yxz() const { return double3( y, x, z ); }
	inline double3 zxz() const { return double3( z, x, z ); }
	inline double3 xyz() const { return double3( x, y, z ); }
	inline double3 yyz() const { return double3( y, y, z ); }
	inline double3 zyz() const { return double3( z, y, z ); }
	inline double3 xzz() const { return double3( x, z, z ); }
	inline double3 yzz() const { return double3( y, z, z ); }
	inline double3 zzz() const { return double3( z, z, z ); }

	inline double4 xxxx() const { return double4( x, x, x, x ); }
	inline double4 yxxx() const { return double4( y, x, x, x ); }
	inline double4 zxxx() const { return double4( z, x, x, x ); }
	inline double4 wxxx() const { return double4( w, x, x, x ); }
	inline double4 xyxx() const { return double4( x, y, x, x ); }
	inline double4 yyxx() const { return double4( y, y, x, x ); }
	inline double4 zyxx() const { return double4( z, y, x, x ); }
	inline double4 wyxx() const { return double4( w, y, x, x ); }
	inline double4 xzxx() const { return double4( x, z, x, x ); }
	inline double4 yzxx() const { return double4( y, z, x, x ); }
	inline double4 zzxx() const { return double4( z, z, x, x ); }
	inline double4 wzxx() const { return double4( w, z, x, x ); }
	inline double4 xwxx() const { return double4( x, w, x, x ); }
	inline double4 ywxx() const { return double4( y, w, x, x ); }
	inline double4 zwxx() const { return double4( z, w, x, x ); }
	inline double4 wwxx() const { return double4( w, w, x, x ); }
	inline double4 xxyx() const { return double4( x, x, y, x ); }
	inline double4 yxyx() const { return double4( y, x, y, x ); }
	inline double4 zxyx() const { return double4( z, x, y, x ); }
	inline double4 wxyx() const { return double4( w, x, y, x ); }
	inline double4 xyyx() const { return double4( x, y, y, x ); }
	inline double4 yyyx() const { return double4( y, y, y, x ); }
	inline double4 zyyx() const { return double4( z, y, y, x ); }
	inline double4 wyyx() const { return double4( w, y, y, x ); }
	inline double4 xzyx() const { return double4( x, z, y, x ); }
	inline double4 yzyx() const { return double4( y, z, y, x ); }
	inline double4 zzyx() const { return double4( z, z, y, x ); }
	inline double4 wzyx() const { return double4( w, z, y, x ); }
	inline double4 xwyx() const { return double4( x, w, y, x ); }
	inline double4 ywyx() const { return double4( y, w, y, x ); }
	inline double4 zwyx() const { return double4( z, w, y, x ); }
	inline double4 wwyx() const { return double4( w, w, y, x ); }
	inline double4 xxzx() const { return double4( x, x, z, x ); }
	inline double4 yxzx() const { return double4( y, x, z, x ); }
	inline double4 zxzx() const { return double4( z, x, z, x ); }
	inline double4 wxzx() const { return double4( w, x, z, x ); }
	inline double4 xyzx() const { return double4( x, y, z, x ); }
	inline double4 yyzx() const { return double4( y, y, z, x ); }
	inline double4 zyzx() const { return double4( z, y, z, x ); }
	inline double4 wyzx() const { return double4( w, y, z, x ); }
	inline double4 xzzx() const { return double4( x, z, z, x ); }
	inline double4 yzzx() const { return double4( y, z, z, x ); }
	inline double4 zzzx() const { return double4( z, z, z, x ); }
	inline double4 wzzx() const { return double4( w, z, z, x ); }
	inline double4 xwzx() const { return double4( x, w, z, x ); }
	inline double4 ywzx() const { return double4( y, w, z, x ); }
	inline double4 zwzx() const { return double4( z, w, z, x ); }
	inline double4 wwzx() const { return double4( w, w, z, x ); }
	inline double4 xxwx() const { return double4( x, x, w, x ); }
	inline double4 yxwx() const { return double4( y, x, w, x ); }
	inline double4 zxwx() const { return double4( z, x, w, x ); }
	inline double4 wxwx() const { return double4( w, x, w, x ); }
	inline double4 xywx() const { return double4( x, y, w, x ); }
	inline double4 yywx() const { return double4( y, y, w, x ); }
	inline double4 zywx() const { return double4( z, y, w, x ); }
	inline double4 wywx() const { return double4( w, y, w, x ); }
	inline double4 xzwx() const { return double4( x, z, w, x ); }
	inline double4 yzwx() const { return double4( y, z, w, x ); }
	inline double4 zzwx() const { return double4( z, z, w, x ); }
	inline double4 wzwx() const { return double4( w, z, w, x ); }
	inline double4 xwwx() const { return double4( x, w, w, x ); }
	inline double4 ywwx() const { return double4( y, w, w, x ); }
	inline double4 zwwx() const { return double4( z, w, w, x ); }
	inline double4 wwwx() const { return double4( w, w, w, x ); }
	inline double4 xxxy() const { return double4( x, x, x, y ); }
	inline double4 yxxy() const { return double4( y, x, x, y ); }
	inline double4 zxxy() const { return double4( z, x, x, y ); }
	inline double4 wxxy() const { return double4( w, x, x, y ); }
	inline double4 xyxy() const { return double4( x, y, x, y ); }
	inline double4 yyxy() const { return double4( y, y, x, y ); }
	inline double4 zyxy() const { return double4( z, y, x, y ); }
	inline double4 wyxy() const { return double4( w, y, x, y ); }
	inline double4 xzxy() const { return double4( x, z, x, y ); }
	inline double4 yzxy() const { return double4( y, z, x, y ); }
	inline double4 zzxy() const { return double4( z, z, x, y ); }
	inline double4 wzxy() const { return double4( w, z, x, y ); }
	inline double4 xwxy() const { return double4( x, w, x, y ); }
	inline double4 ywxy() const { return double4( y, w, x, y ); }
	inline double4 zwxy() const { return double4( z, w, x, y ); }
	inline double4 wwxy() const { return double4( w, w, x, y ); }
	inline double4 xxyy() const { return double4( x, x, y, y ); }
	inline double4 yxyy() const { return double4( y, x, y, y ); }
	inline double4 zxyy() const { return double4( z, x, y, y ); }
	inline double4 wxyy() const { return double4( w, x, y, y ); }
	inline double4 xyyy() const { return double4( x, y, y, y ); }
	inline double4 yyyy() const { return double4( y, y, y, y ); }
	inline double4 zyyy() const { return double4( z, y, y, y ); }
	inline double4 wyyy() const { return double4( w, y, y, y ); }
	inline double4 xzyy() const { return double4( x, z, y, y ); }
	inline double4 yzyy() const { return double4( y, z, y, y ); }
	inline double4 zzyy() const { return double4( z, z, y, y ); }
	inline double4 wzyy() const { return double4( w, z, y, y ); }
	inline double4 xwyy() const { return double4( x, w, y, y ); }
	inline double4 ywyy() const { return double4( y, w, y, y ); }
	inline double4 zwyy() const { return double4( z, w, y, y ); }
	inline double4 wwyy() const { return double4( w, w, y, y ); }
	inline double4 xxzy() const { return double4( x, x, z, y ); }
	inline double4 yxzy() const { return double4( y, x, z, y ); }
	inline double4 zxzy() const { return double4( z, x, z, y ); }
	inline double4 wxzy() const { return double4( w, x, z, y ); }
	inline double4 xyzy() const { return double4( x, y, z, y ); }
	inline double4 yyzy() const { return double4( y, y, z, y ); }
	inline double4 zyzy() const { return double4( z, y, z, y ); }
	inline double4 wyzy() const { return double4( w, y, z, y ); }
	inline double4 xzzy() const { return double4( x, z, z, y ); }
	inline double4 yzzy() const { return double4( y, z, z, y ); }
	inline double4 zzzy() const { return double4( z, z, z, y ); }
	inline double4 wzzy() const { return double4( w, z, z, y ); }
	inline double4 xwzy() const { return double4( x, w, z, y ); }
	inline double4 ywzy() const { return double4( y, w, z, y ); }
	inline double4 zwzy() const { return double4( z, w, z, y ); }
	inline double4 wwzy() const { return double4( w, w, z, y ); }
	inline double4 xxwy() const { return double4( x, x, w, y ); }
	inline double4 yxwy() const { return double4( y, x, w, y ); }
	inline double4 zxwy() const { return double4( z, x, w, y ); }
	inline double4 wxwy() const { return double4( w, x, w, y ); }
	inline double4 xywy() const { return double4( x, y, w, y ); }
	inline double4 yywy() const { return double4( y, y, w, y ); }
	inline double4 zywy() const { return double4( z, y, w, y ); }
	inline double4 wywy() const { return double4( w, y, w, y ); }
	inline double4 xzwy() const { return double4( x, z, w, y ); }
	inline double4 yzwy() const { return double4( y, z, w, y ); }
	inline double4 zzwy() const { return double4( z, z, w, y ); }
	inline double4 wzwy() const { return double4( w, z, w, y ); }
	inline double4 xwwy() const { return double4( x, w, w, y ); }
	inline double4 ywwy() const { return double4( y, w, w, y ); }
	inline double4 zwwy() const { return double4( z, w, w, y ); }
	inline double4 wwwy() const { return double4( w, w, w, y ); }
	inline double4 xxxz() const { return double4( x, x, x, z ); }
	inline double4 yxxz() const { return double4( y, x, x, z ); }
	inline double4 zxxz() const { return double4( z, x, x, z ); }
	inline double4 wxxz() const { return double4( w, x, x, z ); }
	inline double4 xyxz() const { return double4( x, y, x, z ); }
	inline double4 yyxz() const { return double4( y, y, x, z ); }
	inline double4 zyxz() const { return double4( z, y, x, z ); }
	inline double4 wyxz() const { return double4( w, y, x, z ); }
	inline double4 xzxz() const { return double4( x, z, x, z ); }
	inline double4 yzxz() const { return double4( y, z, x, z ); }
	inline double4 zzxz() const { return double4( z, z, x, z ); }
	inline double4 wzxz() const { return double4( w, z, x, z ); }
	inline double4 xwxz() const { return double4( x, w, x, z ); }
	inline double4 ywxz() const { return double4( y, w, x, z ); }
	inline double4 zwxz() const { return double4( z, w, x, z ); }
	inline double4 wwxz() const { return double4( w, w, x, z ); }
	inline double4 xxyz() const { return double4( x, x, y, z ); }
	inline double4 yxyz() const { return double4( y, x, y, z ); }
	inline double4 zxyz() const { return double4( z, x, y, z ); }
	inline double4 wxyz() const { return double4( w, x, y, z ); }
	inline double4 xyyz() const { return double4( x, y, y, z ); }
	inline double4 yyyz() const { return double4( y, y, y, z ); }
	inline double4 zyyz() const { return double4( z, y, y, z ); }
	inline double4 wyyz() const { return double4( w, y, y, z ); }
	inline double4 xzyz() const { return double4( x, z, y, z ); }
	inline double4 yzyz() const { return double4( y, z, y, z ); }
	inline double4 zzyz() const { return double4( z, z, y, z ); }
	inline double4 wzyz() const { return double4( w, z, y, z ); }
	inline double4 xwyz() const { return double4( x, w, y, z ); }
	inline double4 ywyz() const { return double4( y, w, y, z ); }
	inline double4 zwyz() const { return double4( z, w, y, z ); }
	inline double4 wwyz() const { return double4( w, w, y, z ); }
	inline double4 xxzz() const { return double4( x, x, z, z ); }
	inline double4 yxzz() const { return double4( y, x, z, z ); }
	inline double4 zxzz() const { return double4( z, x, z, z ); }
	inline double4 wxzz() const { return double4( w, x, z, z ); }
	inline double4 xyzz() const { return double4( x, y, z, z ); }
	inline double4 yyzz() const { return double4( y, y, z, z ); }
	inline double4 zyzz() const { return double4( z, y, z, z ); }
	inline double4 wyzz() const { return double4( w, y, z, z ); }
	inline double4 xzzz() const { return double4( x, z, z, z ); }
	inline double4 yzzz() const { return double4( y, z, z, z ); }
	inline double4 zzzz() const { return double4( z, z, z, z ); }
	inline double4 wzzz() const { return double4( w, z, z, z ); }
	inline double4 xwzz() const { return double4( x, w, z, z ); }
	inline double4 ywzz() const { return double4( y, w, z, z ); }
	inline double4 zwzz() const { return double4( z, w, z, z ); }
	inline double4 wwzz() const { return double4( w, w, z, z ); }
	inline double4 xxwz() const { return double4( x, x, w, z ); }
	inline double4 yxwz() const { return double4( y, x, w, z ); }
	inline double4 zxwz() const { return double4( z, x, w, z ); }
	inline double4 wxwz() const { return double4( w, x, w, z ); }
	inline double4 xywz() const { return double4( x, y, w, z ); }
	inline double4 yywz() const { return double4( y, y, w, z ); }
	inline double4 zywz() const { return double4( z, y, w, z ); }
	inline double4 wywz() const { return double4( w, y, w, z ); }
	inline double4 xzwz() const { return double4( x, z, w, z ); }
	inline double4 yzwz() const { return double4( y, z, w, z ); }
	inline double4 zzwz() const { return double4( z, z, w, z ); }
	inline double4 wzwz() const { return double4( w, z, w, z ); }
	inline double4 xwwz() const { return double4( x, w, w, z ); }
	inline double4 ywwz() const { return double4( y, w, w, z ); }
	inline double4 zwwz() const { return double4( z, w, w, z ); }
	inline double4 wwwz() const { return double4( w, w, w, z ); }
	inline double4 xxxw() const { return double4( x, x, x, w ); }
	inline double4 yxxw() const { return double4( y, x, x, w ); }
	inline double4 zxxw() const { return double4( z, x, x, w ); }
	inline double4 wxxw() const { return double4( w, x, x, w ); }
	inline double4 xyxw() const { return double4( x, y, x, w ); }
	inline double4 yyxw() const { return double4( y, y, x, w ); }
	inline double4 zyxw() const { return double4( z, y, x, w ); }
	inline double4 wyxw() const { return double4( w, y, x, w ); }
	inline double4 xzxw() const { return double4( x, z, x, w ); }
	inline double4 yzxw() const { return double4( y, z, x, w ); }
	inline double4 zzxw() const { return double4( z, z, x, w ); }
	inline double4 wzxw() const { return double4( w, z, x, w ); }
	inline double4 xwxw() const { return double4( x, w, x, w ); }
	inline double4 ywxw() const { return double4( y, w, x, w ); }
	inline double4 zwxw() const { return double4( z, w, x, w ); }
	inline double4 wwxw() const { return double4( w, w, x, w ); }
	inline double4 xxyw() const { return double4( x, x, y, w ); }
	inline double4 yxyw() const { return double4( y, x, y, w ); }
	inline double4 zxyw() const { return double4( z, x, y, w ); }
	inline double4 wxyw() const { return double4( w, x, y, w ); }
	inline double4 xyyw() const { return double4( x, y, y, w ); }
	inline double4 yyyw() const { return double4( y, y, y, w ); }
	inline double4 zyyw() const { return double4( z, y, y, w ); }
	inline double4 wyyw() const { return double4( w, y, y, w ); }
	inline double4 xzyw() const { return double4( x, z, y, w ); }
	inline double4 yzyw() const { return double4( y, z, y, w ); }
	inline double4 zzyw() const { return double4( z, z, y, w ); }
	inline double4 wzyw() const { return double4( w, z, y, w ); }
	inline double4 xwyw() const { return double4( x, w, y, w ); }
	inline double4 ywyw() const { return double4( y, w, y, w ); }
	inline double4 zwyw() const { return double4( z, w, y, w ); }
	inline double4 wwyw() const { return double4( w, w, y, w ); }
	inline double4 xxzw() const { return double4( x, x, z, w ); }
	inline double4 yxzw() const { return double4( y, x, z, w ); }
	inline double4 zxzw() const { return double4( z, x, z, w ); }
	inline double4 wxzw() const { return double4( w, x, z, w ); }
	inline double4 xyzw() const { return double4( x, y, z, w ); }
	inline double4 yyzw() const { return double4( y, y, z, w ); }
	inline double4 zyzw() const { return double4( z, y, z, w ); }
	inline double4 wyzw() const { return double4( w, y, z, w ); }
	inline double4 xzzw() const { return double4( x, z, z, w ); }
	inline double4 yzzw() const { return double4( y, z, z, w ); }
	inline double4 zzzw() const { return double4( z, z, z, w ); }
	inline double4 wzzw() const { return double4( w, z, z, w ); }
	inline double4 xwzw() const { return double4( x, w, z, w ); }
	inline double4 ywzw() const { return double4( y, w, z, w ); }
	inline double4 zwzw() const { return double4( z, w, z, w ); }
	inline double4 wwzw() const { return double4( w, w, z, w ); }
	inline double4 xxww() const { return double4( x, x, w, w ); }
	inline double4 yxww() const { return double4( y, x, w, w ); }
	inline double4 zxww() const { return double4( z, x, w, w ); }
	inline double4 wxww() const { return double4( w, x, w, w ); }
	inline double4 xyww() const { return double4( x, y, w, w ); }
	inline double4 yyww() const { return double4( y, y, w, w ); }
	inline double4 zyww() const { return double4( z, y, w, w ); }
	inline double4 wyww() const { return double4( w, y, w, w ); }
	inline double4 xzww() const { return double4( x, z, w, w ); }
	inline double4 yzww() const { return double4( y, z, w, w ); }
	inline double4 zzww() const { return double4( z, z, w, w ); }
	inline double4 wzww() const { return double4( w, z, w, w ); }
	inline double4 xwww() const { return double4( x, w, w, w ); }
	inline double4 ywww() const { return double4( y, w, w, w ); }
	inline double4 zwww() const { return double4( z, w, w, w ); }
	inline double4 wwww() const { return double4( w, w, w, w ); }

};

#if defined( __clang__ ) || defined( __GNUC__ )
#pragma GCC diagnostic pop
#elif defined( _MSC_VER )
#pragma warning( pop )
#endif

/// \relates double4
/// \brief Returns true if the all the components of the left-hand-side double4 match the other one, otherwise returns false.
inline bool operator==( const double4& lhs, const double4& rhs );

/// \relates double4
/// \brief Returns true if not all of the components of the left-hand-side double4 match the other one, otherwise returns false.
inline bool operator!=( const double4& lhs, const double4& rhs );

#include "double4.inl"
