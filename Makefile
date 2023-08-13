obj-m += dvt-driver.o

all:
    make -C $(shell uname -r)/build M=$(PWD) modules
clean:
    make -C $(shell uname -r)/build M=$(PWD) clean