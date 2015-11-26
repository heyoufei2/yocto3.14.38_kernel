cmd_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-emmc.dtb.d.pre.tmp -nostdinc -I/second_extend/yocto_file/linux_yocto/arch/arm/boot/dts -I/second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include -I/second_extend/yocto_file/linux_yocto/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-emmc.dtb.dts.tmp arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dts ; /second_extend/yocto_file/linux_yocto/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-emmc.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-emmc.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-emmc.dtb.d.pre.tmp arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-emmc.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6ul-14x14-ddr3-arm2-emmc.dtb.d

source_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dtb := arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dts

deps_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dtb := \
  arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2.dts \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/imx6ul.dtsi \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/clock/imx6ul-clock.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6ul-pinfunc.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dtb: $(deps_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dtb)

$(deps_arch/arm/boot/dts/imx6ul-14x14-ddr3-arm2-emmc.dtb):
