cmd_fs/isofs/isofs.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /second_extend/yocto_file/linux_yocto/scripts/module-common.lds --build-id  -o fs/isofs/isofs.ko fs/isofs/isofs.o fs/isofs/isofs.mod.o
