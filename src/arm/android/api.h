#pragma once

#include <cpuinfo.h>
#include <arm/api.h>
#include <arm/linux/api.h>

enum cpuinfo_android_chipset_property {
	cpuinfo_android_chipset_property_proc_cpuinfo_hardware = 0,
	cpuinfo_android_chipset_property_ro_product_board,
	cpuinfo_android_chipset_property_ro_board_platform,
	cpuinfo_android_chipset_property_ro_mediatek_platform,
	cpuinfo_android_chipset_property_ro_chipname,
	cpuinfo_android_chipset_property_max,
};

void cpuinfo_arm_android_parse_properties(struct cpuinfo_android_properties properties[restrict static 1]);

bool cpuinfo_arm_android_lookup_gpu(
	const struct cpuinfo_arm_chipset chipset[restrict static 1],
	struct cpuinfo_android_gpu gpu[restrict static 1]);
