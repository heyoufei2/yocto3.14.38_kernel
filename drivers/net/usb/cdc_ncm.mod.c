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
	{ 0xce2724c8, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x52448cfa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x3af27584, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xd9bd2ca7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x884211a3, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x3dd9e1d0, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x4b0ac955, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x353704f8, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x22b99b00, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x968e5ce, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e2318d7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbcf696ad, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xcc31c1d3, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9c211331, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf2ac721, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xea3b317c, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xae363a03, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xff046f9c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x171aff8b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc1ffa4ef, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x18e52335, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0x98e0e4ef, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xb590822d, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xa637958b, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x54d8b7ba, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x77e56aa4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27096aaa, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7c03324f, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe4b4399d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xad3c7b3f, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0x114db25f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "68E6FD962E676EF6E3D7D1A");
