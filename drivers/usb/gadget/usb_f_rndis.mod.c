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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb70cbb95, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xa88bfa8, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x1e885154, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x9835a97f, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x968e5ce, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd207fe7, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x769e25cb, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0xb537468, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x9f8e077b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8bc15980, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xbf48515e, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd550ac36, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xcd96af59, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x2e2318d7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa0305531, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xac94a925, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcc73905a, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xde0abe94, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbbea3833, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0xadc592d4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x904060e7, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x28269412, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0x260e972b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdad4c692, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x5f524f2c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x952bd7d2, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x171aff8b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x180cca72, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x2529a4e9, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x37bf8d23, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbf2edb55, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xfdc0c8c2, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7c03324f, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xa4e1e097, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "E8397E2F4BDA4DE28D2F1D2");
