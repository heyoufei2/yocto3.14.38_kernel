cmd_fs/udf/udf.ko := arm-poky-linux-gnueabi-ld -EL -r  -T /second_extend/yocto_file/linux_yocto/scripts/module-common.lds --build-id  -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o
