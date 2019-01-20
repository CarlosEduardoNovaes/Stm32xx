#ifndef __STM__REGISTER_FLASH_HPP__
#define __STM__REGISTER_FLASH_HPP__

#include <stm/registers/registers.hpp>


/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm{
namespace registers{

// RCC_CR Register
namespace afio_evcr{
    struct bitfield_t{
        std::uint32_t  Pin              :   4;  // 00
        std::uint32_t  Port             :   3;  // 04
        std::uint32_t  Evoe             :   1;  // 07
        std::uint32_t  _res_08          :  24;  // 08
    };
    
    enum class EVTPORT : std::uint32_t{
        A                       =   0,
        B                       =   1,
        C                       =   2,
        D                       =   3,
        E                       =   4,
    };
    
    STM_REGISTER_START(bitfield_t, 0x40010000)
        STM_ACCESSOR_BF(Pin   , std::uint8_t)
        STM_ACCESSOR_BF(Port  , EVTPORT)
        STM_ACCESSOR_BB(Evoe    , 7)
    STM_REGISTER_END
};

namespace afio_mapr{
    struct bitfield_t{
        std::uint32_t  Spi1             :   1;  // 00
        std::uint32_t  I2c1             :   1;  // 01
        std::uint32_t  Usart1           :   1;  // 02
        std::uint32_t  Usart2           :   1;  // 03
        std::uint32_t  Usart3           :   2;  // 04
        std::uint32_t  Tim1             :   2;  // 06
        std::uint32_t  Tim2             :   2;  // 08
        std::uint32_t  Tim3             :   2;  // 10
        std::uint32_t  Tim4             :   1;  // 12
        std::uint32_t  Can              :   2;  // 13
        std::uint32_t  Pd01             :   1;  // 15
        std::uint32_t  Tim5Ch4          :   1;  // 16
        std::uint32_t  Adc1EtrgInj      :   1;  // 17
        std::uint32_t  Adc1EtrgReg      :   1;  // 18
        std::uint32_t  Adc2EtrgInj      :   1;  // 19
        std::uint32_t  Adc2EtrgReg      :   1;  // 20
        std::uint32_t  _res_21          :   3;  // 21
        std::uint32_t  SwjCfg           :   3;  // 24
        std::uint32_t  _res_27          :   5;  // 27
    };
    
    enum class EVTPORT : std::uint32_t{
        A                       =   0,
        B                       =   1,
        C                       =   2,
        D                       =   3,
        E                       =   4,
    };
};



}; }; // End stm::registers namespace

#endif // __STM__REGISTER_FLASH_HPP__
