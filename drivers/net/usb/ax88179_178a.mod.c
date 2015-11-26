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
	{ 0x353704f8, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x884211a3, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x4cd3cb8, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x8427ecb2, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x4e0c544c, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xcee4af01, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x77aee83f, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xefa99a5b, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xaf2ac721, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x83143fe3, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x70e0590, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xbcf696ad, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x77e56aa4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x217156f1, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x75803f53, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xff64caea, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xce2724c8, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xea3b317c, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xd9bd2ca7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3dd9e1d0, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x9704e10f, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x1e885154, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x114db25f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x195981d2, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc0da3b2c, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xae363a03, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x7dd1cf, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x95a25297, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xae2b10d2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xd980f756, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x260e972b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x98e0e4ef, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x22b99b00, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x9f8e077b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x968e5ce, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xde0abe94, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd2454951, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "76A3B8EBD187A8970B310F9");
