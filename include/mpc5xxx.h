/*
 * include/asm-ppc/mpc5xxx.h
 *
 * Prototypes, etc. for the Motorola MGT5xxx/MPC5xxx
 * embedded cpu chips
 *
 * 2003 (c) MontaVista, Software, Inc.
 * Author: Dale Farnsworth <dfarnsworth@mvista.com>
 *
 * 2003 (C) Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */
#ifndef __ASMPPC_MPC5XXX_H
#define __ASMPPC_MPC5XXX_H

/* Processor name */
#if defined(CONFIG_MPC5200)
#define CPU_ID_STR	"MPC5200"
#elif defined(CONFIG_MGT5100)
#define CPU_ID_STR	"MGT5100"
#endif

/* Exception offsets (PowerPC standard) */
#define EXC_OFF_SYS_RESET	0x0100

/* Internal memory map */

#define MPC5XXX_CS0_START	(CFG_MBAR + 0x0004)
#define MPC5XXX_CS0_STOP	(CFG_MBAR + 0x0008)
#define MPC5XXX_CS1_START	(CFG_MBAR + 0x000c)
#define MPC5XXX_CS1_STOP	(CFG_MBAR + 0x0010)
#define MPC5XXX_CS2_START	(CFG_MBAR + 0x0014)
#define MPC5XXX_CS2_STOP	(CFG_MBAR + 0x0018)
#define MPC5XXX_CS3_START	(CFG_MBAR + 0x001c)
#define MPC5XXX_CS3_STOP	(CFG_MBAR + 0x0020)
#define MPC5XXX_CS4_START	(CFG_MBAR + 0x0024)
#define MPC5XXX_CS4_STOP	(CFG_MBAR + 0x0028)
#define MPC5XXX_CS5_START	(CFG_MBAR + 0x002c)
#define MPC5XXX_CS5_STOP	(CFG_MBAR + 0x0030)
#define MPC5XXX_BOOTCS_START	(CFG_MBAR + 0x004c)
#define MPC5XXX_BOOTCS_STOP	(CFG_MBAR + 0x0050)
#define MPC5XXX_ADDECR		(CFG_MBAR + 0x0054)

#if defined(CONFIG_MGT5100)
#define MPC5XXX_SDRAM_START	(CFG_MBAR + 0x0034)
#define MPC5XXX_SDRAM_STOP	(CFG_MBAR + 0x0038)
#elif defined(CONFIG_MPC5200)
#define MPC5XXX_CS6_START	(CFG_MBAR + 0x0058)
#define MPC5XXX_CS6_STOP	(CFG_MBAR + 0x005c)
#define MPC5XXX_CS7_START	(CFG_MBAR + 0x0060)
#define MPC5XXX_CS7_STOP	(CFG_MBAR + 0x0064)
#define MPC5XXX_SDRAM_CS0CFG	(CFG_MBAR + 0x0034)
#define MPC5XXX_SDRAM_CS1CFG	(CFG_MBAR + 0x0038)
#endif

#define MPC5XXX_SDRAM		(CFG_MBAR + 0x0100)
#define MPC5XXX_CDM		(CFG_MBAR + 0x0200)
#define MPC5XXX_LPB		(CFG_MBAR + 0x0300)
#define MPC5XXX_ICTL		(CFG_MBAR + 0x0500)
#define MPC5XXX_GPIO		(CFG_MBAR + 0x0b00)
#define MPC5XXX_SDMA		(CFG_MBAR + 0x1200)
#define MPC5XXX_XLBARB		(CFG_MBAR + 0x1f00)

#if defined(CONFIG_MGT5100)
#define	MPC5XXX_PSC1		(CFG_MBAR + 0x2000)
#define	MPC5XXX_PSC2		(CFG_MBAR + 0x2400)
#define	MPC5XXX_PSC3		(CFG_MBAR + 0x2800)
#elif defined(CONFIG_MPC5200)
#define	MPC5XXX_PSC1		(CFG_MBAR + 0x2000)
#define	MPC5XXX_PSC2		(CFG_MBAR + 0x2200)
#define	MPC5XXX_PSC3		(CFG_MBAR + 0x2400)
#define	MPC5XXX_PSC4		(CFG_MBAR + 0x2600)
#define	MPC5XXX_PSC5		(CFG_MBAR + 0x2800)
#define	MPC5XXX_PSC6		(CFG_MBAR + 0x2c00)
#endif

#define	MPC5XXX_FEC		(CFG_MBAR + 0x3000)

#if defined(CONFIG_MGT5100)
#define MPC5XXX_SRAM		(CFG_MBAR + 0x4000)
#define MPC5XXX_SRAM_SIZE	(8*1024)
#elif defined(CONFIG_MPC5200)
#define MPC5XXX_SRAM		(CFG_MBAR + 0x8000)
#define MPC5XXX_SRAM_SIZE	(16*1024)
#endif

/* SDRAM Controller */
#define MPC5XXX_SDRAM_MODE	(MPC5XXX_SDRAM + 0x0000)
#define MPC5XXX_SDRAM_CTRL	(MPC5XXX_SDRAM + 0x0004)
#define MPC5XXX_SDRAM_CONFIG1	(MPC5XXX_SDRAM + 0x0008)
#define MPC5XXX_SDRAM_CONFIG2	(MPC5XXX_SDRAM + 0x000c)
#if defined(CONFIG_MGT5100)
#define MPC5XXX_SDRAM_XLBSEL	(MPC5XXX_SDRAM + 0x0010)
#endif

/* Clock Distribution Module */
#define MPC5XXX_CDM_JTAGID	(MPC5XXX_CDM + 0x0000)
#define MPC5XXX_CDM_PORCFG	(MPC5XXX_CDM + 0x0004)
#define MPC5XXX_CDM_CFG		(MPC5XXX_CDM + 0x000c)
#define MPC5XXX_CDM_SRESET	(MPC5XXX_CDM + 0x0020)

/* Local Plus Bus interface */
#define MPC5XXX_CS0_CFG		(MPC5XXX_LPB + 0x0000)
#define MPC5XXX_CS1_CFG		(MPC5XXX_LPB + 0x0004)
#define MPC5XXX_CS2_CFG		(MPC5XXX_LPB + 0x0008)
#define MPC5XXX_CS3_CFG		(MPC5XXX_LPB + 0x000c)
#define MPC5XXX_CS4_CFG		(MPC5XXX_LPB + 0x0010)
#define MPC5XXX_CS5_CFG		(MPC5XXX_LPB + 0x0014)
#define MPC5XXX_BOOTCS_CFG	MPC5XXX_CS0_CFG
#define MPC5XXX_CS_CTRL		(MPC5XXX_LPB + 0x0018)
#define MPC5XXX_CS_STATUS	(MPC5XXX_LPB + 0x001c)
#if defined(CONFIG_MPC5200)
#define MPC5XXX_CS6_CFG		(MPC5XXX_LPB + 0x0020)
#define MPC5XXX_CS7_CFG		(MPC5XXX_LPB + 0x0024)
#define MPC5XXX_CS_BURST	(MPC5XXX_LPB + 0x0028)
#define MPC5XXX_CS_DEADCYCLE	(MPC5XXX_LPB + 0x002c)
#endif

/* GPIO registers */
#define MPC5XXX_GPS_PORT_CONFIG	(MPC5XXX_GPIO + 0x0000)

/* Interrupt Controller registers */
#define MPC5XXX_ICTL_PER_MASK	(MPC5XXX_ICTL + 0x0000)
#define MPC5XXX_ICTL_PER_PRIO1	(MPC5XXX_ICTL + 0x0004)
#define MPC5XXX_ICTL_PER_PRIO2	(MPC5XXX_ICTL + 0x0008)
#define MPC5XXX_ICTL_PER_PRIO3	(MPC5XXX_ICTL + 0x000c)
#define MPC5XXX_ICTL_EXT	(MPC5XXX_ICTL + 0x0010)
#define MPC5XXX_ICTL_CRIT	(MPC5XXX_ICTL + 0x0014)
#define MPC5XXX_ICTL_MAIN_PRIO1	(MPC5XXX_ICTL + 0x0018)
#define MPC5XXX_ICTL_MAIN_PRIO2	(MPC5XXX_ICTL + 0x001c)
#define MPC5XXX_ICTL_STS	(MPC5XXX_ICTL + 0x0024)
#define MPC5XXX_ICTL_CRIT_STS	(MPC5XXX_ICTL + 0x0028)
#define MPC5XXX_ICTL_MAIN_STS	(MPC5XXX_ICTL + 0x002c)
#define MPC5XXX_ICTL_PER_STS	(MPC5XXX_ICTL + 0x0030)
#define MPC5XXX_ICTL_BUS_STS	(MPC5XXX_ICTL + 0x0038)

/* Programmable Serial Controller (PSC) status register bits */
#define PSC_SR_CDE		0x0080
#define PSC_SR_RXRDY		0x0100
#define PSC_SR_RXFULL		0x0200
#define PSC_SR_TXRDY		0x0400
#define PSC_SR_TXEMP		0x0800
#define PSC_SR_OE		0x1000
#define PSC_SR_PE		0x2000
#define PSC_SR_FE		0x4000
#define PSC_SR_RB		0x8000

/* PSC Command values */
#define PSC_RX_ENABLE		0x0001
#define PSC_RX_DISABLE		0x0002
#define PSC_TX_ENABLE		0x0004
#define PSC_TX_DISABLE		0x0008
#define PSC_SEL_MODE_REG_1	0x0010
#define PSC_RST_RX		0x0020
#define PSC_RST_TX		0x0030
#define PSC_RST_ERR_STAT	0x0040
#define PSC_RST_BRK_CHG_INT	0x0050
#define PSC_START_BRK		0x0060
#define PSC_STOP_BRK		0x0070

/* PSC Rx FIFO status bits */
#define PSC_RX_FIFO_ERR		0x0040
#define PSC_RX_FIFO_UF		0x0020
#define PSC_RX_FIFO_OF		0x0010
#define PSC_RX_FIFO_FR		0x0008
#define PSC_RX_FIFO_FULL	0x0004
#define PSC_RX_FIFO_ALARM	0x0002
#define PSC_RX_FIFO_EMPTY	0x0001

/* PSC interrupt mask bits */
#define PSC_IMR_TXRDY		0x0100
#define PSC_IMR_RXRDY		0x0200
#define PSC_IMR_DB		0x0400
#define PSC_IMR_IPC		0x8000

/* PSC input port change bits */
#define PSC_IPCR_CTS		0x01
#define PSC_IPCR_DCD		0x02

/* PSC mode fields */
#define PSC_MODE_5_BITS		0x00
#define PSC_MODE_6_BITS		0x01
#define PSC_MODE_7_BITS		0x02
#define PSC_MODE_8_BITS		0x03
#define PSC_MODE_PAREVEN	0x00
#define PSC_MODE_PARODD		0x04
#define PSC_MODE_PARFORCE	0x08
#define PSC_MODE_PARNONE	0x10
#define PSC_MODE_ERR		0x20
#define PSC_MODE_FFULL		0x40
#define PSC_MODE_RXRTS		0x80

#define PSC_MODE_ONE_STOP_5_BITS	0x00
#define PSC_MODE_ONE_STOP		0x07
#define PSC_MODE_TWO_STOP		0x0f

#ifndef __ASSEMBLY__
struct mpc5xxx_psc {
	volatile u8	mode;		/* PSC + 0x00 */
	volatile u8	reserved0[3];
	union {				/* PSC + 0x04 */
		volatile u16	status;
		volatile u16	clock_select;
	} sr_csr;
#define psc_status	sr_csr.status
#define psc_clock_select sr_csr.clock_select
	volatile u16	reserved1;
	volatile u8	command;	/* PSC + 0x08 */
	volatile u8	reserved2[3];
	union {				/* PSC + 0x0c */
		volatile u8	buffer_8;
		volatile u16	buffer_16;
		volatile u32	buffer_32;
	} buffer;
#define psc_buffer_8	buffer.buffer_8
#define psc_buffer_16	buffer.buffer_16
#define psc_buffer_32	buffer.buffer_32
	union {				/* PSC + 0x10 */
		volatile u8	ipcr;
		volatile u8	acr;
	} ipcr_acr;
#define psc_ipcr	ipcr_acr.ipcr
#define psc_acr		ipcr_acr.acr
	volatile u8	reserved3[3];
	union {				/* PSC + 0x14 */
		volatile u16	isr;
		volatile u16	imr;
	} isr_imr;
#define psc_isr		isr_imr.isr
#define psc_imr		isr_imr.imr
	volatile u16	reserved4;
	volatile u8	ctur;		/* PSC + 0x18 */
	volatile u8	reserved5[3];
	volatile u8	ctlr;		/* PSC + 0x1c */
	volatile u8	reserved6[19];
	volatile u8	ivr;		/* PSC + 0x30 */
	volatile u8	reserved7[3];
	volatile u8	ip;		/* PSC + 0x34 */
	volatile u8	reserved8[3];
	volatile u8	op1;		/* PSC + 0x38 */
	volatile u8	reserved9[3];
	volatile u8	op0;		/* PSC + 0x3c */
	volatile u8	reserved10[3];
	volatile u8	sicr;		/* PSC + 0x40 */
	volatile u8	reserved11[3];
	volatile u8	ircr1;		/* PSC + 0x44 */
	volatile u8	reserved12[3];
	volatile u8	ircr2;		/* PSC + 0x44 */
	volatile u8	reserved13[3];
	volatile u8	irsdr;		/* PSC + 0x4c */
	volatile u8	reserved14[3];
	volatile u8	irmdr;		/* PSC + 0x50 */
	volatile u8	reserved15[3];
	volatile u8	irfdr;		/* PSC + 0x54 */
	volatile u8	reserved16[3];
	volatile u16	rfnum;		/* PSC + 0x58 */
	volatile u16	reserved17;
	volatile u16	tfnum;		/* PSC + 0x5c */
	volatile u16	reserved18;
	volatile u32	rfdata;		/* PSC + 0x60 */
	volatile u16	rfstat;		/* PSC + 0x64 */
	volatile u16	reserved20;
	volatile u8	rfcntl;		/* PSC + 0x68 */
	volatile u8	reserved21[5];
	volatile u16	rfalarm;	/* PSC + 0x6e */
	volatile u16	reserved22;
	volatile u16	rfrptr;		/* PSC + 0x72 */
	volatile u16	reserved23;
	volatile u16	rfwptr;		/* PSC + 0x76 */
	volatile u16	reserved24;
	volatile u16	rflrfptr;	/* PSC + 0x7a */
	volatile u16	reserved25;
	volatile u16	rflwfptr;	/* PSC + 0x7e */
	volatile u32	tfdata;		/* PSC + 0x80 */
	volatile u16	tfstat;		/* PSC + 0x84 */
	volatile u16	reserved26;
	volatile u8	tfcntl;		/* PSC + 0x88 */
	volatile u8	reserved27[5];
	volatile u16	tfalarm;	/* PSC + 0x8e */
	volatile u16	reserved28;
	volatile u16	tfrptr;		/* PSC + 0x92 */
	volatile u16	reserved29;
	volatile u16	tfwptr;		/* PSC + 0x96 */
	volatile u16	reserved30;
	volatile u16	tflrfptr;	/* PSC + 0x9a */
	volatile u16	reserved31;
	volatile u16	tflwfptr;	/* PSC + 0x9e */
};

struct mpc5xxx_intr {
	volatile u32	per_mask;	/* INTR + 0x00 */
	volatile u32	per_pri1;	/* INTR + 0x04 */
	volatile u32	per_pri2;	/* INTR + 0x08 */
	volatile u32	per_pri3;	/* INTR + 0x0c */
	volatile u32	ctrl;		/* INTR + 0x10 */
	volatile u32	main_mask;	/* INTR + 0x14 */
	volatile u32	main_pri1;	/* INTR + 0x18 */
	volatile u32	main_pri2;	/* INTR + 0x1c */
	volatile u32	reserved1;	/* INTR + 0x20 */
	volatile u32	enc_status;	/* INTR + 0x24 */
	volatile u32	crit_status;	/* INTR + 0x28 */
	volatile u32	main_status;	/* INTR + 0x2c */
	volatile u32	per_status;	/* INTR + 0x30 */
	volatile u32	reserved2;	/* INTR + 0x34 */
	volatile u32	per_error;	/* INTR + 0x38 */
};

struct mpc5xxx_gpio {
	volatile u32 port_config;	/* GPIO + 0x00 */
	volatile u32 simple_gpioe;	/* GPIO + 0x04 */
	volatile u32 simple_ode;	/* GPIO + 0x08 */
	volatile u32 simple_ddr;	/* GPIO + 0x0c */
	volatile u32 simple_dvo;	/* GPIO + 0x10 */
	volatile u32 simple_ival;	/* GPIO + 0x14 */
	volatile u8 outo_gpioe;		/* GPIO + 0x18 */
	volatile u8 reserved1[3];	/* GPIO + 0x19 */
	volatile u8 outo_dvo;		/* GPIO + 0x1c */
	volatile u8 reserved2[3];	/* GPIO + 0x1d */
	volatile u8 sint_gpioe;		/* GPIO + 0x20 */
	volatile u8 reserved3[3];	/* GPIO + 0x21 */
	volatile u8 sint_ode;		/* GPIO + 0x24 */
	volatile u8 reserved4[3];	/* GPIO + 0x25 */
	volatile u8 sint_ddr;		/* GPIO + 0x28 */
	volatile u8 reserved5[3];	/* GPIO + 0x29 */
	volatile u8 sint_dvo;		/* GPIO + 0x2c */
	volatile u8 reserved6[3];	/* GPIO + 0x2d */
	volatile u8 sint_inten;		/* GPIO + 0x30 */
	volatile u8 reserved7[3];	/* GPIO + 0x31 */
	volatile u16 sint_itype;	/* GPIO + 0x34 */
	volatile u16 reserved8;		/* GPIO + 0x36 */
	volatile u8 gpio_control;	/* GPIO + 0x38 */
	volatile u8 reserved9[3];	/* GPIO + 0x39 */
	volatile u8 sint_istat;		/* GPIO + 0x3c */
	volatile u8 sint_ival;		/* GPIO + 0x3d */
	volatile u8 bus_errs;		/* GPIO + 0x3e */
	volatile u8 reserved10;		/* GPIO + 0x3f */
};

struct mpc5xxx_sdma {
	volatile u32 taskBar;		/* SDMA + 0x00 */
	volatile u32 currentPointer;	/* SDMA + 0x04 */
	volatile u32 endPointer;	/* SDMA + 0x08 */
	volatile u32 variablePointer;	/* SDMA + 0x0c */

	volatile u8 IntVect1;		/* SDMA + 0x10 */
	volatile u8 IntVect2;		/* SDMA + 0x11 */
	volatile u16 PtdCntrl;		/* SDMA + 0x12 */

	volatile u32 IntPend;		/* SDMA + 0x14 */
	volatile u32 IntMask;		/* SDMA + 0x18 */

	volatile u16 tcr_0;		/* SDMA + 0x1c */
	volatile u16 tcr_1;		/* SDMA + 0x1e */
	volatile u16 tcr_2;		/* SDMA + 0x20 */
	volatile u16 tcr_3;		/* SDMA + 0x22 */
	volatile u16 tcr_4;		/* SDMA + 0x24 */
	volatile u16 tcr_5;		/* SDMA + 0x26 */
	volatile u16 tcr_6;		/* SDMA + 0x28 */
	volatile u16 tcr_7;		/* SDMA + 0x2a */
	volatile u16 tcr_8;		/* SDMA + 0x2c */
	volatile u16 tcr_9;		/* SDMA + 0x2e */
	volatile u16 tcr_a;		/* SDMA + 0x30 */
	volatile u16 tcr_b;		/* SDMA + 0x32 */
	volatile u16 tcr_c;		/* SDMA + 0x34 */
	volatile u16 tcr_d;		/* SDMA + 0x36 */
	volatile u16 tcr_e;		/* SDMA + 0x38 */
	volatile u16 tcr_f;		/* SDMA + 0x3a */

	volatile u8 IPR0;		/* SDMA + 0x3c */
	volatile u8 IPR1;		/* SDMA + 0x3d */
	volatile u8 IPR2;		/* SDMA + 0x3e */
	volatile u8 IPR3;		/* SDMA + 0x3f */
	volatile u8 IPR4;		/* SDMA + 0x40 */
	volatile u8 IPR5;		/* SDMA + 0x41 */
	volatile u8 IPR6;		/* SDMA + 0x42 */
	volatile u8 IPR7;		/* SDMA + 0x43 */
	volatile u8 IPR8;		/* SDMA + 0x44 */
	volatile u8 IPR9;		/* SDMA + 0x45 */
	volatile u8 IPR10;		/* SDMA + 0x46 */
	volatile u8 IPR11;		/* SDMA + 0x47 */
	volatile u8 IPR12;		/* SDMA + 0x48 */
	volatile u8 IPR13;		/* SDMA + 0x49 */
	volatile u8 IPR14;		/* SDMA + 0x4a */
	volatile u8 IPR15;		/* SDMA + 0x4b */
	volatile u8 IPR16;		/* SDMA + 0x4c */
	volatile u8 IPR17;		/* SDMA + 0x4d */
	volatile u8 IPR18;		/* SDMA + 0x4e */
	volatile u8 IPR19;		/* SDMA + 0x4f */
	volatile u8 IPR20;		/* SDMA + 0x50 */
	volatile u8 IPR21;		/* SDMA + 0x51 */
	volatile u8 IPR22;		/* SDMA + 0x52 */
	volatile u8 IPR23;		/* SDMA + 0x53 */
	volatile u8 IPR24;		/* SDMA + 0x54 */
	volatile u8 IPR25;		/* SDMA + 0x55 */
	volatile u8 IPR26;		/* SDMA + 0x56 */
	volatile u8 IPR27;		/* SDMA + 0x57 */
	volatile u8 IPR28;		/* SDMA + 0x58 */
	volatile u8 IPR29;		/* SDMA + 0x59 */
	volatile u8 IPR30;		/* SDMA + 0x5a */
	volatile u8 IPR31;		/* SDMA + 0x5b */

	volatile u32 res1;		/* SDMA + 0x5c */
	volatile u32 res2;		/* SDMA + 0x60 */
	volatile u32 res3;		/* SDMA + 0x64 */
	volatile u32 MDEDebug;		/* SDMA + 0x68 */
	volatile u32 ADSDebug;		/* SDMA + 0x6c */
	volatile u32 Value1;		/* SDMA + 0x70 */
	volatile u32 Value2;		/* SDMA + 0x74 */
	volatile u32 Control;		/* SDMA + 0x78 */
	volatile u32 Status;		/* SDMA + 0x7c */
	volatile u32 EU00;		/* SDMA + 0x80 */
	volatile u32 EU01;		/* SDMA + 0x84 */
	volatile u32 EU02;		/* SDMA + 0x88 */
	volatile u32 EU03;		/* SDMA + 0x8c */
	volatile u32 EU04;		/* SDMA + 0x90 */
	volatile u32 EU05;		/* SDMA + 0x94 */
	volatile u32 EU06;		/* SDMA + 0x98 */
	volatile u32 EU07;		/* SDMA + 0x9c */
	volatile u32 EU10;		/* SDMA + 0xa0 */
	volatile u32 EU11;		/* SDMA + 0xa4 */
	volatile u32 EU12;		/* SDMA + 0xa8 */
	volatile u32 EU13;		/* SDMA + 0xac */
	volatile u32 EU14;		/* SDMA + 0xb0 */
	volatile u32 EU15;		/* SDMA + 0xb4 */
	volatile u32 EU16;		/* SDMA + 0xb8 */
	volatile u32 EU17;		/* SDMA + 0xbc */
	volatile u32 EU20;		/* SDMA + 0xc0 */
	volatile u32 EU21;		/* SDMA + 0xc4 */
	volatile u32 EU22;		/* SDMA + 0xc8 */
	volatile u32 EU23;		/* SDMA + 0xcc */
	volatile u32 EU24;		/* SDMA + 0xd0 */
	volatile u32 EU25;		/* SDMA + 0xd4 */
	volatile u32 EU26;		/* SDMA + 0xd8 */
	volatile u32 EU27;		/* SDMA + 0xdc */
	volatile u32 EU30;		/* SDMA + 0xe0 */
	volatile u32 EU31;		/* SDMA + 0xe4 */
	volatile u32 EU32;		/* SDMA + 0xe8 */
	volatile u32 EU33;		/* SDMA + 0xec */
	volatile u32 EU34;		/* SDMA + 0xf0 */
	volatile u32 EU35;		/* SDMA + 0xf4 */
	volatile u32 EU36;		/* SDMA + 0xf8 */
	volatile u32 EU37;		/* SDMA + 0xfc */
};

/* function prototypes */
void loadtask(int basetask, int tasks);

#endif /* __ASSEMBLY__ */

#endif /* __ASMPPC_MPC5XXX_H */