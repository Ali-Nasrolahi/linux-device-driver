#include "scull.h"

#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/kernel.h>

int scull_major = SCULL_MAJOR;
int scull_minor = 0;
int scull_nr_devs = SCULL_NR_DEVS; /* number of bare scull devices */
static char *name = "World";

module_param(scull_major, int, S_IRUGO);
module_param(scull_minor, int, S_IRUGO);
module_param(scull_nr_devs, int, S_IRUGO);
module_param(name, charp, S_IRUGO);

MODULE_AUTHOR("Ali Nasrolahi");
MODULE_LICENSE("GPL");

int __init scull_init(void)
{
	PDEBUG("Hello %s!!", name);
	return 0;
}

void __exit scull_cleanup(void)
{
	PDEBUG("Have a nice one, bye %s!!", name);
}

module_init(scull_init);
module_exit(scull_cleanup);