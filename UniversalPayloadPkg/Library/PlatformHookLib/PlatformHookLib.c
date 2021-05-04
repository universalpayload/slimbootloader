/** @file

  Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#include <PiPei.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/PcdLib.h>
#include <Library/HobLib.h>
#include <IndustryStandard/Pci.h>
#include <Guid/PldSerialPortInfoGuid.h>


/**
  Get serial port stride register size.

  @retval  The serial port register stride size.

**/
UINT8
EFIAPI
GetSerialPortStrideSize (
  VOID
)
{
  return (UINT8)PcdGet32 (PcdSerialRegisterStride);
}

/**
  Get serial port register base address.

  @retval  The serial port register base address.

**/
UINT32
EFIAPI
GetSerialPortBase (
  VOID
  )
{
  return (UINT32)PcdGet64 (PcdSerialRegisterBase);
}

/**
  Performs platform specific initialization required for the CPU to access
  the hardware associated with a SerialPortLib instance.  This function does
  not intiailzie the serial port hardware itself.  Instead, it initializes
  hardware devices that are required for the CPU to access the serial port
  hardware.  This function may be called more than once.

  @retval RETURN_SUCCESS       The platform specific initialization succeeded.
  @retval RETURN_DEVICE_ERROR  The platform specific initialization could not be completed.

**/
RETURN_STATUS
EFIAPI
PlatformHookSerialPortInitialize (
  VOID
  )
{
  RETURN_STATUS         Status;
  PLD_SERIAL_PORT_INFO *SerialPortInfo;
  UINT8                 *GuidHob;

  GuidHob = GetNextGuidHob (&gPldSerialPortInfoGuid, GetHobList());
  if (GuidHob == NULL) {
    return EFI_NOT_FOUND;
  }

  SerialPortInfo  = (PLD_SERIAL_PORT_INFO *) GET_GUID_HOB_DATA (GuidHob);

  Status = PcdSet64S (PcdSerialRegisterBase, SerialPortInfo->RegisterBase);
  if (RETURN_ERROR (Status)) {
    return Status;
  }

  Status = PcdSet32S (PcdSerialRegisterStride, SerialPortInfo->RegisterWidth);
  if (RETURN_ERROR (Status)) {
    return Status;
  }

  return RETURN_SUCCESS;
}
