/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2015 Advanced Micro Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __PI_STONEYRIDGE_NORTHBRIDGE_H__
#define __PI_STONEYRIDGE_NORTHBRIDGE_H__

#include <arch/cpu.h>
#include <arch/io.h>
#include <device/device.h>

/* D18F0 - HT Configuration Registers */
#define D18F0_NODE_ID		0x60
#define D18F0_CPU_CNT		0x62 /* BKDG defines as a field in DWORD 0x60 */
# define CPU_CNT_MASK		0x1f /*  CpuCnt + 1 = no. CPUs */

/* D18F1 - Address Map Registers */
#define D18F1_DRAM_HOLE		0xf0
# define DRAM_HOIST_VALID	(1 << 1)
# define DRAM_HOLE_VALID	(1 << 0)

void domain_enable_resources(device_t dev);
void domain_read_resources(device_t dev);
void domain_set_resources(device_t dev);
void fam15_finalize(void *chip_info);
void setup_uma_memory(void);

/* todo: remove this when postcar stage is in place */
asmlinkage void chipset_teardown_car(void);

#endif /* __PI_STONEYRIDGE_NORTHBRIDGE_H__ */
