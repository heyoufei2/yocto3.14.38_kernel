cmd_arch/arm/mach-imx/imx6ul_low_power_idle.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,arch/arm/mach-imx/.imx6ul_low_power_idle.o.d  -nostdinc -isystem /opt/poky/1.7/sysroots/i686-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/4.9.1/include -I/second_extend/yocto_file/linux_yocto/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/second_extend/yocto_file/linux_yocto/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/second_extend/yocto_file/linux_yocto/include/uapi -Iinclude/generated/uapi -include /second_extend/yocto_file/linux_yocto/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float      -Wa,-march=armv7-a   -c -o arch/arm/mach-imx/imx6ul_low_power_idle.o arch/arm/mach-imx/imx6ul_low_power_idle.S

source_arch/arm/mach-imx/imx6ul_low_power_idle.o := arch/arm/mach-imx/imx6ul_low_power_idle.S

deps_arch/arm/mach-imx/imx6ul_low_power_idle.o := \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /second_extend/yocto_file/linux_yocto/arch/arm/include/asm/linkage.h \

arch/arm/mach-imx/imx6ul_low_power_idle.o: $(deps_arch/arm/mach-imx/imx6ul_low_power_idle.o)

$(deps_arch/arm/mach-imx/imx6ul_low_power_idle.o):
