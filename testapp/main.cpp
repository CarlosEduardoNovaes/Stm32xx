#include "../include/hal/rcc.h"

stm32::RCC_RC a;

int main(void) {
  while (true){
    stm32::write(stm32::RCC_RC::HSERDY | stm32::RCC_RC::HSEON);
    a = stm32::read<stm32::RCC_RC>();
  };
  return 1;
}
