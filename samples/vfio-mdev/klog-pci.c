/*
 * Mediated virtual PCI host driver
 * Example driver which writes messages to the kernel log
 *
 * The intention is to pass the PCI device emulated by the driver
 * to a virtual machine so the VM could write debug messages to the
 * kernel log. This allows to have the debug messages from a number of
 * virtual machines in one place
 */


#define VERSION "0.1"
#define DRIVER_AUTHOR "Denis Plotnikov"

