/*!
 * \file GPS_L2C.h
 * \brief  Defines system parameters for GPS L1 C/A signal and NAV data
 * \author Javier Arribas, 2015. jarribas(at)cttc.es
 *
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2015  (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * GNSS-SDR is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNSS-SDR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNSS-SDR. If not, see <http://www.gnu.org/licenses/>.
 *
 * -------------------------------------------------------------------------
 */


#ifndef GNSS_SDR_GPS_L2C_H_
#define GNSS_SDR_GPS_L2C_H_

#include <complex>
#include <vector>
#include <utility> // std::pair
#include <gnss_satellite.h>
#include "MATH_CONSTANTS.h"


// carrier and code frequencies
const double GPS_L2_FREQ_HZ              = 1.2276e9; //!< L2 [Hz]

const double GPS_L2_M_CODE_RATE_HZ      = 0.5115e6;   //!< GPS L2 M code rate [chips/s]
const int GPS_L2_M_CODE_LENGTH_CHIPS = 10230;    //!< GPS L2 M code length [chips]
const double GPS_L2_M_PERIOD       = 0.02;     //!< GPS L2 M code period [seconds]

const double GPS_L2_L_CODE_RATE_HZ      = 0.5115e6;   //!< GPS L2 L code rate [chips/s]
const int GPS_L2_L_CODE_LENGTH_CHIPS = 767250;    //!< GPS L2 L code length [chips]
const double GPS_L2_L_PERIOD       = 1.5;     //!< GPS L2 L code period [seconds]


const int32_t GPS_L2C_M_INIT_REG[115] =
{0742417664, 0756014035,0002747144,0066265724, // 1:4
0601403471, 0703232733, 0124510070,0617316361, // 5:8
0047541621, 0733031046, 0713512145, 0024437606,
0021264003, 0230655351, 0001314400, 0222021506,
0540264026, 0205521705, 0064022144, 0120161274,
0044023533, 0724744327, 0045743577, 0741201660,
0700274134, 0010247261, 0713433445, 0737324162,
0311627434, 0710452007, 0722462133, 0050172213,
0500653703, 0755077436, 0136717361, 0756675453,
0435506112, 0771353753, 0226107701, 0022025110,
0402466344, 0752566114, 0702011164, 0041216771,
0047457275, 0266333164, 0713167356, 0060546335,
0355173035, 0617201036, 0157465571, 0767360553,
0023127030, 0431343777, 0747317317, 0045706125,
0002744276, 0060036467, 0217744147, 0603340174,//57:60
0326616775, 0063240065, 0111460621, //61:63
0604055104, 0157065232, 0013305707, 0603552017,//159:162
0230461355, 0603653437, 0652346475, 0743107103,
0401521277, 0167335110, 0014013575, 0362051132,
0617753265, 0216363634, 0755561123, 0365304033,
0625025543, 0054420334,  0415473671,  0662364360,
0373446602,  0417564100,  0000526452,  0226631300,
0113752074,  0706134401,  0041352546,  0664630154,
0276524255,  0714720530,  0714051771,  0044526647,
0207164322,  0262120161,  0204244652,  0202133131,
0714351204,  0657127260,  0130567507,  0670517677,
0607275514,  0045413633,  0212645405,  0613700455,
0706202440,  0705056276,  0020373522,  0746013617,
0132720621,  0434015513,  0566721727,  0140633660};

#endif /* GNSS_SDR_GPS_L2C_H_ */