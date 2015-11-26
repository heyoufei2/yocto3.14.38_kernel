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
	{ 0xce5a59c7, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x52448cfa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc32a45b2, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x84eb04c, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x7d27ca1a, __VMLINUX_SYMBOL_STR(ps2_handle_ack) },
	{ 0xebf0fdf3, __VMLINUX_SYMBOL_STR(ps2_sendbyte) },
	{ 0xa3658ffd, __VMLINUX_SYMBOL_STR(ps2_handle_response) },
	{ 0x7c9ce730, __VMLINUX_SYMBOL_STR(input_mt_report_finger_count) },
	{ 0xea9e4a35, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xadbfaaf9, __VMLINUX_SYMBOL_STR(ps2_end_command) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6d1d7d56, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0x73f508d8, __VMLINUX_SYMBOL_STR(ps2_drain) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x26cf4f30, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0xe89922fa, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x8900a840, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x483ae284, __VMLINUX_SYMBOL_STR(serio_unregister_child_port) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x8ad44076, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x2e2318d7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x21665d12, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x3dee5d8d, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x6e599a4d, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x380e9579, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x6e2e5be5, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xa209e3c5, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xff046f9c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x171aff8b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x36730427, __VMLINUX_SYMBOL_STR(ps2_command) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xaf1af882, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbf2a3db5, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x6f10472d, __VMLINUX_SYMBOL_STR(ps2_init) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc6768327, __VMLINUX_SYMBOL_STR(serio_reconnect) },
	{ 0x6d57bb43, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa3f402e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xdc736b72, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xf71d3801, __VMLINUX_SYMBOL_STR(ps2_cmd_aborted) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1faffb21, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xa75042a7, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xa526b37e, __VMLINUX_SYMBOL_STR(ps2_begin_command) },
	{ 0x17a3278c, __VMLINUX_SYMBOL_STR(input_mt_assign_slots) },
	{ 0x31516d63, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "5155338760B1056B603C0EF");
