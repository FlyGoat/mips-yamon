/*
 * Definitions for the Algorithmics FPU Emulator port into MIPS Linux
 */
/**************************************************************************
 *
 *  include/asm-mips/fpu_emulator.h
 *
 *  Kevin D. Kissell, kevink@mips.com and Carsten Langgaard, carstenl@mips.com
 *  Copyright (C) 2000 MIPS Technologies, Inc.  All rights reserved.
 *
 * ########################################################################
 *
 *  This program is free software; you can distribute it and/or modify it
 *  under the terms of the GNU General Public License (Version 2) as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place - Suite 330, Boston MA 02111-1307, USA.
 *
 *************************************************************************/
/* 
 * Further private data for which no space exists in mips_fpu_soft_struct.
 * This should be subsumed into the mips_fpu_soft_struct structure as
 * defined in processor.h as soon as the absurd wired absolute assembler
 * offsets become dynamic at compile time.
 */

struct mips_fpu_emulator_private {
	unsigned int eir;
	struct {
		unsigned long long emulated;
		unsigned long long loads;
		unsigned long long stores;
		unsigned long long cp1ops;
		unsigned long long cp1xops;
		unsigned long long errors;
	} stats;
	char error_text[80];
};

extern struct mips_fpu_emulator_private fpuemuprivate;
