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

#include "int4.h"

#include "hlml_defines.h"

int4::int4( const int32_t scalar )
{
	this->x = scalar;
	this->y = scalar;
	this->z = scalar;
	this->w = scalar;
}

int4::int4( const int32_t x, const int32_t y, const int32_t z, const int32_t w )
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

int4::int4( const int2& other )
{
	this->x = other.x;
	this->y = other.y;
}

int4::int4( const int3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

int4::int4( const int4& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	this->w = other.w;
}

int4 int4::operator=( const int2& other )
{
	this->x = other.x;
	this->y = other.y;

	return *this;
}

int4 int4::operator=( const int3& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;

	return *this;
}

int4 int4::operator=( const int4& other )
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	this->w = other.w;

	return *this;
}

int32_t& int4::operator[]( const int32_t index )
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return v[index];
}

const int32_t& int4::operator[]( const int32_t index ) const
{
	HLML_ASSERT( index >= 0 && index < 4 );
	return v[index];
}

// swizzle functions
int2 int4::xx() const { return int2( x, x ); }
int2 int4::xy() const { return int2( x, y ); }
int2 int4::xz() const { return int2( x, z ); }
int2 int4::xw() const { return int2( x, w ); }
int2 int4::yx() const { return int2( y, x ); }
int2 int4::yy() const { return int2( y, y ); }
int2 int4::yz() const { return int2( y, z ); }
int2 int4::yw() const { return int2( y, w ); }
int2 int4::zx() const { return int2( z, x ); }
int2 int4::zy() const { return int2( z, y ); }
int2 int4::zz() const { return int2( z, z ); }
int2 int4::zw() const { return int2( z, w ); }
int2 int4::wx() const { return int2( w, x ); }
int2 int4::wy() const { return int2( w, y ); }
int2 int4::wz() const { return int2( w, z ); }
int2 int4::ww() const { return int2( w, w ); }
int3 int4::xxx() const { return int3( x, x, x ); }
int3 int4::xxy() const { return int3( x, x, y ); }
int3 int4::xxz() const { return int3( x, x, z ); }
int3 int4::xxw() const { return int3( x, x, w ); }
int3 int4::xyx() const { return int3( x, y, x ); }
int3 int4::xyy() const { return int3( x, y, y ); }
int3 int4::xyz() const { return int3( x, y, z ); }
int3 int4::xyw() const { return int3( x, y, w ); }
int3 int4::xzx() const { return int3( x, z, x ); }
int3 int4::xzy() const { return int3( x, z, y ); }
int3 int4::xzz() const { return int3( x, z, z ); }
int3 int4::xzw() const { return int3( x, z, w ); }
int3 int4::xwx() const { return int3( x, w, x ); }
int3 int4::xwy() const { return int3( x, w, y ); }
int3 int4::xwz() const { return int3( x, w, z ); }
int3 int4::xww() const { return int3( x, w, w ); }
int3 int4::yxx() const { return int3( y, x, x ); }
int3 int4::yxy() const { return int3( y, x, y ); }
int3 int4::yxz() const { return int3( y, x, z ); }
int3 int4::yxw() const { return int3( y, x, w ); }
int3 int4::yyx() const { return int3( y, y, x ); }
int3 int4::yyy() const { return int3( y, y, y ); }
int3 int4::yyz() const { return int3( y, y, z ); }
int3 int4::yyw() const { return int3( y, y, w ); }
int3 int4::yzx() const { return int3( y, z, x ); }
int3 int4::yzy() const { return int3( y, z, y ); }
int3 int4::yzz() const { return int3( y, z, z ); }
int3 int4::yzw() const { return int3( y, z, w ); }
int3 int4::ywx() const { return int3( y, w, x ); }
int3 int4::ywy() const { return int3( y, w, y ); }
int3 int4::ywz() const { return int3( y, w, z ); }
int3 int4::yww() const { return int3( y, w, w ); }
int3 int4::zxx() const { return int3( z, x, x ); }
int3 int4::zxy() const { return int3( z, x, y ); }
int3 int4::zxz() const { return int3( z, x, z ); }
int3 int4::zxw() const { return int3( z, x, w ); }
int3 int4::zyx() const { return int3( z, y, x ); }
int3 int4::zyy() const { return int3( z, y, y ); }
int3 int4::zyz() const { return int3( z, y, z ); }
int3 int4::zyw() const { return int3( z, y, w ); }
int3 int4::zzx() const { return int3( z, z, x ); }
int3 int4::zzy() const { return int3( z, z, y ); }
int3 int4::zzz() const { return int3( z, z, z ); }
int3 int4::zzw() const { return int3( z, z, w ); }
int3 int4::zwx() const { return int3( z, w, x ); }
int3 int4::zwy() const { return int3( z, w, y ); }
int3 int4::zwz() const { return int3( z, w, z ); }
int3 int4::zww() const { return int3( z, w, w ); }
int3 int4::wxx() const { return int3( w, x, x ); }
int3 int4::wxy() const { return int3( w, x, y ); }
int3 int4::wxz() const { return int3( w, x, z ); }
int3 int4::wxw() const { return int3( w, x, w ); }
int3 int4::wyx() const { return int3( w, y, x ); }
int3 int4::wyy() const { return int3( w, y, y ); }
int3 int4::wyz() const { return int3( w, y, z ); }
int3 int4::wyw() const { return int3( w, y, w ); }
int3 int4::wzx() const { return int3( w, z, x ); }
int3 int4::wzy() const { return int3( w, z, y ); }
int3 int4::wzz() const { return int3( w, z, z ); }
int3 int4::wzw() const { return int3( w, z, w ); }
int3 int4::wwx() const { return int3( w, w, x ); }
int3 int4::wwy() const { return int3( w, w, y ); }
int3 int4::wwz() const { return int3( w, w, z ); }
int3 int4::www() const { return int3( w, w, w ); }
int4 int4::xxxx() const { return int4( x, x, x, x ); }
int4 int4::xxxy() const { return int4( x, x, x, y ); }
int4 int4::xxxz() const { return int4( x, x, x, z ); }
int4 int4::xxxw() const { return int4( x, x, x, w ); }
int4 int4::xxyx() const { return int4( x, x, y, x ); }
int4 int4::xxyy() const { return int4( x, x, y, y ); }
int4 int4::xxyz() const { return int4( x, x, y, z ); }
int4 int4::xxyw() const { return int4( x, x, y, w ); }
int4 int4::xxzx() const { return int4( x, x, z, x ); }
int4 int4::xxzy() const { return int4( x, x, z, y ); }
int4 int4::xxzz() const { return int4( x, x, z, z ); }
int4 int4::xxzw() const { return int4( x, x, z, w ); }
int4 int4::xxwx() const { return int4( x, x, w, x ); }
int4 int4::xxwy() const { return int4( x, x, w, y ); }
int4 int4::xxwz() const { return int4( x, x, w, z ); }
int4 int4::xxww() const { return int4( x, x, w, w ); }
int4 int4::xyxx() const { return int4( x, y, x, x ); }
int4 int4::xyxy() const { return int4( x, y, x, y ); }
int4 int4::xyxz() const { return int4( x, y, x, z ); }
int4 int4::xyxw() const { return int4( x, y, x, w ); }
int4 int4::xyyx() const { return int4( x, y, y, x ); }
int4 int4::xyyy() const { return int4( x, y, y, y ); }
int4 int4::xyyz() const { return int4( x, y, y, z ); }
int4 int4::xyyw() const { return int4( x, y, y, w ); }
int4 int4::xyzx() const { return int4( x, y, z, x ); }
int4 int4::xyzy() const { return int4( x, y, z, y ); }
int4 int4::xyzz() const { return int4( x, y, z, z ); }
int4 int4::xyzw() const { return int4( x, y, z, w ); }
int4 int4::xywx() const { return int4( x, y, w, x ); }
int4 int4::xywy() const { return int4( x, y, w, y ); }
int4 int4::xywz() const { return int4( x, y, w, z ); }
int4 int4::xyww() const { return int4( x, y, w, w ); }
int4 int4::xzxx() const { return int4( x, z, x, x ); }
int4 int4::xzxy() const { return int4( x, z, x, y ); }
int4 int4::xzxz() const { return int4( x, z, x, z ); }
int4 int4::xzxw() const { return int4( x, z, x, w ); }
int4 int4::xzyx() const { return int4( x, z, y, x ); }
int4 int4::xzyy() const { return int4( x, z, y, y ); }
int4 int4::xzyz() const { return int4( x, z, y, z ); }
int4 int4::xzyw() const { return int4( x, z, y, w ); }
int4 int4::xzzx() const { return int4( x, z, z, x ); }
int4 int4::xzzy() const { return int4( x, z, z, y ); }
int4 int4::xzzz() const { return int4( x, z, z, z ); }
int4 int4::xzzw() const { return int4( x, z, z, w ); }
int4 int4::xzwx() const { return int4( x, z, w, x ); }
int4 int4::xzwy() const { return int4( x, z, w, y ); }
int4 int4::xzwz() const { return int4( x, z, w, z ); }
int4 int4::xzww() const { return int4( x, z, w, w ); }
int4 int4::xwxx() const { return int4( x, w, x, x ); }
int4 int4::xwxy() const { return int4( x, w, x, y ); }
int4 int4::xwxz() const { return int4( x, w, x, z ); }
int4 int4::xwxw() const { return int4( x, w, x, w ); }
int4 int4::xwyx() const { return int4( x, w, y, x ); }
int4 int4::xwyy() const { return int4( x, w, y, y ); }
int4 int4::xwyz() const { return int4( x, w, y, z ); }
int4 int4::xwyw() const { return int4( x, w, y, w ); }
int4 int4::xwzx() const { return int4( x, w, z, x ); }
int4 int4::xwzy() const { return int4( x, w, z, y ); }
int4 int4::xwzz() const { return int4( x, w, z, z ); }
int4 int4::xwzw() const { return int4( x, w, z, w ); }
int4 int4::xwwx() const { return int4( x, w, w, x ); }
int4 int4::xwwy() const { return int4( x, w, w, y ); }
int4 int4::xwwz() const { return int4( x, w, w, z ); }
int4 int4::xwww() const { return int4( x, w, w, w ); }
int4 int4::yxxx() const { return int4( y, x, x, x ); }
int4 int4::yxxy() const { return int4( y, x, x, y ); }
int4 int4::yxxz() const { return int4( y, x, x, z ); }
int4 int4::yxxw() const { return int4( y, x, x, w ); }
int4 int4::yxyx() const { return int4( y, x, y, x ); }
int4 int4::yxyy() const { return int4( y, x, y, y ); }
int4 int4::yxyz() const { return int4( y, x, y, z ); }
int4 int4::yxyw() const { return int4( y, x, y, w ); }
int4 int4::yxzx() const { return int4( y, x, z, x ); }
int4 int4::yxzy() const { return int4( y, x, z, y ); }
int4 int4::yxzz() const { return int4( y, x, z, z ); }
int4 int4::yxzw() const { return int4( y, x, z, w ); }
int4 int4::yxwx() const { return int4( y, x, w, x ); }
int4 int4::yxwy() const { return int4( y, x, w, y ); }
int4 int4::yxwz() const { return int4( y, x, w, z ); }
int4 int4::yxww() const { return int4( y, x, w, w ); }
int4 int4::yyxx() const { return int4( y, y, x, x ); }
int4 int4::yyxy() const { return int4( y, y, x, y ); }
int4 int4::yyxz() const { return int4( y, y, x, z ); }
int4 int4::yyxw() const { return int4( y, y, x, w ); }
int4 int4::yyyx() const { return int4( y, y, y, x ); }
int4 int4::yyyy() const { return int4( y, y, y, y ); }
int4 int4::yyyz() const { return int4( y, y, y, z ); }
int4 int4::yyyw() const { return int4( y, y, y, w ); }
int4 int4::yyzx() const { return int4( y, y, z, x ); }
int4 int4::yyzy() const { return int4( y, y, z, y ); }
int4 int4::yyzz() const { return int4( y, y, z, z ); }
int4 int4::yyzw() const { return int4( y, y, z, w ); }
int4 int4::yywx() const { return int4( y, y, w, x ); }
int4 int4::yywy() const { return int4( y, y, w, y ); }
int4 int4::yywz() const { return int4( y, y, w, z ); }
int4 int4::yyww() const { return int4( y, y, w, w ); }
int4 int4::yzxx() const { return int4( y, z, x, x ); }
int4 int4::yzxy() const { return int4( y, z, x, y ); }
int4 int4::yzxz() const { return int4( y, z, x, z ); }
int4 int4::yzxw() const { return int4( y, z, x, w ); }
int4 int4::yzyx() const { return int4( y, z, y, x ); }
int4 int4::yzyy() const { return int4( y, z, y, y ); }
int4 int4::yzyz() const { return int4( y, z, y, z ); }
int4 int4::yzyw() const { return int4( y, z, y, w ); }
int4 int4::yzzx() const { return int4( y, z, z, x ); }
int4 int4::yzzy() const { return int4( y, z, z, y ); }
int4 int4::yzzz() const { return int4( y, z, z, z ); }
int4 int4::yzzw() const { return int4( y, z, z, w ); }
int4 int4::yzwx() const { return int4( y, z, w, x ); }
int4 int4::yzwy() const { return int4( y, z, w, y ); }
int4 int4::yzwz() const { return int4( y, z, w, z ); }
int4 int4::yzww() const { return int4( y, z, w, w ); }
int4 int4::ywxx() const { return int4( y, w, x, x ); }
int4 int4::ywxy() const { return int4( y, w, x, y ); }
int4 int4::ywxz() const { return int4( y, w, x, z ); }
int4 int4::ywxw() const { return int4( y, w, x, w ); }
int4 int4::ywyx() const { return int4( y, w, y, x ); }
int4 int4::ywyy() const { return int4( y, w, y, y ); }
int4 int4::ywyz() const { return int4( y, w, y, z ); }
int4 int4::ywyw() const { return int4( y, w, y, w ); }
int4 int4::ywzx() const { return int4( y, w, z, x ); }
int4 int4::ywzy() const { return int4( y, w, z, y ); }
int4 int4::ywzz() const { return int4( y, w, z, z ); }
int4 int4::ywzw() const { return int4( y, w, z, w ); }
int4 int4::ywwx() const { return int4( y, w, w, x ); }
int4 int4::ywwy() const { return int4( y, w, w, y ); }
int4 int4::ywwz() const { return int4( y, w, w, z ); }
int4 int4::ywww() const { return int4( y, w, w, w ); }
int4 int4::zxxx() const { return int4( z, x, x, x ); }
int4 int4::zxxy() const { return int4( z, x, x, y ); }
int4 int4::zxxz() const { return int4( z, x, x, z ); }
int4 int4::zxxw() const { return int4( z, x, x, w ); }
int4 int4::zxyx() const { return int4( z, x, y, x ); }
int4 int4::zxyy() const { return int4( z, x, y, y ); }
int4 int4::zxyz() const { return int4( z, x, y, z ); }
int4 int4::zxyw() const { return int4( z, x, y, w ); }
int4 int4::zxzx() const { return int4( z, x, z, x ); }
int4 int4::zxzy() const { return int4( z, x, z, y ); }
int4 int4::zxzz() const { return int4( z, x, z, z ); }
int4 int4::zxzw() const { return int4( z, x, z, w ); }
int4 int4::zxwx() const { return int4( z, x, w, x ); }
int4 int4::zxwy() const { return int4( z, x, w, y ); }
int4 int4::zxwz() const { return int4( z, x, w, z ); }
int4 int4::zxww() const { return int4( z, x, w, w ); }
int4 int4::zyxx() const { return int4( z, y, x, x ); }
int4 int4::zyxy() const { return int4( z, y, x, y ); }
int4 int4::zyxz() const { return int4( z, y, x, z ); }
int4 int4::zyxw() const { return int4( z, y, x, w ); }
int4 int4::zyyx() const { return int4( z, y, y, x ); }
int4 int4::zyyy() const { return int4( z, y, y, y ); }
int4 int4::zyyz() const { return int4( z, y, y, z ); }
int4 int4::zyyw() const { return int4( z, y, y, w ); }
int4 int4::zyzx() const { return int4( z, y, z, x ); }
int4 int4::zyzy() const { return int4( z, y, z, y ); }
int4 int4::zyzz() const { return int4( z, y, z, z ); }
int4 int4::zyzw() const { return int4( z, y, z, w ); }
int4 int4::zywx() const { return int4( z, y, w, x ); }
int4 int4::zywy() const { return int4( z, y, w, y ); }
int4 int4::zywz() const { return int4( z, y, w, z ); }
int4 int4::zyww() const { return int4( z, y, w, w ); }
int4 int4::zzxx() const { return int4( z, z, x, x ); }
int4 int4::zzxy() const { return int4( z, z, x, y ); }
int4 int4::zzxz() const { return int4( z, z, x, z ); }
int4 int4::zzxw() const { return int4( z, z, x, w ); }
int4 int4::zzyx() const { return int4( z, z, y, x ); }
int4 int4::zzyy() const { return int4( z, z, y, y ); }
int4 int4::zzyz() const { return int4( z, z, y, z ); }
int4 int4::zzyw() const { return int4( z, z, y, w ); }
int4 int4::zzzx() const { return int4( z, z, z, x ); }
int4 int4::zzzy() const { return int4( z, z, z, y ); }
int4 int4::zzzz() const { return int4( z, z, z, z ); }
int4 int4::zzzw() const { return int4( z, z, z, w ); }
int4 int4::zzwx() const { return int4( z, z, w, x ); }
int4 int4::zzwy() const { return int4( z, z, w, y ); }
int4 int4::zzwz() const { return int4( z, z, w, z ); }
int4 int4::zzww() const { return int4( z, z, w, w ); }
int4 int4::zwxx() const { return int4( z, w, x, x ); }
int4 int4::zwxy() const { return int4( z, w, x, y ); }
int4 int4::zwxz() const { return int4( z, w, x, z ); }
int4 int4::zwxw() const { return int4( z, w, x, w ); }
int4 int4::zwyx() const { return int4( z, w, y, x ); }
int4 int4::zwyy() const { return int4( z, w, y, y ); }
int4 int4::zwyz() const { return int4( z, w, y, z ); }
int4 int4::zwyw() const { return int4( z, w, y, w ); }
int4 int4::zwzx() const { return int4( z, w, z, x ); }
int4 int4::zwzy() const { return int4( z, w, z, y ); }
int4 int4::zwzz() const { return int4( z, w, z, z ); }
int4 int4::zwzw() const { return int4( z, w, z, w ); }
int4 int4::zwwx() const { return int4( z, w, w, x ); }
int4 int4::zwwy() const { return int4( z, w, w, y ); }
int4 int4::zwwz() const { return int4( z, w, w, z ); }
int4 int4::zwww() const { return int4( z, w, w, w ); }
int4 int4::wxxx() const { return int4( w, x, x, x ); }
int4 int4::wxxy() const { return int4( w, x, x, y ); }
int4 int4::wxxz() const { return int4( w, x, x, z ); }
int4 int4::wxxw() const { return int4( w, x, x, w ); }
int4 int4::wxyx() const { return int4( w, x, y, x ); }
int4 int4::wxyy() const { return int4( w, x, y, y ); }
int4 int4::wxyz() const { return int4( w, x, y, z ); }
int4 int4::wxyw() const { return int4( w, x, y, w ); }
int4 int4::wxzx() const { return int4( w, x, z, x ); }
int4 int4::wxzy() const { return int4( w, x, z, y ); }
int4 int4::wxzz() const { return int4( w, x, z, z ); }
int4 int4::wxzw() const { return int4( w, x, z, w ); }
int4 int4::wxwx() const { return int4( w, x, w, x ); }
int4 int4::wxwy() const { return int4( w, x, w, y ); }
int4 int4::wxwz() const { return int4( w, x, w, z ); }
int4 int4::wxww() const { return int4( w, x, w, w ); }
int4 int4::wyxx() const { return int4( w, y, x, x ); }
int4 int4::wyxy() const { return int4( w, y, x, y ); }
int4 int4::wyxz() const { return int4( w, y, x, z ); }
int4 int4::wyxw() const { return int4( w, y, x, w ); }
int4 int4::wyyx() const { return int4( w, y, y, x ); }
int4 int4::wyyy() const { return int4( w, y, y, y ); }
int4 int4::wyyz() const { return int4( w, y, y, z ); }
int4 int4::wyyw() const { return int4( w, y, y, w ); }
int4 int4::wyzx() const { return int4( w, y, z, x ); }
int4 int4::wyzy() const { return int4( w, y, z, y ); }
int4 int4::wyzz() const { return int4( w, y, z, z ); }
int4 int4::wyzw() const { return int4( w, y, z, w ); }
int4 int4::wywx() const { return int4( w, y, w, x ); }
int4 int4::wywy() const { return int4( w, y, w, y ); }
int4 int4::wywz() const { return int4( w, y, w, z ); }
int4 int4::wyww() const { return int4( w, y, w, w ); }
int4 int4::wzxx() const { return int4( w, z, x, x ); }
int4 int4::wzxy() const { return int4( w, z, x, y ); }
int4 int4::wzxz() const { return int4( w, z, x, z ); }
int4 int4::wzxw() const { return int4( w, z, x, w ); }
int4 int4::wzyx() const { return int4( w, z, y, x ); }
int4 int4::wzyy() const { return int4( w, z, y, y ); }
int4 int4::wzyz() const { return int4( w, z, y, z ); }
int4 int4::wzyw() const { return int4( w, z, y, w ); }
int4 int4::wzzx() const { return int4( w, z, z, x ); }
int4 int4::wzzy() const { return int4( w, z, z, y ); }
int4 int4::wzzz() const { return int4( w, z, z, z ); }
int4 int4::wzzw() const { return int4( w, z, z, w ); }
int4 int4::wzwx() const { return int4( w, z, w, x ); }
int4 int4::wzwy() const { return int4( w, z, w, y ); }
int4 int4::wzwz() const { return int4( w, z, w, z ); }
int4 int4::wzww() const { return int4( w, z, w, w ); }
int4 int4::wwxx() const { return int4( w, w, x, x ); }
int4 int4::wwxy() const { return int4( w, w, x, y ); }
int4 int4::wwxz() const { return int4( w, w, x, z ); }
int4 int4::wwxw() const { return int4( w, w, x, w ); }
int4 int4::wwyx() const { return int4( w, w, y, x ); }
int4 int4::wwyy() const { return int4( w, w, y, y ); }
int4 int4::wwyz() const { return int4( w, w, y, z ); }
int4 int4::wwyw() const { return int4( w, w, y, w ); }
int4 int4::wwzx() const { return int4( w, w, z, x ); }
int4 int4::wwzy() const { return int4( w, w, z, y ); }
int4 int4::wwzz() const { return int4( w, w, z, z ); }
int4 int4::wwzw() const { return int4( w, w, z, w ); }
int4 int4::wwwx() const { return int4( w, w, w, x ); }
int4 int4::wwwy() const { return int4( w, w, w, y ); }
int4 int4::wwwz() const { return int4( w, w, w, z ); }
int4 int4::wwww() const { return int4( w, w, w, w ); }

int2 int4::rr() const { return int2( r, r ); }
int2 int4::rg() const { return int2( r, g ); }
int2 int4::rb() const { return int2( r, b ); }
int2 int4::ra() const { return int2( r, a ); }
int2 int4::gr() const { return int2( g, r ); }
int2 int4::gg() const { return int2( g, g ); }
int2 int4::gb() const { return int2( g, b ); }
int2 int4::ga() const { return int2( g, a ); }
int2 int4::br() const { return int2( b, r ); }
int2 int4::bg() const { return int2( b, g ); }
int2 int4::bb() const { return int2( b, b ); }
int2 int4::ba() const { return int2( b, a ); }
int2 int4::ar() const { return int2( a, r ); }
int2 int4::ag() const { return int2( a, g ); }
int2 int4::ab() const { return int2( a, b ); }
int2 int4::aa() const { return int2( a, a ); }
int3 int4::rrr() const { return int3( r, r, r ); }
int3 int4::rrg() const { return int3( r, r, g ); }
int3 int4::rrb() const { return int3( r, r, b ); }
int3 int4::rra() const { return int3( r, r, a ); }
int3 int4::rgr() const { return int3( r, g, r ); }
int3 int4::rgg() const { return int3( r, g, g ); }
int3 int4::rgb() const { return int3( r, g, b ); }
int3 int4::rga() const { return int3( r, g, a ); }
int3 int4::rbr() const { return int3( r, b, r ); }
int3 int4::rbg() const { return int3( r, b, g ); }
int3 int4::rbb() const { return int3( r, b, b ); }
int3 int4::rba() const { return int3( r, b, a ); }
int3 int4::rar() const { return int3( r, a, r ); }
int3 int4::rag() const { return int3( r, a, g ); }
int3 int4::rab() const { return int3( r, a, b ); }
int3 int4::raa() const { return int3( r, a, a ); }
int3 int4::grr() const { return int3( g, r, r ); }
int3 int4::grg() const { return int3( g, r, g ); }
int3 int4::grb() const { return int3( g, r, b ); }
int3 int4::gra() const { return int3( g, r, a ); }
int3 int4::ggr() const { return int3( g, g, r ); }
int3 int4::ggg() const { return int3( g, g, g ); }
int3 int4::ggb() const { return int3( g, g, b ); }
int3 int4::gga() const { return int3( g, g, a ); }
int3 int4::gbr() const { return int3( g, b, r ); }
int3 int4::gbg() const { return int3( g, b, g ); }
int3 int4::gbb() const { return int3( g, b, b ); }
int3 int4::gba() const { return int3( g, b, a ); }
int3 int4::gar() const { return int3( g, a, r ); }
int3 int4::gag() const { return int3( g, a, g ); }
int3 int4::gab() const { return int3( g, a, b ); }
int3 int4::gaa() const { return int3( g, a, a ); }
int3 int4::brr() const { return int3( b, r, r ); }
int3 int4::brg() const { return int3( b, r, g ); }
int3 int4::brb() const { return int3( b, r, b ); }
int3 int4::bra() const { return int3( b, r, a ); }
int3 int4::bgr() const { return int3( b, g, r ); }
int3 int4::bgg() const { return int3( b, g, g ); }
int3 int4::bgb() const { return int3( b, g, b ); }
int3 int4::bga() const { return int3( b, g, a ); }
int3 int4::bbr() const { return int3( b, b, r ); }
int3 int4::bbg() const { return int3( b, b, g ); }
int3 int4::bbb() const { return int3( b, b, b ); }
int3 int4::bba() const { return int3( b, b, a ); }
int3 int4::bar() const { return int3( b, a, r ); }
int3 int4::bag() const { return int3( b, a, g ); }
int3 int4::bab() const { return int3( b, a, b ); }
int3 int4::baa() const { return int3( b, a, a ); }
int3 int4::arr() const { return int3( a, r, r ); }
int3 int4::arg() const { return int3( a, r, g ); }
int3 int4::arb() const { return int3( a, r, b ); }
int3 int4::ara() const { return int3( a, r, a ); }
int3 int4::agr() const { return int3( a, g, r ); }
int3 int4::agg() const { return int3( a, g, g ); }
int3 int4::agb() const { return int3( a, g, b ); }
int3 int4::aga() const { return int3( a, g, a ); }
int3 int4::abr() const { return int3( a, b, r ); }
int3 int4::abg() const { return int3( a, b, g ); }
int3 int4::abb() const { return int3( a, b, b ); }
int3 int4::aba() const { return int3( a, b, a ); }
int3 int4::aar() const { return int3( a, a, r ); }
int3 int4::aag() const { return int3( a, a, g ); }
int3 int4::aab() const { return int3( a, a, b ); }
int3 int4::aaa() const { return int3( a, a, a ); }
int4 int4::rrrr() const { return int4( r, r, r, r ); }
int4 int4::rrrg() const { return int4( r, r, r, g ); }
int4 int4::rrrb() const { return int4( r, r, r, b ); }
int4 int4::rrra() const { return int4( r, r, r, a ); }
int4 int4::rrgr() const { return int4( r, r, g, r ); }
int4 int4::rrgg() const { return int4( r, r, g, g ); }
int4 int4::rrgb() const { return int4( r, r, g, b ); }
int4 int4::rrga() const { return int4( r, r, g, a ); }
int4 int4::rrbr() const { return int4( r, r, b, r ); }
int4 int4::rrbg() const { return int4( r, r, b, g ); }
int4 int4::rrbb() const { return int4( r, r, b, b ); }
int4 int4::rrba() const { return int4( r, r, b, a ); }
int4 int4::rrar() const { return int4( r, r, a, r ); }
int4 int4::rrag() const { return int4( r, r, a, g ); }
int4 int4::rrab() const { return int4( r, r, a, b ); }
int4 int4::rraa() const { return int4( r, r, a, a ); }
int4 int4::rgrr() const { return int4( r, g, r, r ); }
int4 int4::rgrg() const { return int4( r, g, r, g ); }
int4 int4::rgrb() const { return int4( r, g, r, b ); }
int4 int4::rgra() const { return int4( r, g, r, a ); }
int4 int4::rggr() const { return int4( r, g, g, r ); }
int4 int4::rggg() const { return int4( r, g, g, g ); }
int4 int4::rggb() const { return int4( r, g, g, b ); }
int4 int4::rgga() const { return int4( r, g, g, a ); }
int4 int4::rgbr() const { return int4( r, g, b, r ); }
int4 int4::rgbg() const { return int4( r, g, b, g ); }
int4 int4::rgbb() const { return int4( r, g, b, b ); }
int4 int4::rgba() const { return int4( r, g, b, a ); }
int4 int4::rgar() const { return int4( r, g, a, r ); }
int4 int4::rgag() const { return int4( r, g, a, g ); }
int4 int4::rgab() const { return int4( r, g, a, b ); }
int4 int4::rgaa() const { return int4( r, g, a, a ); }
int4 int4::rbrr() const { return int4( r, b, r, r ); }
int4 int4::rbrg() const { return int4( r, b, r, g ); }
int4 int4::rbrb() const { return int4( r, b, r, b ); }
int4 int4::rbra() const { return int4( r, b, r, a ); }
int4 int4::rbgr() const { return int4( r, b, g, r ); }
int4 int4::rbgg() const { return int4( r, b, g, g ); }
int4 int4::rbgb() const { return int4( r, b, g, b ); }
int4 int4::rbga() const { return int4( r, b, g, a ); }
int4 int4::rbbr() const { return int4( r, b, b, r ); }
int4 int4::rbbg() const { return int4( r, b, b, g ); }
int4 int4::rbbb() const { return int4( r, b, b, b ); }
int4 int4::rbba() const { return int4( r, b, b, a ); }
int4 int4::rbar() const { return int4( r, b, a, r ); }
int4 int4::rbag() const { return int4( r, b, a, g ); }
int4 int4::rbab() const { return int4( r, b, a, b ); }
int4 int4::rbaa() const { return int4( r, b, a, a ); }
int4 int4::rarr() const { return int4( r, a, r, r ); }
int4 int4::rarg() const { return int4( r, a, r, g ); }
int4 int4::rarb() const { return int4( r, a, r, b ); }
int4 int4::rara() const { return int4( r, a, r, a ); }
int4 int4::ragr() const { return int4( r, a, g, r ); }
int4 int4::ragg() const { return int4( r, a, g, g ); }
int4 int4::ragb() const { return int4( r, a, g, b ); }
int4 int4::raga() const { return int4( r, a, g, a ); }
int4 int4::rabr() const { return int4( r, a, b, r ); }
int4 int4::rabg() const { return int4( r, a, b, g ); }
int4 int4::rabb() const { return int4( r, a, b, b ); }
int4 int4::raba() const { return int4( r, a, b, a ); }
int4 int4::raar() const { return int4( r, a, a, r ); }
int4 int4::raag() const { return int4( r, a, a, g ); }
int4 int4::raab() const { return int4( r, a, a, b ); }
int4 int4::raaa() const { return int4( r, a, a, a ); }
int4 int4::grrr() const { return int4( g, r, r, r ); }
int4 int4::grrg() const { return int4( g, r, r, g ); }
int4 int4::grrb() const { return int4( g, r, r, b ); }
int4 int4::grra() const { return int4( g, r, r, a ); }
int4 int4::grgr() const { return int4( g, r, g, r ); }
int4 int4::grgg() const { return int4( g, r, g, g ); }
int4 int4::grgb() const { return int4( g, r, g, b ); }
int4 int4::grga() const { return int4( g, r, g, a ); }
int4 int4::grbr() const { return int4( g, r, b, r ); }
int4 int4::grbg() const { return int4( g, r, b, g ); }
int4 int4::grbb() const { return int4( g, r, b, b ); }
int4 int4::grba() const { return int4( g, r, b, a ); }
int4 int4::grar() const { return int4( g, r, a, r ); }
int4 int4::grag() const { return int4( g, r, a, g ); }
int4 int4::grab() const { return int4( g, r, a, b ); }
int4 int4::graa() const { return int4( g, r, a, a ); }
int4 int4::ggrr() const { return int4( g, g, r, r ); }
int4 int4::ggrg() const { return int4( g, g, r, g ); }
int4 int4::ggrb() const { return int4( g, g, r, b ); }
int4 int4::ggra() const { return int4( g, g, r, a ); }
int4 int4::gggr() const { return int4( g, g, g, r ); }
int4 int4::gggg() const { return int4( g, g, g, g ); }
int4 int4::gggb() const { return int4( g, g, g, b ); }
int4 int4::ggga() const { return int4( g, g, g, a ); }
int4 int4::ggbr() const { return int4( g, g, b, r ); }
int4 int4::ggbg() const { return int4( g, g, b, g ); }
int4 int4::ggbb() const { return int4( g, g, b, b ); }
int4 int4::ggba() const { return int4( g, g, b, a ); }
int4 int4::ggar() const { return int4( g, g, a, r ); }
int4 int4::ggag() const { return int4( g, g, a, g ); }
int4 int4::ggab() const { return int4( g, g, a, b ); }
int4 int4::ggaa() const { return int4( g, g, a, a ); }
int4 int4::gbrr() const { return int4( g, b, r, r ); }
int4 int4::gbrg() const { return int4( g, b, r, g ); }
int4 int4::gbrb() const { return int4( g, b, r, b ); }
int4 int4::gbra() const { return int4( g, b, r, a ); }
int4 int4::gbgr() const { return int4( g, b, g, r ); }
int4 int4::gbgg() const { return int4( g, b, g, g ); }
int4 int4::gbgb() const { return int4( g, b, g, b ); }
int4 int4::gbga() const { return int4( g, b, g, a ); }
int4 int4::gbbr() const { return int4( g, b, b, r ); }
int4 int4::gbbg() const { return int4( g, b, b, g ); }
int4 int4::gbbb() const { return int4( g, b, b, b ); }
int4 int4::gbba() const { return int4( g, b, b, a ); }
int4 int4::gbar() const { return int4( g, b, a, r ); }
int4 int4::gbag() const { return int4( g, b, a, g ); }
int4 int4::gbab() const { return int4( g, b, a, b ); }
int4 int4::gbaa() const { return int4( g, b, a, a ); }
int4 int4::garr() const { return int4( g, a, r, r ); }
int4 int4::garg() const { return int4( g, a, r, g ); }
int4 int4::garb() const { return int4( g, a, r, b ); }
int4 int4::gara() const { return int4( g, a, r, a ); }
int4 int4::gagr() const { return int4( g, a, g, r ); }
int4 int4::gagg() const { return int4( g, a, g, g ); }
int4 int4::gagb() const { return int4( g, a, g, b ); }
int4 int4::gaga() const { return int4( g, a, g, a ); }
int4 int4::gabr() const { return int4( g, a, b, r ); }
int4 int4::gabg() const { return int4( g, a, b, g ); }
int4 int4::gabb() const { return int4( g, a, b, b ); }
int4 int4::gaba() const { return int4( g, a, b, a ); }
int4 int4::gaar() const { return int4( g, a, a, r ); }
int4 int4::gaag() const { return int4( g, a, a, g ); }
int4 int4::gaab() const { return int4( g, a, a, b ); }
int4 int4::gaaa() const { return int4( g, a, a, a ); }
int4 int4::brrr() const { return int4( b, r, r, r ); }
int4 int4::brrg() const { return int4( b, r, r, g ); }
int4 int4::brrb() const { return int4( b, r, r, b ); }
int4 int4::brra() const { return int4( b, r, r, a ); }
int4 int4::brgr() const { return int4( b, r, g, r ); }
int4 int4::brgg() const { return int4( b, r, g, g ); }
int4 int4::brgb() const { return int4( b, r, g, b ); }
int4 int4::brga() const { return int4( b, r, g, a ); }
int4 int4::brbr() const { return int4( b, r, b, r ); }
int4 int4::brbg() const { return int4( b, r, b, g ); }
int4 int4::brbb() const { return int4( b, r, b, b ); }
int4 int4::brba() const { return int4( b, r, b, a ); }
int4 int4::brar() const { return int4( b, r, a, r ); }
int4 int4::brag() const { return int4( b, r, a, g ); }
int4 int4::brab() const { return int4( b, r, a, b ); }
int4 int4::braa() const { return int4( b, r, a, a ); }
int4 int4::bgrr() const { return int4( b, g, r, r ); }
int4 int4::bgrg() const { return int4( b, g, r, g ); }
int4 int4::bgrb() const { return int4( b, g, r, b ); }
int4 int4::bgra() const { return int4( b, g, r, a ); }
int4 int4::bggr() const { return int4( b, g, g, r ); }
int4 int4::bggg() const { return int4( b, g, g, g ); }
int4 int4::bggb() const { return int4( b, g, g, b ); }
int4 int4::bgga() const { return int4( b, g, g, a ); }
int4 int4::bgbr() const { return int4( b, g, b, r ); }
int4 int4::bgbg() const { return int4( b, g, b, g ); }
int4 int4::bgbb() const { return int4( b, g, b, b ); }
int4 int4::bgba() const { return int4( b, g, b, a ); }
int4 int4::bgar() const { return int4( b, g, a, r ); }
int4 int4::bgag() const { return int4( b, g, a, g ); }
int4 int4::bgab() const { return int4( b, g, a, b ); }
int4 int4::bgaa() const { return int4( b, g, a, a ); }
int4 int4::bbrr() const { return int4( b, b, r, r ); }
int4 int4::bbrg() const { return int4( b, b, r, g ); }
int4 int4::bbrb() const { return int4( b, b, r, b ); }
int4 int4::bbra() const { return int4( b, b, r, a ); }
int4 int4::bbgr() const { return int4( b, b, g, r ); }
int4 int4::bbgg() const { return int4( b, b, g, g ); }
int4 int4::bbgb() const { return int4( b, b, g, b ); }
int4 int4::bbga() const { return int4( b, b, g, a ); }
int4 int4::bbbr() const { return int4( b, b, b, r ); }
int4 int4::bbbg() const { return int4( b, b, b, g ); }
int4 int4::bbbb() const { return int4( b, b, b, b ); }
int4 int4::bbba() const { return int4( b, b, b, a ); }
int4 int4::bbar() const { return int4( b, b, a, r ); }
int4 int4::bbag() const { return int4( b, b, a, g ); }
int4 int4::bbab() const { return int4( b, b, a, b ); }
int4 int4::bbaa() const { return int4( b, b, a, a ); }
int4 int4::barr() const { return int4( b, a, r, r ); }
int4 int4::barg() const { return int4( b, a, r, g ); }
int4 int4::barb() const { return int4( b, a, r, b ); }
int4 int4::bara() const { return int4( b, a, r, a ); }
int4 int4::bagr() const { return int4( b, a, g, r ); }
int4 int4::bagg() const { return int4( b, a, g, g ); }
int4 int4::bagb() const { return int4( b, a, g, b ); }
int4 int4::baga() const { return int4( b, a, g, a ); }
int4 int4::babr() const { return int4( b, a, b, r ); }
int4 int4::babg() const { return int4( b, a, b, g ); }
int4 int4::babb() const { return int4( b, a, b, b ); }
int4 int4::baba() const { return int4( b, a, b, a ); }
int4 int4::baar() const { return int4( b, a, a, r ); }
int4 int4::baag() const { return int4( b, a, a, g ); }
int4 int4::baab() const { return int4( b, a, a, b ); }
int4 int4::baaa() const { return int4( b, a, a, a ); }
int4 int4::arrr() const { return int4( a, r, r, r ); }
int4 int4::arrg() const { return int4( a, r, r, g ); }
int4 int4::arrb() const { return int4( a, r, r, b ); }
int4 int4::arra() const { return int4( a, r, r, a ); }
int4 int4::argr() const { return int4( a, r, g, r ); }
int4 int4::argg() const { return int4( a, r, g, g ); }
int4 int4::argb() const { return int4( a, r, g, b ); }
int4 int4::arga() const { return int4( a, r, g, a ); }
int4 int4::arbr() const { return int4( a, r, b, r ); }
int4 int4::arbg() const { return int4( a, r, b, g ); }
int4 int4::arbb() const { return int4( a, r, b, b ); }
int4 int4::arba() const { return int4( a, r, b, a ); }
int4 int4::arar() const { return int4( a, r, a, r ); }
int4 int4::arag() const { return int4( a, r, a, g ); }
int4 int4::arab() const { return int4( a, r, a, b ); }
int4 int4::araa() const { return int4( a, r, a, a ); }
int4 int4::agrr() const { return int4( a, g, r, r ); }
int4 int4::agrg() const { return int4( a, g, r, g ); }
int4 int4::agrb() const { return int4( a, g, r, b ); }
int4 int4::agra() const { return int4( a, g, r, a ); }
int4 int4::aggr() const { return int4( a, g, g, r ); }
int4 int4::aggg() const { return int4( a, g, g, g ); }
int4 int4::aggb() const { return int4( a, g, g, b ); }
int4 int4::agga() const { return int4( a, g, g, a ); }
int4 int4::agbr() const { return int4( a, g, b, r ); }
int4 int4::agbg() const { return int4( a, g, b, g ); }
int4 int4::agbb() const { return int4( a, g, b, b ); }
int4 int4::agba() const { return int4( a, g, b, a ); }
int4 int4::agar() const { return int4( a, g, a, r ); }
int4 int4::agag() const { return int4( a, g, a, g ); }
int4 int4::agab() const { return int4( a, g, a, b ); }
int4 int4::agaa() const { return int4( a, g, a, a ); }
int4 int4::abrr() const { return int4( a, b, r, r ); }
int4 int4::abrg() const { return int4( a, b, r, g ); }
int4 int4::abrb() const { return int4( a, b, r, b ); }
int4 int4::abra() const { return int4( a, b, r, a ); }
int4 int4::abgr() const { return int4( a, b, g, r ); }
int4 int4::abgg() const { return int4( a, b, g, g ); }
int4 int4::abgb() const { return int4( a, b, g, b ); }
int4 int4::abga() const { return int4( a, b, g, a ); }
int4 int4::abbr() const { return int4( a, b, b, r ); }
int4 int4::abbg() const { return int4( a, b, b, g ); }
int4 int4::abbb() const { return int4( a, b, b, b ); }
int4 int4::abba() const { return int4( a, b, b, a ); }
int4 int4::abar() const { return int4( a, b, a, r ); }
int4 int4::abag() const { return int4( a, b, a, g ); }
int4 int4::abab() const { return int4( a, b, a, b ); }
int4 int4::abaa() const { return int4( a, b, a, a ); }
int4 int4::aarr() const { return int4( a, a, r, r ); }
int4 int4::aarg() const { return int4( a, a, r, g ); }
int4 int4::aarb() const { return int4( a, a, r, b ); }
int4 int4::aara() const { return int4( a, a, r, a ); }
int4 int4::aagr() const { return int4( a, a, g, r ); }
int4 int4::aagg() const { return int4( a, a, g, g ); }
int4 int4::aagb() const { return int4( a, a, g, b ); }
int4 int4::aaga() const { return int4( a, a, g, a ); }
int4 int4::aabr() const { return int4( a, a, b, r ); }
int4 int4::aabg() const { return int4( a, a, b, g ); }
int4 int4::aabb() const { return int4( a, a, b, b ); }
int4 int4::aaba() const { return int4( a, a, b, a ); }
int4 int4::aaar() const { return int4( a, a, a, r ); }
int4 int4::aaag() const { return int4( a, a, a, g ); }
int4 int4::aaab() const { return int4( a, a, a, b ); }
int4 int4::aaaa() const { return int4( a, a, a, a ); }
