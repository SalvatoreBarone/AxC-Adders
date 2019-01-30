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
 * @file   InAx2_adder.cpp
 * @author Andrea Aletto
 * @date   30 gen 2019
 * @brief  Implementation of InAx2 inexact hardware cell
 ******************************************************************************/

#include "inexact_adders.h"
#include <stdlib.h>
#include <math.h>

static int InAx2_sum(int a, int b, int cin);
static int InAx2_carry(int a, int b, int cin);

int InAx2_adder(int nab, int a, int b)
{
	int i;
       	int current_carry = 0;
	int lsb_a, lsb_b, lsb_sum;
        int acc = 0;
	for(i = 0; i < nab; i++){
		lsb_a = (a & (1U<<i)) >> i;
		lsb_b = (b & (1U<<i)) >> i;
		lsb_sum = InAx2_sum(lsb_a, lsb_b, current_carry);
		acc |= (lsb_sum << i);
		current_carry = InAx2_carry(lsb_a, lsb_b, current_carry);
	}
	int mask = ~((1U << nab) -1);
	int precise_a = a & mask; 
	int precise_b = b & mask;
       	return precise_a + precise_b + acc;	
}

static int InAx2_sum(int a, int b, int cin)
{
	if(	(0 == a && 0 == b && 0 == cin) ||
	   	(1 == a && 1 == b && 0 == cin)	)
		return 0;
	return 1;	
}


static int InAx2_carry(int a, int b, int cin)
{
	if(	(0 == a && 0 == b && 0 == cin) ||
	   	(0 == a && 0 == b && 1 == cin) ||
	   	(0 == a && 1 == b && 0 == cin) ||		
	   	(1 == a && 0 == b && 0 == cin)	)
		return 0;
	return 1;
}
