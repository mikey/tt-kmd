#ifndef TTDRIVER_GRAYSKULL_H_INCLUDED
#define TTDRIVER_GRAYSKULL_H_INCLUDED

#include <linux/types.h>
#include "device.h"

struct grayskull_device {
	struct tenstorrent_device tt;
	u8 __iomem *reset_unit_regs;
};

#define tt_dev_to_gs_dev(ttdev) \
	container_of((tt_dev), struct grayskull_device, tt)

bool grayskull_shutdown_firmware(u8 __iomem* reset_unit_regs);

#endif
