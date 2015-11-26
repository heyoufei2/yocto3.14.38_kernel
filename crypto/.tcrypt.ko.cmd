cmd_crypto/tcrypt.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /second_extend/yocto_file/linux_yocto/scripts/module-common.lds --build-id  -o crypto/tcrypt.ko crypto/tcrypt.o crypto/tcrypt.mod.o
