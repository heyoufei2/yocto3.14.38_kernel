cmd_fs/fat/msdos.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /second_extend/yocto_file/linux_yocto/scripts/module-common.lds --build-id  -o fs/fat/msdos.ko fs/fat/msdos.o fs/fat/msdos.mod.o
