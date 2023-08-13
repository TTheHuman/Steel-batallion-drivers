#include <linux/init.h>
#include <linux/modules.h>

MODULE_LICENSE("GPL");

static int __init init(void){
    printk("Linux kernal created /nHello, World!");
    return 0;
}

static void __exit exit(void){
    printk("Exiting linux kernal /n Goodbye, World!");
    return 0;
}

module(init);
module(exit);