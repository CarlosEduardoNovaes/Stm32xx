# Makefile for testapp.o

#TOOLCHAIN
#TOOLCHAIN = arm-none-eabi
TOOLCHAIN = ~/x-tools/arm-bare_newlib_cortex_m3_nommu-eabi/bin/arm-bare_newlib_cortex_m3_nommu-eabi


# GCC OPTIONS
CC_OPTIONS  = -fno-exceptions -std=gnu++14 -nostdlib -fno-rtti -lm  -W -Wall
# CPU RELATED OPTIONS
CC_OPTIONS += -mcpu=cortex-m3 -mthumb -mlittle-endian -mfloat-abi=soft
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

OBJS = testapp.o

all: $(OBJS)

testapp.o:	main.cpp
	$(CC) -c main.cpp -o testapp.o


clean:
	rm -f *.o
