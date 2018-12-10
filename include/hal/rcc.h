#ifndef __STM32_RCC_H__
#define __STM32_RCC_H__

#include "register_utils.h"
#include "enum_bitmask_operators.h"

namespace stm32{

enum class RCC_RC : uint32_t{
  HSION         =  Bit00,
  HSIRDY        =  Bit01,
  HSITRIM_0     =  Bit03,
  HSITRIM_1     =  Bit04,
  HSITRIM_2     =  Bit05,
  HSITRIM_3     =  Bit06,
  HSITRIM_4     =  Bit07,
  HSITRIM_MASK  =  Bit03 | Bit03 | Bit04 | Bit05 | Bit06 | Bit07,
  HSICAL_0      =  Bit08,
  HSICAL_1      =  Bit09,
  HSICAL_2      =  Bit10,
  HSICAL_3      =  Bit11,
  HSICAL_4      =  Bit12,
  HSICAL_5      =  Bit13,
  HSICAL_6      =  Bit14,
  HSICAL_7      =  Bit15,
  HSICAL_MASK   =  Bit08 | Bit09 | Bit10 | Bit11 | Bit12 | Bit13 | Bit14 | Bit15 ,
  HSEON         =  Bit16,
  HSERDY        =  Bit17,
  HSEBYP        =  Bit18,
  CSSON         =  Bit19,
  PLLON         =  Bit24,
  PLLRDY        =  Bit25,
};
ENABLE_BITMASK_OPERATORS(RCC_RC)
ENABLE_REGISTER(RCC_RC, 0x40021000)




};

#endif  // __STM32_RCC_H__
