cmd_drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,drivers/mxc/gpu-viv/hal/kernel/.gc_hal_kernel_video_memory.o.d  -nostdinc -isystem /opt/poky/1.7/sysroots/i686-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/4.9.1/include -I/second_extend/yocto_file/linux_yocto/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/second_extend/yocto_file/linux_yocto/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/second_extend/yocto_file/linux_yocto/include/uapi -Iinclude/generated/uapi -include /second_extend/yocto_file/linux_yocto/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO --sysroot=/opt/poky/1.7/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi -DgcdDEFAULT_CONTIGUOUS_SIZE=134217728 -DLINUX_CMA_FSL=1 -DCLASS_NAME=\"gpu_class\" -DDISABLE_RECORD_ARRAY_SIZE_OPTIMIZATION -Werror -DLINUX -DDRIVER -DDBG=0 -DUSE_PLATFORM_DRIVER=1 -DVIVANTE_PROFILER=1 -DVIVANTE_PROFILER_CONTEXT=1 -DENABLE_GPU_CLOCK_BY_DRIVER=0 -DUSE_NEW_LINUX_SIGNAL=0 -DgcdPAGED_MEMORY_CACHEABLE=0 -DgcdNONPAGED_MEMORY_CACHEABLE=0 -DgcdNONPAGED_MEMORY_BUFFERABLE=1 -DgcdCACHE_FUNCTION_UNIMPLEMENTED=0 -DgcdSMP=1 -DgcdENABLE_3D=1 -DgcdENABLE_2D=1 -DgcdENABLE_VG=1 -DgcdENABLE_OUTER_CACHE_PATCH=1 -DgcdENABLE_BANK_ALIGNMENT=1 -DgcdBANK_BIT_START=13 -DgcdBANK_BIT_END=15 -DgcdBANK_CHANNEL_BIT=12 -DgcdFPGA_BUILD=0 -I/second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc -I/second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel -I/second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/arch -I/second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc -I/second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/os/linux/kernel -I/second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/os/linux/kernel/allocator/freescale -I/second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/archvg -DHOST=\"tom-virtual-machine\"    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(gc_hal_kernel_video_memory)"  -D"KBUILD_MODNAME=KBUILD_STR(galcore)" -c -o drivers/mxc/gpu-viv/hal/kernel/.tmp_gc_hal_kernel_video_memory.o drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.c

source_drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.o := drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.c

deps_drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.o := \
  drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_precomp.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_rename.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_types.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_version.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_options.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/sync.h) \
  include/generated/uapi/linux/version.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /second_extend/yocto_file/linux_yocto/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/uapi/asm/posix_types.h \
  /second_extend/yocto_file/linux_yocto/include/uapi/asm-generic/posix_types.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_enum.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_base.h \
    $(wildcard include/config/format/info.h) \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_dump.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_profiler.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver.h \
    $(wildcard include/config/android/reserved/memory/account.h) \
    $(wildcard include/config/power/management.h) \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver_vg.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_statistics.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_vg.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver.h \
  drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/arch/gc_hal_kernel_hardware.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/kernel/archvg/gc_hal_kernel_hardware_vg.h \
  /second_extend/yocto_file/linux_yocto/drivers/mxc/gpu-viv/hal/os/linux/kernel/gc_hal_kernel_mutex.h \
  include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  arch/arm/include/generated/asm/current.h \
  include/asm-generic/current.h \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/linkage.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/endian/be32.h) \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/swab.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/uapi/asm/swab.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /opt/poky/1.7/sysroots/i686-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/4.9.1/include/stdarg.h \
  include/linux/bitops.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/bitops.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/uapi/asm/ptrace.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/hwcap.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/uapi/asm/hwcap.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  include/linux/kern_levels.h \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/uapi/linux/kernel.h \
  /second_extend/yocto_file/linux_yocto/include/uapi/linux/sysinfo.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  include/linux/dynamic_debug.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/uapi/linux/string.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/string.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /second_extend/yocto_file/linux_yocto/include/uapi/asm-generic/errno.h \
  /second_extend/yocto_file/linux_yocto/include/uapi/asm-generic/errno-base.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/div64.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/compiler.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /second_extend/yocto_file/linux_yocto/include/uapi/linux/const.h \
  include/linux/spinlock_types.h \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/debug/spinlock.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/spinlock_types.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  include/linux/rwlock_types.h \
  include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/atomic.h \
  include/linux/prefetch.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/hw_breakpoint.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/atomic-long.h \
  drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_vg.h \

drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.o: $(deps_drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.o)

$(deps_drivers/mxc/gpu-viv/hal/kernel/gc_hal_kernel_video_memory.o):
