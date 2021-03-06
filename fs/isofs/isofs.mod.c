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
	{ 0x5319c02d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe14cd16b, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x52448cfa, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6b718a, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x7ca9419d, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x9577a5e0, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x28366d68, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc83c9442, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xe86eaf8c, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x9fda5d80, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xdb239118, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x6e8eff8f, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x967cc8bd, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x8e1bf585, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xc1a4e98f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8ab8c837, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x55ded435, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xea25ef99, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x64d8e231, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0xb15a0333, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x266e444e, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc73e9503, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x357c0742, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x9ce93840, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x444cdb9b, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x53121aae, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xc9e82f0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x723ae2df, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x171aff8b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x41eb4390, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x9a466f6e, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x58e0e1a, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x4576ccba, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x9cfbd4fd, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2e90f1ec, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x64691443, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3603f31d, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xf986fdcf, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xadacf225, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x9a13ba7b, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x9c4a2c9a, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xd2bd1374, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xdbec513d, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xbd6c6fe8, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xedb637c0, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x6a3c8f8, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6977d6dc, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3c992202, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xaa6e2f1, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0E33CFE1F376B5FD9C65041");
