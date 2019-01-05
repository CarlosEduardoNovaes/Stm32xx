# Makefile for testapp.o

TOOLCHAIN_PATH = ~/x-tools/arm-bare_newlib_cortex_m3_nommu-eabi/
# TOOLCHAIN
#TOOLCHAIN = arm-none-eabi
TOOLCHAIN = $(TOOLCHAIN_PATH)/bin/arm-bare_newlib_cortex_m3_nommu-eabi


# GCC OPTIONS
CC_OPTIONS  = -fno-exceptions -std=gnu++14 -nostdlib -fno-rtti  -W -Wall
# CPU RELATED OPTIONS
CC_OPTIONS += -mcpu=cortex-m3 -mthumb -mlittle-endian -mfloat-abi=soft -lm
# OPTIMIZATION OPTIONS
CC_OPTIONS +=  -O3
CC = $(TOOLCHAIN)-g++ $(CC_OPTIONS)
#TOOLCHAIN_LIBS = $(TOOLCHAIN_PATH)/lib/gcc/arm-unknown-eabi/8.2.0/thumb/libgcc.a $(TOOLCHAIN_PATH)/arm-unknown-eabi/lib/thumb/libm.a
#TOOLCHAIN_LIBS = ~/x-tools/arm-bare_newlib_cortex_m3_nommu-eabi/lib/gcc/arm-bare_newlib_cortex_m3_nommu-eabi/8.2.0/libgcc.a ~/x-tools/arm-bare_newlib_cortex_m3_nommu-eabi/arm-bare_newlib_cortex_m3_nommu-eabi/lib/libc.a

# TOOLS
AS = $(TOOLCHAIN)-as
#LD = $(TOOLCHAIN)-ld.bfd 
LD = $(TOOLCHAIN)-g++ -Wl,--build-id=none -nostartfiles -mcpu=cortex-m3 -mthumb
OBJCOPY = $(TOOLCHAIN)-objcopy
DUMP = $(TOOLCHAIN)-objdump -D
GDB = $(TOOLCHAIN)-gdb

###############################################################################

# STARTUP_FILES
# STARTUP_FILES = startup/stm32f103_core.o  startup/stm32f103_startup.o
STARTUP_FILES =  startup/stm32f103_startup.o

# OPENOCD
OPENOCD  = openocd
OCDCFG   = -f /usr/share/openocd/scripts/interface/stlink-v2.cfg
OCDCFG   += -f /usr/share/openocd/scripts/target/stm32f1x.cfg

STARTUP_DIR = startup
MINILIB_DIR = minilib
TESTAPP_DIR = testapp


.PHONY: startup
.PHONY: minilib
.PHONY: testapp

all: testapp.dump.asm testapp.bin

startup:
	$(MAKE) -C $(STARTUP_DIR)

minilib:
	$(MAKE) -C $(MINILIB_DIR)

testapp:
	$(MAKE) -C $(TESTAPP_DIR)

testapp.dump.asm:	testapp.elf
	$(DUMP) testapp.elf >testapp.dump.asm

testapp.bin:	testapp.elf
	$(OBJCOPY) testapp.elf testapp.bin -O binary

testapp.elf: 	startup/stm32f103.ld startup minilib testapp
# 	$(LD)  -T  startup/stm32f103.ld -o testapp.elf $(STARTUP_FILES) minilib/minilib.o testapp/testapp.o
	$(LD)  -T  startup/stm32f103.ld -o testapp.elf $(STARTUP_FILES)  testapp/testapp.o $(TOOLCHAIN_LIBS)


# To burn the image:
#  Connect the STLINK gadget to the target.
#  Be sure and start openOCD in this directory.
#    (or else it won't be able to find the bin file).
#  Then use "make flash" to start an openocd console session.
#  Type: reset halt
#  Type: flash write_image erase blink.bin 0x08000000
flash:	testapp.elf
# 	@echo "type: reset halt"
# 	@echo "type: flash write_image erase testapp.bin 0x08000000"
# 	telnet localhost 4444
	$(OPENOCD) $(OCDCFG) -c "program testapp.elf verify reset exit"
gdb:
	$(GDB) --eval-command="target remote localhost:3333" testapp.elf

gdbtui:
	$(GDB) -tui --eval-command="target remote localhost:3333" testapp.elf

clean:
	rm -f *.o *.elf *.dump.asm *.bin
	$(MAKE) -C $(STARTUP_DIR) clean
	$(MAKE) -C $(MINILIB_DIR) clean
	$(MAKE) -C $(TESTAPP_DIR) clean
