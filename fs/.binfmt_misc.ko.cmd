cmd_fs/binfmt_misc.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /second_extend/yocto_file/linux_yocto/scripts/module-common.lds --build-id  -o fs/binfmt_misc.ko fs/binfmt_misc.o fs/binfmt_misc.mod.o
