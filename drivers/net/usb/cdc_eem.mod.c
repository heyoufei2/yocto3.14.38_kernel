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
	{ 0xa637958b, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x217156f1, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xc0da3b2c, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x7f48a814, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5e0ca66c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6d35714b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3925629d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x22b99b00, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x4fae969d, __VMLINUX_SYMBOL_STR(usbnet_device_suggests_idle) },
	{ 0x260e972b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x98e0e4ef, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9f8e077b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xde0abe94, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe4b4399d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x968e5ce, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9c1006c, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "07A97BE75F2F8E124A49096");
