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

// float2
void lengthsq_sse( const float2_sse_t* in, __m128* out_results )
{
	assert( in );
	assert( out_results );

	dot_sse( in, in, out_results );
}

void length_sse( const float2_sse_t* in, __m128* out_results )
{
	assert( in );
	assert( out_results );

	lengthsq_sse( in, out_results );
	*out_results = _mm_sqrt_ps( *out_results );
}

void normalize_sse( const float2_sse_t* in, float2_sse_t* out )
{
	assert( in );
	assert( out );

	__m128 len;
	length_sse( in, &len );

	__m128 invlen = _mm_rcp_ps( len );

	out->comp[0] = _mm_mul_ps( in->comp[0], invlen );
	out->comp[1] = _mm_mul_ps( in->comp[1], invlen );
}

void dot_sse( const float2_sse_t* lhs, const float2_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	__m128 mul0 = _mm_mul_ps( lhs->comp[0], rhs->comp[0] );
	__m128 mul1 = _mm_mul_ps( lhs->comp[1], rhs->comp[1] );

	*out_results = _mm_add_ps( mul0, mul1 );
}

void distancesq_sse( const float2_sse_t* lhs, const float2_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	float2_sse_t data;
	data.comp[0] = _mm_sub_ps( lhs->comp[0], rhs->comp[0] );
	data.comp[1] = _mm_sub_ps( lhs->comp[1], rhs->comp[1] );

	lengthsq_sse( &data, out_results );
}

void distance_sse( const float2_sse_t* lhs, const float2_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	float2_sse_t data;
	data.comp[0] = _mm_sub_ps( lhs->comp[0], rhs->comp[0] );
	data.comp[1] = _mm_sub_ps( lhs->comp[1], rhs->comp[1] );

	length_sse( &data, out_results );
}


// float3
void lengthsq_sse( const float3_sse_t* in, __m128* out_results )
{
	assert( in );
	assert( out_results );

	dot_sse( in, in, out_results );
}

void length_sse( const float3_sse_t* in, __m128* out_results )
{
	assert( in );
	assert( out_results );

	lengthsq_sse( in, out_results );
	*out_results = _mm_sqrt_ps( *out_results );
}

void normalize_sse( const float3_sse_t* in, float3_sse_t* out )
{
	assert( in );
	assert( out );

	__m128 len;
	length_sse( in, &len );

	__m128 invlen = _mm_rcp_ps( len );

	out->comp[0] = _mm_mul_ps( in->comp[0], invlen );
	out->comp[1] = _mm_mul_ps( in->comp[1], invlen );
	out->comp[2] = _mm_mul_ps( in->comp[2], invlen );
}

void dot_sse( const float3_sse_t* lhs, const float3_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	__m128 mul0 = _mm_mul_ps( lhs->comp[0], rhs->comp[0] );
	__m128 mul1 = _mm_mul_ps( lhs->comp[1], rhs->comp[1] );
	__m128 mul2 = _mm_mul_ps( lhs->comp[2], rhs->comp[2] );

	__m128 add0 = _mm_add_ps( mul0, mul1 );

	*out_results = _mm_add_ps( add0, mul2 );
}

void distancesq_sse( const float3_sse_t* lhs, const float3_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	float3_sse_t data;
	data.comp[0] = _mm_sub_ps( lhs->comp[0], rhs->comp[0] );
	data.comp[1] = _mm_sub_ps( lhs->comp[1], rhs->comp[1] );
	data.comp[2] = _mm_sub_ps( lhs->comp[2], rhs->comp[2] );

	lengthsq_sse( &data, out_results );
}

void distance_sse( const float3_sse_t* lhs, const float3_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	float3_sse_t data;
	data.comp[0] = _mm_sub_ps( lhs->comp[0], rhs->comp[0] );
	data.comp[1] = _mm_sub_ps( lhs->comp[1], rhs->comp[1] );
	data.comp[2] = _mm_sub_ps( lhs->comp[2], rhs->comp[2] );

	length_sse( &data, out_results );
}


// float4
void lengthsq_sse( const float4_sse_t* in, __m128* out_results )
{
	assert( in );
	assert( out_results );

	dot_sse( in, in, out_results );
}

void length_sse( const float4_sse_t* in, __m128* out_results )
{
	assert( in );
	assert( out_results );

	lengthsq_sse( in, out_results );
	*out_results = _mm_sqrt_ps( *out_results );
}

void normalize_sse( const float4_sse_t* in, float4_sse_t* out )
{
	assert( in );
	assert( out );

	__m128 len;
	length_sse( in, &len );

	__m128 invlen = _mm_rcp_ps( len );

	out->comp[0] = _mm_mul_ps( in->comp[0], invlen );
	out->comp[1] = _mm_mul_ps( in->comp[1], invlen );
	out->comp[2] = _mm_mul_ps( in->comp[2], invlen );
	out->comp[3] = _mm_mul_ps( in->comp[3], invlen );
}

void dot_sse( const float4_sse_t* lhs, const float4_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	__m128 mul0 = _mm_mul_ps( lhs->comp[0], rhs->comp[0] );
	__m128 mul1 = _mm_mul_ps( lhs->comp[1], rhs->comp[1] );
	__m128 mul2 = _mm_mul_ps( lhs->comp[2], rhs->comp[2] );
	__m128 mul3 = _mm_mul_ps( lhs->comp[3], rhs->comp[3] );

	__m128 add0 = _mm_add_ps( mul0, mul1 );
	__m128 add1 = _mm_add_ps( mul2, mul3 );

	*out_results = _mm_add_ps( add0, add1 );
}

void distancesq_sse( const float4_sse_t* lhs, const float4_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	float4_sse_t data;
	data.comp[0] = _mm_sub_ps( lhs->comp[0], rhs->comp[0] );
	data.comp[1] = _mm_sub_ps( lhs->comp[1], rhs->comp[1] );
	data.comp[2] = _mm_sub_ps( lhs->comp[2], rhs->comp[2] );
	data.comp[3] = _mm_sub_ps( lhs->comp[3], rhs->comp[3] );

	lengthsq_sse( &data, out_results );
}

void distance_sse( const float4_sse_t* lhs, const float4_sse_t* rhs, __m128* out_results )
{
	assert( lhs );
	assert( rhs );
	assert( out_results );

	float4_sse_t data;
	data.comp[0] = _mm_sub_ps( lhs->comp[0], rhs->comp[0] );
	data.comp[1] = _mm_sub_ps( lhs->comp[1], rhs->comp[1] );
	data.comp[2] = _mm_sub_ps( lhs->comp[2], rhs->comp[2] );
	data.comp[3] = _mm_sub_ps( lhs->comp[3], rhs->comp[3] );

	length_sse( &data, out_results );
}


