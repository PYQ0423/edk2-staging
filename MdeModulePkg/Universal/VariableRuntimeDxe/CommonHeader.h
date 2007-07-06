/**@file
  Common header file shared by all source files.

  This file includes package header files, library classes and protocol, PPI & GUID definitions.

  Copyright (c) 2006 - 2007, Intel Corporation
  All rights reserved. This program and the accompanying materials
   are licensed and made available under the terms and conditions of the BSD License
   which accompanies this distribution. The full text of the license may be found at
   http://opensource.org/licenses/bsd-license.php
   THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
   WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#ifndef __COMMON_HEADER_H_
#define __COMMON_HEADER_H_


//
// The package level header files this module uses
//
#include <PiDxe.h>


//
// The protocols, PPI and GUID defintions for this module
//
#include <Protocol/VariableWrite.h>
#include <Protocol/FaultTolerantWriteLite.h>
#include <Protocol/FirmwareVolumeBlock.h>
#include <Protocol/Variable.h>
//
// The Library classes this module consumes
//
#include <Library/PcdLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/DxeServicesTableLib.h>
#include <Library/UefiRuntimeLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/FvbServiceLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/HobLib.h>
#include <Common/FlashMap.h>
#include <Guid/FlashMapHob.h>

#endif
