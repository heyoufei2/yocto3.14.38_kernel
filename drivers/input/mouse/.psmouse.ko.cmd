cmd_drivers/input/mouse/psmouse.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /second_extend/yocto_file/linux_yocto/scripts/module-common.lds --build-id  -o drivers/input/mouse/psmouse.ko drivers/input/mouse/psmouse.o drivers/input/mouse/psmouse.mod.o