#pragma once

#include "gen_common.h"

extern void		Gen_GetParmListVector( const genType_t type, const u32 numComponents, const float* values, char* outParmListStr );

extern void		Gen_VectorOperatorsArithmetic( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );

extern void		Gen_VectorLength( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void		Gen_VectorNormalize( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void		Gen_VectorDot( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void		Gen_VectorCross( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void		Gen_VectorAngle( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void		Gen_VectorDistance( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );

extern void		Gen_VectorPack( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
extern void		Gen_VectorUnpack( const genType_t type, const u32 numComponents, stringBuilder_t* sbHeader, stringBuilder_t* sbInl );
