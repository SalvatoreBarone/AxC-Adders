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
#include <bitset> 

int generic_adder(int nab, int first, int second, 
	bool (*inexact_adder_sum_func)(const bool&, const bool&, const bool&), 
	bool (*inexact_adder_carry_func)(const bool&, const bool&, const bool&) )
{

    const int length = 32;
	std::bitset<length> a(first);
	std::bitset<length> b(second);
	std::bitset<length+1> sum(0);
	std::bitset<length+1> carry(0);

	for(int i=0; i<nab; i++){
		sum[i] 		= (*inexact_adder_sum_func)(a[i], b[i], carry[i]);
		carry[i+1] 	= (*inexact_adder_carry_func)(a[i], b[i], carry[i]);
	}

	for(int i=nab; i<length;i++){		
		sum[i] 		= FA_sum(a[i], b[i], carry[i]);
		carry[i+1] 	= FA_carry(a[i], b[i], carry[i]);
	}

	sum[length] = carry[length];

	return ( (int)(sum.to_ulong()) );
}