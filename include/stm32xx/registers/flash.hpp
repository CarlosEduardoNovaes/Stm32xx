#ifndef __STM32__FLASH_HPP__
#define __STM32__FLASH_HPP__

#include <stm32xx/registers/registers.hpp>


/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm32{
namespace registers{

// RCC_CR Register
namespace flash_acr{
    struct bitfield_t{
        uint32_t  Latency           :   3;  // 00
        uint32_t  Hlacya            :   1;  // 03
        uint32_t  Prftbe            :   1;  // 04
        uint32_t  Prftbs            :   1;  // 05
        uint32_t  _res_06           :  26;  // 06
    };
    enum class LATENCY : uint32_t{
        WAIT_STATES_0               =   0,
        WAIT_STATES_1               =   1,
        WAIT_STATES_2               =   2,
    };
    
    STM32_REGISTER_START(bitfield_t, 0x40022000)
        STM32_ACCESSOR_BF(Latency   , LATENCY)
        STM32_ACCESSOR_BB(Hlacya    , 3)
        STM32_ACCESSOR_BB(Prftbe    , 4)
        STM32_GETTER_BB(Prftbs    , 5)
    STM32_REGISTER_END
};



}; }; // End stm32::registers namespace

#endif // __STM32__FLASH_HPP__
