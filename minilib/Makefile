# Makefile for testapp.o

#TOOLCHAIN
TOOLCHAIN = arm-none-eabi


# GCC OPTIONS
CC_OPTIONS  = -fno-exceptions -std=gnu++14 -nostdlib -fno-rtti 
# CPU RELATED OPTIONS
CC_OPTIONS += -mcpu=cortex-m3 -mthumb
# OPTIMIZATION OPTIONS
CC_OPTIONS += -O3
# INCLUDES
CC_OPTIONS += -I../include
CC = $(TOOLCHAIN)-g++ $(CC_OPTIONS)

# TOOLS
AS = $(TOOLCHAIN)-as
LD = $(TOOLCHAIN)-ld.bfd
OBJCOPY = $(TOOLCHAIN)-objcopy
DUMP = $(TOOLCHAIN)-objdump -d
GDB = $(TOOLCHAIN)-gdb



###############################################################################

OBJS = minilib.o

all: $(OBJS)

minilib.o:	minilib.cpp
	$(CC) -c minilib.cpp -o minilib.o


clean:
	rm -f *.o
