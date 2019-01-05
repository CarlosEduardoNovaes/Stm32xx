# Makefile for stm32f103_startup.o

#TOOLCHAIN
#TOOLCHAIN = arm-none-eabi
TOOLCHAIN = ~/x-tools/arm-bare_newlib_cortex_m3_nommu-eabi/bin/arm-bare_newlib_cortex_m3_nommu-eabi


# GCC OPTIONS
CC_OPTIONS  = -fno-exceptions -std=gnu++14 -nostdlib -fno-rtti  -W -Wall
# CPU RELATED OPTIONS
CC_OPTIONS += -mcpu=cortex-m3 -mthumb -mlittle-endian -mfloat-abi=soft
# OPTIMIZATION OPTIONS
CC_OPTIONS +=  -O3
# INCLUDES
CC_OPTIONS += -I../include
CC = $(TOOLCHAIN)-g++ $(CC_OPTIONS)


LINKER_SCRIPT = stm32f103.ld

LDFLAGS += -march=armv7-m -mabi=aapcs
LDFLAGS += -nostartfiles -nostdlib -lgcc
LDFLAGS += -T$(LINKER_SCRIPT)

# TOOLS
AS = $(TOOLCHAIN)-as
LD = $(TOOLCHAIN)-ld.bfd
#LD = $(CC) $(LDFLAGS)
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
