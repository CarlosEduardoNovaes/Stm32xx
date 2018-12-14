#ifndef __STM32_GPIO_H__
#define __STM32_GPIO_H__

#include "register_utils.h"
#include "enum_bitmask_operators.h"

namespace stm32{
namespace internals{
    
enum class GPIO_CR : uint32_t{
  MODE_0        =  Bit00,
  MODE_1        =  Bit01,
   CNF_0        =  Bit02, 
   CNF_1        =  Bit03,
};

enum class MODE : uint32_t{
  INPUT         =  0,
  OUTPUT_10MHZ  =  1,
  OUTPUT_2MHZ   =  2,
  OUTPUT_50MHZ  =  3,
};

enum class INPUT : uint32_t{
  ANALOG        =  0,
  FLOATING      =  1,
  PULL_UPDOWN   =  2,
  RESERVED      =  3,
};

enum class OUTPUT : uint32_t{
  GP_PUSHPULL   =  0,
  GP_OPENDRAIN  =  1,
  AF_PUSHPULL   =  2,
  AF_OPENDRAIN  =  3,
};

ENABLE_BITMASK_OPERATORS(GPIO_CR)
using Reg_GPIOA_CRL     = Register<GPIO_CR, 0x40010800>;
using Reg_GPIOA_CRH     = Register<GPIO_CR, 0x40010804>;
using Reg_GPIOB_CRL     = Register<GPIO_CR, 0x40010C00>;
using Reg_GPIOB_CRH     = Register<GPIO_CR, 0x40010C04>;
using Reg_GPIOC_CRL     = Register<GPIO_CR, 0x40011000>;
using Reg_GPIOC_CRH     = Register<GPIO_CR, 0x40011004>;
using Reg_GPIOD_CRL     = Register<GPIO_CR, 0x40011400>;
using Reg_GPIOD_CRH     = Register<GPIO_CR, 0x40011404>;
using Reg_GPIOE_CRL     = Register<GPIO_CR, 0x40011800>;
using Reg_GPIOE_CRH     = Register<GPIO_CR, 0x40011804>;
using Reg_GPIOF_CRL     = Register<GPIO_CR, 0x40011C00>;
using Reg_GPIOF_CRH     = Register<GPIO_CR, 0x40011C04>;
using Reg_GPIOG_CRL     = Register<GPIO_CR, 0x40012000>;
using Reg_GPIOG_CRH     = Register<GPIO_CR, 0x40012004>;
using Pin00_Mode        = Configuration<GPIO_CR, MODE, 2, 0> ;
using Pin00_Input       = Configuration<GPIO_CR, INPUT, 2, 2> ;
using Pin00_Output      = Configuration<GPIO_CR, OUTPUT, 2, 2> ;
using Pin08_Mode        = Configuration<GPIO_CR, MODE, 2, 0> ;
using Pin08_Input       = Configuration<GPIO_CR, INPUT, 2, 2> ;
using Pin08_Output      = Configuration<GPIO_CR, OUTPUT, 2, 2> ;
using Pin01_Mode        = Configuration<GPIO_CR, MODE, 2, 4> ;
using Pin01_Input       = Configuration<GPIO_CR, INPUT, 2, 6> ;
using Pin01_Output      = Configuration<GPIO_CR, OUTPUT, 2, 6> ;
using Pin09_Mode        = Configuration<GPIO_CR, MODE, 2, 4> ;
using Pin09_Input       = Configuration<GPIO_CR, INPUT, 2, 6> ;
using Pin09_Output      = Configuration<GPIO_CR, OUTPUT, 2, 6> ;
using Pin02_Mode        = Configuration<GPIO_CR, MODE, 2, 8> ;
using Pin02_Input       = Configuration<GPIO_CR, INPUT, 2, 10> ;
using Pin02_Output      = Configuration<GPIO_CR, OUTPUT, 2, 10> ;
using Pin10_Mode        = Configuration<GPIO_CR, MODE, 2, 8> ;
using Pin10_Input       = Configuration<GPIO_CR, INPUT, 2, 10> ;
using Pin10_Output      = Configuration<GPIO_CR, OUTPUT, 2, 10> ;
using Pin03_Mode        = Configuration<GPIO_CR, MODE, 2, 12> ;
using Pin03_Input       = Configuration<GPIO_CR, INPUT, 2, 14> ;
using Pin03_Output      = Configuration<GPIO_CR, OUTPUT, 2, 14> ;
using Pin11_Mode        = Configuration<GPIO_CR, MODE, 2, 12> ;
using Pin11_Input       = Configuration<GPIO_CR, INPUT, 2, 14> ;
using Pin11_Output      = Configuration<GPIO_CR, OUTPUT, 2, 14> ;
using Pin04_Mode        = Configuration<GPIO_CR, MODE, 2, 16> ;
using Pin04_Input       = Configuration<GPIO_CR, INPUT, 2, 18> ;
using Pin04_Output      = Configuration<GPIO_CR, OUTPUT, 2, 18> ;
using Pin12_Mode        = Configuration<GPIO_CR, MODE, 2, 16> ;
using Pin12_Input       = Configuration<GPIO_CR, INPUT, 2, 18> ;
using Pin12_Output      = Configuration<GPIO_CR, OUTPUT, 2, 18> ;
using Pin05_Mode        = Configuration<GPIO_CR, MODE, 2, 20> ;
using Pin05_Input       = Configuration<GPIO_CR, INPUT, 2, 22> ;
using Pin05_Output      = Configuration<GPIO_CR, OUTPUT, 2, 22> ;
using Pin13_Mode        = Configuration<GPIO_CR, MODE, 2, 20> ;
using Pin13_Input       = Configuration<GPIO_CR, INPUT, 2, 22> ;
using Pin13_Output      = Configuration<GPIO_CR, OUTPUT, 2, 22> ;
using Pin06_Mode        = Configuration<GPIO_CR, MODE, 2, 24> ;
using Pin06_Input       = Configuration<GPIO_CR, INPUT, 2, 26> ;
using Pin06_Output      = Configuration<GPIO_CR, OUTPUT, 2, 26> ;
using Pin14_Mode        = Configuration<GPIO_CR, MODE, 2, 24> ;
using Pin14_Input       = Configuration<GPIO_CR, INPUT, 2, 26> ;
using Pin14_Output      = Configuration<GPIO_CR, OUTPUT, 2, 26> ;
using Pin07_Mode        = Configuration<GPIO_CR, MODE, 2, 28> ;
using Pin07_Input       = Configuration<GPIO_CR, INPUT, 2, 30> ;
using Pin07_Output      = Configuration<GPIO_CR, OUTPUT, 2, 30> ;
using Pin15_Mode        = Configuration<GPIO_CR, MODE, 2, 28> ;
using Pin15_Input       = Configuration<GPIO_CR, INPUT, 2, 30> ;
using Pin15_Output      = Configuration<GPIO_CR, OUTPUT, 2, 30> ;


}; }; // end stm32::internals



#endif ///__STM32_GPIO_H__
