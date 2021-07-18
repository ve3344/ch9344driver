ifeq ($(KERNELRELEASE), )
KERNELDIR := /usr/src/linux-headers-$(shell uname -r)
PWD :=$(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR)  M=$(PWD)  
clean:
	rm -rf *.mk .tmp_versions Module.symvers *.mod.c *.o *.ko .*.cmd Module.markers modules.order
load:
	insmod ch9344.ko
unload:
	rmmod ch9344
else
	obj-m := ch9344.o
endif