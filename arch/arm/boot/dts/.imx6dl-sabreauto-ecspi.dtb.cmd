cmd_arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-sabreauto-ecspi.dtb.d.pre.tmp -nostdinc -I/second_extend/yocto_file/linux_yocto/arch/arm/boot/dts -I/second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include -I/second_extend/yocto_file/linux_yocto/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-sabreauto-ecspi.dtb.dts.tmp arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dts ; /second_extend/yocto_file/linux_yocto/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-sabreauto-ecspi.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-sabreauto-ecspi.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-sabreauto-ecspi.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-sabreauto-ecspi.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-sabreauto-ecspi.dtb.d

source_arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dtb := arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dts

deps_arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dtb := \
  arch/arm/boot/dts/imx6dl-sabreauto.dts \
  arch/arm/boot/dts/imx6dl.dtsi \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-sabreauto.dtsi \
  /second_extend/yocto_file/linux_yocto/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dtb: $(deps_arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dtb)

$(deps_arch/arm/boot/dts/imx6dl-sabreauto-ecspi.dtb):
