
/************************************************************************
 *
 *  gt64120.h
 *
 *  Register definitions for Galileo 64120 system controller
 *
 * ######################################################################
 *
 * mips_start_of_legal_notice
 * 
 * Copyright (c) 2008 MIPS Technologies, Inc. All rights reserved.
 *
 *
 * Unpublished rights (if any) reserved under the copyright laws of the
 * United States of America and other countries.
 *
 * This code is proprietary to MIPS Technologies, Inc. ("MIPS
 * Technologies"). Any copying, reproducing, modifying or use of this code
 * (in whole or in part) that is not expressly permitted in writing by MIPS
 * Technologies or an authorized third party is strictly prohibited. At a
 * minimum, this code is protected under unfair competition and copyright
 * laws. Violations thereof may result in criminal penalties and fines.
 *
 * MIPS Technologies reserves the right to change this code to improve
 * function, design or otherwise. MIPS Technologies does not assume any
 * liability arising out of the application or use of this code, or of any
 * error or omission in such code. Any warranties, whether express,
 * statutory, implied or otherwise, including but not limited to the implied
 * warranties of merchantability or fitness for a particular purpose, are
 * excluded. Except as expressly provided in any written license agreement
 * from MIPS Technologies or an authorized third party, the furnishing of
 * this code does not give recipient any license to any intellectual
 * property rights, including any patent rights, that cover this code.
 *
 * This code shall not be exported or transferred for the purpose of
 * reexporting in violation of any U.S. or non-U.S. regulation, treaty,
 * Executive Order, law, statute, amendment or supplement thereto.
 *
 * This code constitutes one or more of the following: commercial computer
 * software, commercial computer software documentation or other commercial
 * items. If the user of this code, or any related documentation of any
 * kind, including related technical data or manuals, is an agency,
 * department, or other entity of the United States government
 * ("Government"), the use, duplication, reproduction, release,
 * modification, disclosure, or transfer of this code, or any related
 * documentation of any kind, is restricted in accordance with Federal
 * Acquisition Regulation 12.212 for civilian agencies and Defense Federal
 * Acquisition Regulation Supplement 227.7202 for military agencies. The use
 * of this code by the Government is further restricted in accordance with
 * the terms of the license agreement(s) and/or applicable contract terms
 * and conditions covering this code from MIPS Technologies or an authorized
 * third party.
 *
 * 
 * mips_end_of_legal_notice
 * 
 *
 ************************************************************************/

#ifndef GT64120_H
#define GT64120_H

/************************************************************************
 *  Include files
 ************************************************************************/

#include <sysdefs.h>
#include <pci.h>

/************************************************************************
 *  Register offset addresses
 ************************************************************************/

#define GT_CPU_OFS		    0x000

#define GT_INTRCAUSE_OFS	    0xc18
#define GT_CPUINT_MASK_OFS	    0xc1c
#define GT_PCI0_CMD_OFS		    0xc00
#define GT_PCI0_CFGADDR_OFS	    0xcf8
#define GT_PCI0_CFGDATA_OFS	    0xcfc
#define GT_SDRAM_BM_OFS		    0x478
#define GT_SDRAM_ADDRDECODE_OFS     0x47c
#define GT_SDRAM_B0_OFS	    	    0x44c
#define GT_SDRAM_B2_OFS		    0x454
#define GT_SDRAM_CFG_OFS	    0x448
#define GT_SDRAM_OPMODE_OFS	    0x474

#define GT_ISD_OFS		    0x068

#define GT_SCS10LD_OFS		    0x008
#define GT_SCS10HD_OFS		    0x010
#define GT_SCS32LD_OFS		    0x018
#define GT_SCS32HD_OFS		    0x020
#define GT_CS20LD_OFS		    0x028
#define GT_CS20HD_OFS		    0x030
#define GT_CS3BOOTLD_OFS	    0x038
#define GT_CS3BOOTHD_OFS	    0x040
#define GT_PCI0IOLD_OFS		    0x048
#define GT_PCI0IOHD_OFS		    0x050
#define GT_PCI0M0LD_OFS		    0x058
#define GT_PCI0M0HD_OFS		    0x060
#define GT_PCI0M1LD_OFS		    0x080
#define GT_PCI0M1HD_OFS		    0x088
#define GT_PCI1IOLD_OFS		    0x090
#define GT_PCI1IOHD_OFS		    0x098
#define GT_PCI1M0LD_OFS		    0x0a0
#define GT_PCI1M0HD_OFS		    0x0a8
#define GT_PCI1M1LD_OFS		    0x0b0
#define GT_PCI1M1HD_OFS		    0x0b8

#define GT_PCI0IORMP_OFS	    0x0f0

#define GT_SCS0LD_OFS		    0x400	
#define GT_SCS0HD_OFS		    0x404
#define GT_SCS1LD_OFS		    0x408
#define GT_SCS1HD_OFS		    0x40c
#define GT_SCS2LD_OFS		    0x410
#define GT_SCS2HD_OFS		    0x414
#define GT_SCS3LD_OFS		    0x418
#define GT_SCS3HD_OFS		    0x41c
#define GT_CS0LD_OFS		    0x420
#define GT_CS0HD_OFS		    0x424
#define GT_CS1LD_OFS		    0x428
#define GT_CS1HD_OFS		    0x42c
#define GT_CS2LD_OFS		    0x430
#define GT_CS2HD_OFS		    0x434
#define GT_CS3LD_OFS		    0x438
#define GT_CS3HD_OFS		    0x43c
#define GT_BOOTLD_OFS		    0x440
#define GT_BOOTHD_OFS		    0x444

#define GT_TC0VALUE_OFS		    0x850
#define GT_TC1VALUE_OFS		    0x854
#define GT_TC2VALUE_OFS		    0x858
#define GT_TC3VALUE_OFS		    0x85c
#define GT_TCCTRL_OFS		    0x864

#define GT_PCI0_BS_SCS10_OFS	    0Xc08
#define GT_PCI0_BS_SCS32_OFS	    0xc0c
#define GT_PCI0_BARE_OFS	    0Xc3c

#define GT_PCI0_TOR_OFS	            0xc04

#define GT_PCI0_IACK_OFS	    0xc34

/************************************************************************
 *  Register encodings
 ************************************************************************/

#define GT_ISD_DEFAULT		0x000000a0

#define GT_CPU_WR_SHF		16
#define GT_CPU_WR_MSK		(MSK(1) << GT_CPU_WR_SHF)
#define GT_CPU_WR_BIT		GT_CPU_WR_MSK
#define GT_CPU_WR_DXDXDXDX	0
#define GT_CPU_WR_DDDD		1


#define GT_CFGADDR_CFGEN_SHF	31
#define GT_CFGADDR_CFGEN_MSK	(MSK(1) << GT_CFGADDR_CFGEN_SHF)
#define GT_CFGADDR_CFGEN_BIT	GT_CFGADDR_CFGEN_MSK

#define GT_CFGADDR_BUSNUM_SHF   16
#define GT_CFGADDR_BUSNUM_MSK	(MSK(8) << GT_CFGADDR_BUSNUM_SHF)

#define GT_CFGADDR_DEVNUM_SHF	11
#define GT_CFGADDR_DEVNUM_MSK	(MSK(5) << GT_CFGADDR_DEVNUM_SHF)

#define GT_CFGADDR_FUNCNUM_SHF	8
#define GT_CFGADDR_FUNCNUM_MSK	(MSK(3) << GT_CFGADDR_FUNCNUM_SHF)

#define GT_CFGADDR_REGNUM_SHF	2
#define GT_CFGADDR_REGNUM_MSK	(MSK(6) << GT_CFGADDR_REGNUM_SHF)


#define GT_SDRAM_BM_ORDER_SHF	2
#define GT_SDRAM_BM_ORDER_MSK	(MSK(1) << GT_SDRAM_BM_ORDER_SHF)
#define GT_SDRAM_BM_ORDER_BIT	GT_SDRAM_BM_ORDER_MSK
#define GT_SDRAM_BM_ORDER_SUB	1
#define GT_SDRAM_BM_ORDER_LIN	0

#define GT_SDRAM_BM_RSVD_ALL1	0xFFB


#define GT_SDRAM_ADDRDECODE_ADDR_SHF	0
#define GT_SDRAM_ADDRDECODE_ADDR_MSK	(MSK(3) << GT_SDRAM_ADDRDECODE_ADDR_SHF)
#define GT_SDRAM_ADDRDECODE_ADDR_0	0
#define GT_SDRAM_ADDRDECODE_ADDR_1	1
#define GT_SDRAM_ADDRDECODE_ADDR_2	2
#define GT_SDRAM_ADDRDECODE_ADDR_3	3
#define GT_SDRAM_ADDRDECODE_ADDR_4	4
#define GT_SDRAM_ADDRDECODE_ADDR_5	5
#define GT_SDRAM_ADDRDECODE_ADDR_6	6
#define GT_SDRAM_ADDRDECODE_ADDR_7	7


#define GT_SDRAM_B0_CASLAT_SHF		0
#define GT_SDRAM_B0_CASLAT_MSK		(MSK(2) << GT_SDRAM_B0_CASLAT_SHF)
#define GT_SDRAM_B0_CASLAT_2		1
#define GT_SDRAM_B0_CASLAT_3		2

#define GT_SDRAM_B0_FTDIS_SHF		2
#define GT_SDRAM_B0_FTDIS_MSK		(MSK(1) << GT_SDRAM_B0_FTDIS_SHF)
#define GT_SDRAM_B0_FTDIS_BIT		GT_SDRAM_B0_FTDIS_MSK

#define GT_SDRAM_B0_SRASPRCHG_SHF	3
#define GT_SDRAM_B0_SRASPRCHG_MSK	(MSK(1) << GT_SDRAM_B0_SRASPRCHG_SHF)
#define GT_SDRAM_B0_SRASPRCHG_BIT	GT_SDRAM_B0_SRASPRCHG_MSK
#define GT_SDRAM_B0_SRASPRCHG_2		0
#define GT_SDRAM_B0_SRASPRCHG_3		1

#define GT_SDRAM_B0_B0COMPAB_SHF	4
#define GT_SDRAM_B0_B0COMPAB_MSK	(MSK(1) << GT_SDRAM_B0_B0COMPAB_SHF)
#define GT_SDRAM_B0_B0COMPAB_BIT	GT_SDRAM_B0_B0COMPAB_MSK

#define GT_SDRAM_B0_64BITINT_SHF	5
#define GT_SDRAM_B0_64BITINT_MSK	(MSK(1) << GT_SDRAM_B0_64BITINT_SHF)
#define GT_SDRAM_B0_64BITINT_BIT	GT_SDRAM_B0_64BITINT_MSK
#define GT_SDRAM_B0_64BITINT_2		0
#define GT_SDRAM_B0_64BITINT_4		1

#define GT_SDRAM_B0_BW_SHF		6
#define GT_SDRAM_B0_BW_MSK		(MSK(1) << GT_SDRAM_B0_BW_SHF)
#define GT_SDRAM_B0_BW_BIT		GT_SDRAM_B0_BW_MSK
#define GT_SDRAM_B0_BW_32		0
#define GT_SDRAM_B0_BW_64		1

#define GT_SDRAM_B0_BLODD_SHF		7
#define GT_SDRAM_B0_BLODD_MSK		(MSK(1) << GT_SDRAM_B0_BLODD_SHF)
#define GT_SDRAM_B0_BLODD_BIT		GT_SDRAM_B0_BLODD_MSK

#define GT_SDRAM_B0_PAR_SHF		8
#define GT_SDRAM_B0_PAR_MSK		(MSK(1) << GT_SDRAM_B0_PAR_SHF)
#define GT_SDRAM_B0_PAR_BIT		GT_SDRAM_B0_PAR_MSK

#define GT_SDRAM_B0_BYPASS_SHF		9
#define GT_SDRAM_B0_BYPASS_MSK		(MSK(1) << GT_SDRAM_B0_BYPASS_SHF)
#define GT_SDRAM_B0_BYPASS_BIT		GT_SDRAM_B0_BYPASS_MSK

#define GT_SDRAM_B0_SRAS2SCAS_SHF	10
#define GT_SDRAM_B0_SRAS2SCAS_MSK	(MSK(1) << GT_SDRAM_B0_SRAS2SCAS_SHF)
#define GT_SDRAM_B0_SRAS2SCAS_BIT	GT_SDRAM_B0_SRAS2SCAS_MSK
#define GT_SDRAM_B0_SRAS2SCAS_2		0
#define GT_SDRAM_B0_SRAS2SCAS_3		1

#define GT_SDRAM_B0_SIZE_SHF		11
#define GT_SDRAM_B0_SIZE_MSK		(MSK(1) << GT_SDRAM_B0_SIZE_SHF)
#define GT_SDRAM_B0_SIZE_BIT		GT_SDRAM_B0_SIZE_MSK
#define GT_SDRAM_B0_SIZE_16M		0
#define GT_SDRAM_B0_SIZE_64M		1

#define GT_SDRAM_B0_EXTPAR_SHF		12
#define GT_SDRAM_B0_EXTPAR_MSK		(MSK(1) << GT_SDRAM_B0_EXTPAR_SHF)
#define GT_SDRAM_B0_EXTPAR_BIT		GT_SDRAM_B0_EXTPAR_MSK

#define GT_SDRAM_B0_BLEN_SHF		13
#define GT_SDRAM_B0_BLEN_MSK		(MSK(1) << GT_SDRAM_B0_BLEN_SHF)
#define GT_SDRAM_B0_BLEN_BIT		GT_SDRAM_B0_BLEN_MSK
#define GT_SDRAM_B0_BLEN_8		0
#define GT_SDRAM_B0_BLEN_4		1


#define GT_SDRAM_CFG_REFINT_SHF		0
#define GT_SDRAM_CFG_REFINT_MSK		(MSK(14) << GT_SDRAM_CFG_REFINT_SHF)

#define GT_SDRAM_CFG_NINTERLEAVE_SHF	14
#define GT_SDRAM_CFG_NINTERLEAVE_MSK    (MSK(1) << GT_SDRAM_CFG_NINTERLEAVE_SHF)
#define GT_SDRAM_CFG_NINTERLEAVE_BIT	GT_SDRAM_CFG_NINTERLEAVE_MSK

#define GT_SDRAM_CFG_RMW_SHF		15
#define GT_SDRAM_CFG_RMW_MSK		(MSK(1) << GT_SDRAM_CFG_RMW_SHF)
#define GT_SDRAM_CFG_RMW_BIT		GT_SDRAM_CFG_RMW_MSK

#define GT_SDRAM_CFG_NONSTAGREF_SHF	16
#define GT_SDRAM_CFG_NONSTAGREF_MSK	(MSK(1) << GT_SDRAM_CFG_NONSTAGREF_SHF)
#define GT_SDRAM_CFG_NONSTAGREF_BIT	GT_SDRAM_CFG_NONSTAGREF_MSK

#define GT_SDRAM_CFG_DUPCNTL_SHF	19
#define GT_SDRAM_CFG_DUPCNTL_MSK	(MSK(1) << GT_SDRAM_CFG_DUPCNTL_SHF)
#define GT_SDRAM_CFG_DUPCNTL_BIT	GT_SDRAM_CFG_DUPCNTL_MSK

#define GT_SDRAM_CFG_DUPBA_SHF		20
#define GT_SDRAM_CFG_DUPBA_MSK		(MSK(1) << GT_SDRAM_CFG_DUPBA_SHF)
#define GT_SDRAM_CFG_DUPBA_BIT		GT_SDRAM_CFG_DUPBA_MSK

#define GT_SDRAM_CFG_DUPEOT0_SHF	21
#define GT_SDRAM_CFG_DUPEOT0_MSK	(MSK(1) << GT_SDRAM_CFG_DUPEOT0_SHF)
#define GT_SDRAM_CFG_DUPEOT0_BIT	GT_SDRAM_CFG_DUPEOT0_MSK

#define GT_SDRAM_CFG_DUPEOT1_SHF	22
#define GT_SDRAM_CFG_DUPEOT1_MSK	(MSK(1) << GT_SDRAM_CFG_DUPEOT1_SHF)
#define GT_SDRAM_CFG_DUPEOT1_BIT	GT_SDRAM_CFG_DUPEOT1_MSK

#define GT_SDRAM_OPMODE_OP_SHF		0
#define GT_SDRAM_OPMODE_OP_MSK		(MSK(3) << GT_SDRAM_OPMODE_OP_SHF)
#define GT_SDRAM_OPMODE_OP_NORMAL	0
#define GT_SDRAM_OPMODE_OP_NOP		1
#define GT_SDRAM_OPMODE_OP_PRCHG	2
#define GT_SDRAM_OPMODE_OP_MODE		3
#define GT_SDRAM_OPMODE_OP_CBR		4


#define GT_PCI0_BARE_SWSCS3BOOTDIS_SHF	0
#define GT_PCI0_BARE_SWSCS3BOOTDIS_MSK	(MSK(1) << GT_PCI0_BARE_SWSCS3BOOTDIS_SHF)
#define GT_PCI0_BARE_SWSCS3BOOTDIS_BIT	GT_PCI0_BARE_SWSCS3BOOTDIS_MSK

#define GT_PCI0_BARE_SWSCS32DIS_SHF	1
#define GT_PCI0_BARE_SWSCS32DIS_MSK	(MSK(1) << GT_PCI0_BARE_SWSCS32DIS_SHF)
#define GT_PCI0_BARE_SWSCS32DIS_BIT	GT_PCI0_BARE_SWSCS32DIS_MSK
	
#define GT_PCI0_BARE_SWSCS10DIS_SHF	2
#define GT_PCI0_BARE_SWSCS10DIS_MSK	(MSK(1) << GT_PCI0_BARE_SWSCS10DIS_SHF)
#define GT_PCI0_BARE_SWSCS10DIS_BIT	GT_PCI0_BARE_SWSCS10DIS_MSK

#define GT_PCI0_BARE_INTIODIS_SHF	3
#define GT_PCI0_BARE_INTIODIS_MSK	(MSK(1) << GT_PCI0_BARE_INTIODIS_SHF)
#define GT_PCI0_BARE_INTIODIS_BIT	GT_PCI0_BARE_INTIODIS_MSK

#define GT_PCI0_BARE_INTMEMDIS_SHF	4
#define GT_PCI0_BARE_INTMEMDIS_MSK	(MSK(1) << GT_PCI0_BARE_INTMEMDIS_SHF)
#define GT_PCI0_BARE_INTMEMDIS_BIT	GT_PCI0_BARE_INTMEMDIS_MSK

#define GT_PCI0_BARE_CS3BOOTDIS_SHF	5
#define GT_PCI0_BARE_CS3BOOTDIS_MSK	(MSK(1) << GT_PCI0_BARE_CS3BOOTDIS_SHF)
#define GT_PCI0_BARE_CS3BOOTDIS_BIT	GT_PCI0_BARE_CS3BOOTDIS_MSK

#define GT_PCI0_BARE_CS20DIS_SHF	6
#define GT_PCI0_BARE_CS20DIS_MSK	(MSK(1) << GT_PCI0_BARE_CS20DIS_SHF)
#define GT_PCI0_BARE_CS20DIS_BIT	GT_PCI0_BARE_CS20DIS_MSK

#define GT_PCI0_BARE_SCS32DIS_SHF	7
#define GT_PCI0_BARE_SCS32DIS_MSK	(MSK(1) << GT_PCI0_BARE_SCS32DIS_SHF)
#define GT_PCI0_BARE_SCS32DIS_BIT	GT_PCI0_BARE_SCS32DIS_MSK

#define GT_PCI0_BARE_SCS10DIS_SHF	8
#define GT_PCI0_BARE_SCS10DIS_MSK	(MSK(1) << GT_PCI0_BARE_SCS10DIS_SHF)
#define GT_PCI0_BARE_SCS10DIS_BIT	GT_PCI0_BARE_SCS10DIS_MSK



/* INTRCAUSE Register */

#define GT_INTRCAUSE_INTSUM_SHF		0
#define GT_INTRCAUSE_INTSUM_MSK		(MSK(1) << GT_INTRCAUSE_INTSUM_SHF)
#define GT_INTRCAUSE_INTSUM_BIT		GT_INTRCAUSE_INTSUM_MSK

#define GT_INTRCAUSE_MEMOUT_SHF		1
#define GT_INTRCAUSE_MEMOUT_MSK		(MSK(1) << GT_INTRCAUSE_MEMOUT_SHF)
#define GT_INTRCAUSE_MEMOUT_BIT		GT_INTRCAUSE_MEMOUT_MSK

#define GT_INTRCAUSE_DMAOUT_SHF		2
#define GT_INTRCAUSE_DMAOUT_MSK		(MSK(1) << GT_INTRCAUSE_DMAOUT_SHF)
#define GT_INTRCAUSE_DMAOUT_BIT		GT_INTRCAUSE_DMAOUT_MSK

#define GT_INTRCAUSE_CPUOUT_SHF		3
#define GT_INTRCAUSE_CPUOUT_MSK		(MSK(1) << GT_INTRCAUSE_CPUOUT_SHF)
#define GT_INTRCAUSE_CPUOUT_BIT		GT_INTRCAUSE_CPUOUT_MSK

#define GT_INTRCAUSE_DMA0COMP_SHF	4
#define GT_INTRCAUSE_DMA0COMP_MSK	(MSK(1) << GT_INTRCAUSE_DMA0COMP_SHF)
#define GT_INTRCAUSE_DMA0COMP_BIT	GT_INTRCAUSE_DMA0COMP_MSK

#define GT_INTRCAUSE_DMA1COMP_SHF	5
#define GT_INTRCAUSE_DMA1COMP_MSK	(MSK(1) << GT_INTRCAUSE_DMA1COMP_SHF)
#define GT_INTRCAUSE_DMA1COMP_BIT	GT_INTRCAUSE_DMA1COMP_MSK

#define GT_INTRCAUSE_DMA2COMP_SHF	6
#define GT_INTRCAUSE_DMA2COMP_MSK	(MSK(1) << GT_INTRCAUSE_DMA2COMP_SHF)
#define GT_INTRCAUSE_DMA2COMP_BIT	GT_INTRCAUSE_DMA2COMP_MSK

#define GT_INTRCAUSE_DMA3COMP_SHF	7
#define GT_INTRCAUSE_DMA3COMP_MSK	(MSK(1) << GT_INTRCAUSE_DMA3COMP_SHF)
#define GT_INTRCAUSE_DMA3COMP_BIT	GT_INTRCAUSE_DMA3COMP_MSK

#define GT_INTRCAUSE_T0EXP_SHF		8
#define GT_INTRCAUSE_T0EXP_MSK		(MSK(1) << GT_INTRCAUSE_T0EXP_SHF)
#define GT_INTRCAUSE_T0EXP_BIT		GT_INTRCAUSE_T0EXP_MSK

#define GT_INTRCAUSE_T1EXP_SHF		9
#define GT_INTRCAUSE_T1EXP_MSK		(MSK(1) << GT_INTRCAUSE_T1EXP_SHF)
#define GT_INTRCAUSE_T1EXP_BIT		GT_INTRCAUSE_T1EXP_MSK

#define GT_INTRCAUSE_T2EXP_SHF		10
#define GT_INTRCAUSE_T2EXP_MSK		(MSK(1) << GT_INTRCAUSE_T2EXP_SHF)
#define GT_INTRCAUSE_T2EXP_BIT		GT_INTRCAUSE_T2EXP_MSK

#define GT_INTRCAUSE_T3EXP_SHF		11
#define GT_INTRCAUSE_T3EXP_MSK		(MSK(1) << GT_INTRCAUSE_T3EXP_SHF)
#define GT_INTRCAUSE_T3EXP_BIT		GT_INTRCAUSE_T3EXP_MSK

#define GT_INTRCAUSE_MASRDERR0_SHF	12
#define GT_INTRCAUSE_MASRDERR0_MSK	(MSK(1) << GT_INTRCAUSE_MASRDERR0_SHF)
#define GT_INTRCAUSE_MASRDERR0_BIT	GT_INTRCAUSE_MASRDERR0_MSK

#define GT_INTRCAUSE_SLVWRERR0_SHF	13
#define GT_INTRCAUSE_SLVWRERR0_MSK	(MSK(1) << GT_INTRCAUSE_SLVWRERR0_SHF)
#define GT_INTRCAUSE_SLVWRERR0_BIT	GT_INTRCAUSE_SLVWRERR0_MSK

#define GT_INTRCAUSE_MASWRERR0_SHF	14
#define GT_INTRCAUSE_MASWRERR0_MSK	(MSK(1) << GT_INTRCAUSE_MASWRERR0_SHF)
#define GT_INTRCAUSE_MASWRERR0_BIT	GT_INTRCAUSE_MASWRERR0_MSK

#define GT_INTRCAUSE_SLVRDERR0_SHF	15
#define GT_INTRCAUSE_SLVRDERR0_MSK	(MSK(1) << GT_INTRCAUSE_SLVRDERR0_SHF)
#define GT_INTRCAUSE_SLVRDERR0_BIT	GT_INTRCAUSE_SLVRDERR0_MSK

#define GT_INTRCAUSE_ADDRERR0_SHF	16
#define GT_INTRCAUSE_ADDRERR0_MSK	(MSK(1) << GT_INTRCAUSE_ADDRERR0_SHF)
#define GT_INTRCAUSE_ADDRERR0_BIT	GT_INTRCAUSE_ADDRERR0_MSK

#define GT_INTRCAUSE_MEMERR_SHF		17
#define GT_INTRCAUSE_MEMERR_MSK		(MSK(1) << GT_INTRCAUSE_MEMERR_SHF)
#define GT_INTRCAUSE_MEMERR_BIT		GT_INTRCAUSE_MEMERR_MSK

#define GT_INTRCAUSE_MASABORT0_SHF	18
#define GT_INTRCAUSE_MASABORT0_MSK	(MSK(1) << GT_INTRCAUSE_MASABORT0_SHF)
#define GT_INTRCAUSE_MASABORT0_BIT	GT_INTRCAUSE_MASABORT0_MSK

#define GT_INTRCAUSE_TARABORT0_SHF	19
#define GT_INTRCAUSE_TARABORT0_MSK	(MSK(1) << GT_INTRCAUSE_TARABORT0_SHF)
#define GT_INTRCAUSE_TARABORT0_BIT	GT_INTRCAUSE_TARABORT0_MSK

#define GT_INTRCAUSE_RETRYCTR0_SHF	20
#define GT_INTRCAUSE_RETRYCTR0_MSK	(MSK(1) << GT_INTRCAUSE_RETRYCTR0_SHF)
#define GT_INTRCAUSE_RETRYCTR0_BIT	GT_INTRCAUSE_RETRYCTR0_MSK

#define GT_INTRCAUSE_CPUINT_SHF		21
#define GT_INTRCAUSE_CPUINT_MSK		(MSK(5) << GT_INTRCAUSE_CPUINT_SHF)

#define GT_INTRCAUSE_PCIINT_SHF		26
#define GT_INTRCAUSE_PCIINT_MSK		(MSK(4) << GT_INTRCAUSE_PCIINT_SHF)

#define GT_INTRCAUSE_CPUINTSUM_SHF	30
#define GT_INTRCAUSE_CPUINTSUM_MSK	(MSK(1) << GT_INTRCAUSE_CPUINTSUM_SHF)
#define GT_INTRCAUSE_CPUINTSUM_BIT	GT_INTRCAUSE_CPUINTSUM_MSK

#define GT_INTRCAUSE_PCIINTSUM_SHF	31
#define GT_INTRCAUSE_PCIINTSUM_MSK	(MSK(1) << GT_INTRCAUSE_PCIINTSUM_SHF)
#define GT_INTRCAUSE_PCIINTSUM_BIT	GT_INTRCAUSE_PCIINTSUM_MSK


/* CPUINT_MASK Register */

#define GT_CPUINT_MASK_MEMOUT_SHF	1
#define GT_CPUINT_MASK_MEMOUT_MSK	(MSK(1) << GT_CPUINT_MASK_MEMOUT_SHF)
#define GT_CPUINT_MASK_MEMOUT_BIT	GT_CPUINT_MASK_MEMOUT_MSK

#define GT_CPUINT_MASK_DMAOUT_SHF	2
#define GT_CPUINT_MASK_DMAOUT_MSK	(MSK(1) << GT_CPUINT_MASK_DMAOUT_SHF)
#define GT_CPUINT_MASK_DMAOUT_BIT	GT_CPUINT_MASK_DMAOUT_MSK

#define GT_CPUINT_MASK_CPUOUT_SHF	3
#define GT_CPUINT_MASK_CPUOUT_MSK	(MSK(1) << GT_CPUINT_MASK_CPUOUT_SHF)
#define GT_CPUINT_MASK_CPUOUT_BIT	GT_CPUINT_MASK_CPUOUT_MSK

#define GT_CPUINT_MASK_DMA0COMP_SHF	4
#define GT_CPUINT_MASK_DMA0COMP_MSK	(MSK(1) << GT_CPUINT_MASK_DMA0COMP_SHF)
#define GT_CPUINT_MASK_DMA0COMP_BIT	GT_CPUINT_MASK_DMA0COMP_MSK

#define GT_CPUINT_MASK_DMA1COMP_SHF	5
#define GT_CPUINT_MASK_DMA1COMP_MSK	(MSK(1) << GT_CPUINT_MASK_DMA1COMP_SHF)
#define GT_CPUINT_MASK_DMA1COMP_BIT	GT_CPUINT_MASK_DMA1COMP_MSK

#define GT_CPUINT_MASK_DMA2COMP_SHF	6
#define GT_CPUINT_MASK_DMA2COMP_MSK	(MSK(1) << GT_CPUINT_MASK_DMA2COMP_SHF)
#define GT_CPUINT_MASK_DMA2COMP_BIT	GT_CPUINT_MASK_DMA2COMP_MSK

#define GT_CPUINT_MASK_DMA3COMP_SHF	7
#define GT_CPUINT_MASK_DMA3COMP_MSK	(MSK(1) << GT_CPUINT_MASK_DMA3COMP_SHF)
#define GT_CPUINT_MASK_DMA3COMP_BIT	GT_CPUINT_MASK_DMA3COMP_MSK

#define GT_CPUINT_MASK_T0EXP_SHF	8
#define GT_CPUINT_MASK_T0EXP_MSK	(MSK(1) << GT_CPUINT_MASK_T0EXP_SHF)
#define GT_CPUINT_MASK_T0EXP_BIT	GT_CPUINT_MASK_T0EXP_MSK

#define GT_CPUINT_MASK_T1EXP_SHF	9
#define GT_CPUINT_MASK_T1EXP_MSK	(MSK(1) << GT_CPUINT_MASK_T1EXP_SHF)
#define GT_CPUINT_MASK_T1EXP_BIT	GT_CPUINT_MASK_T1EXP_MSK

#define GT_CPUINT_MASK_T2EXP_SHF	10
#define GT_CPUINT_MASK_T2EXP_MSK	(MSK(1) << GT_CPUINT_MASK_T2EXP_SHF)
#define GT_CPUINT_MASK_T2EXP_BIT	GT_CPUINT_MASK_T2EXP_MSK

#define GT_CPUINT_MASK_T3EXP_SHF	11
#define GT_CPUINT_MASK_T3EXP_MSK	(MSK(1) << GT_CPUINT_MASK_T3EXP_SHF)
#define GT_CPUINT_MASK_T3EXP_BIT	GT_CPUINT_MASK_T3EXP_MSK

#define GT_CPUINT_MASK_MASRDERR0_SHF	12
#define GT_CPUINT_MASK_MASRDERR0_MSK	(MSK(1) << GT_CPUINT_MASK_MASRDERR0_SHF)
#define GT_CPUINT_MASK_MASRDERR0_BIT	GT_CPUINT_MASK_MASRDERR0_MSK

#define GT_CPUINT_MASK_SLVWRERR0_SHF	13
#define GT_CPUINT_MASK_SLVWRERR0_MSK	(MSK(1) << GT_CPUINT_MASK_SLVWRERR0_SHF)
#define GT_CPUINT_MASK_SLVWRERR0_BIT	GT_CPUINT_MASK_SLVWRERR0_MSK

#define GT_CPUINT_MASK_MASWRERR0_SHF	14
#define GT_CPUINT_MASK_MASWRERR0_MSK	(MSK(1) << GT_CPUINT_MASK_MASWRERR0_SHF)
#define GT_CPUINT_MASK_MASWRERR0_BIT	GT_CPUINT_MASK_MASWRERR0_MSK

#define GT_CPUINT_MASK_SLVRDERR0_SHF	15
#define GT_CPUINT_MASK_SLVRDERR0_MSK	(MSK(1) << GT_CPUINT_MASK_SLVRDERR0_SHF)
#define GT_CPUINT_MASK_SLVRDERR0_BIT	GT_CPUINT_MASK_SLVRDERR0_MSK

#define GT_CPUINT_MASK_ADDRERR0_SHF	16
#define GT_CPUINT_MASK_ADDRERR0_MSK	(MSK(1) << GT_CPUINT_MASK_ADDRERR0_SHF)
#define GT_CPUINT_MASK_ADDRERR0_BIT	GT_CPUINT_MASK_ADDRERR0_MSK

#define GT_CPUINT_MASK_MEMERR_SHF	17
#define GT_CPUINT_MASK_MEMERR_MSK	(MSK(1) << GT_CPUINT_MASK_MEMERR_SHF)
#define GT_CPUINT_MASK_MEMERR_BIT	GT_CPUINT_MASK_MEMERR_MSK

#define GT_CPUINT_MASK_MASABORT0_SHF	18
#define GT_CPUINT_MASK_MASABORT0_MSK	(MSK(1) << GT_CPUINT_MASK_MASABORT0_SHF)
#define GT_CPUINT_MASK_MASABORT0_BIT	GT_CPUINT_MASK_MASABORT0_MSK

#define GT_CPUINT_MASK_TARABORT0_SHF	19
#define GT_CPUINT_MASK_TARABORT0_MSK	(MSK(1) << GT_CPUINT_MASK_TARABORT0_SHF)
#define GT_CPUINT_MASK_TARABORT0_BIT	GT_CPUINT_MASK_TARABORT0_MSK

#define GT_CPUINT_MASK_RETRYCTR0_SHF	20
#define GT_CPUINT_MASK_RETRYCTR0_MSK	(MSK(1) << GT_CPUINT_MASK_RETRYCTR0_SHF)
#define GT_CPUINT_MASK_RETRYCTR0_BIT	GT_CPUINT_MASK_RETRYCTR0_MSK

#define GT_CPUINT_MASK_PCIINT_SHF	26
#define GT_CPUINT_MASK_PCIINT_MSK	(MSK(4) << GT_CPUINT_MASK_PCIINT_SHF)



#define GT_PCI0_CFGADDR_REGNUM_SHF	2
#define GT_PCI0_CFGADDR_REGNUM_MSK	(MSK(6) << GT_PCI0_CFGADDR_REGNUM_SHF)
#define GT_PCI0_CFGADDR_FUNCTNUM_SHF	8
#define GT_PCI0_CFGADDR_FUNCTNUM_MSK    (MSK(3) << GT_PCI0_CFGADDR_FUNCTNUM_SHF)
#define GT_PCI0_CFGADDR_DEVNUM_SHF	11
#define GT_PCI0_CFGADDR_DEVNUM_MSK	(MSK(5) << GT_PCI0_CFGADDR_DEVNUM_SHF)
#define GT_PCI0_CFGADDR_BUSNUM_SHF	16
#define GT_PCI0_CFGADDR_BUSNUM_MSK	(MSK(8) << GT_PCI0_CFGADDR_BUSNUM_SHF)
#define GT_PCI0_CFGADDR_CONFIGEN_SHF	31
#define GT_PCI0_CFGADDR_CONFIGEN_MSK	(MSK(1) << GT_PCI0_CFGADDR_CONFIGEN_SHF)
#define GT_PCI0_CFGADDR_CONFIGEN_BIT	GT_PCI0_CFGADDR_CONFIGEN_MSK


#define GT_TCCTRL_ENTC0_SHF		0
#define GT_TCCTRL_ENTC0_MSK		(MSK(1) << GT_TCCTRL_ENTC0_SHF)
#define GT_TCCTRL_ENTC0_BIT		GT_TCCTRL_ENTC0_MSK
#define GT_TCCTRL_SETC0_SHF		1
#define GT_TCCTRL_SETC0_MSK		(MSK(1) << GT_TCCTRL_SETC0_SHF)
#define GT_TCCTRL_SETC0_TIMER		GT_TCCTRL_SETC0_MSK

#define GT_TCCTRL_ENTC1_SHF		2
#define GT_TCCTRL_ENTC1_MSK		(MSK(1) << GT_TCCTRL_ENTC1_SHF)
#define GT_TCCTRL_ENTC1_BIT		GT_TCCTRL_ENTC1_MSK
#define GT_TCCTRL_SETC1_SHF		3
#define GT_TCCTRL_SETC1_MSK		(MSK(1) << GT_TCCTRL_SETC1_SHF)
#define GT_TCCTRL_SETC1_TIMER		GT_TCCTRL_SETC1_MSK

#define GT_TCCTRL_ENTC2_SHF		4
#define GT_TCCTRL_ENTC2_MSK		(MSK(1) << GT_TCCTRL_ENTC2_SHF)
#define GT_TCCTRL_ENTC2_BIT		GT_TCCTRL_ENTC2_MSK
#define GT_TCCTRL_SETC2_SHF		5
#define GT_TCCTRL_SETC2_MSK		(MSK(1) << GT_TCCTRL_SETC2_SHF)
#define GT_TCCTRL_SETC2_TIMER		GT_TCCTRL_SETC2_MSK

#define GT_TCCTRL_ENTC3_SHF		6
#define GT_TCCTRL_ENTC3_MSK		(MSK(1) << GT_TCCTRL_ENTC3_SHF)
#define GT_TCCTRL_ENTC3_BIT		GT_TCCTRL_ENTC3_MSK
#define GT_TCCTRL_SETC3_SHF		7
#define GT_TCCTRL_SETC3_MSK		(MSK(1) << GT_TCCTRL_SETC3_SHF)
#define GT_TCCTRL_SETC3_TIMER		GT_TCCTRL_SETC4_MSK


/* PCI BARs */
#define GT_BAR_SCS10_POS		PCI_BAR(0)
#define GT_BAR_SCS32_POS		PCI_BAR(1)
#define GT_BAR_INTERNAL_MEM_POS		PCI_BAR(4)

/************************************************************************
 *  Misc
 ************************************************************************/


#define GT_DEF_BASE		0x14000000	/* Base address after reset   */
#define GT_DEV		        0		/* Galileo PCI device number  */
#define GT_DEF_PCI0_MEM0_BASE	0x12000000	/* PCI0 Mem0 base after reset */
#define GT_MAX_BANKSIZE		(256 * 1024 * 1024)   /* Max 256MB bank	      */
#define GT_LATTIM_MIN    	6		      /* Minimum lat	      */


#ifdef _ASSEMBLER_

#ifdef EB

#define GT_SW( data, ofs, base ) \
		.##set noat; \
		SWAPEND32( data, AT, v1 ); \
		.##set at; \
		sw	data, ofs(base)

#define GT_LW( data, ofs, base ) \
		lw	data,   ofs(base); \
		.##set noat; \
		SWAPEND32( data, AT, v1 ); \
		.##set at

#else  /* #ifdef EB */

#define GT_SW( data, ofs, base )\
		sw	data, ofs(base)

#define GT_LW( data, ofs, base )\
		lw	data, ofs(base)

#endif	/* #ifdef EB */


#else   /* #ifdef _ASSEMBLER_ */

#define GT_W32(base, ofs, data)	  REGW32LE( (&((volatile UINT8*)(base))[ofs]), data)
#define GT_L32(base, ofs, data)	  REGR32LE( (&((volatile UINT8*)(base))[ofs]), data)

/* Function in flash for writing GT64120 register */
UINT32 gt64120_write_reg( UINT32 addr, UINT32 data );

#endif  /* #ifdef _ASSEMBLER_ */



#endif /* #ifndef GT64120_H */




