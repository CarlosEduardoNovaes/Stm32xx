#include <stm32xx/registers/rcc_lmhxl.hpp>
#include <stm32xx/registers/gpio.hpp>


using namespace stm32::registers;


void delay ( void ){
    volatile int count = 1000 * 100;
    while ( count-- );
}

void bigdelay ( void ){
    volatile int count = 5000 * 100;
    while ( count-- );
}

int main(void) {
    rcc_apb2enr::reg::setIopc(true);
    gpio::c::crh::reg::setCnf13(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode13(gpio::MODE::OUTPUT_50MHZ);
    gpio::c::crh::reg::setCnf14(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode14(gpio::MODE::OUTPUT_50MHZ);

    while(true){
        for (int it_i=0; it_i<5; it_i++){
            gpio::c::odr::reg::setOdr13(false);
            delay();
            gpio::c::odr::reg::setOdr13(true);
            delay();
        }
        gpio::c::odr::reg::setOdr14(false);
        bigdelay();
        gpio::c::odr::reg::setOdr14(true);
    };

};
