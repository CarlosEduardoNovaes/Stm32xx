# Makefile for stm32f103_startup.o

#TOOLCHAIN
TOOLCHAIN = arm-none-eabi


# GCC OPTIONS
CC_OPTIONS  = -fno-exceptions -std=gnu++11 -nostdlib
# CPU RELATED OPTIONS
CC_OPTIONS += -mcpu=cortex-m3 -mthumb
# OPTIMIZATION OPTIONS
CC_OPTIONS += -O3
CC = $(TOOLCHAIN)-g++ $(CC_OPTIONS)

# TOOLS
AS = $(TOOLCHAIN)-as
LD = $(TOOLCHAIN)-ld.bfd
OBJCOPY = $(TOOLCHAIN)-objcopy
DUMP = $(TOOLCHAIN)-objdump -d
GDB = $(TOOLCHAIN)-gdb

###############################################################################

OBJS = stm32f103_core.o stm32f103_startup.o

all: $(OBJS)

dump:	stm32f103_startup.o
		$(DUMP) stm32f103_startup.o >stm32f103_startup.dump.asm

stm32f103_core.o:	stm32f103_core.asm
	$(AS) stm32f103_core.asm -o stm32f103_core.o

stm32f103_startup.o:	stm32f103_startup.cpp
	$(CC)  -c stm32f103_startup.cpp -o stm32f103_startup.o

clean:
	rm -f *.o *.elf *.dump.asm *.bin
