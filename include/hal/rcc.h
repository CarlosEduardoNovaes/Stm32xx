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

enum class MCO : uint32_t{
    NOCLK               =  0,
    NOCLK_1             =  Bit00,
    NOCLK_2             =  Bit01,
    NOCLK_3             =  Bit01 | Bit00,
    SYSCLK              =  Bit02,
    HSICLK              =  Bit02 | Bit00,
    HSECLK              =  Bit02 | Bit01,
    PLLCLK_DIV_BY_2     =  Bit02 | Bit01 | Bit00,
};

enum class PLLMUL : uint32_t{
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

enum class ADCPRE : uint32_t{
    PCLK2_DIV_BY_2      =  0,
    PCLK2_DIV_BY_4      =  1,
    PCLK2_DIV_BY_6      =  2,
    PCLK2_DIV_BY_8      =  3,
};

enum class PPRE : uint32_t{
    HCLK_NO_DIV         =  0,
    HCLK_NO_DIV_1       =  1,
    HCLK_NO_DIV_2       =  2,
    HCLK_NO_DIV_3       =  3,
    HCLK_DIV_BY_2       =  4,
    HCLK_DIV_BY_4       =  5,
    HCLK_DIV_BY_8       =  6,
    HCLK_DIV_BY_16      =  7,
};

enum class HPRE : uint32_t{
    SYSCLK_NO_DIV       =  0,
    SYSCLK_DIV_BY_2     =  8,
    SYSCLK_DIV_BY_4     =  9,
    SYSCLK_DIV_BY_8     =  10,
    SYSCLK_DIV_BY_16    =  11,
    SYSCLK_DIV_BY_64    =  12,
    SYSCLK_DIV_BY_128   =  13,
    SYSCLK_DIV_BY_256   =  14,
    SYSCLK_DIV_BY_512   =  15,
};

enum class SW : uint32_t{
    HSI                 =  0,
    HSE                 =  1,
    PLL                 =  2,
    NA                  =  3,
};

ENABLE_BITMASK_OPERATORS(RCC_CFGR)
using Reg_RCC_CFGR      = Register<RCC_CFGR, 0x40021004>;
using Mco               = Configuration<RCC_CFGR, MCO, 3, 24> ;
using Pllmul            = Configuration<RCC_CFGR, PLLMUL, 4, 18> ;
using Adcpre            = Configuration<RCC_CFGR, ADCPRE, 2, 14> ;
using Ppre2             = Configuration<RCC_CFGR, PPRE, 3, 11> ;
using Ppre1             = Configuration<RCC_CFGR, PPRE, 3, 8> ;
using Hpre              = Configuration<RCC_CFGR, HPRE, 4, 4> ;
using Sws               = Configuration<RCC_CFGR, SW, 2, 2> ;
using Sw                = Configuration<RCC_CFGR, SW, 2, 0> ;
//using Hsical            = Value<RCC_RC, 8, 8> ;


enum class RCC_CIR : uint32_t{
  LSIRDYF       =  Bit00,
  LSERDYF       =  Bit01,
  HSIRDYF       =  Bit02,
  HSERDYF       =  Bit03,
  PLLRDYF       =  Bit04,
  CSSF          =  Bit07,
  LSIRDYE       =  Bit08,
  LSERDYE       =  Bit09,
  HSIRDYE       =  Bit10,
  HSERDYE       =  Bit11,
  PLLRDYE       =  Bit12,
  LSIRDYC       =  Bit16,
  LSERDYC       =  Bit17,
  HSIRDYC       =  Bit18,
  HSERDYC       =  Bit19,
  PLLRDYC       =  Bit20,
  CSSC          =  Bit23,
};

ENABLE_BITMASK_OPERATORS(RCC_CIR)
using Reg_RCC_CIR      = Register<RCC_CIR, 0x40021008>;


enum class RCC_APB2RSTR : uint32_t{
  AFIO       =  Bit00,
  IOPA       =  Bit02,
  IOPB       =  Bit03,
  IOPC       =  Bit04,
  IOPD       =  Bit05,
  IOPE       =  Bit06,
  IOPF       =  Bit07,
  IOPG       =  Bit08,
  ADC1       =  Bit09,
  ADC2       =  Bit10,
  TIM1       =  Bit11,
  SPI1       =  Bit12,
  TIM8       =  Bit13,
  USART1     =  Bit14,
  ADC3       =  Bit15,
  TIM9       =  Bit19,
  TIM10      =  Bit20,
  TIM11      =  Bit21,
};

ENABLE_BITMASK_OPERATORS(RCC_APB2RSTR)
using Reg_RCC_APB2RSTR      = Register<RCC_APB2RSTR, 0x4002100c>;

enum class RCC_APB1RSTR : uint32_t{
  TIM1          =  Bit00,
  TIM3          =  Bit01,
  TIM4          =  Bit02,
  TIM5          =  Bit03,
  TIM6          =  Bit04,
  TIM7          =  Bit05,
  TIM12         =  Bit06,
  TIM13         =  Bit07,
  TIM14         =  Bit08,
  WWDG          =  Bit11,
  SPI2          =  Bit14,
  SPI3          =  Bit15,
  USART2        =  Bit17,
  USART3        =  Bit18,
  UART4         =  Bit19,
  UART5         =  Bit20,
  I2C1          =  Bit21,
  I2C2          =  Bit22,
  USB           =  Bit23,
  CAN           =  Bit25,
  BKP           =  Bit27,
  PWR           =  Bit28,
  DAC           =  Bit29,
};

ENABLE_BITMASK_OPERATORS(RCC_APB1RSTR)
using Reg_RCC_APB1RSTR      = Register<RCC_APB1RSTR, 0x40021010>;


enum class RCC_AHBENR : uint32_t{
  DAM1          =  Bit00,
  DAM2          =  Bit01,
  SRAM          =  Bit02,
  FLITF         =  Bit04,
  CRC           =  Bit06,
  FSMC          =  Bit08,
  SDIO          =  Bit10,
};

ENABLE_BITMASK_OPERATORS(RCC_AHBENR)
using Reg_RCC_AHBENR      = Register<RCC_AHBENR, 0x40021014>;


enum class RCC_APB2ENR : uint32_t{
  AFIO       =  Bit00,
  IOPA       =  Bit02,
  IOPB       =  Bit03,
  IOPC       =  Bit04,
  IOPD       =  Bit05,
  IOPE       =  Bit06,
  IOPF       =  Bit07,
  IOPG       =  Bit08,
  ADC1       =  Bit09,
  ADC2       =  Bit10,
  TIM1       =  Bit11,
  SPI1       =  Bit12,
  TIM8       =  Bit13,
  USART1     =  Bit14,
  ADC3       =  Bit15,
  TIM9       =  Bit19,
  TIM10      =  Bit20,
  TIM11      =  Bit21,
};

ENABLE_BITMASK_OPERATORS(RCC_APB2ENR)
using Reg_RCC_APB2ENR      = Register<RCC_APB2ENR, 0x40021018>;

enum class RCC_APB1ENR : uint32_t{
  TIM1          =  Bit00,
  TIM3          =  Bit01,
  TIM4          =  Bit02,
  TIM5          =  Bit03,
  TIM6          =  Bit04,
  TIM7          =  Bit05,
  TIM12         =  Bit06,
  TIM13         =  Bit07,
  TIM14         =  Bit08,
  WWDG          =  Bit11,
  SPI2          =  Bit14,
  SPI3          =  Bit15,
  USART2        =  Bit17,
  USART3        =  Bit18,
  UART4         =  Bit19,
  UART5         =  Bit20,
  I2C1          =  Bit21,
  I2C2          =  Bit22,
  USB           =  Bit23,
  CAN           =  Bit25,
  BKP           =  Bit27,
  PWR           =  Bit28,
  DAC           =  Bit29,
};

ENABLE_BITMASK_OPERATORS(RCC_APB1ENR)
using Reg_RCC_APB1ENR      = Register<RCC_APB1ENR, 0x4002101c>;

enum class RCC_BDCR : uint32_t{
  LSEON         =  Bit00,
  LSERDY        =  Bit01,
  LSEBYP        =  Bit02,
  RTCSEL_0      =  Bit08,
  RTCSEL_1      =  Bit09,
  RTCEN         =  Bit15,
  BDRST         =  Bit16,
};

enum class RTCSEL : uint32_t{
    NOCLK               =  0,
    LSECLK              =  1,
    HSECLK              =  3,
};

ENABLE_BITMASK_OPERATORS(RCC_BDCR)
using Reg_RCC_BDCR      = Register<RCC_BDCR, 0x40021020>;
using Rtcsel            = Configuration<RCC_BDCR, RTCSEL, 2, 8> ;

enum class RCC_CSR : uint32_t{
  LSION         =  Bit00,
  LSIRDY        =  Bit01,
  RMVF          =  Bit24,
  PINRSTF       =  Bit26,
  PORRSTF       =  Bit27,
  SFTRSTF       =  Bit28,
  IWDGRSTF      =  Bit29,
  WWDGRSTF      =  Bit30,
  LPWRRSTF      =  Bit31,
};

ENABLE_BITMASK_OPERATORS(RCC_CSR)
using Reg_RCC_CSR      = Register<RCC_CSR, 0x40021024>;

};
};


#endif  // __STM32_RCC_H__
