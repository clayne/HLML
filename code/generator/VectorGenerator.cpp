#include "VectorGenerator.h"

#include "gen_doc_common.h"

#include "FileIO.h"

#include <assert.h>
#include <string>

void VectorGenerator::Generate( const genType_t type, const uint32_t numComponents ) {
	assert( numComponents >= GEN_COMPONENT_COUNT_MIN );
	assert( numComponents <= GEN_COMPONENT_COUNT_MAX );

	m_type = type;
	m_numComponents = numComponents;

	m_numComponentsStr = std::to_string( numComponents );

	m_typeString = Gen_GetTypeString( m_type );
	m_fullTypeName = m_typeString + m_numComponentsStr;
	m_memberTypeString = Gen_GetMemberTypeString( m_type );

	m_codeHeader = std::string();
	m_codeInl = std::string();

	// header pre-functions
	{
		m_codeHeader += GEN_FILE_HEADER;

		m_codeHeader += "#pragma once\n";
		m_codeHeader += "\n";

		if ( m_type != GEN_TYPE_BOOL ) {
			m_codeHeader += "#include \"bool" + m_numComponentsStr + ".h\"\n";
			m_codeHeader += "\n";
		}

		m_codeHeader += "#include <stdint.h>\n";
		m_codeHeader += "\n";

		// forward declarations
		for ( uint32_t i = GEN_COMPONENT_COUNT_MIN; i <= GEN_COMPONENT_COUNT_MAX; i++ ) {
			// dont forward declare ourself
			if ( i != m_numComponents ) {
				m_codeHeader += "struct " + m_typeString + std::to_string( i ) + ";\n";
			}
		}

		if ( m_numComponents >= 3 ) {
			m_codeHeader += "struct float3;\n";
		}

		m_codeHeader += "\n";

		m_codeHeader += GetDocStruct();
		m_codeHeader += "struct " + m_fullTypeName + "\n";
		m_codeHeader += "{\n";
		m_codeHeader += "\tunion\n";
		m_codeHeader += "\t{\n";

		HeaderGenerateMembersStruct( GEN_COMPONENT_NAMES_VECTOR );

		if ( m_type != GEN_TYPE_BOOL ) {
			HeaderGenerateMembersStruct( GEN_COMPONENT_NAMES_COLOR );
		}

		m_codeHeader += "\t\t" + m_memberTypeString + std::string( " data[" ) + m_numComponentsStr + std::string( "] = { 0 };\n" );
		m_codeHeader += "\t};\n";
		m_codeHeader += "\n";
	}

	// inl pre-functions
	{
		m_codeInl += GEN_FILE_HEADER;

		m_codeInl += "// hlml includes\n";

		for ( uint32_t i = GEN_COMPONENT_COUNT_MIN; i <= GEN_COMPONENT_COUNT_MAX; i++ ) {
			// don't include ourself
			if ( m_numComponents != i ) {
				m_codeInl += "#include \"" + m_typeString + std::to_string( i ) + ".h\"\n";
			}
		}
		m_codeInl += "\n";

		m_codeInl += "#include \"../" + std::string( GEN_HEADER_MAIN ) + "\"\n";
		m_codeInl += "\n";

		m_codeInl += "// others\n";
		m_codeInl += "#include <math.h>\n";
		m_codeInl += "#include <memory.h>\n";
		m_codeInl += "#include <assert.h>\n";
		m_codeInl += "\n";
	}

	GenerateConstructors();

	GenerateOperatorsAssignment();

	GenerateOperatorsArray();

	GenerateSwizzleFuncs();

	m_codeHeader += "};\n\n";

	GenerateOperatorsEquality();

	m_codeHeader += "#include \"" + m_fullTypeName + ".inl\"";

	FS_WriteToFile( ( GEN_OUT_GEN_FOLDER_PATH + m_fullTypeName + ".h" ).c_str(), m_codeHeader.c_str(), m_codeHeader.size() );
	FS_WriteToFile( ( GEN_OUT_GEN_FOLDER_PATH + m_fullTypeName + ".inl" ).c_str(), m_codeInl.c_str(), m_codeInl.size() );
}

#ifdef _DEBUG
void VectorGenerator::PrintHeader() const {
	printf( "%s\n", m_codeHeader.c_str() );
}

void VectorGenerator::PrintInl() const {
	printf( "%s\n", m_codeInl.c_str() );
}
#endif

void VectorGenerator::HeaderGenerateMembersStruct( const std::string& componentNames ) {
	m_codeHeader += "\t\tstruct\n";
	m_codeHeader += "\t\t{\n";

	for ( uint32_t i = 0; i < m_numComponents; i++ ) {
		m_codeHeader += "\t\t\t" + m_memberTypeString + " " + componentNames[i] + ";\n";
	}
	m_codeHeader += "\t\t};\n";

	m_codeHeader += "\n";
}

void VectorGenerator::GenerateConstructors() {
	// default ctor
	{
		m_codeHeader += GetDocCtorDefault();
		m_codeHeader += "\tinline " + m_fullTypeName + "();\n";
		m_codeHeader += "\n";

		m_codeInl += m_fullTypeName + "::" + m_fullTypeName + "()\n";
		m_codeInl += "{\n";
		m_codeInl += "\tmemset( data, 0, " + m_numComponentsStr + " * sizeof( " + m_memberTypeString + " ) );\n";
		m_codeInl += "}\n";
		m_codeInl += "\n";
	}

	// single scalar ctor
	{
		m_codeHeader += GetDocScalar();
		m_codeHeader += "\tinline explicit " + m_fullTypeName + "( const " + m_memberTypeString + " x );\n";
		m_codeHeader += "\n";

		m_codeInl += m_fullTypeName + "::" + m_fullTypeName + "( const " + m_memberTypeString + " x )\n";
		m_codeInl += "{\n";
		m_codeInl += "\t";
		for ( uint32_t i = 0; i < m_numComponents; i++ ) {
			m_codeInl += std::string( "this->" ) + GEN_COMPONENT_NAMES_VECTOR[i] + std::string( " = " );
		}
		m_codeInl += "x;\n";
		m_codeInl += "}\n";
		m_codeInl += "\n";
	}

	// member-wise ctor
	{
		m_codeHeader += GetDocCtorMemberwise();
		m_codeHeader += "\tinline " + m_fullTypeName + "( ";
		for ( uint32_t i = 0; i < m_numComponents; i++ ) {
			m_codeHeader += std::string( "const " ) + m_memberTypeString + std::string( " " ) + GEN_COMPONENT_NAMES_VECTOR[i];

			if ( i != m_numComponents - 1 ) {
				m_codeHeader += ", ";
			}
		}
		m_codeHeader += " );\n";
		m_codeHeader += "\n";

		m_codeInl += m_fullTypeName + "::" + m_fullTypeName + "( ";
		for ( uint32_t i = 0; i < m_numComponents; i++ ) {
			m_codeInl += std::string( "const " ) + m_memberTypeString + std::string( " " ) + GEN_COMPONENT_NAMES_VECTOR[i];

			if ( i != m_numComponents - 1 ) {
				m_codeInl += ", ";
			}
		}
		m_codeInl += " )\n";
		m_codeInl += "{\n";
		for ( uint32_t i = 0; i < m_numComponents; i++ ) {
			m_codeInl += "\t";
			m_codeInl += std::string( "this->" ) + GEN_COMPONENT_NAMES_VECTOR[i] + std::string( " = " ) + GEN_COMPONENT_NAMES_VECTOR[i];
			m_codeInl += ";\n";
		}
		m_codeInl += "}\n";
		m_codeInl += "\n";
	}

	// copy ctors for all valid vector types
	{
		for ( uint32_t i = GEN_COMPONENT_COUNT_MIN; i <= GEN_COMPONENT_COUNT_MAX; i++ ) {
			m_codeHeader += GetDocCtorCopy();
			m_codeHeader += "\tinline " + m_fullTypeName + "( const " + m_typeString + std::to_string( i ) + "& other );\n";
			m_codeHeader += "\n";

			m_codeInl += m_fullTypeName + "::" + m_fullTypeName + "( const " + m_typeString + std::to_string( i ) + "& other )\n";
			m_codeInl += "{\n";
			m_codeInl += "\tmemcpy( data, other.data, sizeof( other.data ) );\n";
			m_codeInl += "}\n";
			m_codeInl += "\n";
		}
	}

	// dtor
	m_codeHeader += "\t~" + m_fullTypeName + "() {}\n";
	m_codeHeader += "\n";
}

void VectorGenerator::GenerateOperatorsAssignment() {
	for ( uint32_t i = GEN_COMPONENT_COUNT_MIN; i <= GEN_COMPONENT_COUNT_MAX; i++ ) {
		std::string componentStr = std::to_string( i );

		m_codeHeader += GetDocOperatorAssignment();
		m_codeHeader += "\tinline " + m_fullTypeName + " operator=( const " + m_typeString + componentStr + "& rhs );\n";
		m_codeHeader += "\n";

		m_codeInl += m_fullTypeName + " " + m_fullTypeName + "::operator=( const " + m_typeString + componentStr + "& rhs )\n";
		m_codeInl += "{\n";
		m_codeInl += "\tmemcpy( data, rhs.data, sizeof( rhs.data ) );\n";
		m_codeInl += "\treturn *this;\n";
		m_codeInl += "}\n";
		m_codeInl += "\n";
	}
}

void VectorGenerator::GenerateOperatorsArray() {
	m_codeHeader += GetDocOperatorArray();
	m_codeHeader += "\tinline const " + m_memberTypeString + "& operator[]( const uint32_t index ) const;\n";
	m_codeHeader += "\n";

	m_codeInl += "const " + m_memberTypeString + "& " + m_fullTypeName + "::operator[]( const uint32_t index ) const\n";
	m_codeInl += "{\n";
	m_codeInl += "\tassert( index < " + m_numComponentsStr + " );\n";
	m_codeInl += "\treturn data[index];\n";
	m_codeInl += "}\n";
	m_codeInl += "\n";

	m_codeHeader += GetDocOperatorArray();
	m_codeHeader += "\tinline " + m_memberTypeString + "& operator[]( const uint32_t index );\n";
	m_codeHeader += "\n";

	m_codeInl += m_memberTypeString + "& " + m_fullTypeName + "::operator[]( const uint32_t index )\n";
	m_codeInl += "{\n";
	m_codeInl += "\tassert( index < " + m_numComponentsStr + " );\n";
	m_codeInl += "\treturn data[index];\n";
	m_codeInl += "}\n";
	m_codeInl += "\n";
}

void VectorGenerator::GenerateOperatorsEquality() {
	// operator==
	{
		m_codeHeader += Gen_GetDocOperatorEquals( m_fullTypeName );
		m_codeHeader += "inline bool operator==( const " + m_fullTypeName + "& lhs, const " + m_fullTypeName + "& rhs );\n";
		m_codeHeader += "\n";

		m_codeInl += "bool operator==( const " + m_fullTypeName + "& lhs, const " + m_fullTypeName + "& rhs )\n";
		m_codeInl += "{\n";
		m_codeInl += "\treturn ";
		for ( uint32_t i = 0; i < m_numComponents; i++ ) {
			char component = GEN_COMPONENT_NAMES_VECTOR[i];

			if ( Gen_IsFloatingPointType( m_type ) ) {
				std::string floateqStr = Gen_GetFuncNameFloateq( m_type );

				m_codeInl += floateqStr + "( lhs." + component + ", rhs. " + component + " )";
			} else {
				m_codeInl += std::string( "( lhs." ) + component + " == rhs." + component + " )";
			}

			if ( i != m_numComponents - 1 ) {
				m_codeInl += " && ";
			}
		}
		m_codeInl += ";\n";
		m_codeInl += "}\n";
		m_codeInl += "\n";
	}

	Gen_OperatorNotEquals( m_type, 1, m_numComponents, m_codeHeader, m_codeInl );
}

void VectorGenerator::GenerateSwizzleFuncs() {
	m_codeHeader += "\t// swizzle funcs\n";

	char funcName[GEN_COMPONENT_COUNT_MAX + 1];
	memset( funcName, 0, sizeof( funcName ) );

	// for every vector type compatible with this one (that is: for each vector type with less components than this one)
	for ( uint32_t vecComponents = GEN_COMPONENT_COUNT_MIN; vecComponents <= m_numComponents; vecComponents++ ) {
		std::string vecTypeName = m_typeString + std::to_string( vecComponents );

		// generate every possible function combination ("xxxx" -> "xwzx" (etc.) -> "wwww")
		uint32_t numFuncs = static_cast<uint32_t>( pow( vecComponents, vecComponents ) );
		for ( uint32_t funcIndex = 0; funcIndex < numFuncs; funcIndex++ ) {
			// convert 1d index into 4d
			// follows the general formula: xn = ( ( Index - Index( x1, ..., x{n-1} ) ) / Product( D1, ..., D{N-1} ) ) % Dn
			// taken from: https://stackoverflow.com/questions/29142417/4d-position-from-1d-index
			const uint32_t x = funcIndex % vecComponents;
			const uint32_t y = ( ( funcIndex - x ) / vecComponents ) % vecComponents;
			const uint32_t z = ( ( funcIndex - y * vecComponents - x ) / ( vecComponents * vecComponents ) ) % vecComponents;
			const uint32_t w = ( ( funcIndex - z * vecComponents * vecComponents - x ) / ( vecComponents * vecComponents * vecComponents ) ) % vecComponents;

			sprintf( funcName, "%c%c%c%c", GEN_COMPONENT_NAMES_VECTOR[x], GEN_COMPONENT_NAMES_VECTOR[y], GEN_COMPONENT_NAMES_VECTOR[z], GEN_COMPONENT_NAMES_VECTOR[w] );
			funcName[vecComponents] = 0;

			m_codeHeader += "\tinline " + vecTypeName + " " + funcName + "() const { ";
			m_codeHeader += "return " + vecTypeName + "( ";
			for ( uint32_t componentIndex = 0; componentIndex < vecComponents; componentIndex++ ) {
				m_codeHeader += funcName[componentIndex];

				if ( componentIndex != vecComponents - 1 ) {
					m_codeHeader += ", ";
				}
			}
			m_codeHeader += " );";
			m_codeHeader += " }\n";
		}

		m_codeHeader += "\n";
	}
}

std::string VectorGenerator::GetDocStruct() const {
	std::string componentsStr;
	for ( uint32_t i = 0; i < m_numComponents; i++ ) {
		componentsStr += GEN_COMPONENT_NAMES_VECTOR[i];
	}

	if ( m_type != GEN_TYPE_BOOL ) {
		componentsStr += " and/or ";
		for ( uint32_t i = 0; i < m_numComponents; i++ ) {
			componentsStr += GEN_COMPONENT_NAMES_COLOR[i];
		}
	}

	return "/// \\brief A vector of " + m_numComponentsStr + " " + m_memberTypeString + "s with components " + componentsStr + ".\n" \
		"/// Components are also stored as elements in an array via a union.\n";
}

std::string VectorGenerator::GetDocCtorDefault( void ) const {
	return "\t/// Default constructor.  Initializes all values to zero.\n";
}

std::string VectorGenerator::GetDocScalar() const {
	return "\t/// Initializes all components of the vector to the given scalar value.\n";
}

std::string VectorGenerator::GetDocCtorMemberwise() const {
	std::string componentsStr;
	for ( uint32_t i = 0; i < m_numComponents; i++ ) {
		componentsStr += GEN_COMPONENT_NAMES_VECTOR[i];
	}

	return std::string( "\t/// Sets the " ) + componentsStr + " members of the vector to the corresponding parameters.\n";
}

std::string VectorGenerator::GetDocCtorCopy( void ) const {
	return "\t/// Copy constructor.  Copies the elements of the given vector via memcpy.\n";
}

std::string VectorGenerator::GetDocOperatorAssignment() const {
	return "\t/// Copies the elements of the given vector via a single memcpy.\n";
}

std::string VectorGenerator::GetDocOperatorArray() const {
	return "\t/// \\brief Returns the vector component at the given index.\n" \
		"\t/// Index CANNOT be lower than 0 or higher than " + std::to_string( m_numComponents - 1 ) + ".\n";
}