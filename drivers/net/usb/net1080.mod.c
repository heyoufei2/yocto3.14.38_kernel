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
	{ 0xd9bd2ca7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xea3b317c, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x353704f8, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x884211a3, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xbcf696ad, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x77e56aa4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xce2724c8, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x114db25f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xae363a03, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x9f8e077b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x260e972b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xff64caea, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x217156f1, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe4b4399d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xde0abe94, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x968e5ce, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9c1006c, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
