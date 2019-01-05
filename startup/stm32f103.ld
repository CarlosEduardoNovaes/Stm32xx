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
 
 ENTRY(startup)
_heap_size =          0x00000400;
_stack_size =         0x00000400;

MEMORY
{
    isr(rx)         : ORIGIN = 0x08000000, LENGTH = 0x00150
    rom(rx)         : ORIGIN = 0x08000150, LENGTH = 0x0FED0
    extrom(rx)      : ORIGIN = 0x08010000, LENGTH = 0x10000
    ram(rwx)       : ORIGIN = 0x20000000, LENGTH = 0x05000
}

SECTIONS
{
    /*This section starts at 0x08000000 and contains the very first opcode executed by the cpu
    Also, its where the cpu jump to on interrupts
    It must contain the vectortable array defined in the startup file*/
    .stm32.isrSection 0x08000000 :
    {
        _sisrvectors = .;
        KEEP(*(.stm32.isrSection)) /* keep my variable even if not referenced */
        ASSERT(. == 0x150, "The vector table needs to be 84 elements long!");
        _eisrvectors = .;
    } > isr
    
    /* other placements follow here... */
    
    .text :
    {
        . = ALIGN(4);
        _stext = .;
        *(.text)
        *(.text*)
        *(.rodata)
        *(.rodata*)
        . = ALIGN(4);
        _etext = .;
    } > rom
    
    .ARM.extab :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > rom
    
    .ARM : 
    {
        *(.ARM.exidx*)
    } > rom
    
    .ARM.attributes : 
    {
        *(.ARM.attributes*)
    } > rom
    
    .debub : 
    {
        *(.debug*)
    } > rom
    .comment : 
    {
        *(.comment)
        *(.comment*)
    } > rom
    
    .preinit_array  :
    {
        PROVIDE_HIDDEN (__preinit_array_start = .);
        KEEP (*(SORT(.preinit_array.*)))
        KEEP (*(.preinit_array*))
        PROVIDE_HIDDEN (__preinit_array_end = .);
    } > rom
    
/*    .init  :
    {
        PROVIDE_HIDDEN (__init_start = .);
        KEEP (*(.init*))
        PROVIDE_HIDDEN (__init_end = .);
    } > rom*/
    
    .init_array :
    {
        PROVIDE_HIDDEN (__init_array_start = .);
        KEEP (*(SORT(.init_array.*)))
        KEEP (*(.init_array*))
        PROVIDE_HIDDEN (__init_array_end = .);
    } > rom
    
    .stm32.extromSection 0x08010000:
    {
        KEEP(*(.stm32.extromSection)) /* keep my variable even if not referenced */
    } > extrom
    
    .data :
    {
        __data_start__ = .;
        KEEP (*(.data))
        KEEP (*(.data*))
        __data_end__ = .;
    } > ram AT > rom
    __data_load__ = LOADADDR(.data);
  
    .bss  :
    {
        . = ALIGN(4);
        __bss_start__ = .;
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        __bss_end__ = .;
    } > ram
    
    ._heap_trick :
    {
        . = ALIGN(4);
        . = . + _heap_size;
        . = ALIGN(4);
    } > ram

    ._stack_trick :
    {
        . = ALIGN(8);
        . = . + _stack_size;
        . = ALIGN(8);
    } > ram
    
    
}
