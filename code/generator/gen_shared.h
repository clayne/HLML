#pragma once

#include "int_types.h"

#define GEN_GENERATED_CODE_PATH					"code/generated_files/"
#define GEN_GENERATED_TESTS_PATH				"code/generated_files/tests/"

#define GEN_HEADER_MAIN							"hlml.h"
#define GEN_HEADER_TYPES						"hlml_types.h"
#define GEN_HEADER_CONSTANTS					"hlml_constants.h"
#define GEN_HEADER_CONSTANTS_SSE				"hlml_constants_sse.h"
#define GEN_HEADER_DEFINES						"hlml_defines.h"

#define GEN_FILENAME_FUNCTIONS_SCALAR			"hlml_functions_scalar"
#define GEN_FILENAME_FUNCTIONS_VECTOR			"hlml_functions_vector"
#define GEN_FILENAME_FUNCTIONS_MATRIX			"hlml_functions_matrix"
#define GEN_FILENAME_FUNCTIONS_QUATERNION		"hlml_functions_quaternion"

#define GEN_FILENAME_FUNCTIONS_SCALAR_SSE		"hlml_functions_scalar_sse"
#define GEN_FILENAME_FUNCTIONS_VECTOR_SSE		"hlml_functions_vector_sse"
//#define GEN_FILENAME_FUNCTIONS_MATRIX_SSE		"hlml_functions_matrix_sse"

// C specific maths functions
#define GEN_BUILTIN_FUNCTION_NAME_SIN			"sin"
#define GEN_BUILTIN_FUNCTION_NAME_COS			"cos"
#define GEN_BUILTIN_FUNCTION_NAME_ACOS			"acos"
#define GEN_BUILTIN_FUNCTION_NAME_TAN			"tan"
#define GEN_BUILTIN_FUNCTION_NAME_FABS			"fabs"
#define GEN_BUILTIN_FUNCTION_NAME_SQRT			"sqrt"

// SSE intrinsics
#define GEN_INTRINSIC_SET1						"set1"
#define GEN_INTRINSIC_MUL						"mul"

#define GEN_FILE_HEADER \
	"/*\n" \
	"===========================================================================\n" \
	"\n" \
	"HLML.\n" \
	"\n" \
	"MIT License\n" \
	"\n" \
	"Copyright (c) 2019 Dan Moody\n" \
	"\n" \
	"Permission is hereby granted, free of charge, to any person obtaining a copy\n" \
	"of this software and associated documentation files (the \"Software\"), to deal\n" \
	"in the Software without restriction, including without limitation the rights\n" \
	"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n" \
	"copies of the Software, and to permit persons to whom the Software is\n" \
	"furnished to do so, subject to the following conditions:\n" \
	"\n" \
	"The above copyright notice and this permission notice shall be included in all\n" \
	"copies or substantial portions of the Software.\n" \
	"\n" \
	"THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n" \
	"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n" \
	"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n" \
	"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n" \
	"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n" \
	"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n" \
	"SOFTWARE.\n" \
	"\n" \
	"===========================================================================\n" \
	"*/\n" \
	"\n" \
	"// THIS FILE WAS AUTOMATICALLY GENERATED BY A TOOL.\n" \
	"// EDITING THIS FILE MAY CAUSE SIDE EFFECTS.\n" \
	"// DO SO AT YOUR OWN RISK.\n" \
	"\n"

typedef enum genType_t {
	GEN_TYPE_BOOL			= 0,
	GEN_TYPE_INT,
	GEN_TYPE_UINT,
	GEN_TYPE_FLOAT,
	GEN_TYPE_DOUBLE,

	GEN_TYPE_COUNT
} genType_t;

typedef enum genMathsType_t {
	GEN_MATHS_TYPE_SCALAR	= 0,
	GEN_MATHS_TYPE_VECTOR,
	GEN_MATHS_TYPE_MATRIX
} genMathsType_t;

typedef struct typeInfo_t {
	genType_t		type;
	u32				numRows;
	u32				numCols;
	const char*		fullTypeName;
} typeInfo_t;

typedef enum genOpRelational_t {
	GEN_OP_RELATIONAL_LESS_THAN			= 0,
	GEN_OP_RELATIONAL_LESS_THAN_EQUAL,
	GEN_OP_RELATIONAL_GREATER_THAN,
	GEN_OP_RELATIONAL_GREATER_THAN_EQUAL,

	GEN_OP_RELATIONAL_COUNT
} genOpRelational_t;

typedef enum genOpArithmetic_t {
	GEN_OP_ARITHMETIC_ADD				= 0,
	GEN_OP_ARITHMETIC_SUB,
	GEN_OP_ARITHMETIC_MUL,
	GEN_OP_ARITHMETIC_DIV,

	GEN_OP_ARITHMETIC_COUNT
} genOpArithmetic_t;

typedef enum genOpIncrement_t {
	GEN_OP_INCREMENT					= 0,
	GEN_OP_DECREMENT,

	GEN_OP_INCREMENT_COUNT
} genOpIncrement_t;

typedef enum genOpBitwise_t {
	GEN_OP_BITWISE_NOT					= 0,
	GEN_OP_BITWISE_AND,
	GEN_OP_BITWISE_OR,
	GEN_OP_BITWISE_XOR,
	GEN_OP_BITWISE_SHIFT_LEFT,
	GEN_OP_BITWISE_SHIFT_RIGHT,

	GEN_OP_BITWISE_COUNT
} genOpBitwise_t;

typedef struct genFunctionParm_t {
	const typeInfo_t*	typeInfo;
	const char*			name;
} genFunctionParm_t;

static const char*		GEN_COMPONENT_NAMES_VECTOR	= "xyzw";
static const char*		GEN_COMPONENT_NAMES_COLOR	= "rgba";

typedef enum generatorFlagBits_t {
	GENERATOR_FLAG_GENERATE_OPERATORS		= GEN_BIT( 0 ),
	GENERATOR_FLAG_NAME_MANGLING			= GEN_BIT( 1 ),
	GENERATOR_FLAG_VECTOR_UNIONS			= GEN_BIT( 2 ),
	GENERATOR_FLAG_GENERATE_CONSTRUCTORS	= GEN_BIT( 3 ),
	GENERATOR_FLAG_PARMS_ARE_POINTERS		= GEN_BIT( 4 ),	// if not set then parms are references
	GENERATOR_FLAG_C_LINKAGE				= GEN_BIT( 5 ),	// will generate all the extern "C" stuff and all things related to that

	GENERATOR_FLAG_ALL
} generatorFlagBits_t;
typedef s32 generatorFlags_t;

typedef struct generatorStrings_t {
	const char* parmPassByStr;
	const char* parmAccessOperatorStr;
	const char* parmReferenceStr;
	const char* parmDereferenceStr;
} generatorStrings_t;

typedef enum operatorSingleParmType_t {
	OPERATOR_SINGLE_PARM_TYPE_PREFIX = 0,
	OPERATOR_SINGLE_PARM_TYPE_POSTFIX
} operatorSingleParmType_t;