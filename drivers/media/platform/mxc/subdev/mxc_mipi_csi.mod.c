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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x44d9b45b, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x11d0f47c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xffc024c2, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x9471207, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x4e89cd5f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xe6875b59, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0x124ac8b3, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x7810d4d9, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0xc88f759, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port_parent) },
	{ 0x3d41904f, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xff046f9c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6199c0d4, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x6176b573, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x9e44b9b7, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0xb2ad4ba8, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8d1a7689, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xca5e9095, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x90705b7f, __VMLINUX_SYMBOL_STR(syscon_node_to_regmap) },
	{ 0xe35c5285, __VMLINUX_SYMBOL_STR(of_find_node_by_phandle) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1a33db9c, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x962e8a2c, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe14a2c18, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3c1a0b7a, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x7322d8bf, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x166fed45, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xf5ee3c1a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x900112c4, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xd5875a9b, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x43632d7d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x6518dcf8, __VMLINUX_SYMBOL_STR(of_graph_get_next_endpoint) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e2318d7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7e194b1, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xfc29b0cc, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7ae120f2, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x3e2f19f1, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xc66c1d33, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xbac64688, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xbe796026, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx7d-mipi-csi*");

MODULE_INFO(srcversion, "C8DF5FEF07CB5ACBBE3D4B9");
