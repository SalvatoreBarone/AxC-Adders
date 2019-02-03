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
 * @brief  Declareation of the core elements of IneactAdders library
 ******************************************************************************/

#ifndef INEXACT_ADDERS_CORE_H
#define INEXACT_ADDERS_CORE_H

bool FA_sum(const bool&, const bool&, const bool&);
bool FA_carry(const bool&, const bool&, const bool&);
int generic_adder(int, int, int, bool (*inexact_adder_sum)(const bool&, const bool&, const bool&), bool (*inexact_adder_carry)(const bool&, const bool&, const bool&) );


#endif /* INEXACT_ADDERS_CORE_H */