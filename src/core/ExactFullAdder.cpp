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
 * @brief  Implementation of model of a Full Adder hardware cell
 ******************************************************************************/

#include "inexact_adders_core.h"

bool inexact_adders::FA_sum(const bool& a, const bool& b, const bool& c_in){
    if(	(0 == a && 0 == b && 1 == c_in) ||
	   	(0 == a && 1 == b && 0 == c_in) ||
	   	(1 == a && 0 == b && 0 == c_in) ||		
	   	(1 == a && 1 == b && 1 == c_in)	){
		return 1;
	} else {
		return 0;
	}
}

bool inexact_adders::FA_carry(const bool& a, const bool& b, const bool& c_in){
    if(	(0 == a && 1 == b && 1 == c_in) ||
	   	(1 == a && 0 == b && 1 == c_in) ||
	   	(1 == a && 1 == b && 0 == c_in) ||		
	   	(1 == a && 1 == b && 1 == c_in)	){
		return 1;
	} else {
		return 0;
	}
}
