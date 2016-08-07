all: lab-aux.c
	make -C /lib/modules/4.4.0-31-generic/build M=$(PWD) modules
clean:
	make -C /lib/modules/4.4.0-31-generic/build M=$(PWD) clean
obj-m := lab-aux.o
