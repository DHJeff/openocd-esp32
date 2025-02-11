/* SPDX-License-Identifier: GPL-2.0-or-later */

/***************************************************************************
 *   Generic Xtensa target API for OpenOCD                                 *
 *   Copyright (C) 2020-2022 Cadence Design Systems, Inc.                  *
 *   Copyright (C) 2016-2019 Espressif Systems Ltd.                        *
 *   Author: Angus Gratton gus@projectgus.com                              *
 ***************************************************************************/

#ifndef OPENOCD_TARGET_XTENSA_REGS_H
#define OPENOCD_TARGET_XTENSA_REGS_H

struct reg_arch_type;

enum xtensa_reg_id {
	XT_REG_IDX_PC = 0,
	XT_REG_IDX_AR0,
	XT_REG_IDX_ARFIRST = XT_REG_IDX_AR0,
	XT_REG_IDX_AR1,
	XT_REG_IDX_AR2,
	XT_REG_IDX_AR3,
	XT_REG_IDX_AR4,
	XT_REG_IDX_AR5,
	XT_REG_IDX_AR6,
	XT_REG_IDX_AR7,
	XT_REG_IDX_AR8,
	XT_REG_IDX_AR9,
	XT_REG_IDX_AR10,
	XT_REG_IDX_AR11,
	XT_REG_IDX_AR12,
	XT_REG_IDX_AR13,
	XT_REG_IDX_AR14,
	XT_REG_IDX_AR15,
	XT_REG_IDX_AR16,
	XT_REG_IDX_AR17,
	XT_REG_IDX_AR18,
	XT_REG_IDX_AR19,
	XT_REG_IDX_AR20,
	XT_REG_IDX_AR21,
	XT_REG_IDX_AR22,
	XT_REG_IDX_AR23,
	XT_REG_IDX_AR24,
	XT_REG_IDX_AR25,
	XT_REG_IDX_AR26,
	XT_REG_IDX_AR27,
	XT_REG_IDX_AR28,
	XT_REG_IDX_AR29,
	XT_REG_IDX_AR30,
	XT_REG_IDX_AR31,
	XT_REG_IDX_AR32,
	XT_REG_IDX_AR33,
	XT_REG_IDX_AR34,
	XT_REG_IDX_AR35,
	XT_REG_IDX_AR36,
	XT_REG_IDX_AR37,
	XT_REG_IDX_AR38,
	XT_REG_IDX_AR39,
	XT_REG_IDX_AR40,
	XT_REG_IDX_AR41,
	XT_REG_IDX_AR42,
	XT_REG_IDX_AR43,
	XT_REG_IDX_AR44,
	XT_REG_IDX_AR45,
	XT_REG_IDX_AR46,
	XT_REG_IDX_AR47,
	XT_REG_IDX_AR48,
	XT_REG_IDX_AR49,
	XT_REG_IDX_AR50,
	XT_REG_IDX_AR51,
	XT_REG_IDX_AR52,
	XT_REG_IDX_AR53,
	XT_REG_IDX_AR54,
	XT_REG_IDX_AR55,
	XT_REG_IDX_AR56,
	XT_REG_IDX_AR57,
	XT_REG_IDX_AR58,
	XT_REG_IDX_AR59,
	XT_REG_IDX_AR60,
	XT_REG_IDX_AR61,
	XT_REG_IDX_AR62,
	XT_REG_IDX_AR63,
	XT_REG_IDX_ARLAST = XT_REG_IDX_AR63,
	XT_REG_IDX_LBEG,
	XT_REG_IDX_LEND,
	XT_REG_IDX_LCOUNT,
	XT_REG_IDX_SAR,
	XT_REG_IDX_WINDOWBASE,
	XT_REG_IDX_WINDOWSTART,
	XT_REG_IDX_CONFIGID0,
	XT_REG_IDX_CONFIGID1,
	XT_REG_IDX_PS,
	XT_REG_IDX_THREADPTR,
	XT_REG_IDX_BR,
	XT_REG_IDX_SCOMPARE1,
	XT_REG_IDX_ACCLO,
	XT_REG_IDX_ACCHI,
	XT_REG_IDX_M0,
	XT_REG_IDX_M1,
	XT_REG_IDX_M2,
	XT_REG_IDX_M3,
	XT_REG_IDX_F0,
	XT_REG_IDX_F1,
	XT_REG_IDX_F2,
	XT_REG_IDX_F3,
	XT_REG_IDX_F4,
	XT_REG_IDX_F5,
	XT_REG_IDX_F6,
	XT_REG_IDX_F7,
	XT_REG_IDX_F8,
	XT_REG_IDX_F9,
	XT_REG_IDX_F10,
	XT_REG_IDX_F11,
	XT_REG_IDX_F12,
	XT_REG_IDX_F13,
	XT_REG_IDX_F14,
	XT_REG_IDX_F15,
	XT_REG_IDX_FCR,
	XT_REG_IDX_FSR,
	XT_REG_IDX_MMID,
	XT_REG_IDX_IBREAKENABLE,
	XT_REG_IDX_MEMCTL,
	XT_REG_IDX_ATOMCTL,
	XT_REG_IDX_IBREAKA0,
	XT_REG_IDX_IBREAKA1,
	XT_REG_IDX_DBREAKA0,
	XT_REG_IDX_DBREAKA1,
	XT_REG_IDX_DBREAKC0,
	XT_REG_IDX_DBREAKC1,
	XT_REG_IDX_EPC1,
	XT_REG_IDX_EPC2,
	XT_REG_IDX_EPC3,
	XT_REG_IDX_EPC4,
	XT_REG_IDX_EPC5,
	XT_REG_IDX_EPC6,
	XT_REG_IDX_EPC7,
	XT_REG_IDX_DEPC,
	XT_REG_IDX_EPS2,
	XT_REG_IDX_EPS3,
	XT_REG_IDX_EPS4,
	XT_REG_IDX_EPS5,
	XT_REG_IDX_EPS6,
	XT_REG_IDX_EPS7,
	XT_REG_IDX_EXCSAVE1,
	XT_REG_IDX_EXCSAVE2,
	XT_REG_IDX_EXCSAVE3,
	XT_REG_IDX_EXCSAVE4,
	XT_REG_IDX_EXCSAVE5,
	XT_REG_IDX_EXCSAVE6,
	XT_REG_IDX_EXCSAVE7,
	XT_REG_IDX_CPENABLE,
	XT_REG_IDX_INTERRUPT,
	XT_REG_IDX_INTSET,
	XT_REG_IDX_INTCLEAR,
	XT_REG_IDX_INTENABLE,
	XT_REG_IDX_VECBASE,
	XT_REG_IDX_EXCCAUSE,
	XT_REG_IDX_DEBUGCAUSE,
	XT_REG_IDX_CCOUNT,
	XT_REG_IDX_PRID,
	XT_REG_IDX_ICOUNT,
	XT_REG_IDX_ICOUNTLEVEL,
	XT_REG_IDX_EXCVADDR,
	XT_REG_IDX_CCOMPARE0,
	XT_REG_IDX_CCOMPARE1,
	XT_REG_IDX_CCOMPARE2,
	XT_REG_IDX_MISC0,
	XT_REG_IDX_MISC1,
	XT_REG_IDX_MISC2,
	XT_REG_IDX_MISC3,
	XT_REG_IDX_LITBASE,
	XT_REG_IDX_PTEVADDR,
	XT_REG_IDX_RASID,
	XT_REG_IDX_ITLBCFG,
	XT_REG_IDX_DTLBCFG,
	XT_REG_IDX_MEPC,
	XT_REG_IDX_MEPS,
	XT_REG_IDX_MESAVE,
	XT_REG_IDX_MESR,
	XT_REG_IDX_MECR,
	XT_REG_IDX_MEVADDR,
	XT_REG_IDX_A0,
	XT_REG_IDX_A1,
	XT_REG_IDX_A2,
	XT_REG_IDX_A3,
	XT_REG_IDX_A4,
	XT_REG_IDX_A5,
	XT_REG_IDX_A6,
	XT_REG_IDX_A7,
	XT_REG_IDX_A8,
	XT_REG_IDX_A9,
	XT_REG_IDX_A10,
	XT_REG_IDX_A11,
	XT_REG_IDX_A12,
	XT_REG_IDX_A13,
	XT_REG_IDX_A14,
	XT_REG_IDX_A15,
	XT_REG_IDX_PWRCTL,
	XT_REG_IDX_PWRSTAT,
	XT_REG_IDX_ERISTAT,
	XT_REG_IDX_CS_ITCTRL,
	XT_REG_IDX_CS_CLAIMSET,
	XT_REG_IDX_CS_CLAIMCLR,
	XT_REG_IDX_CS_LOCKACCESS,
	XT_REG_IDX_CS_LOCKSTATUS,
	XT_REG_IDX_CS_AUTHSTATUS,
	XT_REG_IDX_FAULT_INFO,
	XT_REG_IDX_TRAX_ID,
	XT_REG_IDX_TRAX_CTRL,
	XT_REG_IDX_TRAX_STAT,
	XT_REG_IDX_TRAX_DATA,
	XT_REG_IDX_TRAX_ADDR,
	XT_REG_IDX_TRAX_PCTRIGGER,
	XT_REG_IDX_TRAX_PCMATCH,
	XT_REG_IDX_TRAX_DELAY,
	XT_REG_IDX_TRAX_MEMSTART,
	XT_REG_IDX_TRAX_MEMEND,
	XT_REG_IDX_PMG,
	XT_REG_IDX_PMPC,
	XT_REG_IDX_PM0,
	XT_REG_IDX_PM1,
	XT_REG_IDX_PMCTRL0,
	XT_REG_IDX_PMCTRL1,
	XT_REG_IDX_PMSTAT0,
	XT_REG_IDX_PMSTAT1,
	XT_REG_IDX_OCD_ID,
	XT_REG_IDX_OCD_DCRCLR,
	XT_REG_IDX_OCD_DCRSET,
	XT_REG_IDX_OCD_DSR,
	XT_REG_IDX_OCD_DDR,
	XT_NUM_REGS,
	/* chip-specific user registers go after ISA-defined ones */
	XT_USR_REG_START = XT_NUM_REGS
};

typedef uint32_t xtensa_reg_val_t;

#define XT_NUM_A_REGS   16

enum xtensa_reg_type {
	XT_REG_GENERAL = 0,		/* General-purpose register; part of the windowed register set */
	XT_REG_USER = 1,		/* User register, needs RUR to read */
	XT_REG_SPECIAL = 2,		/* Special register, needs RSR to read */
	XT_REG_DEBUG = 3,		/* Register used for the debug interface. Don't mess with this. */
	XT_REG_RELGEN = 4,		/* Relative general address. Points to the absolute addresses plus the window
					 * index */
	XT_REG_FR = 5,			/* Floating-point register */
	XT_REG_TIE = 6,			/* TIE (custom) register */
	XT_REG_OTHER = 7,		/* Other (typically legacy) register */
	XT_REG_TYPE_NUM,

	/* enum names must be one of the above types + _VAL or _MASK */
	XT_REG_GENERAL_MASK             = 0xFFC0,
	XT_REG_GENERAL_VAL              = 0x0100,
	XT_REG_USER_MASK                = 0xFF00,
	XT_REG_USER_VAL                 = 0x0300,
	XT_REG_SPECIAL_MASK             = 0xFF00,
	XT_REG_SPECIAL_VAL              = 0x0200,
	XT_REG_DEBUG_MASK               = 0xFF00,
	XT_REG_DEBUG_VAL                = 0x0200,
	XT_REG_RELGEN_MASK              = 0xFFE0,
	XT_REG_RELGEN_VAL               = 0x0000,
	XT_REG_FR_MASK                  = 0xFFF0,
	XT_REG_FR_VAL                   = 0x0030,
	XT_REG_TIE_MASK                 = 0xF000,
	XT_REG_TIE_VAL                  = 0xF000,	/* unused */
	XT_REG_OTHER_MASK               = 0xFFFF,
	XT_REG_OTHER_VAL                = 0xF000,	/* unused */

	XT_REG_INDEX_MASK               = 0x00FF
};

enum xtensa_reg_flags {
	XT_REGF_NOREAD = 0x01,	/* Register is write-only */
	XT_REGF_COPROC0 = 0x02,	/* Can't be read if coproc0 isn't enabled */
	XT_REGF_MASK = 0x03
};

struct xtensa_reg_desc {
	const char *name;
	bool exist;
	unsigned int reg_num;			/* ISA register num (meaning depends on register type) */
	unsigned int dbreg_num;			/* Debugger-visible register num (reg type encoded) */
	enum xtensa_reg_type type;
	enum xtensa_reg_flags flags;
};

#define _XT_MK_DBREGN(reg_num, reg_type)					\
	((reg_type ## _VAL) | (reg_num))

#define _XT_MK_DBREGN_MASK(reg_num, reg_mask)				\
	((reg_mask) | (reg_num))

#define XT_MK_REG_DESC(n, r, t, f)							\
	{ .name = (n), .exist = false, .reg_num = (r),			\
	  .dbreg_num = _XT_MK_DBREGN(r, t), .type = (t),		\
	  .flags = (f) }

struct xtensa_user_reg_desc {
	const char *name;
	/* ISA register num (meaning depends on register type) */
	unsigned int reg_num;
	enum xtensa_reg_flags flags;
	uint32_t size;
	const struct reg_arch_type *type;
};

extern struct xtensa_reg_desc xtensa_regs[XT_NUM_REGS];

#endif	/* OPENOCD_TARGET_XTENSA_REGS_H */
