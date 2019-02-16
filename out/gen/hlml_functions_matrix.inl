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


// bool2x2
void identity( bool2x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
}


// bool3x2
void identity( bool3x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
}


// bool4x2
void identity( bool4x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
	mat.rows[3] = { 0, 0 };
}


// bool2x3
void identity( bool2x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
}


// bool3x3
void identity( bool3x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
}


// bool4x3
void identity( bool4x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
	mat.rows[3] = { 0, 0, 0 };
}


// bool2x4
void identity( bool2x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
}


// bool3x4
void identity( bool3x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
}


// bool4x4
void identity( bool4x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
	mat.rows[3] = { 0, 0, 0, 1 };
}


// int2x2
void identity( int2x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
}

int2x2 transpose( const int2x2& mat ) {
	return int2x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1]
	);
}

int2x2 inverse( const int2x2& mat ) {
	const int32_t invdet = 1 / determinant( mat );
	return int2x2(
		 mat.rows[1][1] * invdet, -mat.rows[0][1] * invdet,
		-mat.rows[1][0] * invdet,  mat.rows[0][0] * invdet
	);
}

int32_t determinant( const int2x2& mat ) {
	return mat.rows[0][0] * mat.rows[1][1] - mat.rows[1][0] * mat.rows[0][1];
}

int2x2 scale( const int2x2& mat, const int32_t scalar ) {
	return scale( mat, int2( scalar, scalar ) );
}

int2x2 scale( const int2x2& mat, const int2& vec ) {
	return int2x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y
	);
}


// int3x2
void identity( int3x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
}

int2x3 transpose( const int3x2& mat ) {
	return int2x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1]
	);
}

int3x2 scale( const int3x2& mat, const int32_t scalar ) {
	return scale( mat, int2( scalar, scalar ) );
}

int3x2 scale( const int3x2& mat, const int2& vec ) {
	return int3x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1]
	);
}


// int4x2
void identity( int4x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
	mat.rows[3] = { 0, 0 };
}

int2x4 transpose( const int4x2& mat ) {
	return int2x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1]
	);
}

int4x2 scale( const int4x2& mat, const int32_t scalar ) {
	return scale( mat, int2( scalar, scalar ) );
}

int4x2 scale( const int4x2& mat, const int2& vec ) {
	return int4x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1],

		mat.rows[3][0],
		mat.rows[3][1]
	);
}


// int2x3
void identity( int2x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
}

int3x2 transpose( const int2x3& mat ) {
	return int3x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2]
	);
}

int2x3 scale( const int2x3& mat, const int32_t scalar ) {
	return scale( mat, int3( scalar, scalar, scalar ) );
}

int2x3 scale( const int2x3& mat, const int3& vec ) {
	return int2x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2]
	);
}


// int3x3
void identity( int3x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
}

int3x3 transpose( const int3x3& mat ) {
	return int3x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2]
	);
}

int3x3 inverse( const int3x3& mat ) {
	const int32_t invdet = 1 / determinant( mat );
	// also transposed here
	return int3x3(
		 ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1] ) * invdet,
		-( mat.rows[0][1] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][1] ) * invdet,
		 ( mat.rows[0][1] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][1] ) * invdet,

		-( mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][0] ) * invdet,

		 ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[2][1] - mat.rows[0][1] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[1][1] - mat.rows[0][1] * mat.rows[1][0] ) * invdet
	);
}

int32_t determinant( const int3x3& mat ) {
	return
		mat.rows[0][0] * ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[2][1] * mat.rows[1][2] )
		- mat.rows[0][1] * ( mat.rows[1][0] * mat.rows[2][2] - mat.rows[2][0] * mat.rows[1][2] )
		+ mat.rows[0][2] * ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[2][0] * mat.rows[1][1] );
}

int3x3 translate( const int3x3& mat, const int2& vec ) {
	return int3x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2]
	);
}

int3x3 scale( const int3x3& mat, const int32_t scalar ) {
	return scale( mat, int3( scalar, scalar, scalar ) );
}

int3x3 scale( const int3x3& mat, const int3& vec ) {
	return int3x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z
	);
}


// int4x3
void identity( int4x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
	mat.rows[3] = { 0, 0, 0 };
}

int3x4 transpose( const int4x3& mat ) {
	return int3x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2]
	);
}

int4x3 translate( const int4x3& mat, const int3& vec ) {
	return int4x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2] + vec.z,
		mat[3][0], mat[3][1], mat[3][2]
	);
}

int4x3 scale( const int4x3& mat, const int32_t scalar ) {
	return scale( mat, int3( scalar, scalar, scalar ) );
}

int4x3 scale( const int4x3& mat, const int3& vec ) {
	return int4x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2]
	);
}


// int2x4
void identity( int2x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
}

int4x2 transpose( const int2x4& mat ) {
	return int4x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2],
		mat.rows[0][3], mat.rows[1][3]
	);
}

int2x4 scale( const int2x4& mat, const int32_t scalar ) {
	return scale( mat, int3( scalar, scalar, scalar ) );
}

int2x4 scale( const int2x4& mat, const int3& vec ) {
	return int2x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3]
	);
}


// int3x4
void identity( int3x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
}

int4x3 transpose( const int3x4& mat ) {
	return int4x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3]
	);
}

int3x4 translate( const int3x4& mat, const int2& vec ) {
	return int3x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3]
	);
}

int3x4 scale( const int3x4& mat, const int32_t scalar ) {
	return scale( mat, int3( scalar, scalar, scalar ) );
}

int3x4 scale( const int3x4& mat, const int3& vec ) {
	return int3x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3]
	);
}


// int4x4
void identity( int4x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
	mat.rows[3] = { 0, 0, 0, 1 };
}

int4x4 transpose( const int4x4& mat ) {
	return int4x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3], mat.rows[3][3]
	);
}

int4x4 inverse( const int4x4& mat ) {
	// uses the glm version, which is basically just an optimised version of the adjugate formula
	int32_t sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	int32_t sub01 = mat.rows[1][2] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[2][3];
	int32_t sub02 = mat.rows[1][2] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][2];

	int32_t sub03 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	int32_t sub04 = mat.rows[1][1] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[3][1];
	int32_t sub05 = mat.rows[1][1] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][1];

	int32_t sub06 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][1];
	int32_t sub07 = mat.rows[1][1] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][1];
	int32_t sub08 = mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1];

	int32_t sub09 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	int32_t sub10 = mat.rows[1][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[1][3];
	int32_t sub11 = mat.rows[1][0] * mat.rows[2][3] - mat.rows[2][0] * mat.rows[1][3];

	int32_t sub12 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][0];
	int32_t sub13 = mat.rows[1][0] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][0];
	int32_t sub14 = mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0];

	int32_t sub15 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[2][1] * mat.rows[3][0];
	int32_t sub16 = mat.rows[1][0] * mat.rows[3][1] - mat.rows[1][1] * mat.rows[3][0];
	int32_t sub17 = mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0];

	int4 fac0 = int4( sub00, sub00, sub01, sub02 );
	int4 fac1 = int4( sub03, sub03, sub04, sub05 );
	int4 fac2 = int4( sub06, sub06, sub07, sub08 );
	int4 fac3 = int4( sub09, sub09, sub10, sub11 );
	int4 fac4 = int4( sub12, sub12, sub13, sub14 );
	int4 fac5 = int4( sub15, sub15, sub16, sub17 );

	int4 vec0 = int4( mat.rows[1][0], mat.rows[0][0], mat.rows[0][0], mat.rows[0][0] );
	int4 vec1 = int4( mat.rows[1][1], mat.rows[0][1], mat.rows[0][1], mat.rows[0][1] );
	int4 vec2 = int4( mat.rows[1][2], mat.rows[0][2], mat.rows[0][2], mat.rows[0][2] );
	int4 vec3 = int4( mat.rows[1][3], mat.rows[0][3], mat.rows[0][3], mat.rows[0][3] );

	int4 inv0 = vec1 * fac0 - vec2 * fac1 + vec3 * fac2;
	int4 inv1 = vec0 * fac0 - vec2 * fac3 + vec3 * fac4;
	int4 inv2 = vec0 * fac1 - vec1 * fac3 + vec3 * fac5;
	int4 inv3 = vec0 * fac2 - vec1 * fac4 + vec2 * fac5;

	int4 sign0 = int4(  1, -1,  1, -1 );
	int4 sign1 = int4( -1,  1, -1,  1 );

	int4x4 result = int4x4(
		inv0 * sign0,
		inv1 * sign1,
		inv2 * sign0,
		inv3 * sign1
	);

	int4 col0 = int4( result.rows[0][0], result.rows[1][0], result.rows[2][0], result.rows[3][0] );
	int4 dot0 = mat.rows[0] * col0;

	const int32_t dot1 = ( dot0.x + dot0.y ) + ( dot0.z + dot0.w );

	const int32_t invdet = 1 / dot1;

	return result * invdet;
}

int32_t determinant( const int4x4& mat ) {
	// using glm's method where you basically take determinants from each sub matrix and cache the repeat occurences
	int32_t sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	int32_t sub01 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	int32_t sub02 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[3][1] * mat.rows[2][2];
	int32_t sub03 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	int32_t sub04 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[3][0] * mat.rows[2][2];
	int32_t sub05 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[3][0] * mat.rows[2][1];

	int4 cofactor = int4(
		 ( mat.rows[1][1] * sub00 - mat.rows[1][2] * sub01 + mat.rows[1][3] * sub02 ),
		-( mat.rows[1][0] * sub00 - mat.rows[1][2] * sub03 + mat.rows[1][3] * sub04 ),
		 ( mat.rows[1][0] * sub01 - mat.rows[1][1] * sub03 + mat.rows[1][3] * sub05 ),
		-( mat.rows[1][0] * sub02 - mat.rows[1][1] * sub04 + mat.rows[1][2] * sub05 )
	);

	return
		mat.rows[0][0] * cofactor.x + mat.rows[0][1] * cofactor.y +
		mat.rows[0][2] * cofactor.z + mat.rows[0][3] * cofactor.w;
}

int4x4 translate( const int4x4& mat, const int3& vec ) {
	return int4x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3] + vec.z,
		mat[3][0], mat[3][1], mat[3][2], mat[3][3]
	);
}

int4x4 scale( const int4x4& mat, const int32_t scalar ) {
	return scale( mat, int3( scalar, scalar, scalar ) );
}

int4x4 scale( const int4x4& mat, const int3& vec ) {
	return int4x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3],

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2],
		mat.rows[3][3]
	);
}


// uint2x2
void identity( uint2x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
}

uint2x2 transpose( const uint2x2& mat ) {
	return uint2x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1]
	);
}

uint2x2 inverse( const uint2x2& mat ) {
	const uint32_t invdet = 1 / determinant( mat );
	return uint2x2(
		 mat.rows[1][1] * invdet, -mat.rows[0][1] * invdet,
		-mat.rows[1][0] * invdet,  mat.rows[0][0] * invdet
	);
}

uint32_t determinant( const uint2x2& mat ) {
	return mat.rows[0][0] * mat.rows[1][1] - mat.rows[1][0] * mat.rows[0][1];
}

uint2x2 scale( const uint2x2& mat, const uint32_t scalar ) {
	return scale( mat, uint2( scalar, scalar ) );
}

uint2x2 scale( const uint2x2& mat, const uint2& vec ) {
	return uint2x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y
	);
}


// uint3x2
void identity( uint3x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
}

uint2x3 transpose( const uint3x2& mat ) {
	return uint2x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1]
	);
}

uint3x2 scale( const uint3x2& mat, const uint32_t scalar ) {
	return scale( mat, uint2( scalar, scalar ) );
}

uint3x2 scale( const uint3x2& mat, const uint2& vec ) {
	return uint3x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1]
	);
}


// uint4x2
void identity( uint4x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
	mat.rows[3] = { 0, 0 };
}

uint2x4 transpose( const uint4x2& mat ) {
	return uint2x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1]
	);
}

uint4x2 scale( const uint4x2& mat, const uint32_t scalar ) {
	return scale( mat, uint2( scalar, scalar ) );
}

uint4x2 scale( const uint4x2& mat, const uint2& vec ) {
	return uint4x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1],

		mat.rows[3][0],
		mat.rows[3][1]
	);
}


// uint2x3
void identity( uint2x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
}

uint3x2 transpose( const uint2x3& mat ) {
	return uint3x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2]
	);
}

uint2x3 scale( const uint2x3& mat, const uint32_t scalar ) {
	return scale( mat, uint3( scalar, scalar, scalar ) );
}

uint2x3 scale( const uint2x3& mat, const uint3& vec ) {
	return uint2x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2]
	);
}


// uint3x3
void identity( uint3x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
}

uint3x3 transpose( const uint3x3& mat ) {
	return uint3x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2]
	);
}

uint3x3 inverse( const uint3x3& mat ) {
	const uint32_t invdet = 1 / determinant( mat );
	// also transposed here
	return uint3x3(
		 ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1] ) * invdet,
		-( mat.rows[0][1] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][1] ) * invdet,
		 ( mat.rows[0][1] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][1] ) * invdet,

		-( mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][0] ) * invdet,

		 ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[2][1] - mat.rows[0][1] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[1][1] - mat.rows[0][1] * mat.rows[1][0] ) * invdet
	);
}

uint32_t determinant( const uint3x3& mat ) {
	return
		mat.rows[0][0] * ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[2][1] * mat.rows[1][2] )
		- mat.rows[0][1] * ( mat.rows[1][0] * mat.rows[2][2] - mat.rows[2][0] * mat.rows[1][2] )
		+ mat.rows[0][2] * ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[2][0] * mat.rows[1][1] );
}

uint3x3 translate( const uint3x3& mat, const uint2& vec ) {
	return uint3x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2]
	);
}

uint3x3 scale( const uint3x3& mat, const uint32_t scalar ) {
	return scale( mat, uint3( scalar, scalar, scalar ) );
}

uint3x3 scale( const uint3x3& mat, const uint3& vec ) {
	return uint3x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z
	);
}


// uint4x3
void identity( uint4x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
	mat.rows[3] = { 0, 0, 0 };
}

uint3x4 transpose( const uint4x3& mat ) {
	return uint3x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2]
	);
}

uint4x3 translate( const uint4x3& mat, const uint3& vec ) {
	return uint4x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2] + vec.z,
		mat[3][0], mat[3][1], mat[3][2]
	);
}

uint4x3 scale( const uint4x3& mat, const uint32_t scalar ) {
	return scale( mat, uint3( scalar, scalar, scalar ) );
}

uint4x3 scale( const uint4x3& mat, const uint3& vec ) {
	return uint4x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2]
	);
}


// uint2x4
void identity( uint2x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
}

uint4x2 transpose( const uint2x4& mat ) {
	return uint4x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2],
		mat.rows[0][3], mat.rows[1][3]
	);
}

uint2x4 scale( const uint2x4& mat, const uint32_t scalar ) {
	return scale( mat, uint3( scalar, scalar, scalar ) );
}

uint2x4 scale( const uint2x4& mat, const uint3& vec ) {
	return uint2x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3]
	);
}


// uint3x4
void identity( uint3x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
}

uint4x3 transpose( const uint3x4& mat ) {
	return uint4x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3]
	);
}

uint3x4 translate( const uint3x4& mat, const uint2& vec ) {
	return uint3x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3]
	);
}

uint3x4 scale( const uint3x4& mat, const uint32_t scalar ) {
	return scale( mat, uint3( scalar, scalar, scalar ) );
}

uint3x4 scale( const uint3x4& mat, const uint3& vec ) {
	return uint3x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3]
	);
}


// uint4x4
void identity( uint4x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
	mat.rows[3] = { 0, 0, 0, 1 };
}

uint4x4 transpose( const uint4x4& mat ) {
	return uint4x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3], mat.rows[3][3]
	);
}

uint4x4 inverse( const uint4x4& mat ) {
	// uses the glm version, which is basically just an optimised version of the adjugate formula
	uint32_t sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	uint32_t sub01 = mat.rows[1][2] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[2][3];
	uint32_t sub02 = mat.rows[1][2] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][2];

	uint32_t sub03 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	uint32_t sub04 = mat.rows[1][1] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[3][1];
	uint32_t sub05 = mat.rows[1][1] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][1];

	uint32_t sub06 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][1];
	uint32_t sub07 = mat.rows[1][1] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][1];
	uint32_t sub08 = mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1];

	uint32_t sub09 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	uint32_t sub10 = mat.rows[1][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[1][3];
	uint32_t sub11 = mat.rows[1][0] * mat.rows[2][3] - mat.rows[2][0] * mat.rows[1][3];

	uint32_t sub12 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][0];
	uint32_t sub13 = mat.rows[1][0] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][0];
	uint32_t sub14 = mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0];

	uint32_t sub15 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[2][1] * mat.rows[3][0];
	uint32_t sub16 = mat.rows[1][0] * mat.rows[3][1] - mat.rows[1][1] * mat.rows[3][0];
	uint32_t sub17 = mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0];

	uint4 fac0 = uint4( sub00, sub00, sub01, sub02 );
	uint4 fac1 = uint4( sub03, sub03, sub04, sub05 );
	uint4 fac2 = uint4( sub06, sub06, sub07, sub08 );
	uint4 fac3 = uint4( sub09, sub09, sub10, sub11 );
	uint4 fac4 = uint4( sub12, sub12, sub13, sub14 );
	uint4 fac5 = uint4( sub15, sub15, sub16, sub17 );

	uint4 vec0 = uint4( mat.rows[1][0], mat.rows[0][0], mat.rows[0][0], mat.rows[0][0] );
	uint4 vec1 = uint4( mat.rows[1][1], mat.rows[0][1], mat.rows[0][1], mat.rows[0][1] );
	uint4 vec2 = uint4( mat.rows[1][2], mat.rows[0][2], mat.rows[0][2], mat.rows[0][2] );
	uint4 vec3 = uint4( mat.rows[1][3], mat.rows[0][3], mat.rows[0][3], mat.rows[0][3] );

	uint4 inv0 = vec1 * fac0 - vec2 * fac1 + vec3 * fac2;
	uint4 inv1 = vec0 * fac0 - vec2 * fac3 + vec3 * fac4;
	uint4 inv2 = vec0 * fac1 - vec1 * fac3 + vec3 * fac5;
	uint4 inv3 = vec0 * fac2 - vec1 * fac4 + vec2 * fac5;

	uint4 sign0 = uint4(  1, -1,  1, -1 );
	uint4 sign1 = uint4( -1,  1, -1,  1 );

	uint4x4 result = uint4x4(
		inv0 * sign0,
		inv1 * sign1,
		inv2 * sign0,
		inv3 * sign1
	);

	uint4 col0 = uint4( result.rows[0][0], result.rows[1][0], result.rows[2][0], result.rows[3][0] );
	uint4 dot0 = mat.rows[0] * col0;

	const uint32_t dot1 = ( dot0.x + dot0.y ) + ( dot0.z + dot0.w );

	const uint32_t invdet = 1 / dot1;

	return result * invdet;
}

uint32_t determinant( const uint4x4& mat ) {
	// using glm's method where you basically take determinants from each sub matrix and cache the repeat occurences
	uint32_t sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	uint32_t sub01 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	uint32_t sub02 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[3][1] * mat.rows[2][2];
	uint32_t sub03 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	uint32_t sub04 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[3][0] * mat.rows[2][2];
	uint32_t sub05 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[3][0] * mat.rows[2][1];

	uint4 cofactor = uint4(
		 ( mat.rows[1][1] * sub00 - mat.rows[1][2] * sub01 + mat.rows[1][3] * sub02 ),
		-( mat.rows[1][0] * sub00 - mat.rows[1][2] * sub03 + mat.rows[1][3] * sub04 ),
		 ( mat.rows[1][0] * sub01 - mat.rows[1][1] * sub03 + mat.rows[1][3] * sub05 ),
		-( mat.rows[1][0] * sub02 - mat.rows[1][1] * sub04 + mat.rows[1][2] * sub05 )
	);

	return
		mat.rows[0][0] * cofactor.x + mat.rows[0][1] * cofactor.y +
		mat.rows[0][2] * cofactor.z + mat.rows[0][3] * cofactor.w;
}

uint4x4 translate( const uint4x4& mat, const uint3& vec ) {
	return uint4x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3] + vec.z,
		mat[3][0], mat[3][1], mat[3][2], mat[3][3]
	);
}

uint4x4 scale( const uint4x4& mat, const uint32_t scalar ) {
	return scale( mat, uint3( scalar, scalar, scalar ) );
}

uint4x4 scale( const uint4x4& mat, const uint3& vec ) {
	return uint4x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3],

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2],
		mat.rows[3][3]
	);
}


// float2x2
void identity( float2x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
}

float2x2 transpose( const float2x2& mat ) {
	return float2x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1]
	);
}

float2x2 inverse( const float2x2& mat ) {
	const float invdet = 1.0f / determinant( mat );
	return float2x2(
		 mat.rows[1][1] * invdet, -mat.rows[0][1] * invdet,
		-mat.rows[1][0] * invdet,  mat.rows[0][0] * invdet
	);
}

float determinant( const float2x2& mat ) {
	return mat.rows[0][0] * mat.rows[1][1] - mat.rows[1][0] * mat.rows[0][1];
}

float2x2 scale( const float2x2& mat, const float scalar ) {
	return scale( mat, float2( scalar, scalar ) );
}

float2x2 scale( const float2x2& mat, const float2& vec ) {
	return float2x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y
	);
}


// float3x2
void identity( float3x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
}

float2x3 transpose( const float3x2& mat ) {
	return float2x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1]
	);
}

float3x2 scale( const float3x2& mat, const float scalar ) {
	return scale( mat, float2( scalar, scalar ) );
}

float3x2 scale( const float3x2& mat, const float2& vec ) {
	return float3x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1]
	);
}


// float4x2
void identity( float4x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
	mat.rows[3] = { 0, 0 };
}

float2x4 transpose( const float4x2& mat ) {
	return float2x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1]
	);
}

float4x2 scale( const float4x2& mat, const float scalar ) {
	return scale( mat, float2( scalar, scalar ) );
}

float4x2 scale( const float4x2& mat, const float2& vec ) {
	return float4x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1],

		mat.rows[3][0],
		mat.rows[3][1]
	);
}


// float2x3
void identity( float2x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
}

float3x2 transpose( const float2x3& mat ) {
	return float3x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2]
	);
}

float2x3 scale( const float2x3& mat, const float scalar ) {
	return scale( mat, float3( scalar, scalar, scalar ) );
}

float2x3 scale( const float2x3& mat, const float3& vec ) {
	return float2x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2]
	);
}


// float3x3
void identity( float3x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
}

float3x3 transpose( const float3x3& mat ) {
	return float3x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2]
	);
}

float3x3 inverse( const float3x3& mat ) {
	const float invdet = 1.0f / determinant( mat );
	// also transposed here
	return float3x3(
		 ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1] ) * invdet,
		-( mat.rows[0][1] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][1] ) * invdet,
		 ( mat.rows[0][1] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][1] ) * invdet,

		-( mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][0] ) * invdet,

		 ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[2][1] - mat.rows[0][1] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[1][1] - mat.rows[0][1] * mat.rows[1][0] ) * invdet
	);
}

float determinant( const float3x3& mat ) {
	return
		mat.rows[0][0] * ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[2][1] * mat.rows[1][2] )
		- mat.rows[0][1] * ( mat.rows[1][0] * mat.rows[2][2] - mat.rows[2][0] * mat.rows[1][2] )
		+ mat.rows[0][2] * ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[2][0] * mat.rows[1][1] );
}

float3x3 translate( const float3x3& mat, const float2& vec ) {
	return float3x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2]
	);
}

float3x3 scale( const float3x3& mat, const float scalar ) {
	return scale( mat, float3( scalar, scalar, scalar ) );
}

float3x3 scale( const float3x3& mat, const float3& vec ) {
	return float3x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z
	);
}


// float4x3
void identity( float4x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
	mat.rows[3] = { 0, 0, 0 };
}

float3x4 transpose( const float4x3& mat ) {
	return float3x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2]
	);
}

float4x3 translate( const float4x3& mat, const float3& vec ) {
	return float4x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2] + vec.z,
		mat[3][0], mat[3][1], mat[3][2]
	);
}

float4x3 scale( const float4x3& mat, const float scalar ) {
	return scale( mat, float3( scalar, scalar, scalar ) );
}

float4x3 scale( const float4x3& mat, const float3& vec ) {
	return float4x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2]
	);
}


// float2x4
void identity( float2x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
}

float4x2 transpose( const float2x4& mat ) {
	return float4x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2],
		mat.rows[0][3], mat.rows[1][3]
	);
}

float2x4 scale( const float2x4& mat, const float scalar ) {
	return scale( mat, float3( scalar, scalar, scalar ) );
}

float2x4 scale( const float2x4& mat, const float3& vec ) {
	return float2x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3]
	);
}


// float3x4
void identity( float3x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
}

float4x3 transpose( const float3x4& mat ) {
	return float4x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3]
	);
}

float3x4 translate( const float3x4& mat, const float2& vec ) {
	return float3x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3]
	);
}

float3x4 scale( const float3x4& mat, const float scalar ) {
	return scale( mat, float3( scalar, scalar, scalar ) );
}

float3x4 scale( const float3x4& mat, const float3& vec ) {
	return float3x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3]
	);
}


// float4x4
void identity( float4x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
	mat.rows[3] = { 0, 0, 0, 1 };
}

float4x4 transpose( const float4x4& mat ) {
	return float4x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3], mat.rows[3][3]
	);
}

float4x4 inverse( const float4x4& mat ) {
	// uses the glm version, which is basically just an optimised version of the adjugate formula
	float sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	float sub01 = mat.rows[1][2] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[2][3];
	float sub02 = mat.rows[1][2] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][2];

	float sub03 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	float sub04 = mat.rows[1][1] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[3][1];
	float sub05 = mat.rows[1][1] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][1];

	float sub06 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][1];
	float sub07 = mat.rows[1][1] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][1];
	float sub08 = mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1];

	float sub09 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	float sub10 = mat.rows[1][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[1][3];
	float sub11 = mat.rows[1][0] * mat.rows[2][3] - mat.rows[2][0] * mat.rows[1][3];

	float sub12 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][0];
	float sub13 = mat.rows[1][0] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][0];
	float sub14 = mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0];

	float sub15 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[2][1] * mat.rows[3][0];
	float sub16 = mat.rows[1][0] * mat.rows[3][1] - mat.rows[1][1] * mat.rows[3][0];
	float sub17 = mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0];

	float4 fac0 = float4( sub00, sub00, sub01, sub02 );
	float4 fac1 = float4( sub03, sub03, sub04, sub05 );
	float4 fac2 = float4( sub06, sub06, sub07, sub08 );
	float4 fac3 = float4( sub09, sub09, sub10, sub11 );
	float4 fac4 = float4( sub12, sub12, sub13, sub14 );
	float4 fac5 = float4( sub15, sub15, sub16, sub17 );

	float4 vec0 = float4( mat.rows[1][0], mat.rows[0][0], mat.rows[0][0], mat.rows[0][0] );
	float4 vec1 = float4( mat.rows[1][1], mat.rows[0][1], mat.rows[0][1], mat.rows[0][1] );
	float4 vec2 = float4( mat.rows[1][2], mat.rows[0][2], mat.rows[0][2], mat.rows[0][2] );
	float4 vec3 = float4( mat.rows[1][3], mat.rows[0][3], mat.rows[0][3], mat.rows[0][3] );

	float4 inv0 = vec1 * fac0 - vec2 * fac1 + vec3 * fac2;
	float4 inv1 = vec0 * fac0 - vec2 * fac3 + vec3 * fac4;
	float4 inv2 = vec0 * fac1 - vec1 * fac3 + vec3 * fac5;
	float4 inv3 = vec0 * fac2 - vec1 * fac4 + vec2 * fac5;

	float4 sign0 = float4(  1, -1,  1, -1 );
	float4 sign1 = float4( -1,  1, -1,  1 );

	float4x4 result = float4x4(
		inv0 * sign0,
		inv1 * sign1,
		inv2 * sign0,
		inv3 * sign1
	);

	float4 col0 = float4( result.rows[0][0], result.rows[1][0], result.rows[2][0], result.rows[3][0] );
	float4 dot0 = mat.rows[0] * col0;

	const float dot1 = ( dot0.x + dot0.y ) + ( dot0.z + dot0.w );

	const float invdet = 1.0f / dot1;

	return result * invdet;
}

float determinant( const float4x4& mat ) {
	// using glm's method where you basically take determinants from each sub matrix and cache the repeat occurences
	float sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	float sub01 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	float sub02 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[3][1] * mat.rows[2][2];
	float sub03 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	float sub04 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[3][0] * mat.rows[2][2];
	float sub05 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[3][0] * mat.rows[2][1];

	float4 cofactor = float4(
		 ( mat.rows[1][1] * sub00 - mat.rows[1][2] * sub01 + mat.rows[1][3] * sub02 ),
		-( mat.rows[1][0] * sub00 - mat.rows[1][2] * sub03 + mat.rows[1][3] * sub04 ),
		 ( mat.rows[1][0] * sub01 - mat.rows[1][1] * sub03 + mat.rows[1][3] * sub05 ),
		-( mat.rows[1][0] * sub02 - mat.rows[1][1] * sub04 + mat.rows[1][2] * sub05 )
	);

	return
		mat.rows[0][0] * cofactor.x + mat.rows[0][1] * cofactor.y +
		mat.rows[0][2] * cofactor.z + mat.rows[0][3] * cofactor.w;
}

float4x4 translate( const float4x4& mat, const float3& vec ) {
	return float4x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3] + vec.z,
		mat[3][0], mat[3][1], mat[3][2], mat[3][3]
	);
}

float4x4 scale( const float4x4& mat, const float scalar ) {
	return scale( mat, float3( scalar, scalar, scalar ) );
}

float4x4 scale( const float4x4& mat, const float3& vec ) {
	return float4x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3],

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2],
		mat.rows[3][3]
	);
}

inline float4x4 ortho( const float left, const float right, const float top, const float bottom, const float znear, const float zfar ) {
	const float right_plus_left = right + left;
	const float right_minus_left = right - left;
	const float top_plus_bottom = top + bottom;
	const float top_minus_bottom = top - bottom;
	const float far_minus_near = zfar - znear;

	return float4x4(
		2.0f / right_minus_left, 0.0f, 0.0f, -right_plus_left / right_minus_left,
		0.0f, 2.0f / top_minus_bottom, 0.0f, -top_plus_bottom / top_minus_bottom,
		0.0f, 0.0f, 1.0f / far_minus_near, -znear / far_minus_near,
		0.0f, 0.0f, 0.0f, 1.0f
	);
}

float4x4 perspective( const float fovdeg, const float aspect, const float znear, const float zfar ) {
	const float far_minus_near = zfar - znear;
	const float tan_half_fov = static_cast<float>( tan( ( fovdeg / 2.0f ) * radians( fovdeg ) ) );

	return float4x4(
		1.0f / ( aspect * tan_half_fov ), 0.0f, 0.0f, 0.0f,
		0.0f, 1.0f / tan_half_fov, 0.0f, 0.0f,
		0.0f, 0.0f, zfar / far_minus_near, 1.0f,
		0.0f, 0.0f, -( zfar * znear ) / far_minus_near, 0.0f
	);
}

float4x4 lookat( const float4& eye, const float4& target, const float4& up ) {
	const float4 forward = normalized( target - eye );
	const float4 right = normalized( cross( up, forward ) );
	const float4 up1 = normalized( cross( forward, right ) );

	return float4x4(
		right,
		up1,
		forward,
		float4( -dot( right, eye ), -dot( up1, eye ), -dot( forward, eye ), 1.0f )
	);
}


// double2x2
void identity( double2x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
}

double2x2 transpose( const double2x2& mat ) {
	return double2x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1]
	);
}

double2x2 inverse( const double2x2& mat ) {
	const double invdet = 1.0 / determinant( mat );
	return double2x2(
		 mat.rows[1][1] * invdet, -mat.rows[0][1] * invdet,
		-mat.rows[1][0] * invdet,  mat.rows[0][0] * invdet
	);
}

double determinant( const double2x2& mat ) {
	return mat.rows[0][0] * mat.rows[1][1] - mat.rows[1][0] * mat.rows[0][1];
}

double2x2 scale( const double2x2& mat, const double scalar ) {
	return scale( mat, double2( scalar, scalar ) );
}

double2x2 scale( const double2x2& mat, const double2& vec ) {
	return double2x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y
	);
}


// double3x2
void identity( double3x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
}

double2x3 transpose( const double3x2& mat ) {
	return double2x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1]
	);
}

double3x2 scale( const double3x2& mat, const double scalar ) {
	return scale( mat, double2( scalar, scalar ) );
}

double3x2 scale( const double3x2& mat, const double2& vec ) {
	return double3x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1]
	);
}


// double4x2
void identity( double4x2& mat ) {
	mat.rows[0] = { 1, 0 };
	mat.rows[1] = { 0, 1 };
	mat.rows[2] = { 0, 0 };
	mat.rows[3] = { 0, 0 };
}

double2x4 transpose( const double4x2& mat ) {
	return double2x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1]
	);
}

double4x2 scale( const double4x2& mat, const double scalar ) {
	return scale( mat, double2( scalar, scalar ) );
}

double4x2 scale( const double4x2& mat, const double2& vec ) {
	return double4x2(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,

		mat.rows[2][0],
		mat.rows[2][1],

		mat.rows[3][0],
		mat.rows[3][1]
	);
}


// double2x3
void identity( double2x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
}

double3x2 transpose( const double2x3& mat ) {
	return double3x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2]
	);
}

double2x3 scale( const double2x3& mat, const double scalar ) {
	return scale( mat, double3( scalar, scalar, scalar ) );
}

double2x3 scale( const double2x3& mat, const double3& vec ) {
	return double2x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2]
	);
}


// double3x3
void identity( double3x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
}

double3x3 transpose( const double3x3& mat ) {
	return double3x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2]
	);
}

double3x3 inverse( const double3x3& mat ) {
	const double invdet = 1.0 / determinant( mat );
	// also transposed here
	return double3x3(
		 ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1] ) * invdet,
		-( mat.rows[0][1] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][1] ) * invdet,
		 ( mat.rows[0][1] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][1] ) * invdet,

		-( mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[2][2] - mat.rows[0][2] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[1][2] - mat.rows[0][2] * mat.rows[1][0] ) * invdet,

		 ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0] ) * invdet,
		-( mat.rows[0][0] * mat.rows[2][1] - mat.rows[0][1] * mat.rows[2][0] ) * invdet,
		 ( mat.rows[0][0] * mat.rows[1][1] - mat.rows[0][1] * mat.rows[1][0] ) * invdet
	);
}

double determinant( const double3x3& mat ) {
	return
		mat.rows[0][0] * ( mat.rows[1][1] * mat.rows[2][2] - mat.rows[2][1] * mat.rows[1][2] )
		- mat.rows[0][1] * ( mat.rows[1][0] * mat.rows[2][2] - mat.rows[2][0] * mat.rows[1][2] )
		+ mat.rows[0][2] * ( mat.rows[1][0] * mat.rows[2][1] - mat.rows[2][0] * mat.rows[1][1] );
}

double3x3 translate( const double3x3& mat, const double2& vec ) {
	return double3x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2]
	);
}

double3x3 scale( const double3x3& mat, const double scalar ) {
	return scale( mat, double3( scalar, scalar, scalar ) );
}

double3x3 scale( const double3x3& mat, const double3& vec ) {
	return double3x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z
	);
}


// double4x3
void identity( double4x3& mat ) {
	mat.rows[0] = { 1, 0, 0 };
	mat.rows[1] = { 0, 1, 0 };
	mat.rows[2] = { 0, 0, 1 };
	mat.rows[3] = { 0, 0, 0 };
}

double3x4 transpose( const double4x3& mat ) {
	return double3x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2]
	);
}

double4x3 translate( const double4x3& mat, const double3& vec ) {
	return double4x3(
		mat[0][0], mat[0][1], mat[0][2] + vec.x,
		mat[1][0], mat[1][1], mat[1][2] + vec.y,
		mat[2][0], mat[2][1], mat[2][2] + vec.z,
		mat[3][0], mat[3][1], mat[3][2]
	);
}

double4x3 scale( const double4x3& mat, const double scalar ) {
	return scale( mat, double3( scalar, scalar, scalar ) );
}

double4x3 scale( const double4x3& mat, const double3& vec ) {
	return double4x3(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2]
	);
}


// double2x4
void identity( double2x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
}

double4x2 transpose( const double2x4& mat ) {
	return double4x2(
		mat.rows[0][0], mat.rows[1][0],
		mat.rows[0][1], mat.rows[1][1],
		mat.rows[0][2], mat.rows[1][2],
		mat.rows[0][3], mat.rows[1][3]
	);
}

double2x4 scale( const double2x4& mat, const double scalar ) {
	return scale( mat, double3( scalar, scalar, scalar ) );
}

double2x4 scale( const double2x4& mat, const double3& vec ) {
	return double2x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3]
	);
}


// double3x4
void identity( double3x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
}

double4x3 transpose( const double3x4& mat ) {
	return double4x3(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3]
	);
}

double3x4 translate( const double3x4& mat, const double2& vec ) {
	return double3x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3]
	);
}

double3x4 scale( const double3x4& mat, const double scalar ) {
	return scale( mat, double3( scalar, scalar, scalar ) );
}

double3x4 scale( const double3x4& mat, const double3& vec ) {
	return double3x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3]
	);
}


// double4x4
void identity( double4x4& mat ) {
	mat.rows[0] = { 1, 0, 0, 0 };
	mat.rows[1] = { 0, 1, 0, 0 };
	mat.rows[2] = { 0, 0, 1, 0 };
	mat.rows[3] = { 0, 0, 0, 1 };
}

double4x4 transpose( const double4x4& mat ) {
	return double4x4(
		mat.rows[0][0], mat.rows[1][0], mat.rows[2][0], mat.rows[3][0],
		mat.rows[0][1], mat.rows[1][1], mat.rows[2][1], mat.rows[3][1],
		mat.rows[0][2], mat.rows[1][2], mat.rows[2][2], mat.rows[3][2],
		mat.rows[0][3], mat.rows[1][3], mat.rows[2][3], mat.rows[3][3]
	);
}

double4x4 inverse( const double4x4& mat ) {
	// uses the glm version, which is basically just an optimised version of the adjugate formula
	double sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	double sub01 = mat.rows[1][2] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[2][3];
	double sub02 = mat.rows[1][2] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][2];

	double sub03 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	double sub04 = mat.rows[1][1] * mat.rows[3][3] - mat.rows[1][3] * mat.rows[3][1];
	double sub05 = mat.rows[1][1] * mat.rows[2][3] - mat.rows[1][3] * mat.rows[2][1];

	double sub06 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][1];
	double sub07 = mat.rows[1][1] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][1];
	double sub08 = mat.rows[1][1] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][1];

	double sub09 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	double sub10 = mat.rows[1][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[1][3];
	double sub11 = mat.rows[1][0] * mat.rows[2][3] - mat.rows[2][0] * mat.rows[1][3];

	double sub12 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[2][2] * mat.rows[3][0];
	double sub13 = mat.rows[1][0] * mat.rows[3][2] - mat.rows[1][2] * mat.rows[3][0];
	double sub14 = mat.rows[1][0] * mat.rows[2][2] - mat.rows[1][2] * mat.rows[2][0];

	double sub15 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[2][1] * mat.rows[3][0];
	double sub16 = mat.rows[1][0] * mat.rows[3][1] - mat.rows[1][1] * mat.rows[3][0];
	double sub17 = mat.rows[1][0] * mat.rows[2][1] - mat.rows[1][1] * mat.rows[2][0];

	double4 fac0 = double4( sub00, sub00, sub01, sub02 );
	double4 fac1 = double4( sub03, sub03, sub04, sub05 );
	double4 fac2 = double4( sub06, sub06, sub07, sub08 );
	double4 fac3 = double4( sub09, sub09, sub10, sub11 );
	double4 fac4 = double4( sub12, sub12, sub13, sub14 );
	double4 fac5 = double4( sub15, sub15, sub16, sub17 );

	double4 vec0 = double4( mat.rows[1][0], mat.rows[0][0], mat.rows[0][0], mat.rows[0][0] );
	double4 vec1 = double4( mat.rows[1][1], mat.rows[0][1], mat.rows[0][1], mat.rows[0][1] );
	double4 vec2 = double4( mat.rows[1][2], mat.rows[0][2], mat.rows[0][2], mat.rows[0][2] );
	double4 vec3 = double4( mat.rows[1][3], mat.rows[0][3], mat.rows[0][3], mat.rows[0][3] );

	double4 inv0 = vec1 * fac0 - vec2 * fac1 + vec3 * fac2;
	double4 inv1 = vec0 * fac0 - vec2 * fac3 + vec3 * fac4;
	double4 inv2 = vec0 * fac1 - vec1 * fac3 + vec3 * fac5;
	double4 inv3 = vec0 * fac2 - vec1 * fac4 + vec2 * fac5;

	double4 sign0 = double4(  1, -1,  1, -1 );
	double4 sign1 = double4( -1,  1, -1,  1 );

	double4x4 result = double4x4(
		inv0 * sign0,
		inv1 * sign1,
		inv2 * sign0,
		inv3 * sign1
	);

	double4 col0 = double4( result.rows[0][0], result.rows[1][0], result.rows[2][0], result.rows[3][0] );
	double4 dot0 = mat.rows[0] * col0;

	const double dot1 = ( dot0.x + dot0.y ) + ( dot0.z + dot0.w );

	const double invdet = 1.0 / dot1;

	return result * invdet;
}

double determinant( const double4x4& mat ) {
	// using glm's method where you basically take determinants from each sub matrix and cache the repeat occurences
	double sub00 = mat.rows[2][2] * mat.rows[3][3] - mat.rows[3][2] * mat.rows[2][3];
	double sub01 = mat.rows[2][1] * mat.rows[3][3] - mat.rows[2][3] * mat.rows[3][1];
	double sub02 = mat.rows[2][1] * mat.rows[3][2] - mat.rows[3][1] * mat.rows[2][2];
	double sub03 = mat.rows[2][0] * mat.rows[3][3] - mat.rows[3][0] * mat.rows[2][3];
	double sub04 = mat.rows[2][0] * mat.rows[3][2] - mat.rows[3][0] * mat.rows[2][2];
	double sub05 = mat.rows[2][0] * mat.rows[3][1] - mat.rows[3][0] * mat.rows[2][1];

	double4 cofactor = double4(
		 ( mat.rows[1][1] * sub00 - mat.rows[1][2] * sub01 + mat.rows[1][3] * sub02 ),
		-( mat.rows[1][0] * sub00 - mat.rows[1][2] * sub03 + mat.rows[1][3] * sub04 ),
		 ( mat.rows[1][0] * sub01 - mat.rows[1][1] * sub03 + mat.rows[1][3] * sub05 ),
		-( mat.rows[1][0] * sub02 - mat.rows[1][1] * sub04 + mat.rows[1][2] * sub05 )
	);

	return
		mat.rows[0][0] * cofactor.x + mat.rows[0][1] * cofactor.y +
		mat.rows[0][2] * cofactor.z + mat.rows[0][3] * cofactor.w;
}

double4x4 translate( const double4x4& mat, const double3& vec ) {
	return double4x4(
		mat[0][0], mat[0][1], mat[0][2], mat[0][3] + vec.x,
		mat[1][0], mat[1][1], mat[1][2], mat[1][3] + vec.y,
		mat[2][0], mat[2][1], mat[2][2], mat[2][3] + vec.z,
		mat[3][0], mat[3][1], mat[3][2], mat[3][3]
	);
}

double4x4 scale( const double4x4& mat, const double scalar ) {
	return scale( mat, double3( scalar, scalar, scalar ) );
}

double4x4 scale( const double4x4& mat, const double3& vec ) {
	return double4x4(
		mat.rows[0][0] * vec.x,
		mat.rows[0][1],
		mat.rows[0][2],
		mat.rows[0][3],

		mat.rows[1][0],
		mat.rows[1][1] * vec.y,
		mat.rows[1][2],
		mat.rows[1][3],

		mat.rows[2][0],
		mat.rows[2][1],
		mat.rows[2][2] * vec.z,
		mat.rows[2][3],

		mat.rows[3][0],
		mat.rows[3][1],
		mat.rows[3][2],
		mat.rows[3][3]
	);
}

inline double4x4 ortho( const double left, const double right, const double top, const double bottom, const double znear, const double zfar ) {
	const double right_plus_left = right + left;
	const double right_minus_left = right - left;
	const double top_plus_bottom = top + bottom;
	const double top_minus_bottom = top - bottom;
	const double far_minus_near = zfar - znear;

	return double4x4(
		2.0 / right_minus_left, 0.0, 0.0, -right_plus_left / right_minus_left,
		0.0, 2.0 / top_minus_bottom, 0.0, -top_plus_bottom / top_minus_bottom,
		0.0, 0.0, 1.0 / far_minus_near, -znear / far_minus_near,
		0.0, 0.0, 0.0, 1.0
	);
}

double4x4 perspective( const double fovdeg, const double aspect, const double znear, const double zfar ) {
	const double far_minus_near = zfar - znear;
	const double tan_half_fov = static_cast<double>( tan( ( fovdeg / 2.0 ) * radians( fovdeg ) ) );

	return double4x4(
		1.0 / ( aspect * tan_half_fov ), 0.0, 0.0, 0.0,
		0.0, 1.0 / tan_half_fov, 0.0, 0.0,
		0.0, 0.0, zfar / far_minus_near, 1.0,
		0.0, 0.0, -( zfar * znear ) / far_minus_near, 0.0
	);
}

double4x4 lookat( const double4& eye, const double4& target, const double4& up ) {
	const double4 forward = normalized( target - eye );
	const double4 right = normalized( cross( up, forward ) );
	const double4 up1 = normalized( cross( forward, right ) );

	return double4x4(
		right,
		up1,
		forward,
		double4( -dot( right, eye ), -dot( up1, eye ), -dot( forward, eye ), 1.0 )
	);
}

