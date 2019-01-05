# TOOLCHAIN
TOOLCHAIN_PATH = ~/x-tools/arm-bare_newlib_cortex_m3_nommu-eabi/
TOOLCHAIN = $(TOOLCHAIN_PATH)/bin/arm-bare_newlib_cortex_m3_nommu-eabi

# CPP OPTIONS
CPP_OPTIONS  = -fno-exceptions -std=gnu++14 -nostdlib -fno-rtti  -W -Wall
# CPU RELATED OPTIONS
CPU_OPTIONS += -mcpu=cortex-m3 -mthumb 
# OPTIMIZATION OPTIONS
OPTIM_OPTIONS +=  -O3

# LD OPTIONS
LD_OPTIONS = -Wl,--build-id=none -nostartfiles $(CPU_OPTIONS)

CC_OPTIONS = $(CPP_OPTIONS) $(CPU_OPTIONS) $(OPTIM_OPTIONS)

# TOOLS
# CC
CC = $(TOOLCHAIN)-g++ $(CC_OPTIONS)
# AS
AS = $(TOOLCHAIN)-as
# LD
#LD = $(TOOLCHAIN)-ld.bfd 
LD = $(TOOLCHAIN)-g++ $(LD_OPTIONS)
# OBJCOPY
OBJCOPY = $(TOOLCHAIN)-objcopy
# DUMP
DUMP = $(TOOLCHAIN)-objdump -D
# GDB
GDB = $(TOOLCHAIN)-gdb

###############################################################################

#LINKER FILE
LINKER_FILE = startup/stm32f103.ld

# OPENOCD
OPENOCD  = openocd
OCDCFG   = -f /usr/share/openocd/scripts/interface/stlink-v2.cfg
OCDCFG   += -f /usr/share/openocd/scripts/target/stm32f1x.cfg

STARTUP_DIR = startup
MINILIB_DIR = minilib
TESTAPP_DIR = testapp
