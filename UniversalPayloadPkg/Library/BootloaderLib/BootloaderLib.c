/** @file

  Copyright (c) 2016 - 2019, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#include <PiPei.h>
#include <Library/BaseLib.h>
#include <Library/PcdLib.h>


/**
  Returns the pointer to the HOB list.

  If the pointer to the HOB list is NULL, then ASSERT().

  @return The pointer to the HOB list.

**/
VOID *
EFIAPI
GetHobListPtr (
  VOID
  )
{
  return (VOID *)(UINTN) PcdGet64 (PcdHobListPtr);
}
