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
	{ 0xc4600a8f, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x446a060d, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe7a33cd2, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x68bdf15e, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xedb637c0, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x213c1c04, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x620e17e, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x3603f31d, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xf986fdcf, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xa5a05709, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x208bd2ab, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{        0, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xce82570, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x144507c8, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x46218f4, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x55709e86, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xcecbc074, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x302d171b, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xed789a1a, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x90d7a451, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x11b72102, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xe83e1771, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{        0, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x380c40e6, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xe78b0d86, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xd4250112, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xbc2d58bb, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x4bce8ede, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x3b3ed2f6, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x723fcf94, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x95a7092e, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x809fa8ff, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "94E4CE2E390B0EECC8654D6");
