#include <stm32xx/f103.hpp>




class MeuBuffer{
public:
    uint32_t valor[64];
    MeuBuffer(){
        for (int it_i=0; it_i<64; it_i++){
            valor[it_i] = 52;
        }
    };
};


using namespace stm32::registers;

MeuBuffer buf;


void delay ( void ){
    volatile int count = 500'000;
    while ( count-- );
}

void bigdelay ( void ){
    volatile int count = 5'000'000;
    while ( count-- );
}

int main(void) {
    rcc_apb2enr::reg::setIopc(true);
    gpio::c::crh::reg::setCnf13(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode13(gpio::MODE::OUTPUT_50MHZ);
    gpio::c::crh::reg::setCnf14(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode14(gpio::MODE::OUTPUT_50MHZ);
    

    
    

    

    while(true){
        for (int it_i=0; it_i<buf.valor[10]/13; it_i++){
            gpio::c::odr::reg::setOdr13(false);
            delay();
            gpio::c::odr::reg::setOdr13(true);
            delay();
        }
        if (buf.valor[0]==52) gpio::c::odr::reg::setOdr14(false);
        bigdelay();
        gpio::c::odr::reg::setOdr14(true);
    };
};
