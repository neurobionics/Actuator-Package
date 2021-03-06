/****************************************************************************
	[Project] FlexSEA: Flexible & Scalable Electronics Architecture
	[Sub-project] 'flexsea-user' User projects
	Copyright (C) 2016 Dephy, Inc. <http://dephy.com/>

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************
	[Lead developper] Luke Mooney, lmooney at dephy dot com.
	[Origin] Based on Jean-Francois Duval's work at the MIT Media Lab 
	Biomechatronics research group <http://biomech.media.mit.edu/>
	[Contributors]
*****************************************************************************
	[This file] user-ex-MotorTestBench: User code running on Execute
*****************************************************************************
	[Change log] (Convention: YYYY-MM-DD | author | comment)
	* 2016-12-06 | jfduval | New release
	*
****************************************************************************/

#ifdef INCLUDE_UPROJ_MOTORTB

#include "flexsea_board.h"

#ifdef BOARD_TYPE_FLEXSEA_EXECUTE

#ifndef INC_MOTORTB_EX_H
#define INC_MOTORTB_EX_H
	
#include "main.h"
//****************************************************************************
// Include(s)
//****************************************************************************


//****************************************************************************
// Public Function Prototype(s):
//****************************************************************************

void initMotorTestBench(void);
void MotorTestBench_fsm(void);
void MotorTestBench_refresh_values(void);

//****************************************************************************
// Definition(s):
//****************************************************************************

//****************************************************************************
// Structure(s)
//****************************************************************************

//****************************************************************************
// Shared variable(s)
//****************************************************************************

#endif	//INC_MOTORTB_EX_H

#endif //BOARD_TYPE_FLEXSEA_EXECUTE
#endif //INCLUDE_UPROJ_MOTORTB
