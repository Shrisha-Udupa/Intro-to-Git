#include <linux/module.h>
#include <linux/sched.h>

int my_init_module(void)
{
	printk("This is my first module");
	return 0;
}

void my_cleanup_module(void)
{
	printk("Removing my first module");
}

module_init(my_init_module);
module_exit(my_cleanup_module);
