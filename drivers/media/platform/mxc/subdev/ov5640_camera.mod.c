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
	{ 0x7ae120f2, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xc8eba6e9, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xb2ad4ba8, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x900112c4, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x3e2f19f1, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xbf7c6ab1, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x4e89cd5f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xcb044113, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x7e194b1, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x95f28e42, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x8df100d3, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e2318d7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0xcfdbcdb7, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2f364ccf, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd5875a9b, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xc66c1d33, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xd8b518f3, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x3c1a0b7a, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xf52135a8, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0xe6875b59, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0xa75042a7, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9730c462, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x99df09e9, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xfc29b0cc, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ov5640");

MODULE_INFO(srcversion, "B202257CE4B54F3F4DBBF01");
