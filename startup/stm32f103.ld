/* stm32f103.ld
 * linker script for Cortex M3 STM32F103
 *
 * Memory layout on my STM32F103 is pretty much like this:
 *
 * 0x00000000 - 0x07ffffff - aliased to flash or sys memory depending on BOOT jumpers
 * 0x08000000 - 0x0800ffff - Flash (64K ... or 128K)
 * 0x1ffff000 - 0x1ffff7ff - Boot firmware in system memory
 * 0x1ffff800 - 0x1fffffff - option bytes
 * 0x20000000 - 0x20004fff - SRAM (20k)
 * 0x40000000 - 0x40023400 - peripherals
 */
MEMORY
{
    rom(rx)         : ORIGIN = 0x08000000, LENGTH = 128K
    ram(wail)       : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
    . = ALIGN(4);
    .text : { *(.text*) } > rom
    .bss  : { *(.bss*) } > ram
    .preinit_array  :    {
        PROVIDE_HIDDEN (__preinit_array_start = .);
        KEEP (*(.preinit_array*))
        PROVIDE_HIDDEN (__preinit_array_end = .);
    } > rom
    
    .init_array :  {
        PROVIDE_HIDDEN (__init_array_start = .);
        KEEP (*(SORT(.init_array.*)))
        KEEP (*(.init_array*))
        PROVIDE_HIDDEN (__init_array_end = .);
    } > rom
}
