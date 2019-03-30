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

#include "../../code/out/gen/hlml_functions_vector.h"

#include <temper/temper.h>

// also tests equality operators
TEMPER_TEST( TestAssignment_uint2 )
{
	uint2 a;

	a = uint2( 1U );
	TEMPER_EXPECT_TRUE( a == uint2( 1U ) );
	TEMPER_EXPECT_TRUE( a != uint2( 0U, 1U ) );

	a = uint2( 0U, 1U );
	TEMPER_EXPECT_TRUE( a == uint2( 0U, 1U ) );
	TEMPER_EXPECT_TRUE( a != uint2( 1U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArray_uint2 )
{
	uint2 a = uint2( 0U, 1U );

	TEMPER_EXPECT_TRUE( a[0] == 0U );
	TEMPER_EXPECT_TRUE( a[1] == 1U );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticAddition_uint2 )
{
	uint2 a  = uint2( 6U );
	uint2 b  = uint2( 2U, 3U );

	uint2 c = a + b;

	TEMPER_EXPECT_TRUE( c == uint2( 8U, 9U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticSubtraction_uint2 )
{
	uint2 a  = uint2( 6U );
	uint2 b  = uint2( 2U, 3U );

	uint2 c = a - b;

	TEMPER_EXPECT_TRUE( c == uint2( 4U, 3U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticMultiplication_uint2 )
{
	uint2 a  = uint2( 6U );
	uint2 b  = uint2( 2U, 3U );

	uint2 c = a * b;

	TEMPER_EXPECT_TRUE( c == uint2( 12U, 18U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestArithmeticDivision_uint2 )
{
	uint2 a  = uint2( 6U );
	uint2 b  = uint2( 2U, 2U );

	uint2 c = a / b;

	TEMPER_EXPECT_TRUE( c == uint2( 3U, 3U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestIncrement_uint2 )
{
	uint2 vec;

	// prefix
	vec = uint2( 0U, 0U );
	++vec;
	TEMPER_EXPECT_TRUE( vec == uint2( 1U, 1U ) );

	// postfix
	vec = uint2( 0U, 0U );
	vec++;
	TEMPER_EXPECT_TRUE( vec == uint2( 1U, 1U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDecrement_uint2 )
{
	uint2 vec;

	// prefix
	vec = uint2( 1U, 1U );
	--vec;
	TEMPER_EXPECT_TRUE( vec == uint2( 0U, 0U ) );

	// postfix
	vec = uint2( 1U, 1U );
	vec--;
	TEMPER_EXPECT_TRUE( vec == uint2( 0U, 0U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestRelational_uint2 )
{
	uint2 vec0 = uint2( 0U, 0U );
	uint2 vec1 = uint2( 1U, 1U );

	bool2 test0 = vec0 <= vec0;
	bool2 test1 = vec0 >= vec0;
	bool2 test2 = vec0 < vec1;

	bool2 test3 = vec1 <= vec1;
	bool2 test4 = vec1 >= vec1;
	bool2 test5 = vec1 > vec0;

	TEMPER_EXPECT_TRUE( test0 == bool2( true ) );
	TEMPER_EXPECT_TRUE( test1 == bool2( true ) );
	TEMPER_EXPECT_TRUE( test2 == bool2( true ) );
	TEMPER_EXPECT_TRUE( test3 == bool2( true ) );
	TEMPER_EXPECT_TRUE( test4 == bool2( true ) );
	TEMPER_EXPECT_TRUE( test5 == bool2( true ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_And_uint2 )
{
	uint2 a  = uint2( 21U, 21U );
	uint2 b  = uint2( 7U, 7U );

	uint2 answer = a & b;

	TEMPER_EXPECT_TRUE( answer == uint2( 5U, 5U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Or_uint2 )
{
	uint2 a  = uint2( 21U, 21U );
	uint2 b  = uint2( 7U, 7U );

	uint2 answer = a | b;

	TEMPER_EXPECT_TRUE( answer == uint2( 23U, 23U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_Xor_uint2 )
{
	uint2 a  = uint2( 21U, 21U );
	uint2 b  = uint2( 7U, 7U );

	uint2 answer = a ^ b;

	TEMPER_EXPECT_TRUE( answer == uint2( 18U, 18U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftLeft_uint2 )
{
	uint2 a  = uint2( 1U, 1U );
	uint2 b  = uint2( 2U, 2U );

	uint2 answer = a << b;

	TEMPER_EXPECT_TRUE( answer == uint2( 4U, 4U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwise_ShiftRight_uint2 )
{
	uint2 a  = uint2( 16U, 16U );
	uint2 b  = uint2( 4U, 4U );

	uint2 answer = a >> b;

	TEMPER_EXPECT_TRUE( answer == uint2( 1U, 1U ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestBitwiseUnary_uint2 )
{
	uint2 a = uint2( 0U, 0U );

	uint2 answer = ~a;

	TEMPER_EXPECT_TRUE( answer == uint2( (uint32_t) -1, (uint32_t) -1 ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestLength_uint2 )
{
	uint2 vec = uint2( 2U );

	TEMPER_EXPECT_TRUE( floateq( lengthsqr( vec ), 8.0f ) );
	TEMPER_EXPECT_TRUE( floateq( length( vec ), 2.82842712475f ) );

	TEMPER_PASS();
}

TEMPER_TEST( TestDistance_uint2 )
{
	float answerDistanceSqr = 104.000000f;
	float answerDistance    = 10.198039f;

	uint2 a = uint2( 7U, 4U );
	uint2 b = uint2( 17U, 6U );

	float distSqr = distancesqr( a, b );
	float dist    = distance( a, b );

	TEMPER_EXPECT_TRUE( floateq( distSqr, answerDistanceSqr ) );
	TEMPER_EXPECT_TRUE( floateq( dist, answerDistance ) );

	TEMPER_PASS();
}

TEMPER_SUITE( Test_uint2 )
{
	TEMPER_RUN_TEST( TestAssignment_uint2 );
	TEMPER_RUN_TEST( TestArray_uint2 );
	TEMPER_RUN_TEST( TestArithmeticAddition_uint2 );
	TEMPER_RUN_TEST( TestArithmeticSubtraction_uint2 );
	TEMPER_RUN_TEST( TestArithmeticMultiplication_uint2 );
	TEMPER_RUN_TEST( TestArithmeticDivision_uint2 );
	TEMPER_RUN_TEST( TestIncrement_uint2 );
	TEMPER_RUN_TEST( TestDecrement_uint2 );
	TEMPER_RUN_TEST( TestRelational_uint2 );
	TEMPER_RUN_TEST( TestBitwise_And_uint2 );
	TEMPER_RUN_TEST( TestBitwise_Or_uint2 );
	TEMPER_RUN_TEST( TestBitwise_Xor_uint2 );
	TEMPER_RUN_TEST( TestBitwise_ShiftLeft_uint2 );
	TEMPER_RUN_TEST( TestBitwise_ShiftRight_uint2 );
	TEMPER_RUN_TEST( TestBitwiseUnary_uint2 );
	TEMPER_RUN_TEST( TestLength_uint2 );
	TEMPER_RUN_TEST( TestDistance_uint2 );
};
