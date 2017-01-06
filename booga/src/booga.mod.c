#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x438d4628, "send_sig" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x1a6d6e4f, "remove_proc_entry" },
	{ 0xfa0d49c7, "__register_chrdev" },
	{ 0xff964b25, "param_set_int" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xea147363, "printk" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6dcaeb88, "per_cpu__kernel_stack" },
	{ 0xcbd81171, "module_put" },
	{ 0x6d6b15ff, "create_proc_entry" },
	{ 0x2044fa9e, "kmem_cache_alloc_trace" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7866127247CA5BA0886AA29");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 8,
	.rhel_release = 641,
};
