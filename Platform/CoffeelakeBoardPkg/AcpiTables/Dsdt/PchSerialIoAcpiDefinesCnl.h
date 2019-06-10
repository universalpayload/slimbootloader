/**@file

  Copyright (c) 2018 - 2019, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php.

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/


//
// Definition for Pch Serial IO Controllers
//
#ifndef _PCH_SERIALIO_ACPI_DEFINES_CNL_
#define _PCH_SERIALIO_ACPI_DEFINES_CNL_

//
// CNL-PCH Serial IO ACPI Hardware IDs
//
#define SERIAL_IO_I2C0_HID        "INT34B2"
#define SERIAL_IO_I2C1_HID        "INT34B3"
#define SERIAL_IO_I2C2_HID        "INT34B4"
#define SERIAL_IO_I2C3_HID        "INT34B5"
#define SERIAL_IO_I2C4_HID        "INT34B6"
#define SERIAL_IO_I2C5_HID        "INT34B7"

#define SERIAL_IO_SPI0_HID        "INT34B0"
#define SERIAL_IO_SPI1_HID        "INT34B1"
#define SERIAL_IO_SPI2_HID        "INT34BC"

#define SERIAL_IO_UART0_HID       "INT34B8"
#define SERIAL_IO_UART1_HID       "INT34B9"
#define SERIAL_IO_UART2_HID       "INT34BA"

//
// CNL-PCH Serial IO Base Address
//
#define SERIAL_IO_I2C0_BAR0 SB00
#define SERIAL_IO_I2C1_BAR0 SB01
#define SERIAL_IO_I2C2_BAR0 SB02
#define SERIAL_IO_I2C3_BAR0 SB03
#define SERIAL_IO_I2C4_BAR0 SB04
#define SERIAL_IO_I2C5_BAR0 SB05

#define SERIAL_IO_SPI0_BAR0 SB06
#define SERIAL_IO_SPI1_BAR0 SB07
#define SERIAL_IO_SPI2_BAR0 SB08

#define SERIAL_IO_UART0_BAR0 SB09
#define SERIAL_IO_UART1_BAR0 SB0A
#define SERIAL_IO_UART2_BAR0 SB0B

#define SERIAL_IO_I2C0_BAR1 SB10
#define SERIAL_IO_I2C1_BAR1 SB11
#define SERIAL_IO_I2C2_BAR1 SB12
#define SERIAL_IO_I2C3_BAR1 SB13
#define SERIAL_IO_I2C4_BAR1 SB14
#define SERIAL_IO_I2C5_BAR1 SB15

#define SERIAL_IO_SPI0_BAR1 SB16
#define SERIAL_IO_SPI1_BAR1 SB17
#define SERIAL_IO_SPI2_BAR1 SB18

#define SERIAL_IO_UART0_BAR1 SB19
#define SERIAL_IO_UART1_BAR1 SB1A
#define SERIAL_IO_UART2_BAR1 SB1B


//
// CNL-PCH Serial IO BDF _ADR
//
#define SERIAL_IO_I2C0_ADR 0x00150000
#define SERIAL_IO_I2C1_ADR 0x00150001
#define SERIAL_IO_I2C2_ADR 0x00150002
#define SERIAL_IO_I2C3_ADR 0x00150003
#define SERIAL_IO_I2C4_ADR 0x00190000
#define SERIAL_IO_I2C5_ADR 0x00190001

#define SERIAL_IO_SPI0_ADR 0x001E0002
#define SERIAL_IO_SPI1_ADR 0x001E0003
#define SERIAL_IO_SPI2_ADR 0x00120006

#define SERIAL_IO_UART0_ADR 0x001E0000
#define SERIAL_IO_UART1_ADR 0x001E0001
#define SERIAL_IO_UART2_ADR 0x00190002


//
// CNL-PCH Serial IO Device Mode
//

#define SERIAL_IO_I2C0_DEVICE_MODE SMD0
#define SERIAL_IO_I2C1_DEVICE_MODE SMD1
#define SERIAL_IO_I2C2_DEVICE_MODE SMD2
#define SERIAL_IO_I2C3_DEVICE_MODE SMD3
#define SERIAL_IO_I2C4_DEVICE_MODE SMD4
#define SERIAL_IO_I2C5_DEVICE_MODE SMD5

#define SERIAL_IO_SPI0_DEVICE_MODE SMD6
#define SERIAL_IO_SPI1_DEVICE_MODE SMD7
#define SERIAL_IO_SPI2_DEVICE_MODE SMD8

#define SERIAL_IO_UART0_DEVICE_MODE SMD9
#define SERIAL_IO_UART1_DEVICE_MODE SMDA
#define SERIAL_IO_UART2_DEVICE_MODE SMDB


//
// CNL-PCH Serial IO IRQ
//
#define SERIAL_IO_I2C0_IRQ_NUMBER SIR0
#define SERIAL_IO_I2C1_IRQ_NUMBER SIR1
#define SERIAL_IO_I2C2_IRQ_NUMBER SIR2
#define SERIAL_IO_I2C3_IRQ_NUMBER SIR3
#define SERIAL_IO_I2C4_IRQ_NUMBER SIR4
#define SERIAL_IO_I2C5_IRQ_NUMBER SIR5

#define SERIAL_IO_SPI0_IRQ_NUMBER SIR6
#define SERIAL_IO_SPI1_IRQ_NUMBER SIR7
#define SERIAL_IO_SPI2_IRQ_NUMBER SIR8

#define SERIAL_IO_UART0_IRQ_NUMBER SIR9
#define SERIAL_IO_UART1_IRQ_NUMBER SIRA
#define SERIAL_IO_UART2_IRQ_NUMBER SIRB

#endif // _PCH_SERIALIO_ACPI_DEFINES_CNL_
