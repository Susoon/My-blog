#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/slab.h>
#include "os.c"

int os_init(void)
{
	struct pglist_data * pgdat = (struct pglist_data*)malloc(sizeof(struct pglist_data*));
	bool need = invoke_need_callbacks();
	invoke_init_callbacks();
#if 1
#define CONFIG_SPARSEMEM
	pgdat_page_ext_init(pgdat);
#endif
#if 0
	pgdat_page_ext_init(pgdat);
#endif
	printk(KERN_INFO"need : %d, pgdat -> node_page_ext : %d\n", need, pgdat -> node_page_ext);

	return 0;
}

void os_exit(void)
{
	printk(KERN_INFO "Removing module.\n");
}

module_init(os_init);
module_exit(os_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
