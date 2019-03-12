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


// int2
float dot( const int2& lhs, const int2& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y );
}

float lengthsqr( const int2& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y );
}

float length( const int2& vec ) {
	return sqrtf( lengthsqr( vec ) );
}


// int3
float dot( const int3& lhs, const int3& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y ) + ( lhs.z * rhs.z );
}

float lengthsqr( const int3& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z );
}

float length( const int3& vec ) {
	return sqrtf( lengthsqr( vec ) );
}


// int4
float dot( const int4& lhs, const int4& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y ) + ( lhs.z * rhs.z ) + ( lhs.w * rhs.w );
}

float lengthsqr( const int4& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z ) + ( vec.w * vec.w );
}

float length( const int4& vec ) {
	return sqrtf( lengthsqr( vec ) );
}


// uint2
float lengthsqr( const uint2& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y );
}

float length( const uint2& vec ) {
	return sqrtf( lengthsqr( vec ) );
}


// uint3
float lengthsqr( const uint3& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z );
}

float length( const uint3& vec ) {
	return sqrtf( lengthsqr( vec ) );
}


// uint4
float lengthsqr( const uint4& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z ) + ( vec.w * vec.w );
}

float length( const uint4& vec ) {
	return sqrtf( lengthsqr( vec ) );
}


// float2
float dot( const float2& lhs, const float2& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y );
}

float lengthsqr( const float2& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y );
}

float length( const float2& vec ) {
	return sqrtf( lengthsqr( vec ) );
}

void normalize( float2& vec ) {
	float invlen = 1.000000f / length( vec );
	vec *= invlen;
}

float2 normalized( const float2& vec ) {
	float invlen = 1.000000f / length( vec );
	return (float2) vec * invlen;
}

float angle( const float2& lhs, const float2& rhs ) {
	return degreesf( acosf( dot( normalized( lhs ), normalized( rhs ) ) ) );
}

float2 saturate( const float2& vec ) {
	return float2(
		saturatef( vec.x ),
		saturatef( vec.y )
	);
}


// float3
float dot( const float3& lhs, const float3& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y ) + ( lhs.z * rhs.z );
}

float lengthsqr( const float3& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z );
}

float length( const float3& vec ) {
	return sqrtf( lengthsqr( vec ) );
}

void normalize( float3& vec ) {
	float invlen = 1.000000f / length( vec );
	vec *= invlen;
}

float3 normalized( const float3& vec ) {
	float invlen = 1.000000f / length( vec );
	return (float3) vec * invlen;
}

float3 cross( const float3& lhs, const float3& rhs ) {
	return float3(
		( lhs.y * rhs.z ) - ( lhs.z * rhs.y ),
		( lhs.z * rhs.x ) - ( lhs.x * rhs.z ),
		( lhs.x * rhs.y ) - ( lhs.y * rhs.x )
	);
}

float angle( const float3& lhs, const float3& rhs ) {
	return degreesf( acosf( dot( normalized( lhs ), normalized( rhs ) ) ) );
}

float3 saturate( const float3& vec ) {
	return float3(
		saturatef( vec.x ),
		saturatef( vec.y ),
		saturatef( vec.z )
	);
}


// float4
float dot( const float4& lhs, const float4& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y ) + ( lhs.z * rhs.z ) + ( lhs.w * rhs.w );
}

float lengthsqr( const float4& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z ) + ( vec.w * vec.w );
}

float length( const float4& vec ) {
	return sqrtf( lengthsqr( vec ) );
}

void normalize( float4& vec ) {
	float invlen = 1.000000f / length( vec );
	vec *= invlen;
}

float4 normalized( const float4& vec ) {
	float invlen = 1.000000f / length( vec );
	return (float4) vec * invlen;
}

float4 cross( const float4& lhs, const float4& rhs ) {
	return float4(
		( lhs.y * rhs.z ) - ( lhs.z * rhs.y ),
		( lhs.z * rhs.x ) - ( lhs.x * rhs.z ),
		( lhs.x * rhs.y ) - ( lhs.y * rhs.x ),
		0.0f
	);
}

float angle( const float4& lhs, const float4& rhs ) {
	return degreesf( acosf( dot( normalized( lhs ), normalized( rhs ) ) ) );
}

float4 saturate( const float4& vec ) {
	return float4(
		saturatef( vec.x ),
		saturatef( vec.y ),
		saturatef( vec.z ),
		saturatef( vec.w )
	);
}


// double2
double dot( const double2& lhs, const double2& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y );
}

double lengthsqr( const double2& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y );
}

double length( const double2& vec ) {
	return sqrt( lengthsqr( vec ) );
}

void normalize( double2& vec ) {
	double invlen = 1.000000 / length( vec );
	vec *= invlen;
}

double2 normalized( const double2& vec ) {
	double invlen = 1.000000 / length( vec );
	return (double2) vec * invlen;
}

double angle( const double2& lhs, const double2& rhs ) {
	return degrees( acos( dot( normalized( lhs ), normalized( rhs ) ) ) );
}

double2 saturate( const double2& vec ) {
	return double2(
		saturate( vec.x ),
		saturate( vec.y )
	);
}


// double3
double dot( const double3& lhs, const double3& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y ) + ( lhs.z * rhs.z );
}

double lengthsqr( const double3& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z );
}

double length( const double3& vec ) {
	return sqrt( lengthsqr( vec ) );
}

void normalize( double3& vec ) {
	double invlen = 1.000000 / length( vec );
	vec *= invlen;
}

double3 normalized( const double3& vec ) {
	double invlen = 1.000000 / length( vec );
	return (double3) vec * invlen;
}

double3 cross( const double3& lhs, const double3& rhs ) {
	return double3(
		( lhs.y * rhs.z ) - ( lhs.z * rhs.y ),
		( lhs.z * rhs.x ) - ( lhs.x * rhs.z ),
		( lhs.x * rhs.y ) - ( lhs.y * rhs.x )
	);
}

double angle( const double3& lhs, const double3& rhs ) {
	return degrees( acos( dot( normalized( lhs ), normalized( rhs ) ) ) );
}

double3 saturate( const double3& vec ) {
	return double3(
		saturate( vec.x ),
		saturate( vec.y ),
		saturate( vec.z )
	);
}


// double4
double dot( const double4& lhs, const double4& rhs ) {
	return ( lhs.x * rhs.x ) + ( lhs.y * rhs.y ) + ( lhs.z * rhs.z ) + ( lhs.w * rhs.w );
}

double lengthsqr( const double4& vec ) {
	return ( vec.x * vec.x ) + ( vec.y * vec.y ) + ( vec.z * vec.z ) + ( vec.w * vec.w );
}

double length( const double4& vec ) {
	return sqrt( lengthsqr( vec ) );
}

void normalize( double4& vec ) {
	double invlen = 1.000000 / length( vec );
	vec *= invlen;
}

double4 normalized( const double4& vec ) {
	double invlen = 1.000000 / length( vec );
	return (double4) vec * invlen;
}

double4 cross( const double4& lhs, const double4& rhs ) {
	return double4(
		( lhs.y * rhs.z ) - ( lhs.z * rhs.y ),
		( lhs.z * rhs.x ) - ( lhs.x * rhs.z ),
		( lhs.x * rhs.y ) - ( lhs.y * rhs.x ),
		0.0
	);
}

double angle( const double4& lhs, const double4& rhs ) {
	return degrees( acos( dot( normalized( lhs ), normalized( rhs ) ) ) );
}

double4 saturate( const double4& vec ) {
	return double4(
		saturate( vec.x ),
		saturate( vec.y ),
		saturate( vec.z ),
		saturate( vec.w )
	);
}


