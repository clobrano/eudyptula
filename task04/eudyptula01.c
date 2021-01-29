// SPDX-License-Identifier: GPL-2.0-only
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int __init minit(void)
{
	pr_ifo("Hello world\n");
	return 0;
}

void __exit mexit(void)
{
	pr_info("bye\n");
}

module_init(minit);
module_exit(mexit);
