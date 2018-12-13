#ifndef __STM32_RCC_H__
#define __STM32_RCC_H__

#include "register_utils.h"
#include "enum_bitmask_operators.h"

namespace stm32{
namespace internals{


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

using Reg_RCC_RC    = Register<RCC_RC, 0x40021000>;
using Hsitrim       = Value<RCC_RC, 5, 3> ;
using Hsical        = Value<RCC_RC, 8, 8> ;


enum class RCC_CFGR : uint32_t{
  SW_0          =  Bit00,
  SW_1          =  Bit01,
  SWS_0         =  Bit02,
  SWS_1         =  Bit03,
  HPRE_0        =  Bit04,
  HPRE_1        =  Bit05,
  HPRE_2        =  Bit06,
  HPRE_3        =  Bit07,
  PPRE1_0       =  Bit08,
  PPRE1_1       =  Bit09,
  PPRE1_2       =  Bit10,
  PPRE2_0       =  Bit11,
  PPRE2_1       =  Bit12,
  PPRE2_2       =  Bit13,
  ADCPRE_0      =  Bit14,
  ADCPRE_1      =  Bit15,
  PLLSCR        =  Bit16,
  PLLXTPRE      =  Bit17,
  PLLMUL_0      =  Bit18,
  PLLMUL_1      =  Bit19,
  PLLMUL_2      =  Bit20,
  PLLMUL_3      =  Bit21,
  USBPRE        =  Bit22,
  MCO_0         =  Bit24,
  MCO_1         =  Bit25,
  MCO_2         =  Bit26,
};

enum class RCC_CFGR_MCO : uint32_t{
    NOCLK               =  0,
    NOCLK_1             =  Bit00,
    NOCLK_2             =  Bit01,
    NOCLK_3             =  Bit01 | Bit00,
    SYSCLK              =  Bit02,
    HSICLK              =  Bit02 | Bit00,
    HSECLK              =  Bit02 | Bit01,
    PLLCLK_DIV_BY_2     =  Bit02 | Bit01 | Bit00,
};

enum class RCC_CFGR_PLLMUL : uint32_t{
    X2                  =  0,
    X3                  =  1,
    X4                  =  2,
    X5                  =  3,
    X6                  =  4,
    X7                  =  5,
    X8                  =  6,
    X9                  =  7,
    X10                 =  8,
    X11                 =  9,
    X12                 =  10,
    X13                 =  11,
    X14                 =  12,
    X15                 =  13,
    X16                 =  14,
    X16a                =  15,    
};

ENABLE_BITMASK_OPERATORS(RCC_CFGR)
using Reg_RCC_CFGR      = Register<RCC_CFGR, 0x40021004>;
using Mco               = Configuration<RCC_CFGR, RCC_CFGR_MCO, 3, 24> ;
using Pllmul            = Configuration<RCC_CFGR, RCC_CFGR_PLLMUL, 4, 18> ;
//using Hsical            = Value<RCC_RC, 8, 8> ;





};
};


#endif  // __STM32_RCC_H__
