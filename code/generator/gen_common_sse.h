#pragma once

#include "gen_common.h"

extern void			Gen_SSE_Radians( const genType_t type, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void			Gen_SSE_Degrees( const genType_t type, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void			Gen_SSE_Lerp( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );

// DM: this is temporary
// rolling out more types once the first pass is done
inline bool32		Gen_TypeSupportsSSE( const genType_t type ) { return type == GEN_TYPE_FLOAT; }

inline const char*	Gen_SSE_GetRegisterName( const genType_t type );
inline void			Gen_SSE_GetInputDataName( const genType_t type, const u32 numRows, const u32 numCols, const char* function, char* outString );

inline const char*	Gen_SSE_GetFuncStrLoad( const genType_t type );
inline const char*	Gen_SSE_GetFuncStrStore( const genType_t type );
inline const char*	Gen_SSE_GetFuncStrSet1( const genType_t type );

inline void			Gen_SSE_GetIntrinsicArithmeticStr( const genType_t type, const genOpArithmetic_t op, char* outString );

// inline const char*	Gen_SSE_GetFuncStrAcos( const genType_t type );

inline const char*	Gen_SSE_GetFuncStrSqrt( const genType_t type );

const char* Gen_SSE_GetRegisterName( const genType_t type ) {
	switch ( type ) {
		case GEN_TYPE_INT:
		case GEN_TYPE_UINT:
			return "__m128i";

		case GEN_TYPE_FLOAT:
			return "__m128";

		case GEN_TYPE_DOUBLE:
			return "__m256d";

		case GEN_TYPE_BOOL:
		case GEN_TYPE_COUNT:
		default:
			printf( "ERROR: Bad genType_t passed into %s.\n", __FUNCTION__ );
			return "ERROR";
	}
}

void Gen_SSE_GetInputDataName( const genType_t type, const u32 numRows, const u32 numCols, const char* function, char* outString ) {
	assert( function );
	assert( outString );

	char fullTypeName[GEN_STRING_LENGTH_TYPE_NAME];
	Gen_GetFullTypeName( type, numRows, numCols, fullTypeName );

	snprintf( outString, GEN_STRING_LENGTH_SSE_INPUT_NAME, "sse_input_%s_%s_t", function, fullTypeName );
}

const char* Gen_SSE_GetFuncStrLoad( const genType_t type ) {
	switch ( type ) {
		case GEN_TYPE_INT:
		case GEN_TYPE_UINT:
		case GEN_TYPE_FLOAT:
			return "_mm_load_ps";

		case GEN_TYPE_DOUBLE:
			return "_mm_load_pd";

		case GEN_TYPE_BOOL:
		case GEN_TYPE_COUNT:
		default:
			printf( "ERROR: Bad genType_t passed into %s.\n", __FUNCTION__ );
			return "ERROR";
	}
}

const char* Gen_SSE_GetFuncStrStore( const genType_t type ) {
	switch ( type ) {
		case GEN_TYPE_INT:
		case GEN_TYPE_UINT:
		case GEN_TYPE_FLOAT:
			return "_mm_store_ps";

		case GEN_TYPE_DOUBLE:
			return "_mm_store_pd";

		case GEN_TYPE_BOOL:
		case GEN_TYPE_COUNT:
		default:
			printf( "ERROR: Bad genType_t passed into %s.\n", __FUNCTION__ );
			return "ERROR";
	}
}

const char* Gen_SSE_GetFuncStrSet1( const genType_t type ) {
	switch ( type ) {
		case GEN_TYPE_INT:
		case GEN_TYPE_UINT:
		case GEN_TYPE_FLOAT:
			return "_mm_set1_ps";

		case GEN_TYPE_DOUBLE:
			return "_mm_set1_pd";

		case GEN_TYPE_BOOL:
		case GEN_TYPE_COUNT:
		default:
			printf( "ERROR: Bad genType_t passed into %s.\n", __FUNCTION__ );
			return "ERROR";
	}
}

void Gen_SSE_GetIntrinsicArithmeticStr( const genType_t type, const genOpArithmetic_t op, char* outString ) {
	assert( type < GEN_TYPE_COUNT );
	assert( op < GEN_OP_ARITHMETIC_COUNT );

	const char* opStr = GEN_OPERATOR_STRINGS_ARITHMETIC[op];

	// const char* suffix = GetSSEIntrinsicSuffixStr( type );
	const char* suffix = NULL;
	switch ( type ) {
		case GEN_TYPE_INT:
		case GEN_TYPE_UINT:
			suffix = "epi32";
			break;

		case GEN_TYPE_FLOAT:
			suffix = "ps";
			break;

		case GEN_TYPE_DOUBLE:
			suffix = "pd";
			break;

		case GEN_TYPE_BOOL:
		case GEN_TYPE_COUNT:
		default:
			printf( "ERROR: Bad genType_t passed into %s.\n", __FUNCTION__ );
			suffix = "ERROR";
			break;
	}

	snprintf( outString, GEN_STRING_LENGTH_SSE_INTRINSIC, "_mm_%s_%s", opStr, suffix );
}

// const char* Gen_SSE_GetFuncStrAcos( const genType_t type ) {
// 	switch ( type ) {
// 		case GEN_TYPE_INT:
// 		case GEN_TYPE_UINT:
// 		case GEN_TYPE_FLOAT:
// 			return "_mm_acos_ps";

// 		case GEN_TYPE_DOUBLE:
// 			return "_mm_acos_pd";

// 		case GEN_TYPE_BOOL:
// 		case GEN_TYPE_COUNT:
// 		default:
// 			printf( "ERROR: Bad genType_t passed into %s.\n", __FUNCTION__ );
// 			return "ERROR";
// 	}
// }

const char* Gen_SSE_GetFuncStrSqrt( const genType_t type ) {
	switch ( type ) {
		case GEN_TYPE_INT:
		case GEN_TYPE_UINT:
		case GEN_TYPE_FLOAT:
			return "_mm_sqrt_ps";

		case GEN_TYPE_DOUBLE:
			return "_mm_sqrt_pd";

		case GEN_TYPE_BOOL:
		case GEN_TYPE_COUNT:
		default:
			printf( "ERROR: Bad genType_t passed into %s.\n", __FUNCTION__ );
			return "ERROR";
	}
}
