//
// AxC Adders - A collection of inexact adders for model-driven development
// Copyright (C) 2019 Andrea Aletto <andrea.aletto8@gmail.com>
//
// This file is part of AxC Adders.
//
// AxC Adders is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// AxC Adders is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with AxC Adders.  If not, see <http://www.gnu.org/licenses/>.
//

/******************************************************************************
 * @file   generic_adder.cpp
 * @author Andrea Aletto
 * @date   2 feb 2019
 * @brief  Implementation of a generic inexact adder
 ******************************************************************************/

#include "inexact_adders_core.h"
#include "inexact_adders.h"
#include <bitset> 
#include <assert.h>

int inexact_adders::generic_adder(int nab, int first, int second, 
	bool (*inexact_adder_sum_func)(const bool&, const bool&, const bool&), 
	bool (*inexact_adder_carry_func)(const bool&, const bool&, const bool&),
	bool isSub)
{

    const int length = 32;
	std::bitset<length> a(first);
	std::bitset<length> b(isSub ? ~second : second);
	std::bitset<length+1> sum(0U);
	std::bitset<length+1> carry(isSub ? 1U : 0U);

	for(int i=0; i<nab; i++){
		sum[i] 		= (*inexact_adder_sum_func)(a[i], b[i], carry[i]);
		carry[i+1] 	= (*inexact_adder_carry_func)(a[i], b[i], carry[i]);
	}

	for(int i=nab; i<length;i++){		
		sum[i] 		= inexact_adders::FA_sum(a[i], b[i], carry[i]);
		carry[i+1] 	= inexact_adders::FA_carry(a[i], b[i], carry[i]);
	}

	sum[length] = carry[length];

	return ( (int)(sum.to_ulong()) );
}

int inexact_adders::inexactAdder(int nab, int first_operand, int second_operand, bool isSub, inexact_adders::InexactAdderType cellType){

	switch (cellType) {
		case inexact_adders::InAx1 :
			return inexact_adders::InAx1_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::InAx2 :
			return inexact_adders::InAx2_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::InAx3 :
			return inexact_adders::InAx3_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::AMA1 :
			return inexact_adders::AMA1_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::AMA2 :
			return inexact_adders::AMA2_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::AMA3 :
			return inexact_adders::AMA3_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::AMA4 :
			return inexact_adders::AMA4_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::AXA1 :
			return inexact_adders::AXA1_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::AXA2 :
			return inexact_adders::AXA2_adder (nab, first_operand, second_operand, isSub);
			break;

		case inexact_adders::AXA3 :
			return inexact_adders::AXA3_adder (nab, first_operand, second_operand, isSub);
			break;
		default:
			assert(false && "\nCell not supported.");
	
	}

}
