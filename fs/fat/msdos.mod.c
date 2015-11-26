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
	{ 0x56a5e136, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x302d171b, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x249a5e79, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xa242c04, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xeac50046, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x480cb114, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x967cc8bd, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x207d2e7c, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xb83fdbdf, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x1abe5e99, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0xe750f3fd, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0x9232899a, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0x4ab60d26, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x21a5309a, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc73e9503, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xdd52843a, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x6645a4f4, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x53121aae, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x9cfbd4fd, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0xd2548c29, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x3603f31d, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xfadb3743, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x9a13ba7b, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xd1bf6307, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x55779211, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0xfdbbc291, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xedb637c0, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x73c14416, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x117f4c1c, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0xa5a05709, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x3dcd239e, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F7AADEA0FD8C97BB3543D8");
