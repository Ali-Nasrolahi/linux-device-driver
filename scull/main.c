#include "scull.h"

#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/kernel.h>

MODULE_AUTHOR("Ali Nasrolahi");
MODULE_LICENSE("GPL");

int __init scull_init(void)
{
	PDEBUG("Hello World!!");
	return 0;
}

void __exit scull_cleanup(void)
{
	PDEBUG("Have a nice one, bye!!");
}

module_init(scull_init);
module_exit(scull_cleanup);