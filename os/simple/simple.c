#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/slab.h>

struct birthday 
{
	int day;
	int month;
	int year;
	struct list_head list;
}; 

static LIST_HEAD(birthday_list);

void addList(struct birthday * head, int i)
{
	struct birthday * tmp = (struct birthday*)kmalloc(sizeof(*tmp), GFP_KERNEL);
	tmp->day = 1 + i * 7;
	tmp->month = 1 + i * 2;
	tmp->year = 1990 + i * 7;
	list_add_tail(&tmp->list, &birthday_list);
}

int simple_init(void)
{

	struct birthday *person = (struct birthday*)kmalloc(sizeof(*person), GFP_KERNEL);
	struct birthday *ptr;

	person->day = 7;
	person->month = 2;
	person->year = 1997;
	list_add_tail(&person->list, &birthday_list);
	
	addList(person,1);
	addList(person,2);
	addList(person,3);
	addList(person,4);

	list_for_each_entry(ptr, &birthday_list, list){
		printk(KERN_INFO"day : %d, month : %d, year : %d\n", ptr->day, ptr->month, ptr->year);
	}

	return 0;
}

void simple_exit(void)
{
	struct birthday * ptr, *next;
	list_for_each_entry_safe(ptr,next, &birthday_list, list)
	{
		list_del(&ptr->list);
		kfree(ptr);
	}
	printk(KERN_INFO "Removing module.\n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
