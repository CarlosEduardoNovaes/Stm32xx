#include <cstddef>
#include <cstdint>
#include <stm/f103.hpp>

//using std::size_t = unsigned int;

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
//      stm::registers::timer::t1::sr::reg::clearUif();
};

extern "C" __attribute__ ((interrupt ("IRQ"))) void _usart1_isr_ (void) __attribute__((weak));
extern "C" __attribute__ ((interrupt ("IRQ"))) void _usart1_isr_ (void)
{
//     while(true){
//     };
/*    stm::registers::usart::usart1::dr::reg::value() = 0;  
    stm::registers::usart::usart1::cr::reg::setTxeie(false); */     
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
extern std::uint8_t __bss_start__;
extern std::uint8_t __bss_end__;
extern std::uint8_t __data_start__;
extern std::uint8_t __data_end__;
extern std::uint8_t __data_load__;
//extern void _init();
// void _fini();
// void _exit(int return_code) __attribute__((noreturn));


extern "C" std::uint32_t * const vectortable[] __attribute__((section (".stm.isrSection"))) = {
    /* Function Pointer                         Name                    Addr            IRQn    EXn */
    (std::uint32_t*) STACK_START_ADDR,               /* SP                   0x0000          N/A     N/A */
    (std::uint32_t*) startup,                        /* Reset                0x0004          N/A     1 */
    (std::uint32_t*) _dumb_isr_,                     /* NMI               0x0008  -14     2 */
    (std::uint32_t*) _dumb_isr_,                     /* HardFault         0x000C  -13     3 */
    (std::uint32_t*) _dumb_isr_,                     /* MemManage         0x0010  -12     4 */
    (std::uint32_t*) _dumb_isr_,                     /* BusFault          0x0014  -11     5 */
    (std::uint32_t*) _dumb_isr_,                     /* UsageFault        0x0018  -10     6 */
    (std::uint32_t*) _dumb_isr_,                    /* Reserved          0x001C   -9     7 */
    (std::uint32_t*) _dumb_isr_,                    /* Reserved          0x0020   -8     8 */
    (std::uint32_t*) _dumb_isr_,                    /* Reserved          0x0024   -7     9 */
    (std::uint32_t*) _dumb_isr_,                    /* Reserved          0x0028   -6    10 */
    (std::uint32_t*) _dumb_isr_,                     /* SVCall            0x002C   -5    11 */
    (std::uint32_t*) _dumb_isr_,                     /* DebugMonitor      0x0030   -4    12 */
    (std::uint32_t*) _dumb_isr_,                    /* Reserved          0x0034   -3    13 */
    (std::uint32_t*) _dumb_isr_,                     /* PendSV            0x0038   -2    14 */
    (std::uint32_t*) _dumb_isr_,                     /* SysTick           0x003C   -1    15 */
    (std::uint32_t*) _dumb_isr_,                     /* WWDG              0x0040    0    16 */
    (std::uint32_t*) _dumb_isr_,                     /* PVD               0x0044    1    17 */
    (std::uint32_t*) _dumb_isr_,                     /* TAMPER            0x0048    2    18 */
    (std::uint32_t*) _dumb_isr_,                     /* RTC               0x004C    3    19 */
    (std::uint32_t*) _dumb_isr_,                     /* FLASH             0x0050    4    20 */
    (std::uint32_t*) _dumb_isr_,                     /* RCC               0x0054    5    21 */
    (std::uint32_t*) _dumb_isr_,                     /* EXTI0             0x0058    6    22 */
    (std::uint32_t*) _dumb_isr_,                     /* EXTI1             0x005C    7    23 */
    (std::uint32_t*) _dumb_isr_,                     /* EXTI2             0x0060    8    24 */
    (std::uint32_t*) _dumb_isr_,                     /* EXTI3             0x0064    9    25 */
    (std::uint32_t*) _dumb_isr_,                     /* EXTI4             0x0068   10    26 */
    (std::uint32_t*) _dumb_isr_,                     /* DMA1_Channel1     0x006C   11    27 */
    (std::uint32_t*) _dumb_isr_,                     /* DMA1_Channel2     0x0070   12    28 */
    (std::uint32_t*) _dumb_isr_,                     /* DMA1_Channel3     0x0074   13    29 */
    (std::uint32_t*) _dumb_isr_,                     /* DMA1_Channel4     0x0078   14    30 */
    (std::uint32_t*) _dumb_isr_,                     /* DMA1_Channel5     0x007C   15    31 */
    (std::uint32_t*) _dumb_isr_,                     /* DMA1_Channel6     0x0080   16    32 */
    (std::uint32_t*) _dumb_isr_,                     /* DMA1_Channel7     0x0084   17    33 */
    (std::uint32_t*) _dumb_isr_,                     /* ADC1_2            0x0088   18    34 */
    (std::uint32_t*) _dumb_isr_,                     /* USB_HP_CAN_TX     0x008C   19    35 */
    (std::uint32_t*) _dumb_isr_,                     /* USB_LP_CAN_RX0    0x0090   20    36 */
    (std::uint32_t*) _dumb_isr_,                     /* CAN_RX1           0x0094   21    37 */
    (std::uint32_t*) _dumb_isr_,                     /* CAN_SCE           0x0098   22    38 */
    (std::uint32_t*) _dumb_isr_,                     /* EXTI9_5           0x009C   23    39 */
    (std::uint32_t*) _dumb_isr_,                     /* TIM1_BRK          0x00A0   24    40 */
    (std::uint32_t*) _tim1_up_isr_,                  /* TIM1_UP           0x00A4   25    41 */
    (std::uint32_t*) _dumb_isr_,                     /* TIM1_TRG_COM      0x00A8   26    42 */
    (std::uint32_t*) _dumb_isr_,                     /* TIM1_CC           0x00AC   27    43 */
    (std::uint32_t*) _dumb_isr_,                     /* TIM2              0x00B0   28    44 */
    (std::uint32_t*) _dumb_isr_,                     /* TIM3              0x00B4   29    45 */
    (std::uint32_t*) _dumb_isr_,                     /* TIM4              0x00B8   30    46 */
    (std::uint32_t*) _dumb_isr_,                     /* I2C1_EV           0x00BC   31    47 */
    (std::uint32_t*) _dumb_isr_,                     /* I2C1_ER           0x00C0   32    48 */
    (std::uint32_t*) _dumb_isr_,                     /* I2C2_EV           0x00C4   33    49 */
    (std::uint32_t*) _dumb_isr_,                     /* I2C2_ER           0x00C8   34    50 */
    (std::uint32_t*) _dumb_isr_,                     /* SPI1              0x00CC   35    51 */
    (std::uint32_t*) _dumb_isr_,                     /* SPI2              0x00D0   36    52 */
    (std::uint32_t*) _usart1_isr_,               /* USART1            0x00D4   37    53 */
    (std::uint32_t*) _dumb_isr_,                     /* USART2            0x00D8   38    54 */
    (std::uint32_t*) _dumb_isr_,                     /* USART3            0x00DC   39    55 */
    (std::uint32_t*) _dumb_isr_,                     /* EXTI15_10         0x00E0   40    56 */
    (std::uint32_t*) _dumb_isr_,                     /* RTCAlarm          0x00E4   41    57 */
    (std::uint32_t*) _dumb_isr_,                     /* USBWakeup         0x00E8   42    58 */
    (std::uint32_t*) _dumb_isr_,                    /* TIM8_BRK          0x00EC   43    59 */
    (std::uint32_t*) _dumb_isr_,                    /* TIM8_UP           0x00F0   44    60 */
    (std::uint32_t*) _dumb_isr_,                    /* TIM8_TRG_COM      0x00F4   45    61 */
    (std::uint32_t*) _dumb_isr_,                    /* TIM8_CC           0x00F8   46    62 */
    (std::uint32_t*) _dumb_isr_,                    /* ADC3              0x00FC   47    63 */
    (std::uint32_t*) _dumb_isr_,                    /* FSMC              0x0100   48    64 */
    (std::uint32_t*) _dumb_isr_,                    /* SDIO              0x0104   49    65 */
    (std::uint32_t*) _dumb_isr_,                    /* TIM5              0x0108   50    66 */
    (std::uint32_t*) _dumb_isr_,                    /* SPI3              0x010C   51    67 */
    (std::uint32_t*) _dumb_isr_,                    /* UART4             0x0110   52    68 */
    (std::uint32_t*) _dumb_isr_,                    /* UART5             0x0114   53    69 */
    (std::uint32_t*) _dumb_isr_,                    /* TIM6              0x0118   54    70 */
    (std::uint32_t*) _dumb_isr_,                    /* TIM7              0x011C   55    71 */
    (std::uint32_t*) _dumb_isr_,                    /* DMA2_Channel1     0x0120   56    72 */
    (std::uint32_t*) _dumb_isr_,                    /* DMA2_Channel2     0x0124   57    73 */
    (std::uint32_t*) _dumb_isr_,                    /* DMA2_Channel3     0x0128   58    74 */
    (std::uint32_t*) _dumb_isr_,                    /* DMA2_Channel4     0x012C   59    75 */
    (std::uint32_t*) _dumb_isr_,                    /* DMA2_Channel5     0x0130   60    76 */
    (std::uint32_t*) _dumb_isr_,                    /* ETH               0x0134   61    77 */
    (std::uint32_t*) _dumb_isr_,                    /* ETH_WKUP          0x0138   62    78 */
    (std::uint32_t*) _dumb_isr_,                    /* CAN2_TX           0x013C   63    79 */
    (std::uint32_t*) _dumb_isr_,                    /* CAN2_RX0          0x0140   64    80 */
    (std::uint32_t*) _dumb_isr_,                    /* CAN2_RX1          0x0144   65    81 */
    (std::uint32_t*) _dumb_isr_,                    /* CAN2_SCE          0x0148   66    82 */
    (std::uint32_t*) _dumb_isr_,                    /* OTG_FS            0x014C   67    83 */
};




extern "C" __attribute__ ((noreturn)) void startup ( void )
{
    std::size_t count, i;
    stm::registers::scb_ccr::reg::setStkalign(true);
    std::uint8_t*    dst = &__data_start__;
    std::uint8_t*    src = &__data_load__;
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
    using namespace stm::registers;
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
