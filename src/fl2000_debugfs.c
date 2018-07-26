#include "fl2000_include.h"
#include <linux/debugfs.h>

static struct dentry *debugfs_root;

int fl2000_init_debugfs( struct dev_ctx * dev_ctx)
{
	debugfs_root = debugfs_create_dir("fl2000" , NULL);

	if (debugfs_root) {
		struct dentry *child;

		child = debugfs_create_atomic_t("frame", 0444,
					   debugfs_root, &dev_ctx->frame);
		child = debugfs_create_atomic_t("framerate", 0444,
					   debugfs_root, &dev_ctx->framerate);
	}
	return 0;
}

