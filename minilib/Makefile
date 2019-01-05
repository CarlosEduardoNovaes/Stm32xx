# Makefile for testapp.o

#TOOLCHAIN
#TOOLCHAIN = arm-none-eabi
TOOLCHAIN = ~/x-tools/arm-bare_newlib_cortex_m3_nommu-eabi/bin/arm-bare_newlib_cortex_m3_nommu-eabi


# GCC OPTIONS
CC_OPTIONS  = -fno-exceptions -std=gnu++14 -nostdlib -fno-rtti -W -Wall
# CPU RELATED OPTIONS
CC_OPTIONS += -mcpu=cortex-m3 -mthumb -mlittle-endian -mfloat-abi=soft
# OPTIMIZATION OPTIONS
CC_OPTIONS += -O3
# INCLUDES
CC_OPTIONS += -I../include
CC = $(TOOLCHAIN)-g++ $(CC_OPTIONS)

# TOOLS
AS = $(TOOLCHAIN)-ar
AS = $(TOOLCHAIN)-as
LD = $(TOOLCHAIN)-ld.bfd
OBJCOPY = $(TOOLCHAIN)-objcopy
DUMP = $(TOOLCHAIN)-objdump -d
GDB = $(TOOLCHAIN)-gdb



###############################################################################


OBJS = minilib.o

all: minilib.a

minilib.o:	minilib.cpp
	$(CC) -c minilib.cpp -o minilib.o
	
iostream.o:	iostream.cpp
	$(CC) -c iostream.cpp -o iostream.o
	
minilib.a:	$(OBJS)
	$(AR) rvs minilib.a $(OBJS)



clean:
	rm -f *.o *.a
