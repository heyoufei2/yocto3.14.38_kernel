cmd_drivers/usb/serial/usb_wwan.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /second_extend/yocto_file/linux_yocto/scripts/module-common.lds --build-id  -o drivers/usb/serial/usb_wwan.ko drivers/usb/serial/usb_wwan.o drivers/usb/serial/usb_wwan.mod.o