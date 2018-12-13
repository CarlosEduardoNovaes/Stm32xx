#include "../include/hal/rcc.h"




//volatile uint64_t oo = 0;
volatile uint32_t teste;


using namespace stm32::internals;

int main(void) {

  while (true){
    Reg_RCC_RC::set(RCC_RC::HSERDY | RCC_RC::HSEON | Hsitrim::eval(2));
    Reg_RCC_RC::setBit(0);
    Reg_RCC_CFGR::set(RCC_CFGR::PLLSCR | Mco::eval(RCC_CFGR_MCO::SYSCLK));    
  };
  return 1;
}
