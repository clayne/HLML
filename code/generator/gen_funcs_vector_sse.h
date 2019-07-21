#pragma once

#include "gen_common.h"

extern void		Gen_SSE_GetInputDataNameNormalize( const genType_t type, const u32 numComponents, char* outString );
extern void		Gen_SSE_VectorNormalize( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );

extern void		Gen_SSE_GetInputDataNameDot( const genType_t type, const u32 numComponents, char* outString );
extern void		Gen_SSE_VectorDot( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );

extern void		Gen_SSE_GetInputDataNameLength( const genType_t type, const u32 numComponents, char* outString );
extern void		Gen_SSE_VectorLength( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );

extern void		Gen_SSE_GetInputDataNameDistance( const genType_t type, const u32 numComponents, char* outString );
extern void		Gen_SSE_VectorDistance( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );

#if 0
extern void		Gen_SSE_GetInputDataNameAngle( const genType_t type, const u32 numComponents, char* outString );
extern void		Gen_SSE_VectorAngle( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
#endif
