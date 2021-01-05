#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int __init minit(void)
{
    printk(KERN_INFO "Hello world\n");
    return 0;
}

void __exit mexit(void)
{
    printk(KERN_INFO "bye\n");
}

module_init(minit);
module_exit(mexit);
