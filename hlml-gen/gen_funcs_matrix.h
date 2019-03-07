#pragma once

#include "gen_common.h"

extern void	Gen_MatrixOperatorsArithmetic( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixOperatorsRelational( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );

extern void	Gen_MatrixIdentity( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixTranspose( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixInverse( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixDeterminant( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );

extern void	Gen_MatrixTranslate( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixRotate( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixScale( const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );

extern void	Gen_MatrixOrtho( const genHand_t hand, const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixPerspective( const genHand_t hand, const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );
extern void	Gen_MatrixLookAt( const genHand_t hand, const genType_t type, const uint32_t numRows, const uint32_t numCols, std::string& outHeader, std::string& outInl );