#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4766f3ab, "module_layout" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xe6bd5aaa, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xd6118cc6, "put_tty_driver" },
	{ 0xd0164798, "tty_unregister_driver" },
	{ 0xb1b79332, "usb_register_driver" },
	{ 0x8c9e303, "tty_register_driver" },
	{ 0xa516429d, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x80fed707, "__tty_alloc_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x437d1d51, "usb_autopm_get_interface" },
	{ 0x71c90087, "memcmp" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x48a5e2b8, "tty_port_close" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7bb2b090, "usb_clear_halt" },
	{ 0xda8ca74a, "tty_port_register_device" },
	{ 0x33998433, "usb_get_intf" },
	{ 0x29a5ad56, "usb_driver_claim_interface" },
	{ 0xd96d9198, "usb_alloc_urb" },
	{ 0x1aa9ea55, "usb_alloc_coherent" },
	{ 0x5f754e5a, "memset" },
	{ 0x4acf696b, "tty_port_init" },
	{ 0x7977a84a, "usb_control_msg" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x8198cbc4, "usb_ifnum_to_if" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xead207a1, "tty_standard_install" },
	{ 0x47925794, "idr_find" },
	{ 0x88260625, "tty_port_open" },
	{ 0x43932bed, "usb_anchor_urb" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x8e528e97, "usb_autopm_get_interface_async" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8d810fb1, "tty_port_hangup" },
	{ 0xfaae0194, "usb_put_intf" },
	{ 0xa346975c, "idr_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x81f8ac7e, "kmem_cache_alloc_trace" },
	{ 0x3351716f, "kmalloc_caches" },
	{ 0xc00cd521, "tty_port_tty_wakeup" },
	{ 0x2a3076dc, "usb_bulk_msg" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1d96bfc7, "tty_flip_buffer_push" },
	{ 0x7bd113f3, "tty_insert_flip_string_fixed_flag" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9e367da4, "tty_port_tty_hangup" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xffeaebe8, "_dev_info" },
	{ 0x96d18f99, "usb_driver_release_interface" },
	{ 0xf61a65c1, "usb_free_urb" },
	{ 0x23422913, "tty_unregister_device" },
	{ 0x199fe2cd, "tty_kref_put" },
	{ 0x1e39adc0, "tty_vhangup" },
	{ 0x77cc5e51, "tty_port_tty_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4f460e8b, "tty_port_put" },
	{ 0x98401bdc, "usb_free_coherent" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xdeee77ba, "usb_kill_urb" },
	{ 0x2c8c6382, "usb_get_from_anchor" },
	{ 0xb57fd9d2, "usb_autopm_put_interface" },
	{ 0xe9d62ba6, "usb_autopm_get_interface_no_resume" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x11a36113, "usb_autopm_put_interface_async" },
	{ 0x56755c4a, "_dev_err" },
	{ 0xeeedc392, "usb_submit_urb" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1A86pE018d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FB9413D9B83E04D96F73E30");
