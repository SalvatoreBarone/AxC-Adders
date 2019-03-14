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
 * @file   AMA4_adder.cpp
 * @author Andrea Aletto
 * @date   30 gen 2019
 * @brief  Implementation of AMA4 inexact hardware cell
 ******************************************************************************/

#include "inexact_adders_core.h"
#include "inexact_adders.h"

static bool AMA4_sum(const bool&, const bool&, const bool&);
static bool AMA4_carry(const bool&, const bool&, const bool&);

int inexact_adders::AMA4_adder(int nab, int first_operand, int second_operand, bool isSub )
{
	return inexact_adders::generic_adder(
		nab, 
		first_operand, 
		second_operand, 
		AMA4_sum,
		AMA4_carry,
		isSub
	);
}

static bool AMA4_sum(const bool &a, const bool &b, const bool &cin)
{
	if(	(0 == a && 0 == b && 1 == cin) ||
	   	(0 == a && 1 == b && 1 == cin) ||
		(1 == a && 1 == b && 1 == cin))
		return 1;
	return 0;	
}

static bool AMA4_carry(const bool &a, const bool &b, const bool &cin)
{
	return a;
}
