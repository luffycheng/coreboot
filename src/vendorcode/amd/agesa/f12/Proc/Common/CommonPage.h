/* $NoKeywords:$ */
/**
 * @file
 *
 * Create outline and references for Processor Common Component mainpage documentation.
 *
 * Design guides, maintenance guides, and general documentation, are
 * collected using this file onto the documentation mainpage.
 * This file contains doxygen comment blocks, only.
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  Documentation
 * @e \$Revision: 44324 $   @e \$Date: 2010-12-22 17:16:51 +0800 (Wed, 22 Dec 2010) $
 *
 */
/*
 ******************************************************************************
 *
 * Copyright (c) 2011, Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ******************************************************************************
 */

/**
 * @page commonmain Processor Common Component Documentation
 *
 * Additional documentation for the Common component consists of
 *
 * - Maintenance Guides:
 *   - @subpage amdconfigparamname "Naming Guidelines for type AMD_CONFIG_PARAMS"
 * - Design Guides:
 *   - add here >>>
 *
 */

/**
 * @page amdconfigparamname Naming Guidelines for type AMD_CONFIG_PARAMS
 * @par
 * These are the guidelines for naming objects of type AMD_CONFIG_PARAMS and AMD_CONFIG_PARAMS * in AGESA code.
 * <ul>
 *
 * <li>
 * Formal parameter names of type AMD_CONFIG_PARAMS and AMD_CONFIG_PARAMS * will always be named
 * StdHeader. This covers all function prototypes, function definitions, and method typedefs (a
 * typedef of a function prototype) in AGESA code. Examples:
 * @n @code
 * VOID
 *   LibAmdPciFindNextCap (
 *     IN OUT   PCI_ADDR *Address,
 *     IN       AMD_CONFIG_PARAMS *StdHeader
 *     )
 *
 * typedef VOID F_DO_TABLE_ENTRY (
 *   IN       TABLE_ENTRY_DATA       *CurrentEntry,
 *   IN       PLATFORM_CONFIGURATION *PlatformConfig,
 *   IN       AMD_CONFIG_PARAMS      *StdHeader
 *   );
 *
 * @endcode
 *
 * <li>
 * Structure members of type AMD_CONFIG_PARAMS or AMD_CONFIG_PARAMS * will always be named StdHeader. Examples:
 * @n @code
   /// Example of struct member naming.
 * typedef struct {
 *   IN OUT   AMD_CONFIG_PARAMS StdHeader;             ///< Standard Header
 *   IN       PLATFORM_CONFIGURATION PlatformConfig;   ///< platform operational characteristics.
 * } AMD_CPU_RECOVERY_PARAMS;
 *
 * @endcode
 *
 * <li>
 * Routines which define local variables of type AMD_CONFIG_PARAMS or AMD_CONFIG_PARAMS * should
 * name the local variable as closely as practical to StdHeader, but otherwise freedom is allowed. Example:
 * @n @code
 * AMD_CONFIG_PARAMS *NewStdHeader;
 * [...]
 * NewStdHeader = (AMD_CONFIG_PARAMS *)AllocHeapParams.BufferPtr;
 * @endcode
 *
 * <li>
 * Arguments to routines with AMD_CONFIG_PARAMS or AMD_CONFIG_PARAMS * formal parameters are not
 * checked.  Freedom is allowed in order to conform to these guidelines in a practical, readable
 * way.  This includes typecast arguments.  Examples:
 * @n @code
 * Status = GetEventLog (&LogEvent, (AMD_CONFIG_PARAMS *)Event);
 *
 * MemS3ExitSelfRefRegDA (NBPtr, &MemPtr->StdHeader);
 * @endcode
 *
 * </ul>
 *
 */
