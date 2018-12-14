
#include "../include/hal/rcc.h"
#include "../include/hal/gpio.h"

class Myreg{
public:
    struct bitfield_t{
        uint32_t  d0 : 8;
        uint32_t  d1 : 8;
        uint32_t  d2 : 8;
        uint32_t  d3 : 8;
    };
    uint32_t value;
public:
    constexpr Myreg() : value(0){ };
    bitfield_t& bitfield(){
       return reinterpret_cast<bitfield_t&>((this->value));
    };
};





//volatile uint64_t oo = 0;
//volatile uint32_t teste;
Myreg a;
//Myreg b;


using namespace stm32::internals;

int main(void) {
    //a.value = (a.value & (0xFFFFFF00)) | 2;
    a.bitfield().d0=5;
    
    return a.value;
};
