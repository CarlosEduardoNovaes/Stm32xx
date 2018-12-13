#include "../include/hal/rcc.h"

//stm32::RCC_RC a;

//stm32::Register<stm32::RCC_RC, 0x40021000> hard_b;
stm32::Value<stm32::RCC_RC, 5, 3> Hsitrim;
//volatile uint64_t oo = 0;
volatile uint32_t teste = 0;

template<uint32_t v>
void muda_teste(uint32_t q){
    teste = 0;
};



int main(void) {
  muda_teste<0>(0);
  while (true){
    stm32::RCC_RC b;
    b = stm32::RCC_RC::HSERDY | stm32::RCC_RC::HSEON | Hsitrim(1) ;
    //b = stm32::RCC_RC::HSERDY | stm32::RCC_RC::HSEON | stm32::RCC_RC::HSITRIM_0;
    stm32::write(b);
    //a = stm32::read<stm32::RCC_RC>();
    
  };
  return 1;
}
