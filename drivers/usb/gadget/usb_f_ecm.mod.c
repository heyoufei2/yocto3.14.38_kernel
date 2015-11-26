#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc3043f12, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x52448cfa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x77bce12a, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x1632d94e, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xb70cbb95, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xa88bfa8, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xd56883cb, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd207fe7, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0xb537468, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8bc15980, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xbf48515e, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xd550ac36, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xcd96af59, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x2e2318d7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa0305531, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xac94a925, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcc73905a, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbbea3833, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0xadc592d4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x904060e7, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xdad4c692, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x952bd7d2, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x171aff8b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x180cca72, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x2529a4e9, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x37bf8d23, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbf2edb55, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xfdc0c8c2, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "286A0FAC767803B33D6C62C");
