#include <stm32xx/f103.hpp>




volatile int32_t foo_i;
volatile float   foo_f;







using namespace stm32::registers;



void delay ( void ){
    volatile int count = 3'000 *50;
    while ( count-- );
}

void bigdelay ( void ){
    volatile int count = 9'000 *300;
    while ( count-- );
}


int main(void) {
    foo_i = 8;
    foo_f = 3.14f;

    rcc_apb2enr::reg::setIopc(true);
    
    
    gpio::c::crh::reg::setCnf13(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode13(gpio::MODE::OUTPUT_50MHZ);
    gpio::c::crh::reg::setCnf14(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode14(gpio::MODE::OUTPUT_50MHZ);
    
    
    // Turn leds off
    gpio::c::odr::reg::setOdr13(true);
    gpio::c::odr::reg::setOdr14(true);
    

    
    

    while(true){
        // turn led14 on
        if (foo_i==3) gpio::c::odr::reg::setOdr14(false);
        foo_i = foo_f;
        gpio::c::odr::reg::setOdr13(false);
        delay();
        gpio::c::odr::reg::setOdr13(true);
        delay();
        gpio::c::odr::reg::setOdr13(false);
        delay();
        gpio::c::odr::reg::setOdr13(true);
        delay();
        gpio::c::odr::reg::setOdr13(false);
        delay();
        gpio::c::odr::reg::setOdr13(true);
        gpio::c::odr::reg::setOdr14(true);
        bigdelay();
        foo_i = foo_f;
        
   };
};





