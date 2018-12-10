//#include "stm32f103.h"
extern "C" void _irq_0_handler (void) __attribute__((weak));
extern "C" void _irq_0_handler (void)
{
    asm("b .");
};

// extern "C" void __aeabi_unwind_cpp_pr0() {};
// extern "C" void __aeabi_unwind_cpp_pr1() {};
// extern "C" void __aeabi_unwind_cpp_pr2() {};

extern int main();

extern "C" void startup ( void )
{
    main();
};



/* THE END */
