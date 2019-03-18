#pragma once

#include "gen_common.h"

class VectorGenerator {
public:
					VectorGenerator() {}
					~VectorGenerator() {}

	void			Generate( const genType_t type, const uint32_t numComponents );

#ifdef _DEBUG
	void			PrintHeader() const;
	void			PrintInl() const;
#endif

private:
	std::string		m_codeHeader;
	std::string		m_codeInl;

	std::string		m_typeString;
	std::string		m_fullTypeName;
	std::string		m_memberTypeString;

	std::string		m_numComponentsStr;

	genType_t		m_type;
	uint32_t		m_numComponents;

private:
	void			HeaderGenerateMembersStruct( const std::string& componentNames );

	void			GenerateConstructors();
	void			GenerateOperatorsAssignment();
	void			GenerateOperatorsArray();
	void			GenerateOperatorsEquality();

	std::string		GetDocStruct() const;
	std::string		GetDocScalar() const;
	std::string		GetDocCtorDefault() const;
	std::string		GetDocCtorCopy() const;
	std::string		GetDocCtorMemberwise() const;
	std::string		GetDocOperatorAssignment() const;

	std::string		GetDocOperatorArray() const;
};
