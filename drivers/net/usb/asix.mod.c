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
	{ 0xae2b10d2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf7dec52, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xd9bd2ca7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x975b76ed, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x884211a3, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb3de63f3, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x3dd9e1d0, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x353704f8, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x95a25297, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xbc26be62, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x968e5ce, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x83143fe3, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x9704e10f, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb1b0de5b, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x6cbca33, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xfa29ce7f, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x698f223b, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8427ecb2, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x3dcd9394, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x75803f53, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xbcf696ad, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8c253a12, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x217156f1, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x98b7f0d7, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xde0abe94, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xaf2ac721, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xea3b317c, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd7d442a7, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x925d14eb, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x9c1006c, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xae363a03, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x171aff8b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8d5c2d6f, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0x77aee83f, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x8eae812c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6f7f185a, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x98e0e4ef, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x70e0590, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xf889e5d9, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xcee4af01, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xb2a270a3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x7efd3009, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xefa99a5b, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xff64caea, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xb310a19c, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x3b08bef1, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x77e56aa4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x422bb809, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x9e51b764, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6f351543, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe4b4399d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xd595fd0a, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x114db25f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x4e0c544c, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x272dd526, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8F87AA2A263EBAE820B3CA7");
