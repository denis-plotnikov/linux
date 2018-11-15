/*
 * Mediated virtual PCI host driver
 * Example driver which writes messages to the kernel log
 * for short klog_writer
 *
 * The intention is to pass the PCI device emulated by the driver
 * to a virtual machine so the VM could write debug messages to the
 * kernel log. This allows to have the debug messages from a number of
 * virtual machines in one place
 */
#include <linux/init.h>
#include <linux/module.h>
//#include <linux/device.h>
//#include <linux/kernel.h>

#define VERSION_STRING "0.1"
#define DRIVER_AUTHOR "Denis Plotnikov"
#define DEV_NAME "klog_writer"

static int __init klog_writer_init(void)
{
	pr_info(""DEV_NAME": loaded\n");
	return 0;
}

static void __exit klog_writer_exit(void)
{
	pr_info(""DEV_NAME": unloaded\n");
}

module_init(klog_writer_init)
module_exit(klog_writer_exit)

// What means GPL v2?
MODULE_LICENSE("GPL v2");
MODULE_INFO(supported, "Test vfio mediated device kernel log writer");
MODULE_VERSION(VERSION_STRING);
MODULE_AUTHOR(DRIVER_AUTHOR);

