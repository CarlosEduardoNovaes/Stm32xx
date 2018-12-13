# Makefile for testapp.o

# TOOLCHAIN
TOOLCHAIN = arm-none-eabi


# GCC OPTIONS
CC_OPTIONS  = -fno-exceptions -std=gnu++14 -nostdlib
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

# STARTUP_FILES
STARTUP_FILES = startup/stm32f103_core.o  startup/stm32f103_startup.o

# OPENOCD
OPENOCD  = openocd
OCDCFG   = -f /usr/share/openocd/scripts/interface/stlink-v2.cfg
OCDCFG   += -f /usr/share/openocd/scripts/target/stm32f1x.cfg

STARTUP_DIR = startup
TESTAPP_DIR = testapp


.PHONY: startup
.PHONY: testapp

all: testapp.dump.asm testapp.bin

startup:
	$(MAKE) -C $(STARTUP_DIR)

testapp:
	$(MAKE) -C $(TESTAPP_DIR)

testapp.dump.asm:	testapp.elf
	$(DUMP) testapp.elf >testapp.dump.asm

testapp.bin:	testapp.elf
	$(OBJCOPY) testapp.elf testapp.bin -O binary

testapp.elf: 	startup/stm32f103.ld startup testapp
	$(LD) -T startup/stm32f103.ld -o testapp.elf $(STARTUP_FILES) testapp/testapp.o


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
	$(MAKE) -C $(TESTAPP_DIR) clean
