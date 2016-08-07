#include <linux/module.h>
#include <linux/sched.h>

MODULE_AUTHOR ("Shrisha");
MODULE_DESCRIPTION ("A simple module");

static int number = 1428;
static char *word = "MyLife";

module_param (number, int, S_IRUGO);
module_param (word, charp, S_IRUGO);

MODULE_PARM_DESC (number,"A simple integer modifiable parameter");
MODULE_PARM_DESC (word, "A simple string modifiable parameter");

int my_init_module(void)
{
	printk("Number=%d Word=%s\n", number, word);
	return 0;
}

void my_cleanup_module(void)
{
	printk("The module is UNLOADED");
}

module_init(my_init_module);
module_exit(my_cleanup_module);
