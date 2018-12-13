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
  HSICAL_0      =  Bit08,
  HSICAL_1      =  Bit09,
  HSICAL_2      =  Bit10,
  HSICAL_3      =  Bit11,
  HSICAL_4      =  Bit12,
  HSICAL_5      =  Bit13,
  HSICAL_6      =  Bit14,
  HSICAL_7      =  Bit15,
  HSEON         =  Bit16,
  HSERDY        =  Bit17,
  HSEBYP        =  Bit18,
  CSSON         =  Bit19,
  PLLON         =  Bit24,
  PLLRDY        =  Bit25,
};
ENABLE_BITMASK_OPERATORS(RCC_RC)
ENABLE_REGISTER(RCC_RC, 0x40021000)

// template<typename Enum, uint32_t Address>
// class Flags{
// public:
//   Flags(){
//     value = 0;
//   };
//   Flags(Enum e){
//     value = static_cast<uint32_t>(e);
//   };
//   void set(Enum e){
//     value = static_cast<uint32_t>(e);
//   };
// public:
//   uint32_t value;
//   uint32_t address = Address;
// };






};

#endif  // __STM32_RCC_H__
