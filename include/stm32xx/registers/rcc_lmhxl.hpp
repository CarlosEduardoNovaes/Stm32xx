#ifndef __STM32__RCC_LMHXL_HPP__
#define __STM32__RCC_LMHXL_HPP__

#include <stm32xx/registers/registers.hpp>


/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm32{
namespace registers{

// RCC_CR Register
namespace rcc_cr{
    struct bitfield_t{
        uint32_t  Hsion             :   1;  // 00
        uint32_t  Hsirdy            :   1;  // 01
        uint32_t  _res_02           :   1;  // 02
        uint32_t  Hsitrim           :   5;  // 03
        uint32_t  Hsical            :   8;  // 08
        uint32_t  Hseon             :   1;  // 16
        uint32_t  Hserdy            :   1;  // 17
        uint32_t  Hsebyp            :   1;  // 18
        uint32_t  Csson             :   1;  // 19
        uint32_t  _res_20           :   4;  // 20
        uint32_t  Pllon             :   1;  // 24
        uint32_t  Pllrdy            :   1;  // 25
        uint32_t  _res_26           :   6;  // 26
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021000)
        STM32_ACCESSOR_BB(Hsion     , 0)
        STM32_ACCESSOR_BB(Hsirdy    , 1)
        STM32_ACCESSOR_BF(Hsitrim   , uint32_t)
        STM32_ACCESSOR_BF(Hsical    , uint32_t)
        STM32_ACCESSOR_BB(Hseon     , 16)
        STM32_ACCESSOR_BB(Hserdy    , 17)
        STM32_ACCESSOR_BB(Hsebyp    , 18)
        STM32_ACCESSOR_BB(Csson     , 19)
        STM32_ACCESSOR_BB(Pllon     , 24)
        STM32_ACCESSOR_BB(Pllrdy    , 25)
    STM32_REGISTER_END
};

// RCC_CFRG Register
namespace rcc_cfrg{
    struct bitfield_t{
        uint32_t  Sw                :   2;  // 00
        uint32_t  Sws               :   2;  // 02
        uint32_t  Hpre              :   3;  // 04
        uint32_t  Hpreon            :   1;  // 07
        uint32_t  Ppre1             :   2;  // 08
        uint32_t  Ppre1on           :   1;  // 10
        uint32_t  Ppre2             :   2;  // 11
        uint32_t  Ppre2on           :   1;  // 13
        uint32_t  Adcpre            :   2;  // 14
        uint32_t  Pllsrc            :   1;  // 16
        uint32_t  Pllxtpre          :   1;  // 17
        uint32_t  Pllmul            :   4;  // 18
        uint32_t  Usbpre            :   1;  // 22
        uint32_t  _res_23           :   1;  // 23
        uint32_t  Mco               :   2;  // 24
        uint32_t  Mcoon             :   1;  // 26
        uint32_t  _res_27           :   5;  // 27
    };
    
    enum class SW : uint32_t{
        HSI     =   0,
        HSE     =   1,
        PLL     =   2,
        NA      =   3
    };
    enum class HPRE : uint32_t{
        SYSCLK_DIV_BY_2     =   0,
        SYSCLK_DIV_BY_4     =   1,
        SYSCLK_DIV_BY_8     =   2,
        SYSCLK_DIV_BY_16    =   3,
        SYSCLK_DIV_BY_64    =   4,
        SYSCLK_DIV_BY_128   =   5,
        SYSCLK_DIV_BY_256   =   6,
        SYSCLK_DIV_BY_512   =   7,
    };
    enum class PPRE : uint32_t{
        HCLK_DIV_BY_2       =   0,
        HCLK_DIV_BY_4       =   1,
        HCLK_DIV_BY_8       =   2,
        HCLK_DIV_BY_16      =   3,
    };
    enum class ADCPRE : uint32_t{
        PCLK_DIV_BY_2       =   0,
        PCLK_DIV_BY_4       =   1,
        PCLK_DIV_BY_6       =   2,
        PCLK_DIV_BY_8       =   3,
    };
    enum class PLLMUL : uint32_t{
        TIMES_2             =   0,
        TIMES_3             =   1,
        TIMES_4             =   2,
        TIMES_5             =   3,
        TIMES_6             =   4,
        TIMES_7             =   5,
        TIMES_8             =   6,
        TIMES_9             =   7,
        TIMES_10            =   8,
        TIMES_11            =   9,
        TIMES_12            =   10,
        TIMES_13            =   11,
        TIMES_14            =   12,
        TIMES_15            =   13,
        TIMES_16            =   14,
        TIMES_16_           =   15,
    };
    enum class MCO : uint32_t{
        SYSCLK              =   0,
        HSICLK              =   1,
        HSECLK              =   2,
        PLLCLK_DIV_BY_2     =   3,
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021004)
        STM32_ACCESSOR_BF   (Sw         , SW    )
        STM32_GETTER_BF     (Sws        , SW    )
        STM32_ACCESSOR_BF   (Hpre       , HPRE  )
        STM32_ACCESSOR_BB   (Hpreon     , 07    )
        STM32_ACCESSOR_BF   (Ppre1      , PPRE  )
        STM32_ACCESSOR_BB   (Ppre1on    , 10    )
        STM32_ACCESSOR_BF   (Ppre2      , PPRE  )
        STM32_ACCESSOR_BB   (Ppre2on    , 13    )
        STM32_ACCESSOR_BF   (Adcpre     , ADCPRE)
        STM32_ACCESSOR_BB   (Pllscr     , 16    )
        STM32_ACCESSOR_BB   (Pllxtpre   , 17    )
        STM32_ACCESSOR_BF   (Pllmul     , PLLMUL)
        STM32_ACCESSOR_BB   (Usbpre     , 22    )
        STM32_ACCESSOR_BF   (Mco        , MCO   )
        STM32_ACCESSOR_BB   (Mcoon      , 26    )
    STM32_REGISTER_END
};

// RCC_CIR Register
namespace rcc_cir{
    struct bitfield_t{
        uint32_t  Lsirdyf           :   1;  // 00
        uint32_t  Lserdyf           :   1;  // 01
        uint32_t  Hsirdyf           :   1;  // 02
        uint32_t  Hserdyf           :   1;  // 03
        uint32_t  Pllrdyf           :   1;  // 04
        uint32_t  _res_05           :   2;  // 05
        uint32_t  Cssf              :   1;  // 07
        uint32_t  LsiRdye           :   1;  // 08
        uint32_t  Lserdye           :   1;  // 09
        uint32_t  Hsirdye           :   1;  // 10
        uint32_t  Hserdye           :   1;  // 11
        uint32_t  Pllrdye           :   1;  // 12
        uint32_t  _res_13           :   3;  // 13
        uint32_t  Lsirdyc           :   1;  // 16
        uint32_t  Lserdyc           :   1;  // 17
        uint32_t  Hsirdyc           :   1;  // 18
        uint32_t  Hserdyc           :   1;  // 19
        uint32_t  Pllrdyc           :   1;  // 20
        uint32_t  _res_21           :   2;  // 21
        uint32_t  Cssc              :   1;  // 23
        uint32_t  _res_24           :   8;  // 24
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021000)
        STM32_ACCESSOR_BB(Lsirdyf   , 0)
        STM32_ACCESSOR_BB(Lserdyf   , 1)
        STM32_ACCESSOR_BB(Hsirdyf   , 2)
        STM32_ACCESSOR_BB(Hserdyf   , 3)
        STM32_ACCESSOR_BB(Pllrdyf   , 4)
        STM32_ACCESSOR_BB(Cssf      , 7)
        STM32_ACCESSOR_BB(Lsirdye   , 9)
        STM32_ACCESSOR_BB(Lserdye   , 10)
        STM32_ACCESSOR_BB(Hsirdye   , 11)
        STM32_ACCESSOR_BB(Hserdye   , 12)
        STM32_ACCESSOR_BB(Pllrdye   , 13)
        STM32_ACCESSOR_BB(Lsirdyc   , 16)
        STM32_ACCESSOR_BB(Lserdyc   , 17)
        STM32_ACCESSOR_BB(Hsirdyc   , 18)
        STM32_ACCESSOR_BB(Hserdyc   , 19)
        STM32_ACCESSOR_BB(Pllrdyc   , 20)
        STM32_ACCESSOR_BB(Cssc      , 23)
    STM32_REGISTER_END
};


}; }; // End stm32::registers namespace

#endif // __STM32__RCC_LMHXL_HPP__
