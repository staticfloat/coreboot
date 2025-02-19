/* SPDX-License-Identifier: GPL-2.0-only */

#include <soc/gpio.h>

/* Pad configuration was generated automatically using intelp2m utility */
static const struct pad_config gpio_table[] = {

	/* ------- GPIO Community 0 ------- */

	/* ------- GPIO Group GPP_I ------- */

	/* GPP_I0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I0, NONE, PLTRST, OFF, ACPI),
	/* GPP_I1 - DDSP_HPD1 */
	PAD_CFG_NF(GPP_I1, NONE, PLTRST, NF1),
	/* GPP_I2 - DDSP_HPD2 */
	PAD_CFG_NF(GPP_I2, NONE, PLTRST, NF1),
	/* GPP_I3 - DDSP_HPD3 */
	PAD_CFG_NF(GPP_I3, NONE, PLTRST, NF1),
	/* GPP_I4 - DDSP_HPD4 */
	PAD_CFG_NF(GPP_I4, NONE, PLTRST, NF1),
	/* GPP_I5 - DDPB_CTRLCLK */
	PAD_CFG_NF(GPP_I5, NONE, PLTRST, NF1),
	/* GPP_I6 - DDPB_CTRLDATA */
	PAD_CFG_NF(GPP_I6, NONE, PLTRST, NF1),
	/* GPP_I7 - DDPC_CTRLCLK */
	PAD_CFG_NF(GPP_I7, NONE, PLTRST, NF1),
	/* GPP_I8 - DDPC_CTRLDATA */
	PAD_CFG_NF(GPP_I8, NONE, PLTRST, NF1),
	/* GPP_I9 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I9, NONE, PLTRST, OFF, ACPI),
	/* GPP_I10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I10, NONE, PLTRST, OFF, ACPI),
	/* GPP_I11 - USB_OC4# */
	PAD_CFG_NF(GPP_I11, NONE, PLTRST, NF1),
	/* GPP_I12 - USB_OC5# */
	PAD_CFG_NF(GPP_I12, NONE, PLTRST, NF1),
	/* GPP_I13 - USB_OC6# */
	PAD_CFG_NF(GPP_I13, NONE, PLTRST, NF1),
	/* GPP_I14 - USB_OC7# */
	PAD_CFG_NF(GPP_I14, NONE, PLTRST, NF1),
	/* GPP_I15 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I15, NONE, PLTRST, OFF, ACPI),
	/* GPP_I16 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I16, NONE, PLTRST, OFF, ACPI),
	/* GPP_I17 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I17, NONE, PLTRST, OFF, ACPI),
	/* GPP_I18 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I18, NONE, PLTRST, OFF, ACPI),
	/* GPP_I19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I19, NONE, PLTRST, OFF, ACPI),
	/* GPP_I20 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I20, NONE, PLTRST, OFF, ACPI),
	/* GPP_I21 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I21, NONE, PLTRST, OFF, ACPI),
	/* GPP_I22 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_I22, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_R ------- */

	/* GPP_R0 - HDA_BCLK */
	PAD_CFG_NF(GPP_R0, NONE, PLTRST, NF1),
	/* GPP_R1 - HDA_SYNC */
	PAD_CFG_NF(GPP_R1, NONE, PLTRST, NF1),
	/* GPP_R2 - HDA_SDO */
	PAD_CFG_NF(GPP_R2, NONE, PLTRST, NF1),
	/* GPP_R3 - HDA_SDI0 */
	PAD_CFG_NF(GPP_R3, NONE, PLTRST, NF1),
	/* GPP_R4 - HDA_RST# */
	PAD_CFG_NF(GPP_R4, NONE, PLTRST, NF1),
	/* GPP_R5 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R5, NONE, PLTRST, OFF, ACPI),
	/* GPP_R6 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R6, NONE, PLTRST, OFF, ACPI),
	/* GPP_R7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R7, NONE, PLTRST, OFF, ACPI),
	/* GPP_R8 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R8, NONE, PLTRST, OFF, ACPI),
	/* GPP_R9 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R9, NONE, PLTRST, OFF, ACPI),
	/* GPP_R10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R10, NONE, PLTRST, OFF, ACPI),
	/* GPP_R11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R11, NONE, PLTRST, OFF, ACPI),
	/* GPP_R12 - DDP3_CTRLCLK */
	PAD_CFG_NF(GPP_R12, NONE, PLTRST, NF2),
	/* GPP_R13 - DDP3_CTRLDATA */
	PAD_CFG_NF(GPP_R13, NONE, PLTRST, NF2),
	/* GPP_R14 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R14, NONE, PLTRST, OFF, ACPI),
	/* GPP_R15 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R15, NONE, PLTRST, OFF, ACPI),
	/* GPP_R16 - DDP1_CTRLCLK */
	PAD_CFG_NF(GPP_R16, NONE, PLTRST, NF1),
	/* GPP_R17 - DDP1_CTRLDATA */
	PAD_CFG_NF(GPP_R17, NONE, PLTRST, NF1),
	/* GPP_R18 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R18, NONE, PLTRST, OFF, ACPI),
	/* GPP_R19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R19, NONE, PLTRST, OFF, ACPI),
	/* GPP_R20 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R20, NONE, PLTRST, OFF, ACPI),
	/* GPP_R21 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_R21, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_J ------- */

	/* GPP_J0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_J0, NONE, PLTRST, OFF, ACPI),
	/* GPP_J1 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_J1, NONE, PLTRST, OFF, ACPI),
	/* GPP_J2 - CNV_BRI_DT */
	PAD_CFG_NF(GPP_J2, NONE, PLTRST, NF1),
	/* GPP_J3 - CNV_BRI_RSP */
	PAD_CFG_NF(GPP_J3, NONE, PLTRST, NF1),
	/* GPP_J4 - CNV_RGI_DT */
	PAD_CFG_NF(GPP_J4, NONE, PLTRST, NF1),
	/* GPP_J5 - CNV_RGI_RSP */
	PAD_CFG_NF(GPP_J5, NONE, PLTRST, NF1),
	/* GPP_J6 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_J6, NONE, PLTRST, OFF, ACPI),
	/* GPP_J7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_J7, NONE, PLTRST, OFF, ACPI),
	/* GPP_J8 - SRCCLKREQ16# */
	PAD_CFG_NF(GPP_J8, NONE, DEEP, NF1),
	/* GPP_J9 - SRCCLKREQ17# */
	PAD_CFG_NF(GPP_J9, NONE, DEEP, NF1),
	/* GPP_J10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_J10, NONE, PLTRST, OFF, ACPI),
	/* GPP_J11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_J11, NONE, PLTRST, OFF, ACPI),

	/* vGPIO controls certain features like CNVi, include the definitions as well */

	/* ------- GPIO Group vGPIO ------- */
	_PAD_CFG_STRUCT(VGPIO_0, PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_BUF(RX_DISABLE) | 1, 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_4, PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_5, PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_BUF(RX_DISABLE) | 1, 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_6, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_7, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_8, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_9, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_10, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_10 */
	_PAD_CFG_STRUCT(VGPIO_11, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_11 */
	_PAD_CFG_STRUCT(VGPIO_12, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_12 */
	_PAD_CFG_STRUCT(VGPIO_13, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_13 */
	_PAD_CFG_STRUCT(VGPIO_18, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_19, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_20, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_21, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_22, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_22 */
	_PAD_CFG_STRUCT(VGPIO_23, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_23 */
	_PAD_CFG_STRUCT(VGPIO_24, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_24 */
	_PAD_CFG_STRUCT(VGPIO_25, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_25 */
	_PAD_CFG_STRUCT(VGPIO_30, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_31, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_32, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_33, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_34, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_35, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_36, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */
	_PAD_CFG_STRUCT(VGPIO_37, PAD_FUNC(GPIO) | PAD_RESET(DEEP), 0),	/* GPIO */

	/* ------- GPIO Group vGPIO_0 ------- */
	_PAD_CFG_STRUCT(VGPIO_USB_0, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_USB_0 */
	_PAD_CFG_STRUCT(VGPIO_USB_1, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_USB_1 */
	_PAD_CFG_STRUCT(VGPIO_USB_2, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_USB_2 */
	_PAD_CFG_STRUCT(VGPIO_USB_3, PAD_FUNC(NF1) | PAD_RESET(DEEP), 0),	/* VGPIO_USB_3 */
	_PAD_CFG_STRUCT(VGPIO_USB_8, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_USB_8 */
	_PAD_CFG_STRUCT(VGPIO_USB_9, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_USB_9 */
	_PAD_CFG_STRUCT(VGPIO_USB_10, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_USB_10 */
	_PAD_CFG_STRUCT(VGPIO_USB_11, PAD_FUNC(NF1) | PAD_RESET(DEEP) | (1 << 1), 0),	/* VGPIO_USB_11 */

	/* ------- GPIO Community 1 ------- */

	/* ------- GPIO Group GPP_B ------- */

	/* GPP_B0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B0, NONE, PLTRST, OFF, ACPI),
	/* GPP_B1 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B1, NONE, PLTRST, OFF, ACPI),
	/* GPP_B2 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B2, NONE, PLTRST, OFF, ACPI),
	/* GPP_B3 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B3, NONE, PLTRST, OFF, ACPI),
	/* GPP_B4 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B4, NONE, PLTRST, OFF, ACPI),
	/* GPP_B5 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B5, NONE, PLTRST, OFF, ACPI),
	/* GPP_B6 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B6, NONE, PLTRST, OFF, ACPI),
	/* GPP_B7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B7, NONE, PLTRST, OFF, ACPI),
	/* GPP_B8 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B8, NONE, PLTRST, OFF, ACPI),
	/* GPP_B9 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B9, NONE, PLTRST, OFF, ACPI),
	/* GPP_B10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B10, NONE, PLTRST, OFF, ACPI),
	/* GPP_B11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B11, NONE, PLTRST, OFF, ACPI),
	/* GPP_B12 - SLP_S0# */
	PAD_CFG_NF(GPP_B12, NONE, PLTRST, NF1),
	/* GPP_B13 - PLTRST# */
	PAD_CFG_NF(GPP_B13, NONE, PLTRST, NF1),
	/* GPP_B14 - SPKR */
	PAD_CFG_NF(GPP_B14, NONE, PLTRST, NF1),
	/* GPP_B15 - GPIO */
	PAD_CFG_GPO(GPP_B15, 0, PLTRST),
	/* GPP_B16 - GPIO */
	PAD_CFG_GPO(GPP_B16, 0, PLTRST),
	/* GPP_B17 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B17, NONE, PLTRST, OFF, ACPI),
	/* GPP_B18 - PMCALERT# */
	PAD_CFG_NF(GPP_B18, NONE, PLTRST, NF1),
	/* GPP_B19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B19, NONE, PLTRST, OFF, ACPI),
	/* GPP_B20 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B20, NONE, PLTRST, OFF, ACPI),
	/* GPP_B21 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B21, NONE, PLTRST, OFF, ACPI),
	/* GPP_B22 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B22, NONE, PLTRST, OFF, ACPI),
	/* GPP_B23 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B23, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_G ------- */

	/* GPP_G0 - GPIO */
	PAD_CFG_GPO(GPP_G0, 0, PLTRST),
	/* GPP_G1 - GPIO */
	PAD_CFG_GPO(GPP_G1, 1, RSMRST),
	/* GPP_G2 - DNX_FORCE_RELOAD */
	PAD_CFG_NF(GPP_G2, NONE, PLTRST, NF1),
	/* GPP_G3 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G3, NONE, PLTRST, OFF, ACPI),
	/* GPP_G4 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G4, NONE, PLTRST, OFF, ACPI),
	/* GPP_G5 - SLP_DRAM# */
	PAD_CFG_NF(GPP_G5, NONE, PLTRST, NF1),
	/* GPP_G6 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G6, NONE, PLTRST, OFF, ACPI),
	/* GPP_G7 - GPIO */
	PAD_NC(GPP_G7, NONE),

	/* ------- GPIO Group GPP_H ------- */

	/* GPP_H0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H0, NONE, PLTRST, OFF, ACPI),
	/* GPP_H1 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H1, NONE, PLTRST, OFF, ACPI),
	/* GPP_H2 - SRCCLKREQ8# */
	PAD_CFG_NF(GPP_H2, NONE, DEEP, NF1),
	/* GPP_H3 - SRCCLKREQ9# */
	PAD_CFG_NF(GPP_H3, NONE, DEEP, NF1),
	/* GPP_H4 - SRCCLKREQ10# */
	PAD_CFG_NF(GPP_H4, NONE, DEEP, NF1),
	/* GPP_H5 - SRCCLKREQ11# */
	PAD_CFG_NF(GPP_H5, NONE, DEEP, NF1),
	/* GPP_H6 - SRCCLKREQ12# */
	PAD_CFG_NF(GPP_H6, NONE, DEEP, NF1),
	/* GPP_H7 - SRCCLKREQ13# */
	PAD_CFG_NF(GPP_H7, NONE, DEEP, NF1),
	/* GPP_H8 - SRCCLKREQ14# */
	PAD_CFG_NF(GPP_H8, NONE, DEEP, NF1),
	/* GPP_H9 - SRCCLKREQ15# */
	PAD_CFG_NF(GPP_H9, NONE, DEEP, NF1),

	/* GPP_H10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H10, NONE, PLTRST, OFF, ACPI),
	/* GPP_H11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H11, NONE, PLTRST, OFF, ACPI),
	/* GPP_H12 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H12, NONE, PLTRST, OFF, ACPI),
	/* GPP_H13 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H13, NONE, PLTRST, OFF, ACPI),
	/* GPP_H14 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H14, NONE, PLTRST, OFF, ACPI),
	/* GPP_H15 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H15, NONE, PLTRST, OFF, ACPI),
	/* GPP_H16 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H16, NONE, PLTRST, OFF, ACPI),
	/* GPP_H17 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H17, NONE, PLTRST, OFF, ACPI),
	/* GPP_H18 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H18, NONE, PLTRST, OFF, ACPI),
	/* GPP_H19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_H19, NONE, PLTRST, OFF, ACPI),
	/* GPP_H20 - GPIO */
	PAD_CFG_GPO(GPP_H20, 1, PLTRST),
	/* GPP_H21 - GPIO */
	PAD_CFG_GPO(GPP_H21, 0, PLTRST),
	/* GPP_H22 - GPIO */
	PAD_CFG_GPO(GPP_H22, 1, PLTRST),
	/* GPP_H23 - GPIO */
	PAD_CFG_GPO(GPP_H23, 1, PLTRST),

	/* ------- GPIO Community 2 ------- */

	/* ------- GPIO Group GPD ------- */

	/* GPD0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPD0, NONE, PLTRST, OFF, ACPI),
	/* GPD1 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPD1, NONE, PLTRST, OFF, ACPI),
	/* GPD2 - LAN_WAKE# */
	PAD_CFG_NF(GPD2, NONE, PLTRST, NF1),
	/* GPD3 - PWRBTN# */
	PAD_CFG_NF(GPD3, NONE, PLTRST, NF1),
	/* GPD4 - SLP_S3# */
	PAD_CFG_NF(GPD4, NONE, PLTRST, NF1),
	/* GPD5 - SLP_S4# */
	PAD_CFG_NF(GPD5, NONE, PLTRST, NF1),
	/* GPD6 - SLP_A# */
	PAD_CFG_NF(GPD6, NONE, PLTRST, NF1),
	/* GPD7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPD7, NONE, PLTRST, OFF, ACPI),
	/* GPD8 - SUSCLK */
	PAD_CFG_NF(GPD8, NONE, PLTRST, NF1),
	/* GPD9 - SLP_WLAN# */
	PAD_CFG_NF(GPD9, NONE, PLTRST, NF1),
	/* GPD10 - SLP_S5# */
	PAD_CFG_NF(GPD10, NONE, PLTRST, NF1),
	/* GPD11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPD11, NONE, PLTRST, OFF, ACPI),
	/* GPD12 - GPIO */
	PAD_CFG_TERM_GPO(GPD12, 1, DN_5K, RSMRST),

	/* ------- GPIO Community 3 ------- */

	/* ------- GPIO Group GPP_A ------- */

	/* GPP_A0 - ESPI_IO0 */
	PAD_CFG_NF(GPP_A0, NONE, PLTRST, NF1),
	/* GPP_A1 - ESPI_IO1 */
	PAD_CFG_NF(GPP_A1, NONE, PLTRST, NF1),
	/* GPP_A2 - ESPI_IO2 */
	PAD_CFG_NF(GPP_A2, NONE, PLTRST, NF1),
	/* GPP_A3 - ESPI_IO3 */
	PAD_CFG_NF(GPP_A3, NONE, PLTRST, NF1),
	/* GPP_A4 - ESPI_CS0# */
	PAD_CFG_NF(GPP_A4, NONE, PLTRST, NF1),
	/* GPP_A5 - ESPI_CLK */
	PAD_CFG_NF(GPP_A5, NONE, PLTRST, NF1),
	/* GPP_A6 - ESPI_RESET# */
	PAD_CFG_NF(GPP_A6, NONE, PLTRST, NF1),
	/* GPP_A7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A7, NONE, PLTRST, OFF, ACPI),
	/* GPP_A8 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A8, NONE, PLTRST, OFF, ACPI),
	/* GPP_A9 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A9, NONE, PLTRST, OFF, ACPI),
	/* GPP_A10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A10, NONE, PLTRST, OFF, ACPI),
	/* GPP_A11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A11, NONE, PLTRST, OFF, ACPI),
	/* GPP_A12 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A12, NONE, PLTRST, OFF, ACPI),
	/* GPP_A13 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A13, NONE, PLTRST, OFF, ACPI),
	/* GPP_A14 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_A14, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_C ------- */

	/* GPP_C0 - SMBCLK */
	PAD_CFG_NF(GPP_C0, NONE, PLTRST, NF1),
	/* GPP_C1 - SMBDATA */
	PAD_CFG_NF(GPP_C1, NONE, PLTRST, NF1),
	/* GPP_C2 - SMBALERT# */
	PAD_CFG_NF(GPP_C2, NONE, PLTRST, NF1),
	/* GPP_C3 - GPIO */
	PAD_CFG_GPO(GPP_C3, 1, PLTRST),
	/* GPP_C4 - GPIO */
	PAD_CFG_GPO(GPP_C4, 1, PLTRST),
	/* GPP_C5 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C5, NONE, PLTRST, OFF, ACPI),
	/* GPP_C6 - GPIO */
	PAD_CFG_GPO(GPP_C6, 0, PLTRST),
	/* GPP_C7 - GPIO */
	PAD_CFG_GPO(GPP_C7, 0, PLTRST),
	/* GPP_C8 - GPIO */
	PAD_CFG_GPO(GPP_C8, 1, RSMRST),
	/* GPP_C9 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C9, NONE, PLTRST, OFF, ACPI),
	/* GPP_C10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C10, NONE, PLTRST, OFF, ACPI),
	/* GPP_C11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C11, NONE, PLTRST, OFF, ACPI),
	/* GPP_C12 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C12, NONE, PLTRST, OFF, ACPI),
	/* GPP_C13 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C13, NONE, PLTRST, OFF, ACPI),
	/* GPP_C14 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C14, NONE, PLTRST, OFF, ACPI),
	/* GPP_C15 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C15, NONE, PLTRST, OFF, ACPI),
	/* GPP_C16 - I2C0_SDA */
	PAD_CFG_NF(GPP_C16, NONE, PLTRST, NF1),
	/* GPP_C17 - I2C0_SCL */
	PAD_CFG_NF(GPP_C17, NONE, PLTRST, NF1),
	/* GPP_C18 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C18, NONE, PLTRST, OFF, ACPI),
	/* GPP_C19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C19, NONE, PLTRST, OFF, ACPI),
	/* GPP_C20 - GPIO */
	PAD_CFG_GPO(GPP_C20, 0, PLTRST),
	/* GPP_C21 - GPIO */
	PAD_CFG_GPO(GPP_C21, 0, PLTRST),
	/* GPP_C22 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C22, NONE, PLTRST, OFF, ACPI),
	/* GPP_C23 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_C23, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Community 4 ------- */

	/* ------- GPIO Group GPP_S ------- */

	/* GPP_S0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S0, NONE, PLTRST, OFF, ACPI),
	/* GPP_S1 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S1, NONE, PLTRST, OFF, ACPI),
	/* GPP_S2 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S2, NONE, PLTRST, OFF, ACPI),
	/* GPP_S3 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S3, NONE, PLTRST, OFF, ACPI),
	/* GPP_S4 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S4, NONE, PLTRST, OFF, ACPI),
	/* GPP_S5 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S5, NONE, PLTRST, OFF, ACPI),
	/* GPP_S6 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S6, NONE, PLTRST, OFF, ACPI),
	/* GPP_S7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_S7, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_E ------- */

	/* GPP_E0 - SATAXPCIE0 */
	PAD_CFG_NF(GPP_E0, NONE, PLTRST, NF1),
	/* GPP_E1 - SATAXPCIE1 */
	PAD_CFG_NF(GPP_E1, NONE, PLTRST, NF1),
	/* GPP_E2 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E2, NONE, PLTRST, OFF, ACPI),
	/* GPP_E3 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E3, NONE, PLTRST, OFF, ACPI),
	/* GPP_E4 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E4, NONE, PLTRST, OFF, ACPI),
	/* GPP_E5 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E5, NONE, PLTRST, OFF, ACPI),
	/* GPP_E6 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E6, NONE, PLTRST, OFF, ACPI),
	/* GPP_E7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E7, NONE, PLTRST, OFF, ACPI),
	/* GPP_E8 - SATALED# */
	PAD_CFG_NF(GPP_E8, NONE, PLTRST, NF1),
	/* GPP_E9 - USB_OC0# */
	PAD_CFG_NF(GPP_E9, NONE, PLTRST, NF1),
	/* GPP_E10 - USB_OC1# */
	PAD_CFG_NF(GPP_E10, NONE, PLTRST, NF1),
	/* GPP_E11 - USB_OC2# */
	PAD_CFG_NF(GPP_E11, NONE, PLTRST, NF1),
	/* GPP_E12 - USB_OC3# */
	PAD_CFG_NF(GPP_E12, NONE, PLTRST, NF1),
	/* GPP_E13 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E13, NONE, PLTRST, OFF, ACPI),
	/* GPP_E14 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E14, NONE, PLTRST, OFF, ACPI),
	/* GPP_E15 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E15, NONE, PLTRST, OFF, ACPI),
	/* GPP_E16 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E16, NONE, PLTRST, OFF, ACPI),
	/* GPP_E17 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E17, NONE, PLTRST, OFF, ACPI),
	/* GPP_E18 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E18, NONE, PLTRST, OFF, ACPI),
	/* GPP_E19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E19, NONE, PLTRST, OFF, ACPI),
	/* GPP_E20 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E20, NONE, PLTRST, OFF, ACPI),
	/* GPP_E21 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E21, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_K ------- */

	/* GPP_K0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_K0, NONE, PLTRST, OFF, ACPI),
	/* GPP_K1 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_K1, NONE, PLTRST, OFF, ACPI),
	/* GPP_K2 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_K2, NONE, PLTRST, OFF, ACPI),
	/* GPP_K3 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_K3, NONE, PLTRST, OFF, ACPI),
	/* GPP_K4 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_K4, NONE, PLTRST, OFF, ACPI),
	/* GPP_K5 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_K5, NONE, PLTRST, OFF, ACPI),
	/* GPP_K6 - n/a */
	PAD_CFG_NF(GPP_K6, UP_20K, DEEP, NF2),
	/* GPP_K7 - n/a */
	PAD_CFG_NF(GPP_K7, DN_20K, DEEP, NF2),
	/* GPP_K8 - CORE_VID0 */
	PAD_CFG_NF(GPP_K8, NONE, PLTRST, NF1),
	/* GPP_K9 - CORE_VID1 */
	PAD_CFG_NF(GPP_K9, NONE, PLTRST, NF1),
	/* GPP_K10 - n/a */
	PAD_CFG_NF(GPP_K10, UP_20K, DEEP, NF2),
	/* GPP_K11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_K11, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_F ------- */

	/* GPP_F0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F0, NONE, PLTRST, OFF, ACPI),
	/* GPP_F1 - GPIO */
	PAD_CFG_GPI_SCI(GPP_F1, NONE, PLTRST, EDGE_SINGLE, INVERT),
	/* GPP_F2 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F2, NONE, PLTRST, OFF, ACPI),
	/* GPP_F3 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F3, NONE, PLTRST, OFF, ACPI),
	/* GPP_F4 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F4, NONE, PLTRST, OFF, ACPI),
	/* GPP_F5 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F5, NONE, PLTRST, OFF, ACPI),
	/* GPP_F6 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F6, NONE, PLTRST, OFF, ACPI),
	/* GPP_F7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F7, NONE, PLTRST, OFF, ACPI),
	/* GPP_F8 - SATA_DEVSLP6 */
	PAD_CFG_NF(GPP_F8, NONE, PLTRST, NF1),
	/* GPP_F9 - SATA_DEVSLP7 */
	PAD_CFG_NF(GPP_F9, NONE, PLTRST, NF1),
	/* GPP_F10 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F10, NONE, PLTRST, OFF, ACPI),
	/* GPP_F11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F11, NONE, PLTRST, OFF, ACPI),
	/* GPP_F12 - GPIO */
	PAD_CFG_GPO(GPP_F12, 1, RSMRST),
	/* GPP_F13 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F13, NONE, PLTRST, OFF, ACPI),
	/* GPP_F14 - PS_ON# */
	PAD_CFG_NF(GPP_F14, NONE, PLTRST, NF1),
	/* GPP_F15 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F15, NONE, PLTRST, OFF, ACPI),
	/* GPP_F16 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F16, NONE, PLTRST, OFF, ACPI),
	/* GPP_F17 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F17, NONE, PLTRST, OFF, ACPI),
	/* GPP_F18 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F18, NONE, PLTRST, OFF, ACPI),
	/* GPP_F19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F19, NONE, PLTRST, OFF, ACPI),
	/* GPP_F20 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F20, NONE, PLTRST, OFF, ACPI),
	/* GPP_F21 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F21, NONE, PLTRST, OFF, ACPI),
	/* GPP_F22 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F22, NONE, PLTRST, OFF, ACPI),
	/* GPP_F23 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F23, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Community 5 ------- */

	/* ------- GPIO Group GPP_D ------- */

	/* GPP_D0 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D0, NONE, PLTRST, OFF, ACPI),
	/* GPP_D1 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D1, NONE, PLTRST, OFF, ACPI),
	/* GPP_D2 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D2, NONE, PLTRST, OFF, ACPI),
	/* GPP_D3 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D3, NONE, PLTRST, OFF, ACPI),
	/* GPP_D4 - SML1CLK */
	PAD_CFG_NF(GPP_D4, NONE, PLTRST, NF1),
	/* GPP_D5 - CNV_RF_RESET# */
	PAD_CFG_NF(GPP_D5, NONE, PLTRST, NF2),
	/* GPP_D6 - MODEM_CLKREQ */
	PAD_CFG_NF(GPP_D6, NONE, PLTRST, NF3),
	/* GPP_D7 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D7, NONE, PLTRST, OFF, ACPI),
	/* GPP_D8 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D8, NONE, PLTRST, OFF, ACPI),
	/* GPP_D9 - SML0CLK */
	PAD_CFG_NF(GPP_D9, NONE, PLTRST, NF1),
	/* GPP_D10 - SML0DATA */
	PAD_CFG_NF(GPP_D10, NONE, PLTRST, NF1),
	/* GPP_D11 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D11, NONE, PLTRST, OFF, ACPI),
	/* GPP_D12 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D12, NONE, PLTRST, OFF, ACPI),
	/* GPP_D13 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D13, NONE, PLTRST, OFF, ACPI),
	/* GPP_D14 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D14, NONE, PLTRST, OFF, ACPI),
	/* GPP_D15 - SML1DATA */
	PAD_CFG_NF(GPP_D15, NONE, PLTRST, NF1),
	/* GPP_D16 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D16, NONE, PLTRST, OFF, ACPI),
	/* GPP_D17 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D17, NONE, PLTRST, OFF, ACPI),
	/* GPP_D18 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D18, NONE, PLTRST, OFF, ACPI),
	/* GPP_D19 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D19, NONE, PLTRST, OFF, ACPI),
	/* GPP_D20 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D20, NONE, PLTRST, OFF, ACPI),
	/* GPP_D21 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D21, NONE, PLTRST, OFF, ACPI),
	/* GPP_D22 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D22, NONE, PLTRST, OFF, ACPI),
	/* GPP_D23 - GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D23, NONE, PLTRST, OFF, ACPI),
};
