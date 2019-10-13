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

// hlml includes
#include "bool2.h"
#include "bool3.h"
#include "bool4.h"

// others
#include <math.h>
#include <memory.h>
#include <assert.h>

bool4::bool4()
{
	memset( data, 0, 4 * sizeof( bool32_t ) );
}

bool4::bool4( const bool32_t x )
{
	this->x = this->y = this->z = this->w = x;
}

bool4::bool4( const bool32_t x, const bool32_t y, const bool32_t z, const bool32_t w )
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

bool4::bool4( const bool2& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

bool4::bool4( const bool3& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

bool4::bool4( const bool4& other )
{
	memcpy( data, other.data, sizeof( other.data ) );
}

bool4 bool4::operator=( const bool2& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

bool4 bool4::operator=( const bool3& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

bool4 bool4::operator=( const bool4& rhs )
{
	memcpy( data, rhs.data, sizeof( rhs.data ) );
	return *this;
}

const bool32_t& bool4::operator[]( const uint32_t index ) const
{
	assert( index < 4 );
	return data[index];
}

bool32_t& bool4::operator[]( const uint32_t index )
{
	assert( index < 4 );
	return data[index];
}

bool2 bool4::xx() const { return bool2( x, x ); }
bool2 bool4::yx() const { return bool2( y, x ); }
bool2 bool4::xy() const { return bool2( x, y ); }
bool2 bool4::yy() const { return bool2( y, y ); }

bool3 bool4::xxx() const { return bool3( x, x, x ); }
bool3 bool4::yxx() const { return bool3( y, x, x ); }
bool3 bool4::zxx() const { return bool3( z, x, x ); }
bool3 bool4::xyx() const { return bool3( x, y, x ); }
bool3 bool4::yyx() const { return bool3( y, y, x ); }
bool3 bool4::zyx() const { return bool3( z, y, x ); }
bool3 bool4::xzx() const { return bool3( x, z, x ); }
bool3 bool4::yzx() const { return bool3( y, z, x ); }
bool3 bool4::zzx() const { return bool3( z, z, x ); }
bool3 bool4::xxy() const { return bool3( x, x, y ); }
bool3 bool4::yxy() const { return bool3( y, x, y ); }
bool3 bool4::zxy() const { return bool3( z, x, y ); }
bool3 bool4::xyy() const { return bool3( x, y, y ); }
bool3 bool4::yyy() const { return bool3( y, y, y ); }
bool3 bool4::zyy() const { return bool3( z, y, y ); }
bool3 bool4::xzy() const { return bool3( x, z, y ); }
bool3 bool4::yzy() const { return bool3( y, z, y ); }
bool3 bool4::zzy() const { return bool3( z, z, y ); }
bool3 bool4::xxz() const { return bool3( x, x, z ); }
bool3 bool4::yxz() const { return bool3( y, x, z ); }
bool3 bool4::zxz() const { return bool3( z, x, z ); }
bool3 bool4::xyz() const { return bool3( x, y, z ); }
bool3 bool4::yyz() const { return bool3( y, y, z ); }
bool3 bool4::zyz() const { return bool3( z, y, z ); }
bool3 bool4::xzz() const { return bool3( x, z, z ); }
bool3 bool4::yzz() const { return bool3( y, z, z ); }
bool3 bool4::zzz() const { return bool3( z, z, z ); }

bool4 bool4::xxxx() const { return bool4( x, x, x, x ); }
bool4 bool4::yxxx() const { return bool4( y, x, x, x ); }
bool4 bool4::zxxx() const { return bool4( z, x, x, x ); }
bool4 bool4::wxxx() const { return bool4( w, x, x, x ); }
bool4 bool4::xyxx() const { return bool4( x, y, x, x ); }
bool4 bool4::yyxx() const { return bool4( y, y, x, x ); }
bool4 bool4::zyxx() const { return bool4( z, y, x, x ); }
bool4 bool4::wyxx() const { return bool4( w, y, x, x ); }
bool4 bool4::xzxx() const { return bool4( x, z, x, x ); }
bool4 bool4::yzxx() const { return bool4( y, z, x, x ); }
bool4 bool4::zzxx() const { return bool4( z, z, x, x ); }
bool4 bool4::wzxx() const { return bool4( w, z, x, x ); }
bool4 bool4::xwxx() const { return bool4( x, w, x, x ); }
bool4 bool4::ywxx() const { return bool4( y, w, x, x ); }
bool4 bool4::zwxx() const { return bool4( z, w, x, x ); }
bool4 bool4::wwxx() const { return bool4( w, w, x, x ); }
bool4 bool4::xxyx() const { return bool4( x, x, y, x ); }
bool4 bool4::yxyx() const { return bool4( y, x, y, x ); }
bool4 bool4::zxyx() const { return bool4( z, x, y, x ); }
bool4 bool4::wxyx() const { return bool4( w, x, y, x ); }
bool4 bool4::xyyx() const { return bool4( x, y, y, x ); }
bool4 bool4::yyyx() const { return bool4( y, y, y, x ); }
bool4 bool4::zyyx() const { return bool4( z, y, y, x ); }
bool4 bool4::wyyx() const { return bool4( w, y, y, x ); }
bool4 bool4::xzyx() const { return bool4( x, z, y, x ); }
bool4 bool4::yzyx() const { return bool4( y, z, y, x ); }
bool4 bool4::zzyx() const { return bool4( z, z, y, x ); }
bool4 bool4::wzyx() const { return bool4( w, z, y, x ); }
bool4 bool4::xwyx() const { return bool4( x, w, y, x ); }
bool4 bool4::ywyx() const { return bool4( y, w, y, x ); }
bool4 bool4::zwyx() const { return bool4( z, w, y, x ); }
bool4 bool4::wwyx() const { return bool4( w, w, y, x ); }
bool4 bool4::xxzx() const { return bool4( x, x, z, x ); }
bool4 bool4::yxzx() const { return bool4( y, x, z, x ); }
bool4 bool4::zxzx() const { return bool4( z, x, z, x ); }
bool4 bool4::wxzx() const { return bool4( w, x, z, x ); }
bool4 bool4::xyzx() const { return bool4( x, y, z, x ); }
bool4 bool4::yyzx() const { return bool4( y, y, z, x ); }
bool4 bool4::zyzx() const { return bool4( z, y, z, x ); }
bool4 bool4::wyzx() const { return bool4( w, y, z, x ); }
bool4 bool4::xzzx() const { return bool4( x, z, z, x ); }
bool4 bool4::yzzx() const { return bool4( y, z, z, x ); }
bool4 bool4::zzzx() const { return bool4( z, z, z, x ); }
bool4 bool4::wzzx() const { return bool4( w, z, z, x ); }
bool4 bool4::xwzx() const { return bool4( x, w, z, x ); }
bool4 bool4::ywzx() const { return bool4( y, w, z, x ); }
bool4 bool4::zwzx() const { return bool4( z, w, z, x ); }
bool4 bool4::wwzx() const { return bool4( w, w, z, x ); }
bool4 bool4::xxwx() const { return bool4( x, x, w, x ); }
bool4 bool4::yxwx() const { return bool4( y, x, w, x ); }
bool4 bool4::zxwx() const { return bool4( z, x, w, x ); }
bool4 bool4::wxwx() const { return bool4( w, x, w, x ); }
bool4 bool4::xywx() const { return bool4( x, y, w, x ); }
bool4 bool4::yywx() const { return bool4( y, y, w, x ); }
bool4 bool4::zywx() const { return bool4( z, y, w, x ); }
bool4 bool4::wywx() const { return bool4( w, y, w, x ); }
bool4 bool4::xzwx() const { return bool4( x, z, w, x ); }
bool4 bool4::yzwx() const { return bool4( y, z, w, x ); }
bool4 bool4::zzwx() const { return bool4( z, z, w, x ); }
bool4 bool4::wzwx() const { return bool4( w, z, w, x ); }
bool4 bool4::xwwx() const { return bool4( x, w, w, x ); }
bool4 bool4::ywwx() const { return bool4( y, w, w, x ); }
bool4 bool4::zwwx() const { return bool4( z, w, w, x ); }
bool4 bool4::wwwx() const { return bool4( w, w, w, x ); }
bool4 bool4::xxxy() const { return bool4( x, x, x, y ); }
bool4 bool4::yxxy() const { return bool4( y, x, x, y ); }
bool4 bool4::zxxy() const { return bool4( z, x, x, y ); }
bool4 bool4::wxxy() const { return bool4( w, x, x, y ); }
bool4 bool4::xyxy() const { return bool4( x, y, x, y ); }
bool4 bool4::yyxy() const { return bool4( y, y, x, y ); }
bool4 bool4::zyxy() const { return bool4( z, y, x, y ); }
bool4 bool4::wyxy() const { return bool4( w, y, x, y ); }
bool4 bool4::xzxy() const { return bool4( x, z, x, y ); }
bool4 bool4::yzxy() const { return bool4( y, z, x, y ); }
bool4 bool4::zzxy() const { return bool4( z, z, x, y ); }
bool4 bool4::wzxy() const { return bool4( w, z, x, y ); }
bool4 bool4::xwxy() const { return bool4( x, w, x, y ); }
bool4 bool4::ywxy() const { return bool4( y, w, x, y ); }
bool4 bool4::zwxy() const { return bool4( z, w, x, y ); }
bool4 bool4::wwxy() const { return bool4( w, w, x, y ); }
bool4 bool4::xxyy() const { return bool4( x, x, y, y ); }
bool4 bool4::yxyy() const { return bool4( y, x, y, y ); }
bool4 bool4::zxyy() const { return bool4( z, x, y, y ); }
bool4 bool4::wxyy() const { return bool4( w, x, y, y ); }
bool4 bool4::xyyy() const { return bool4( x, y, y, y ); }
bool4 bool4::yyyy() const { return bool4( y, y, y, y ); }
bool4 bool4::zyyy() const { return bool4( z, y, y, y ); }
bool4 bool4::wyyy() const { return bool4( w, y, y, y ); }
bool4 bool4::xzyy() const { return bool4( x, z, y, y ); }
bool4 bool4::yzyy() const { return bool4( y, z, y, y ); }
bool4 bool4::zzyy() const { return bool4( z, z, y, y ); }
bool4 bool4::wzyy() const { return bool4( w, z, y, y ); }
bool4 bool4::xwyy() const { return bool4( x, w, y, y ); }
bool4 bool4::ywyy() const { return bool4( y, w, y, y ); }
bool4 bool4::zwyy() const { return bool4( z, w, y, y ); }
bool4 bool4::wwyy() const { return bool4( w, w, y, y ); }
bool4 bool4::xxzy() const { return bool4( x, x, z, y ); }
bool4 bool4::yxzy() const { return bool4( y, x, z, y ); }
bool4 bool4::zxzy() const { return bool4( z, x, z, y ); }
bool4 bool4::wxzy() const { return bool4( w, x, z, y ); }
bool4 bool4::xyzy() const { return bool4( x, y, z, y ); }
bool4 bool4::yyzy() const { return bool4( y, y, z, y ); }
bool4 bool4::zyzy() const { return bool4( z, y, z, y ); }
bool4 bool4::wyzy() const { return bool4( w, y, z, y ); }
bool4 bool4::xzzy() const { return bool4( x, z, z, y ); }
bool4 bool4::yzzy() const { return bool4( y, z, z, y ); }
bool4 bool4::zzzy() const { return bool4( z, z, z, y ); }
bool4 bool4::wzzy() const { return bool4( w, z, z, y ); }
bool4 bool4::xwzy() const { return bool4( x, w, z, y ); }
bool4 bool4::ywzy() const { return bool4( y, w, z, y ); }
bool4 bool4::zwzy() const { return bool4( z, w, z, y ); }
bool4 bool4::wwzy() const { return bool4( w, w, z, y ); }
bool4 bool4::xxwy() const { return bool4( x, x, w, y ); }
bool4 bool4::yxwy() const { return bool4( y, x, w, y ); }
bool4 bool4::zxwy() const { return bool4( z, x, w, y ); }
bool4 bool4::wxwy() const { return bool4( w, x, w, y ); }
bool4 bool4::xywy() const { return bool4( x, y, w, y ); }
bool4 bool4::yywy() const { return bool4( y, y, w, y ); }
bool4 bool4::zywy() const { return bool4( z, y, w, y ); }
bool4 bool4::wywy() const { return bool4( w, y, w, y ); }
bool4 bool4::xzwy() const { return bool4( x, z, w, y ); }
bool4 bool4::yzwy() const { return bool4( y, z, w, y ); }
bool4 bool4::zzwy() const { return bool4( z, z, w, y ); }
bool4 bool4::wzwy() const { return bool4( w, z, w, y ); }
bool4 bool4::xwwy() const { return bool4( x, w, w, y ); }
bool4 bool4::ywwy() const { return bool4( y, w, w, y ); }
bool4 bool4::zwwy() const { return bool4( z, w, w, y ); }
bool4 bool4::wwwy() const { return bool4( w, w, w, y ); }
bool4 bool4::xxxz() const { return bool4( x, x, x, z ); }
bool4 bool4::yxxz() const { return bool4( y, x, x, z ); }
bool4 bool4::zxxz() const { return bool4( z, x, x, z ); }
bool4 bool4::wxxz() const { return bool4( w, x, x, z ); }
bool4 bool4::xyxz() const { return bool4( x, y, x, z ); }
bool4 bool4::yyxz() const { return bool4( y, y, x, z ); }
bool4 bool4::zyxz() const { return bool4( z, y, x, z ); }
bool4 bool4::wyxz() const { return bool4( w, y, x, z ); }
bool4 bool4::xzxz() const { return bool4( x, z, x, z ); }
bool4 bool4::yzxz() const { return bool4( y, z, x, z ); }
bool4 bool4::zzxz() const { return bool4( z, z, x, z ); }
bool4 bool4::wzxz() const { return bool4( w, z, x, z ); }
bool4 bool4::xwxz() const { return bool4( x, w, x, z ); }
bool4 bool4::ywxz() const { return bool4( y, w, x, z ); }
bool4 bool4::zwxz() const { return bool4( z, w, x, z ); }
bool4 bool4::wwxz() const { return bool4( w, w, x, z ); }
bool4 bool4::xxyz() const { return bool4( x, x, y, z ); }
bool4 bool4::yxyz() const { return bool4( y, x, y, z ); }
bool4 bool4::zxyz() const { return bool4( z, x, y, z ); }
bool4 bool4::wxyz() const { return bool4( w, x, y, z ); }
bool4 bool4::xyyz() const { return bool4( x, y, y, z ); }
bool4 bool4::yyyz() const { return bool4( y, y, y, z ); }
bool4 bool4::zyyz() const { return bool4( z, y, y, z ); }
bool4 bool4::wyyz() const { return bool4( w, y, y, z ); }
bool4 bool4::xzyz() const { return bool4( x, z, y, z ); }
bool4 bool4::yzyz() const { return bool4( y, z, y, z ); }
bool4 bool4::zzyz() const { return bool4( z, z, y, z ); }
bool4 bool4::wzyz() const { return bool4( w, z, y, z ); }
bool4 bool4::xwyz() const { return bool4( x, w, y, z ); }
bool4 bool4::ywyz() const { return bool4( y, w, y, z ); }
bool4 bool4::zwyz() const { return bool4( z, w, y, z ); }
bool4 bool4::wwyz() const { return bool4( w, w, y, z ); }
bool4 bool4::xxzz() const { return bool4( x, x, z, z ); }
bool4 bool4::yxzz() const { return bool4( y, x, z, z ); }
bool4 bool4::zxzz() const { return bool4( z, x, z, z ); }
bool4 bool4::wxzz() const { return bool4( w, x, z, z ); }
bool4 bool4::xyzz() const { return bool4( x, y, z, z ); }
bool4 bool4::yyzz() const { return bool4( y, y, z, z ); }
bool4 bool4::zyzz() const { return bool4( z, y, z, z ); }
bool4 bool4::wyzz() const { return bool4( w, y, z, z ); }
bool4 bool4::xzzz() const { return bool4( x, z, z, z ); }
bool4 bool4::yzzz() const { return bool4( y, z, z, z ); }
bool4 bool4::zzzz() const { return bool4( z, z, z, z ); }
bool4 bool4::wzzz() const { return bool4( w, z, z, z ); }
bool4 bool4::xwzz() const { return bool4( x, w, z, z ); }
bool4 bool4::ywzz() const { return bool4( y, w, z, z ); }
bool4 bool4::zwzz() const { return bool4( z, w, z, z ); }
bool4 bool4::wwzz() const { return bool4( w, w, z, z ); }
bool4 bool4::xxwz() const { return bool4( x, x, w, z ); }
bool4 bool4::yxwz() const { return bool4( y, x, w, z ); }
bool4 bool4::zxwz() const { return bool4( z, x, w, z ); }
bool4 bool4::wxwz() const { return bool4( w, x, w, z ); }
bool4 bool4::xywz() const { return bool4( x, y, w, z ); }
bool4 bool4::yywz() const { return bool4( y, y, w, z ); }
bool4 bool4::zywz() const { return bool4( z, y, w, z ); }
bool4 bool4::wywz() const { return bool4( w, y, w, z ); }
bool4 bool4::xzwz() const { return bool4( x, z, w, z ); }
bool4 bool4::yzwz() const { return bool4( y, z, w, z ); }
bool4 bool4::zzwz() const { return bool4( z, z, w, z ); }
bool4 bool4::wzwz() const { return bool4( w, z, w, z ); }
bool4 bool4::xwwz() const { return bool4( x, w, w, z ); }
bool4 bool4::ywwz() const { return bool4( y, w, w, z ); }
bool4 bool4::zwwz() const { return bool4( z, w, w, z ); }
bool4 bool4::wwwz() const { return bool4( w, w, w, z ); }
bool4 bool4::xxxw() const { return bool4( x, x, x, w ); }
bool4 bool4::yxxw() const { return bool4( y, x, x, w ); }
bool4 bool4::zxxw() const { return bool4( z, x, x, w ); }
bool4 bool4::wxxw() const { return bool4( w, x, x, w ); }
bool4 bool4::xyxw() const { return bool4( x, y, x, w ); }
bool4 bool4::yyxw() const { return bool4( y, y, x, w ); }
bool4 bool4::zyxw() const { return bool4( z, y, x, w ); }
bool4 bool4::wyxw() const { return bool4( w, y, x, w ); }
bool4 bool4::xzxw() const { return bool4( x, z, x, w ); }
bool4 bool4::yzxw() const { return bool4( y, z, x, w ); }
bool4 bool4::zzxw() const { return bool4( z, z, x, w ); }
bool4 bool4::wzxw() const { return bool4( w, z, x, w ); }
bool4 bool4::xwxw() const { return bool4( x, w, x, w ); }
bool4 bool4::ywxw() const { return bool4( y, w, x, w ); }
bool4 bool4::zwxw() const { return bool4( z, w, x, w ); }
bool4 bool4::wwxw() const { return bool4( w, w, x, w ); }
bool4 bool4::xxyw() const { return bool4( x, x, y, w ); }
bool4 bool4::yxyw() const { return bool4( y, x, y, w ); }
bool4 bool4::zxyw() const { return bool4( z, x, y, w ); }
bool4 bool4::wxyw() const { return bool4( w, x, y, w ); }
bool4 bool4::xyyw() const { return bool4( x, y, y, w ); }
bool4 bool4::yyyw() const { return bool4( y, y, y, w ); }
bool4 bool4::zyyw() const { return bool4( z, y, y, w ); }
bool4 bool4::wyyw() const { return bool4( w, y, y, w ); }
bool4 bool4::xzyw() const { return bool4( x, z, y, w ); }
bool4 bool4::yzyw() const { return bool4( y, z, y, w ); }
bool4 bool4::zzyw() const { return bool4( z, z, y, w ); }
bool4 bool4::wzyw() const { return bool4( w, z, y, w ); }
bool4 bool4::xwyw() const { return bool4( x, w, y, w ); }
bool4 bool4::ywyw() const { return bool4( y, w, y, w ); }
bool4 bool4::zwyw() const { return bool4( z, w, y, w ); }
bool4 bool4::wwyw() const { return bool4( w, w, y, w ); }
bool4 bool4::xxzw() const { return bool4( x, x, z, w ); }
bool4 bool4::yxzw() const { return bool4( y, x, z, w ); }
bool4 bool4::zxzw() const { return bool4( z, x, z, w ); }
bool4 bool4::wxzw() const { return bool4( w, x, z, w ); }
bool4 bool4::xyzw() const { return bool4( x, y, z, w ); }
bool4 bool4::yyzw() const { return bool4( y, y, z, w ); }
bool4 bool4::zyzw() const { return bool4( z, y, z, w ); }
bool4 bool4::wyzw() const { return bool4( w, y, z, w ); }
bool4 bool4::xzzw() const { return bool4( x, z, z, w ); }
bool4 bool4::yzzw() const { return bool4( y, z, z, w ); }
bool4 bool4::zzzw() const { return bool4( z, z, z, w ); }
bool4 bool4::wzzw() const { return bool4( w, z, z, w ); }
bool4 bool4::xwzw() const { return bool4( x, w, z, w ); }
bool4 bool4::ywzw() const { return bool4( y, w, z, w ); }
bool4 bool4::zwzw() const { return bool4( z, w, z, w ); }
bool4 bool4::wwzw() const { return bool4( w, w, z, w ); }
bool4 bool4::xxww() const { return bool4( x, x, w, w ); }
bool4 bool4::yxww() const { return bool4( y, x, w, w ); }
bool4 bool4::zxww() const { return bool4( z, x, w, w ); }
bool4 bool4::wxww() const { return bool4( w, x, w, w ); }
bool4 bool4::xyww() const { return bool4( x, y, w, w ); }
bool4 bool4::yyww() const { return bool4( y, y, w, w ); }
bool4 bool4::zyww() const { return bool4( z, y, w, w ); }
bool4 bool4::wyww() const { return bool4( w, y, w, w ); }
bool4 bool4::xzww() const { return bool4( x, z, w, w ); }
bool4 bool4::yzww() const { return bool4( y, z, w, w ); }
bool4 bool4::zzww() const { return bool4( z, z, w, w ); }
bool4 bool4::wzww() const { return bool4( w, z, w, w ); }
bool4 bool4::xwww() const { return bool4( x, w, w, w ); }
bool4 bool4::ywww() const { return bool4( y, w, w, w ); }
bool4 bool4::zwww() const { return bool4( z, w, w, w ); }
bool4 bool4::wwww() const { return bool4( w, w, w, w ); }

bool operator==( const bool4& lhs, const bool4& rhs )
{
	return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y ) && ( lhs.z == rhs.z ) && ( lhs.w == rhs.w );
}

inline bool operator!=( const bool4& lhs, const bool4& rhs )
{
	return !( operator==( lhs, rhs ) );
}

