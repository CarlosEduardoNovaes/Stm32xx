#ifndef __STM32__REGISTER_RCC_LMHXL_HPP__
#define __STM32__REGISTER_RCC_LMHXL_HPP__

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
        STM32_GETTER_BB  (Hsirdy    , 1)
        STM32_ACCESSOR_BF(Hsitrim   , uint32_t)
        STM32_GETTER_BF  (Hsical    , uint32_t)
        STM32_ACCESSOR_BB(Hseon     , 16)
        STM32_GETTER_BB  (Hserdy    , 17)
        STM32_ACCESSOR_BB(Hsebyp    , 18)
        STM32_ACCESSOR_BB(Csson     , 19)
        STM32_ACCESSOR_BB(Pllon     , 24)
        STM32_GETTER_BB  (Pllrdy    , 25)
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
    
    STM32_REGISTER_START(bitfield_t, 0x40021008)
        STM32_GETTER_BB  (Lsirdyf   , 0)
        STM32_GETTER_BB  (Lserdyf   , 1)
        STM32_GETTER_BB  (Hsirdyf   , 2)
        STM32_GETTER_BB  (Hserdyf   , 3)
        STM32_GETTER_BB  (Pllrdyf   , 4)
        STM32_GETTER_BB  (Cssf      , 7)
        STM32_ACCESSOR_BB(Lsirdye   , 9)
        STM32_ACCESSOR_BB(Lserdye   , 10)
        STM32_ACCESSOR_BB(Hsirdye   , 11)
        STM32_ACCESSOR_BB(Hserdye   , 12)
        STM32_ACCESSOR_BB(Pllrdye   , 13)
        STM32_SETTER_BB  (Lsirdyc   , 16)
        STM32_SETTER_BB  (Lserdyc   , 17)
        STM32_SETTER_BB  (Hsirdyc   , 18)
        STM32_SETTER_BB  (Hserdyc   , 19)
        STM32_SETTER_BB  (Pllrdyc   , 20)
        STM32_SETTER_BB  (Cssc      , 23)
    STM32_REGISTER_END
};

// RCC_APB2RSTR Register
namespace rcc_apb2rstr{
    struct bitfield_t{
        uint32_t  Afio              :   1;  // 00
        uint32_t  _res_01           :   1;  // 01
        uint32_t  Iopa              :   1;  // 02
        uint32_t  Iopb              :   1;  // 03
        uint32_t  Iopc              :   1;  // 04
        uint32_t  Iopd              :   1;  // 05
        uint32_t  Iope              :   1;  // 06
        uint32_t  Iopf              :   1;  // 07
        uint32_t  Iopg              :   1;  // 08
        uint32_t  Adc1              :   1;  // 09
        uint32_t  Adc2              :   1;  // 10
        uint32_t  Tim1              :   1;  // 11
        uint32_t  Spi1              :   1;  // 12
        uint32_t  Tim8              :   1;  // 13
        uint32_t  Usart1            :   1;  // 14
        uint32_t  Adc3              :   1;  // 15
        uint32_t  _res_16           :   3;  // 16
        uint32_t  Tim9              :   1;  // 19
        uint32_t  Tim10             :   1;  // 20
        uint32_t  Tim11             :   1;  // 21
        uint32_t  _res_24           :   10; // 22
    };
    
    STM32_REGISTER_START(bitfield_t, 0x4002100C)
        STM32_ACCESSOR_BB(Afio      , 0)
        STM32_ACCESSOR_BB(Iopa      , 2)
        STM32_ACCESSOR_BB(Iopb      , 3)
        STM32_ACCESSOR_BB(Iopc      , 4)
        STM32_ACCESSOR_BB(Iopd      , 5)
        STM32_ACCESSOR_BB(Iope      , 6)
        STM32_ACCESSOR_BB(Iopf      , 7)
        STM32_ACCESSOR_BB(Iopg      , 8)
        STM32_ACCESSOR_BB(Adc1      , 9)
        STM32_ACCESSOR_BB(Adc2      , 10)
        STM32_ACCESSOR_BB(Tim1      , 11)
        STM32_ACCESSOR_BB(Spi1      , 12)
        STM32_ACCESSOR_BB(Tim8      , 13)
        STM32_ACCESSOR_BB(Usart1    , 14)
        STM32_ACCESSOR_BB(Adc3      , 15)
        STM32_ACCESSOR_BB(Tim9      , 19)
        STM32_ACCESSOR_BB(Tim10     , 20)
        STM32_ACCESSOR_BB(Tim11     , 21)
    STM32_REGISTER_END
};


// RCC_APB1RSTR Register
namespace rcc_apb1rstr{
    struct bitfield_t{
        uint32_t  Tim2              :   1;  // 00
        uint32_t  Tim3              :   1;  // 01
        uint32_t  Tim4              :   1;  // 02
        uint32_t  Tim5              :   1;  // 03
        uint32_t  Tim6              :   1;  // 04
        uint32_t  Tim7              :   1;  // 05
        uint32_t  Tim12             :   1;  // 06
        uint32_t  Tim13             :   1;  // 07
        uint32_t  Tim14             :   1;  // 08
        uint32_t  _res_09           :   2;  // 09
        uint32_t  Wwdg              :   1;  // 11
        uint32_t  _res_12           :   2;  // 12
        uint32_t  Spi2              :   1;  // 14
        uint32_t  Spi3              :   1;  // 15
        uint32_t  _res_16           :   1;  // 16
        uint32_t  Usart2            :   1;  // 17
        uint32_t  Usart3            :   1;  // 18
        uint32_t  Uart4             :   1;  // 19
        uint32_t  Uart5             :   1;  // 20
        uint32_t  I2c1              :   1;  // 21
        uint32_t  I2c2              :   1;  // 22
        uint32_t  Usb               :   1;  // 23
        uint32_t  _res_24           :   1;  // 24
        uint32_t  Can               :   1;  // 25
        uint32_t  _res_26           :   1;  // 26
        uint32_t  Bkp               :   1;  // 27
        uint32_t  Pwr               :   1;  // 28
        uint32_t  Dac               :   1;  // 29
        uint32_t  _res_30           :   2;  // 30
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021010)
        STM32_ACCESSOR_BB(Tim2      , 0)
        STM32_ACCESSOR_BB(Tim3      , 1)
        STM32_ACCESSOR_BB(Tim4      , 2)
        STM32_ACCESSOR_BB(Tim5      , 3)
        STM32_ACCESSOR_BB(Tim6      , 4)
        STM32_ACCESSOR_BB(Tim7      , 5)
        STM32_ACCESSOR_BB(Tim12     , 6)
        STM32_ACCESSOR_BB(Tim13     , 7)
        STM32_ACCESSOR_BB(Tim14     , 8)
        STM32_ACCESSOR_BB(Wwdg      , 11)
        STM32_ACCESSOR_BB(Spi2      , 14)
        STM32_ACCESSOR_BB(Spi3      , 15)
        STM32_ACCESSOR_BB(Usart2    , 17)
        STM32_ACCESSOR_BB(Usart3    , 18)
        STM32_ACCESSOR_BB(Uart4     , 19)
        STM32_ACCESSOR_BB(Uart5     , 20)
        STM32_ACCESSOR_BB(I2c1      , 21)
        STM32_ACCESSOR_BB(I2c2      , 22)
        STM32_ACCESSOR_BB(Usb       , 23)
        STM32_ACCESSOR_BB(Can       , 25)
        STM32_ACCESSOR_BB(Bkp       , 27)
        STM32_ACCESSOR_BB(Pwr       , 28)
        STM32_ACCESSOR_BB(Dac       , 29)
    STM32_REGISTER_END
};


// RCC_AHBENR Register
namespace rcc_ahbenr{
    struct bitfield_t{
        uint32_t  Dma1              :   1;  // 00
        uint32_t  Dma2              :   1;  // 01
        uint32_t  Sram              :   1;  // 02
        uint32_t  _res_03           :   1;  // 03
        uint32_t  Flitf             :   1;  // 04
        uint32_t  _res05            :   1;  // 05
        uint32_t  Crc               :   1;  // 06
        uint32_t  _res_07           :   1;  // 07
        uint32_t  Fsmc              :   1;  // 08
        uint32_t  _res_09           :   1;  // 09
        uint32_t  Sdio              :   1;  // 10
        uint32_t  _res_12           :   21; // 11
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021014)
        STM32_ACCESSOR_BB(Dma1      , 0)
        STM32_ACCESSOR_BB(Dma2      , 1)
        STM32_ACCESSOR_BB(Sram      , 2)
        STM32_ACCESSOR_BB(Flitf     , 4)
        STM32_ACCESSOR_BB(Crc       , 6)
        STM32_ACCESSOR_BB(Fsmc      , 8)
        STM32_ACCESSOR_BB(Sdio      , 10)
    STM32_REGISTER_END
};

// RCC_APB2ENR Register
namespace rcc_apb2enr{
    struct bitfield_t{
        uint32_t  Afio              :   1;  // 00
        uint32_t  _res_01           :   1;  // 01
        uint32_t  Iopa              :   1;  // 02
        uint32_t  Iopb              :   1;  // 03
        uint32_t  Iopc              :   1;  // 04
        uint32_t  Iopd              :   1;  // 05
        uint32_t  Iope              :   1;  // 06
        uint32_t  Iopf              :   1;  // 07
        uint32_t  Iopg              :   1;  // 08
        uint32_t  Adc1              :   1;  // 09
        uint32_t  Adc2              :   1;  // 10
        uint32_t  Tim1              :   1;  // 11
        uint32_t  Spi1              :   1;  // 12
        uint32_t  Tim8              :   1;  // 13
        uint32_t  Usart1            :   1;  // 14
        uint32_t  Adc3              :   1;  // 15
        uint32_t  _res_16           :   3;  // 16
        uint32_t  Tim9              :   1;  // 19
        uint32_t  Tim10             :   1;  // 20
        uint32_t  Tim11             :   1;  // 21
        uint32_t  _res_24           :   10; // 22
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021018)
        STM32_ACCESSOR_BB(Afio      , 0)
        STM32_ACCESSOR_BB(Iopa      , 2)
        STM32_ACCESSOR_BB(Iopb      , 3)
        STM32_ACCESSOR_BB(Iopc      , 4)
        STM32_ACCESSOR_BB(Iopd      , 5)
        STM32_ACCESSOR_BB(Iope      , 6)
        STM32_ACCESSOR_BB(Iopf      , 7)
        STM32_ACCESSOR_BB(Iopg      , 8)
        STM32_ACCESSOR_BB(Adc1      , 9)
        STM32_ACCESSOR_BB(Adc2      , 10)
        STM32_ACCESSOR_BB(Tim1      , 11)
        STM32_ACCESSOR_BB(Spi1      , 12)
        STM32_ACCESSOR_BB(Tim8      , 13)
        STM32_ACCESSOR_BB(Usart1    , 14)
        STM32_ACCESSOR_BB(Adc3      , 15)
        STM32_ACCESSOR_BB(Tim9      , 19)
        STM32_ACCESSOR_BB(Tim10     , 20)
        STM32_ACCESSOR_BB(Tim11     , 21)
    STM32_REGISTER_END
};


// RCC_APB1ENR Register
namespace rcc_apb1enr{
    struct bitfield_t{
        uint32_t  Tim2              :   1;  // 00
        uint32_t  Tim3              :   1;  // 01
        uint32_t  Tim4              :   1;  // 02
        uint32_t  Tim5              :   1;  // 03
        uint32_t  Tim6              :   1;  // 04
        uint32_t  Tim7              :   1;  // 05
        uint32_t  Tim12             :   1;  // 06
        uint32_t  Tim13             :   1;  // 07
        uint32_t  Tim14             :   1;  // 08
        uint32_t  _res_09           :   2;  // 09
        uint32_t  Wwdg              :   1;  // 11
        uint32_t  _res_12           :   2;  // 12
        uint32_t  Spi2              :   1;  // 14
        uint32_t  Spi3              :   1;  // 15
        uint32_t  _res_16           :   1;  // 16
        uint32_t  Usart2            :   1;  // 17
        uint32_t  Usart3            :   1;  // 18
        uint32_t  Uart4             :   1;  // 19
        uint32_t  Uart5             :   1;  // 20
        uint32_t  I2c1              :   1;  // 21
        uint32_t  I2c2              :   1;  // 22
        uint32_t  Usb               :   1;  // 23
        uint32_t  _res_24           :   1;  // 24
        uint32_t  Can               :   1;  // 25
        uint32_t  _res_26           :   1;  // 26
        uint32_t  Bkp               :   1;  // 27
        uint32_t  Pwr               :   1;  // 28
        uint32_t  Dac               :   1;  // 29
        uint32_t  _res_30           :   2;  // 30
    };
    
    STM32_REGISTER_START(bitfield_t, 0x4002101C)
        STM32_ACCESSOR_BB(Tim2      , 0)
        STM32_ACCESSOR_BB(Tim3      , 1)
        STM32_ACCESSOR_BB(Tim4      , 2)
        STM32_ACCESSOR_BB(Tim5      , 3)
        STM32_ACCESSOR_BB(Tim6      , 4)
        STM32_ACCESSOR_BB(Tim7      , 5)
        STM32_ACCESSOR_BB(Tim12     , 6)
        STM32_ACCESSOR_BB(Tim13     , 7)
        STM32_ACCESSOR_BB(Tim14     , 8)
        STM32_ACCESSOR_BB(Wwdg      , 11)
        STM32_ACCESSOR_BB(Spi2      , 14)
        STM32_ACCESSOR_BB(Spi3      , 15)
        STM32_ACCESSOR_BB(Usart2    , 17)
        STM32_ACCESSOR_BB(Usart3    , 18)
        STM32_ACCESSOR_BB(Uart4     , 19)
        STM32_ACCESSOR_BB(Uart5     , 20)
        STM32_ACCESSOR_BB(I2c1      , 21)
        STM32_ACCESSOR_BB(I2c2      , 22)
        STM32_ACCESSOR_BB(Usb       , 23)
        STM32_ACCESSOR_BB(Can       , 25)
        STM32_ACCESSOR_BB(Bkp       , 27)
        STM32_ACCESSOR_BB(Pwr       , 28)
        STM32_ACCESSOR_BB(Dac       , 29)
    STM32_REGISTER_END
};

// RCC_BDCR Register
namespace rcc_bdcr{
    struct bitfield_t{
        uint32_t  Lson              :   1;  // 00
        uint32_t  Lserdy            :   1;  // 01
        uint32_t  Lsebyp            :   1;  // 02
        uint32_t  _res_03           :   5;  // 03
        uint32_t  Rtcsel            :   2;  // 08
        uint32_t  _res_10           :   5;  // 10
        uint32_t  Rtcen             :   1;  // 15
        uint32_t  Bdrst             :   1;  // 16
        uint32_t  _res_17           :  15;  // 17
    };
    
    enum class RTCSEL : uint32_t{
        NOCLK                       =   0,
        LSECLK                      =   1,
        LSICLK                      =   2,
        HSE_DIV_BY_128              =   3,
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021020)
        STM32_ACCESSOR_BB(Lson      , 0)
        STM32_GETTER_BB  (Lserdy    , 1)
        STM32_ACCESSOR_BB(Lsebyp    , 2)
        STM32_ACCESSOR_BF(Rtcsel    , RTCSEL)
        STM32_ACCESSOR_BB(Rtcen     , 15)
        STM32_ACCESSOR_BB(Bdrst     , 16)
    STM32_REGISTER_END
};

// RCC_CSR Register
namespace rcc_csr{
    struct bitfield_t{
        uint32_t  Lsion             :   1;  // 00
        uint32_t  Lsirdy            :   1;  // 01
        uint32_t  _res_02           :  22;  // 02
        uint32_t  Rmvf              :   1;  // 24
        uint32_t  _res_25           :   1;  // 25
        uint32_t  Pinrstf           :   1;  // 26
        uint32_t  Porrstf           :   1;  // 27
        uint32_t  Sftrstf           :   1;  // 28
        uint32_t  Iwdgrstf          :   1;  // 29
        uint32_t  Wwdgrstf          :   1;  // 30
        uint32_t  Lpwrrstf          :   1;  // 31
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40021024)
        STM32_ACCESSOR_BB(Lsion     , 0)
        STM32_GETTER_BB  (Lsirdy    , 1)
        STM32_ACCESSOR_BB(Rmvf      , 24)
        STM32_ACCESSOR_BB(Pinrstf   , 26)
        STM32_ACCESSOR_BB(Porrstf   , 27)
        STM32_ACCESSOR_BB(Sftrstf   , 28)
        STM32_ACCESSOR_BB(Iwdgrstf  , 29)
        STM32_ACCESSOR_BB(Wwdgrstf  , 30)
        STM32_ACCESSOR_BB(Lpwrrstf  , 31)
    STM32_REGISTER_END
};

}; }; // End stm32::registers namespace

#endif // __STM32__REGISTER_RCC_LMHXL_HPP__
