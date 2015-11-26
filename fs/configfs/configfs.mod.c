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
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x5319c02d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x208bd2ab, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x52448cfa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc83c9442, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x725de071, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x46218f4, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xedc26f33, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x55709e86, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x480cb114, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x11b72102, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xc1a4e98f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x34f04bb6, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xe0e2e54d, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x45576b93, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xc4600a8f, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x252aa556, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x18fabaed, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9ab26f0b, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x266e444e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x39ea2a61, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0xa30ccf25, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x171aff8b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x73758754, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0xf99af07f, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{        0, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0xcecbc074, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xe36d66b, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x64691443, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3603f31d, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xc01d3622, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xf986fdcf, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x773de195, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x75d6dddb, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0x15e8ecd5, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xdbec513d, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x68bdf15e, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xa6ece862, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xb00b9452, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xedb637c0, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xce82570, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xa5a05709, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x68c5ddb5, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x8a2d5fc3, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0xbd8ec7c6, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DC343C23C059E620E9187E1");
