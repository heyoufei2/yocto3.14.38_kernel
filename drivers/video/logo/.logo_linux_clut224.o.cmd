cmd_drivers/video/logo/logo_linux_clut224.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,drivers/video/logo/.logo_linux_clut224.o.d  -nostdinc -isystem /opt/poky/1.7/sysroots/i686-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/4.9.1/include -I/second_extend/yocto_file/linux_yocto/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/second_extend/yocto_file/linux_yocto/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/second_extend/yocto_file/linux_yocto/include/uapi -Iinclude/generated/uapi -include /second_extend/yocto_file/linux_yocto/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO --sysroot=/opt/poky/1.7/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(logo_linux_clut224)"  -D"KBUILD_MODNAME=KBUILD_STR(logo_linux_clut224)" -c -o drivers/video/logo/.tmp_logo_linux_clut224.o drivers/video/logo/logo_linux_clut224.c

source_drivers/video/logo/logo_linux_clut224.o := drivers/video/logo/logo_linux_clut224.c

deps_drivers/video/logo/logo_linux_clut224.o := \
  include/linux/linux_logo.h \
    $(wildcard include/config/fb/logo/extra.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/modules.h) \
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
  /second_extend/yocto_file/linux_yocto/arch/arm/include/uapi/asm/posix_types.h \
  /second_extend/yocto_file/linux_yocto/include/uapi/asm-generic/posix_types.h \

drivers/video/logo/logo_linux_clut224.o: $(deps_drivers/video/logo/logo_linux_clut224.o)

$(deps_drivers/video/logo/logo_linux_clut224.o):
