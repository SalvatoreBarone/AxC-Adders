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
 * @file   inexact_adders.h
 * @author Andrea Aletto
 * @date   30 gen 2019
 * @brief  Header file for the static library InexactAdders
 ******************************************************************************/

#ifndef INEXACT_ADDERS_H
#define INEXACT_ADDERS_H

int InAx1_adder(int nab, int a, int b);
int InAx2_adder(int nab, int a, int b);
int InAx3_adder(int nab, int a, int b);
int AMA1_adder(int nab, int a, int b);
int AMA2_adder(int nab, int a, int b);
int AMA3_adder(int nab, int a, int b);
int AMA4_adder(int nab, int a, int b);
int AXA1_adder(int nab, int a, int b);
int AXA2_adder(int nab, int a, int b);
int AXA3_adder(int nab, int a, int b);

#endif /* INEXACT_ADDERS_H */
