/** @file
  This file describes the contents of the ACPI Multiple APIC Description
  Table (MADT).
  To make changes to the MADT, it is necessary to update the count for the
  APIC structure being updated, and to modify table found in Madt.c.

  Copyright (c) 2018 - 2019, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php.

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef _MADT_H_
#define _MADT_H_

//
// Statements that include other files
//

#include <IndustryStandard/Acpi10.h>
#include <IndustryStandard/Acpi20.h>
#include <IndustryStandard/Acpi30.h>
#include "AcpiTablePlatform.h"

//
// MADT Definitions
//

#define EFI_ACPI_OEM_MADT_REVISION 0x00000001


//
// Multiple APIC Flags are defined in AcpiX.0.h
//
#define EFI_ACPI_1_0_MULTIPLE_APIC_FLAGS (EFI_ACPI_1_0_PCAT_COMPAT)
#define EFI_ACPI_2_0_MULTIPLE_APIC_FLAGS (EFI_ACPI_2_0_PCAT_COMPAT)

//
// Define the number of each table type.
// This is where the table layout is modified.
//

#define EFI_ACPI_PROCESSOR_LOCAL_APIC_COUNT           16
#define EFI_ACPI_IO_APIC_COUNT                        1
#define EFI_ACPI_INTERRUPT_SOURCE_OVERRIDE_COUNT      2
#define EFI_ACPI_NON_MASKABLE_INTERRUPT_SOURCE_COUNT  0
#define EFI_ACPI_LOCAL_APIC_NMI_COUNT                 16
#define EFI_ACPI_LOCAL_APIC_ADDRESS_OVERRIDE_COUNT    0
#define EFI_ACPI_IO_SAPIC_COUNT                       0
#define EFI_ACPI_PROCESSOR_LOCAL_SAPIC_COUNT          0
#define EFI_ACPI_PLATFORM_INTERRUPT_SOURCES_COUNT     0

//
// MADT structure
//

//
// Ensure proper structure formats
//
#pragma pack (1)

//
// ACPI 1.0 Table structure
//
typedef struct {
  EFI_ACPI_1_0_MULTIPLE_APIC_DESCRIPTION_TABLE_HEADER   Header;

#if EFI_ACPI_PROCESSOR_LOCAL_APIC_COUNT > 0
  EFI_ACPI_1_0_PROCESSOR_LOCAL_APIC_STRUCTURE           LocalApic[EFI_ACPI_PROCESSOR_LOCAL_APIC_COUNT];
#endif

#if EFI_ACPI_IO_APIC_COUNT > 0
  EFI_ACPI_1_0_IO_APIC_STRUCTURE                        IoApic[EFI_ACPI_IO_APIC_COUNT];
#endif

#if EFI_ACPI_INTERRUPT_SOURCE_OVERRIDE_COUNT > 0
  EFI_ACPI_1_0_INTERRUPT_SOURCE_OVERRIDE_STRUCTURE      Iso[EFI_ACPI_INTERRUPT_SOURCE_OVERRIDE_COUNT];
#endif

#if EFI_ACPI_NON_MASKABLE_INTERRUPT_SOURCE_COUNT > 0
  EFI_ACPI_1_0_NON_MASKABLE_INTERRUPT_SOURCE_STRUCTURE  NmiSource[EFI_ACPI_NON_MASKABLE_INTERRUPT_SOURCE_COUNT];
#endif

#if EFI_ACPI_LOCAL_APIC_NMI_COUNT > 0
  EFI_ACPI_1_0_LOCAL_APIC_NMI_STRUCTURE                 LocalApicNmi[EFI_ACPI_LOCAL_APIC_NMI_COUNT];
#endif

#if EFI_ACPI_LOCAL_APIC_ADDRESS_OVERRIDE_COUNT > 0
  EFI_ACPI_1_0_LOCAL_APIC_ADDRESS_OVERRIDE_STRUCTURE    LocalApicOverride[EFI_ACPI_LOCAL_APIC_OVERRIDE_COUNT];
#endif

} EFI_ACPI_1_0_MULTIPLE_APIC_DESCRIPTION_TABLE;

//
// ACPI 2.0 Table structure
//
typedef struct {
  EFI_ACPI_2_0_MULTIPLE_APIC_DESCRIPTION_TABLE_HEADER   Header;

#if EFI_ACPI_PROCESSOR_LOCAL_APIC_COUNT > 0
  EFI_ACPI_2_0_PROCESSOR_LOCAL_APIC_STRUCTURE           LocalApic[EFI_ACPI_PROCESSOR_LOCAL_APIC_COUNT];
#endif

#if EFI_ACPI_IO_APIC_COUNT > 0
  EFI_ACPI_2_0_IO_APIC_STRUCTURE                        IoApic[EFI_ACPI_IO_APIC_COUNT];
#endif

#if EFI_ACPI_INTERRUPT_SOURCE_OVERRIDE_COUNT > 0
  EFI_ACPI_2_0_INTERRUPT_SOURCE_OVERRIDE_STRUCTURE      Iso[EFI_ACPI_INTERRUPT_SOURCE_OVERRIDE_COUNT];
#endif

#if EFI_ACPI_NON_MASKABLE_INTERRUPT_SOURCE_COUNT > 0
  EFI_ACPI_2_0_NON_MASKABLE_INTERRUPT_SOURCE_STRUCTURE  NmiSource[EFI_ACPI_NON_MASKABLE_INTERRUPT_SOURCE_COUNT];
#endif

#if EFI_ACPI_LOCAL_APIC_NMI_COUNT > 0
  EFI_ACPI_2_0_LOCAL_APIC_NMI_STRUCTURE                 LocalApicNmi[EFI_ACPI_LOCAL_APIC_NMI_COUNT];
#endif

#if EFI_ACPI_LOCAL_APIC_ADDRESS_OVERRIDE_COUNT > 0
  EFI_ACPI_2_0_LOCAL_APIC_ADDRESS_OVERRIDE_STRUCTURE    LocalApicOverride[EFI_ACPI_LOCAL_APIC_OVERRIDE_COUNT];
#endif

#if EFI_ACPI_IO_SAPIC_COUNT > 0
  EFI_ACPI_2_0_IO_SAPIC_STRUCTURE                       IoSapic[EFI_ACPI_IO_SAPIC_COUNT];
#endif

#if EFI_ACPI_PROCESSOR_LOCAL_SAPIC_COUNT > 0
  EFI_ACPI_2_0_PROCESSOR_LOCAL_SAPIC_STRUCTURE          LocalSapic[EFI_ACPI_PROCESSOR_LOCAL_SAPIC_COUNT];
#endif

#if EFI_ACPI_PLATFORM_INTERRUPT_SOURCES_COUNT > 0
  EFI_ACPI_2_0_PLATFORM_INTERRUPT_SOURCES_STRUCTURE     PlatformInterruptSources[EFI_ACPI_PLATFORM_INTERRUPT_SOURCES_COUNT];
#endif

} EFI_ACPI_2_0_MULTIPLE_APIC_DESCRIPTION_TABLE;

#pragma pack ()

#endif
