/*
 * Copyright (C) 2012 NVIDIA CORPORATION. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __MACH_TEGRA_PMC_H
#define __MACH_TEGRA_PMC_H


#if defined(CONFIG_OF) && defined(CONFIG_COMMON_CLK) && defined(CONFIG_PM_SLEEP)
void set_power_timers(unsigned long us_on, unsigned long us_off);
#endif

bool tegra_pmc_cpu_is_powered(int cpuid);
int tegra_pmc_cpu_power_on(int cpuid);
int tegra_pmc_cpu_remove_clamping(int cpuid);

void tegra_pmc_init(void);

struct pmc_pm_data *tegra_get_pm_data(void);

#endif
