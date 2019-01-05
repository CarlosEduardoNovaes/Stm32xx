#include <stddef.h>
#include <stdint.h>
#include <stm32xx/f103.hpp>
//#include "stm32f103.h"
//using size_t = unsigned int;

#define STACK_START_ADDR 0x20005000

extern "C" void startup(void);
extern int main(void);
extern "C" __attribute__ ((interrupt ("IRQ"))) void _dumb_isr_ (void) __attribute__((weak));
extern "C" __attribute__ ((interrupt ("IRQ"))) void _dumb_isr_ (void)
{
//     while(true){
//     };
};

extern "C" __attribute__ ((interrupt ("IRQ"))) void _tim1_up_isr_ (void) __attribute__((weak));
extern "C" __attribute__ ((interrupt ("IRQ"))) void _tim1_up_isr_ (void)
{
//     while(true){
//     };
//      stm32::registers::timer::t1::sr::reg::clearUif();
};

extern "C" __attribute__ ((interrupt ("IRQ"))) void _usart1_isr_ (void) __attribute__((weak));
extern "C" __attribute__ ((interrupt ("IRQ"))) void _usart1_isr_ (void)
{
//     while(true){
//     };
/*    stm32::registers::usart::usart1::dr::reg::value() = 0;  
    stm32::registers::usart::usart1::cr::reg::setTxeie(false); */     
};


// extern "C" void __aeabi_unwind_cpp_pr0() {};
// extern "C" void __aeabi_unwind_cpp_pr1() {};
// extern "C" void __aeabi_unwind_cpp_pr2() {};
extern void (*__preinit_array_start []) (void) __attribute__((weak));
extern void (*__preinit_array_end []) (void) __attribute__((weak));
extern void (*__init_start []) (void) __attribute__((weak));
extern void (*__init_end []) (void) __attribute__((weak));
extern void (*__init_array_start []) (void) __attribute__((weak));
extern void (*__init_array_end []) (void) __attribute__((weak));
extern void (*__fini_array_start []) (void) __attribute__((weak));
extern void (*__fini_array_end []) (void) __attribute__((weak));
extern uint8_t __bss_start__;
extern uint8_t __bss_end__;
extern uint8_t __data_start__;
extern uint8_t __data_end__;
extern uint8_t __data_load__;
//extern void _init();
// void _fini();
// void _exit(int return_code) __attribute__((noreturn));


extern "C" uint32_t * const vectortable[] __attribute__((section (".stm32.isrSection"))) = {
    /* Function Pointer                         Name                    Addr            IRQn    EXn */
    (uint32_t*) STACK_START_ADDR,               /* SP                   0x0000          N/A     N/A */
    (uint32_t*) startup,                        /* Reset                0x0004          N/A     1 */
    (uint32_t*) _dumb_isr_,                     /* NMI               0x0008  -14     2 */
    (uint32_t*) _dumb_isr_,                     /* HardFault         0x000C  -13     3 */
    (uint32_t*) _dumb_isr_,                     /* MemManage         0x0010  -12     4 */
    (uint32_t*) _dumb_isr_,                     /* BusFault          0x0014  -11     5 */
    (uint32_t*) _dumb_isr_,                     /* UsageFault        0x0018  -10     6 */
    (uint32_t*) _dumb_isr_,                    /* Reserved          0x001C   -9     7 */
    (uint32_t*) _dumb_isr_,                    /* Reserved          0x0020   -8     8 */
    (uint32_t*) _dumb_isr_,                    /* Reserved          0x0024   -7     9 */
    (uint32_t*) _dumb_isr_,                    /* Reserved          0x0028   -6    10 */
    (uint32_t*) _dumb_isr_,                     /* SVCall            0x002C   -5    11 */
    (uint32_t*) _dumb_isr_,                     /* DebugMonitor      0x0030   -4    12 */
    (uint32_t*) _dumb_isr_,                    /* Reserved          0x0034   -3    13 */
    (uint32_t*) _dumb_isr_,                     /* PendSV            0x0038   -2    14 */
    (uint32_t*) _dumb_isr_,                     /* SysTick           0x003C   -1    15 */
    (uint32_t*) _dumb_isr_,                     /* WWDG              0x0040    0    16 */
    (uint32_t*) _dumb_isr_,                     /* PVD               0x0044    1    17 */
    (uint32_t*) _dumb_isr_,                     /* TAMPER            0x0048    2    18 */
    (uint32_t*) _dumb_isr_,                     /* RTC               0x004C    3    19 */
    (uint32_t*) _dumb_isr_,                     /* FLASH             0x0050    4    20 */
    (uint32_t*) _dumb_isr_,                     /* RCC               0x0054    5    21 */
    (uint32_t*) _dumb_isr_,                     /* EXTI0             0x0058    6    22 */
    (uint32_t*) _dumb_isr_,                     /* EXTI1             0x005C    7    23 */
    (uint32_t*) _dumb_isr_,                     /* EXTI2             0x0060    8    24 */
    (uint32_t*) _dumb_isr_,                     /* EXTI3             0x0064    9    25 */
    (uint32_t*) _dumb_isr_,                     /* EXTI4             0x0068   10    26 */
    (uint32_t*) _dumb_isr_,                     /* DMA1_Channel1     0x006C   11    27 */
    (uint32_t*) _dumb_isr_,                     /* DMA1_Channel2     0x0070   12    28 */
    (uint32_t*) _dumb_isr_,                     /* DMA1_Channel3     0x0074   13    29 */
    (uint32_t*) _dumb_isr_,                     /* DMA1_Channel4     0x0078   14    30 */
    (uint32_t*) _dumb_isr_,                     /* DMA1_Channel5     0x007C   15    31 */
    (uint32_t*) _dumb_isr_,                     /* DMA1_Channel6     0x0080   16    32 */
    (uint32_t*) _dumb_isr_,                     /* DMA1_Channel7     0x0084   17    33 */
    (uint32_t*) _dumb_isr_,                     /* ADC1_2            0x0088   18    34 */
    (uint32_t*) _dumb_isr_,                     /* USB_HP_CAN_TX     0x008C   19    35 */
    (uint32_t*) _dumb_isr_,                     /* USB_LP_CAN_RX0    0x0090   20    36 */
    (uint32_t*) _dumb_isr_,                     /* CAN_RX1           0x0094   21    37 */
    (uint32_t*) _dumb_isr_,                     /* CAN_SCE           0x0098   22    38 */
    (uint32_t*) _dumb_isr_,                     /* EXTI9_5           0x009C   23    39 */
    (uint32_t*) _dumb_isr_,                     /* TIM1_BRK          0x00A0   24    40 */
    (uint32_t*) _tim1_up_isr_,                  /* TIM1_UP           0x00A4   25    41 */
    (uint32_t*) _dumb_isr_,                     /* TIM1_TRG_COM      0x00A8   26    42 */
    (uint32_t*) _dumb_isr_,                     /* TIM1_CC           0x00AC   27    43 */
    (uint32_t*) _dumb_isr_,                     /* TIM2              0x00B0   28    44 */
    (uint32_t*) _dumb_isr_,                     /* TIM3              0x00B4   29    45 */
    (uint32_t*) _dumb_isr_,                     /* TIM4              0x00B8   30    46 */
    (uint32_t*) _dumb_isr_,                     /* I2C1_EV           0x00BC   31    47 */
    (uint32_t*) _dumb_isr_,                     /* I2C1_ER           0x00C0   32    48 */
    (uint32_t*) _dumb_isr_,                     /* I2C2_EV           0x00C4   33    49 */
    (uint32_t*) _dumb_isr_,                     /* I2C2_ER           0x00C8   34    50 */
    (uint32_t*) _dumb_isr_,                     /* SPI1              0x00CC   35    51 */
    (uint32_t*) _dumb_isr_,                     /* SPI2              0x00D0   36    52 */
    (uint32_t*) _usart1_isr_,               /* USART1            0x00D4   37    53 */
    (uint32_t*) _dumb_isr_,                     /* USART2            0x00D8   38    54 */
    (uint32_t*) _dumb_isr_,                     /* USART3            0x00DC   39    55 */
    (uint32_t*) _dumb_isr_,                     /* EXTI15_10         0x00E0   40    56 */
    (uint32_t*) _dumb_isr_,                     /* RTCAlarm          0x00E4   41    57 */
    (uint32_t*) _dumb_isr_,                     /* USBWakeup         0x00E8   42    58 */
    (uint32_t*) _dumb_isr_,                    /* TIM8_BRK          0x00EC   43    59 */
    (uint32_t*) _dumb_isr_,                    /* TIM8_UP           0x00F0   44    60 */
    (uint32_t*) _dumb_isr_,                    /* TIM8_TRG_COM      0x00F4   45    61 */
    (uint32_t*) _dumb_isr_,                    /* TIM8_CC           0x00F8   46    62 */
    (uint32_t*) _dumb_isr_,                    /* ADC3              0x00FC   47    63 */
    (uint32_t*) _dumb_isr_,                    /* FSMC              0x0100   48    64 */
    (uint32_t*) _dumb_isr_,                    /* SDIO              0x0104   49    65 */
    (uint32_t*) _dumb_isr_,                    /* TIM5              0x0108   50    66 */
    (uint32_t*) _dumb_isr_,                    /* SPI3              0x010C   51    67 */
    (uint32_t*) _dumb_isr_,                    /* UART4             0x0110   52    68 */
    (uint32_t*) _dumb_isr_,                    /* UART5             0x0114   53    69 */
    (uint32_t*) _dumb_isr_,                    /* TIM6              0x0118   54    70 */
    (uint32_t*) _dumb_isr_,                    /* TIM7              0x011C   55    71 */
    (uint32_t*) _dumb_isr_,                    /* DMA2_Channel1     0x0120   56    72 */
    (uint32_t*) _dumb_isr_,                    /* DMA2_Channel2     0x0124   57    73 */
    (uint32_t*) _dumb_isr_,                    /* DMA2_Channel3     0x0128   58    74 */
    (uint32_t*) _dumb_isr_,                    /* DMA2_Channel4     0x012C   59    75 */
    (uint32_t*) _dumb_isr_,                    /* DMA2_Channel5     0x0130   60    76 */
    (uint32_t*) _dumb_isr_,                    /* ETH               0x0134   61    77 */
    (uint32_t*) _dumb_isr_,                    /* ETH_WKUP          0x0138   62    78 */
    (uint32_t*) _dumb_isr_,                    /* CAN2_TX           0x013C   63    79 */
    (uint32_t*) _dumb_isr_,                    /* CAN2_RX0          0x0140   64    80 */
    (uint32_t*) _dumb_isr_,                    /* CAN2_RX1          0x0144   65    81 */
    (uint32_t*) _dumb_isr_,                    /* CAN2_SCE          0x0148   66    82 */
    (uint32_t*) _dumb_isr_,                    /* OTG_FS            0x014C   67    83 */
};




extern "C" __attribute__ ((noreturn)) void startup ( void )
{
    size_t count, i;
    stm32::registers::scb_ccr::reg::setStkalign(true);
    uint8_t*    dst = &__data_start__;
    uint8_t*    src = &__data_load__;
    while (dst < &__data_end__){
        *dst++ = *src++;
    };
    for ( dst = &__bss_start__; dst < &__bss_end__; dst++ ) { *dst = 0; }
    
    count = __preinit_array_end - __preinit_array_start;
    for (i = 0; i < count; i++){
        __preinit_array_start[i]();
    };
//     count = __init_end - __init_start;
//     for (i = 0; i < count; i++){
//         __init_start[i]();
//     };
    count = __init_array_end - __init_array_start;
    for (i = 0; i < count; i++){
        __init_array_start[i]();
    };
    
    // Switch to 72 MHz Clock
    {    
    using namespace stm32::registers;
    flash_acr::reg::setLatency(flash_acr::LATENCY::WAIT_STATES_2);
    rcc_cfrg::reg::setPpre1(rcc_cfrg::PPRE::HCLK_DIV_BY_2);
    rcc_cr::reg::setHseon(true);
    while ( rcc_cr::reg::getHserdy() == false );
    rcc_cfrg::reg::setPllscr(true);
    rcc_cfrg::reg::setPllmul(rcc_cfrg::PLLMUL::TIMES_9);
    rcc_cr::reg::setPllon(true);
    while ( rcc_cr::reg::getPllrdy() == false );
    rcc_cfrg::reg::setSw(rcc_cfrg::SW::PLL);
    while ( rcc_cfrg::reg::getSws() != rcc_cfrg::reg::getSw() );
    }
    
    
    main();
    while(true){
    };
};



/* THE END */
