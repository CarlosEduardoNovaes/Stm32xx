#include <stddef.h>
#include <stm32xx/f103.hpp>
//#include "stm32f103.h"
//using size_t = unsigned int;
extern "C" void _irq_0_handler (void) __attribute__((weak));
extern "C" void _irq_0_handler (void)
{
    asm ("b .");
};

// extern "C" void __aeabi_unwind_cpp_pr0() {};
// extern "C" void __aeabi_unwind_cpp_pr1() {};
// extern "C" void __aeabi_unwind_cpp_pr2() {};
extern void (*__preinit_array_start []) (void) __attribute__((weak));
extern void (*__preinit_array_end []) (void) __attribute__((weak));
extern void (*__init_array_start []) (void) __attribute__((weak));
extern void (*__init_array_end []) (void) __attribute__((weak));
extern void (*__fini_array_start []) (void) __attribute__((weak));
extern void (*__fini_array_end []) (void) __attribute__((weak));
//extern void _init();
// void _fini();
// void _exit(int return_code) __attribute__((noreturn));



extern int main();

extern "C" void startup ( void )
{
    size_t count, i;
    count = __preinit_array_end - __preinit_array_start;
    for (i = 0; i < count; i++){
        __preinit_array_start[i]();
    };
    //_init();
    count = __init_array_end - __init_array_start;
    for (i = 0; i < count; i++){
        __init_array_start[i]();
    };
    
    {
        using namespace stm32::registers;
        flash_acr::reg::setLatency(flash_acr::LATENCY::WAIT_STATES_2);
    rcc_cfrg::reg::setPpre1(rcc_cfrg::PPRE::HCLK_DIV_BY_2);
    rcc_cr::reg::setHseon(true);
    while ( rcc_cr::reg::getHserdy() == false );
    rcc_cfrg::reg::setPllscr(true);
    rcc_cfrg::reg::setPllmul(rcc_cfrg::PLLMUL::TIMES_10);
    rcc_cr::reg::setPllon(true);
    while ( rcc_cr::reg::getPllrdy() == false );
    rcc_cfrg::reg::setSw(rcc_cfrg::SW::PLL);
    while ( rcc_cfrg::reg::getSws() != rcc_cfrg::reg::getSw() );
    }
    
    main();
};



/* THE END */
