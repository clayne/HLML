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

#include <temper/temper.h>

static void OnSuiteEnd( void* userdata )
{
	( (void) userdata );
	printf( "\n" );
}

TEMPER_SUITE_EXTERN( Test_bool32_t );
TEMPER_SUITE_EXTERN( Test_bool2 );
TEMPER_SUITE_EXTERN( Test_bool3 );
TEMPER_SUITE_EXTERN( Test_bool4 );

TEMPER_SUITE_EXTERN( Test_bool2x1 );
TEMPER_SUITE_EXTERN( Test_bool2x2 );
TEMPER_SUITE_EXTERN( Test_bool2x3 );
TEMPER_SUITE_EXTERN( Test_bool2x4 );

TEMPER_SUITE_EXTERN( Test_bool3x1 );
TEMPER_SUITE_EXTERN( Test_bool3x2 );
TEMPER_SUITE_EXTERN( Test_bool3x3 );
TEMPER_SUITE_EXTERN( Test_bool3x4 );

TEMPER_SUITE_EXTERN( Test_bool4x1 );
TEMPER_SUITE_EXTERN( Test_bool4x2 );
TEMPER_SUITE_EXTERN( Test_bool4x3 );
TEMPER_SUITE_EXTERN( Test_bool4x4 );

TEMPER_SUITE_EXTERN( Test_int32_t );
TEMPER_SUITE_EXTERN( Test_int2 );
TEMPER_SUITE_EXTERN( Test_int3 );
TEMPER_SUITE_EXTERN( Test_int4 );

TEMPER_SUITE_EXTERN( Test_int2x1 );
TEMPER_SUITE_EXTERN( Test_int2x2 );
TEMPER_SUITE_EXTERN( Test_int2x3 );
TEMPER_SUITE_EXTERN( Test_int2x4 );

TEMPER_SUITE_EXTERN( Test_int3x1 );
TEMPER_SUITE_EXTERN( Test_int3x2 );
TEMPER_SUITE_EXTERN( Test_int3x3 );
TEMPER_SUITE_EXTERN( Test_int3x4 );

TEMPER_SUITE_EXTERN( Test_int4x1 );
TEMPER_SUITE_EXTERN( Test_int4x2 );
TEMPER_SUITE_EXTERN( Test_int4x3 );
TEMPER_SUITE_EXTERN( Test_int4x4 );

TEMPER_SUITE_EXTERN( Test_uint32_t );
TEMPER_SUITE_EXTERN( Test_uint2 );
TEMPER_SUITE_EXTERN( Test_uint3 );
TEMPER_SUITE_EXTERN( Test_uint4 );

TEMPER_SUITE_EXTERN( Test_uint2x1 );
TEMPER_SUITE_EXTERN( Test_uint2x2 );
TEMPER_SUITE_EXTERN( Test_uint2x3 );
TEMPER_SUITE_EXTERN( Test_uint2x4 );

TEMPER_SUITE_EXTERN( Test_uint3x1 );
TEMPER_SUITE_EXTERN( Test_uint3x2 );
TEMPER_SUITE_EXTERN( Test_uint3x3 );
TEMPER_SUITE_EXTERN( Test_uint3x4 );

TEMPER_SUITE_EXTERN( Test_uint4x1 );
TEMPER_SUITE_EXTERN( Test_uint4x2 );
TEMPER_SUITE_EXTERN( Test_uint4x3 );
TEMPER_SUITE_EXTERN( Test_uint4x4 );

TEMPER_SUITE_EXTERN( Test_float );
TEMPER_SUITE_EXTERN( Test_float2 );
TEMPER_SUITE_EXTERN( Test_float3 );
TEMPER_SUITE_EXTERN( Test_float4 );

TEMPER_SUITE_EXTERN( Test_float2x1 );
TEMPER_SUITE_EXTERN( Test_float2x2 );
TEMPER_SUITE_EXTERN( Test_float2x3 );
TEMPER_SUITE_EXTERN( Test_float2x4 );

TEMPER_SUITE_EXTERN( Test_float3x1 );
TEMPER_SUITE_EXTERN( Test_float3x2 );
TEMPER_SUITE_EXTERN( Test_float3x3 );
TEMPER_SUITE_EXTERN( Test_float3x4 );

TEMPER_SUITE_EXTERN( Test_float4x1 );
TEMPER_SUITE_EXTERN( Test_float4x2 );
TEMPER_SUITE_EXTERN( Test_float4x3 );
TEMPER_SUITE_EXTERN( Test_float4x4 );

TEMPER_SUITE_EXTERN( Test_double );
TEMPER_SUITE_EXTERN( Test_double2 );
TEMPER_SUITE_EXTERN( Test_double3 );
TEMPER_SUITE_EXTERN( Test_double4 );

TEMPER_SUITE_EXTERN( Test_double2x1 );
TEMPER_SUITE_EXTERN( Test_double2x2 );
TEMPER_SUITE_EXTERN( Test_double2x3 );
TEMPER_SUITE_EXTERN( Test_double2x4 );

TEMPER_SUITE_EXTERN( Test_double3x1 );
TEMPER_SUITE_EXTERN( Test_double3x2 );
TEMPER_SUITE_EXTERN( Test_double3x3 );
TEMPER_SUITE_EXTERN( Test_double3x4 );

TEMPER_SUITE_EXTERN( Test_double4x1 );
TEMPER_SUITE_EXTERN( Test_double4x2 );
TEMPER_SUITE_EXTERN( Test_double4x3 );
TEMPER_SUITE_EXTERN( Test_double4x4 );

	// quaternion tests
TEMPER_SUITE_EXTERN( Test_quaternion_float4 );
TEMPER_SUITE_EXTERN( Test_quaternion_double4 );
TEMPER_DEFS();

int main( int argc, char** argv )
{
	TEMPER_SET_COMMAND_LINE_ARGS( argc, argv );

	TEMPER_SET_SUITE_END_CALLBACK( OnSuiteEnd, nullptr );

	// scalar tests
	TEMPER_RUN_SUITE( Test_int32_t );
	TEMPER_RUN_SUITE( Test_uint32_t );
	TEMPER_RUN_SUITE( Test_float );
	TEMPER_RUN_SUITE( Test_double );

	// vector/matrix tests
	TEMPER_RUN_SUITE( Test_bool2 );
	TEMPER_RUN_SUITE( Test_bool3 );
	TEMPER_RUN_SUITE( Test_bool4 );

	TEMPER_RUN_SUITE( Test_bool2x2 );
	TEMPER_RUN_SUITE( Test_bool2x3 );
	TEMPER_RUN_SUITE( Test_bool2x4 );

	TEMPER_RUN_SUITE( Test_bool3x2 );
	TEMPER_RUN_SUITE( Test_bool3x3 );
	TEMPER_RUN_SUITE( Test_bool3x4 );

	TEMPER_RUN_SUITE( Test_bool4x2 );
	TEMPER_RUN_SUITE( Test_bool4x3 );
	TEMPER_RUN_SUITE( Test_bool4x4 );

	TEMPER_RUN_SUITE( Test_int2 );
	TEMPER_RUN_SUITE( Test_int3 );
	TEMPER_RUN_SUITE( Test_int4 );

	TEMPER_RUN_SUITE( Test_int2x2 );
	TEMPER_RUN_SUITE( Test_int2x3 );
	TEMPER_RUN_SUITE( Test_int2x4 );

	TEMPER_RUN_SUITE( Test_int3x2 );
	TEMPER_RUN_SUITE( Test_int3x3 );
	TEMPER_RUN_SUITE( Test_int3x4 );

	TEMPER_RUN_SUITE( Test_int4x2 );
	TEMPER_RUN_SUITE( Test_int4x3 );
	TEMPER_RUN_SUITE( Test_int4x4 );

	TEMPER_RUN_SUITE( Test_uint2 );
	TEMPER_RUN_SUITE( Test_uint3 );
	TEMPER_RUN_SUITE( Test_uint4 );

	TEMPER_RUN_SUITE( Test_uint2x2 );
	TEMPER_RUN_SUITE( Test_uint2x3 );
	TEMPER_RUN_SUITE( Test_uint2x4 );

	TEMPER_RUN_SUITE( Test_uint3x2 );
	TEMPER_RUN_SUITE( Test_uint3x3 );
	TEMPER_RUN_SUITE( Test_uint3x4 );

	TEMPER_RUN_SUITE( Test_uint4x2 );
	TEMPER_RUN_SUITE( Test_uint4x3 );
	TEMPER_RUN_SUITE( Test_uint4x4 );

	TEMPER_RUN_SUITE( Test_float2 );
	TEMPER_RUN_SUITE( Test_float3 );
	TEMPER_RUN_SUITE( Test_float4 );

	TEMPER_RUN_SUITE( Test_float2x2 );
	TEMPER_RUN_SUITE( Test_float2x3 );
	TEMPER_RUN_SUITE( Test_float2x4 );

	TEMPER_RUN_SUITE( Test_float3x2 );
	TEMPER_RUN_SUITE( Test_float3x3 );
	TEMPER_RUN_SUITE( Test_float3x4 );

	TEMPER_RUN_SUITE( Test_float4x2 );
	TEMPER_RUN_SUITE( Test_float4x3 );
	TEMPER_RUN_SUITE( Test_float4x4 );

	TEMPER_RUN_SUITE( Test_double2 );
	TEMPER_RUN_SUITE( Test_double3 );
	TEMPER_RUN_SUITE( Test_double4 );

	TEMPER_RUN_SUITE( Test_double2x2 );
	TEMPER_RUN_SUITE( Test_double2x3 );
	TEMPER_RUN_SUITE( Test_double2x4 );

	TEMPER_RUN_SUITE( Test_double3x2 );
	TEMPER_RUN_SUITE( Test_double3x3 );
	TEMPER_RUN_SUITE( Test_double3x4 );

	TEMPER_RUN_SUITE( Test_double4x2 );
	TEMPER_RUN_SUITE( Test_double4x3 );
	TEMPER_RUN_SUITE( Test_double4x4 );

	// quaternion tests
	TEMPER_RUN_SUITE( Test_quaternion_float4 );
	TEMPER_RUN_SUITE( Test_quaternion_double4 );

	TEMPER_SHOW_STATS();

	return TEMPER_EXIT_CODE();
}
