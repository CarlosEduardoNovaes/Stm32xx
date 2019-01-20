#ifndef __STM__REGISTER_FLASH_HPP__
#define __STM__REGISTER_FLASH_HPP__

#include <stm/registers/registers.hpp>


/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm{
namespace registers{

// RCC_CR Register
namespace flash_acr{
    struct bitfield_t{
        std::uint32_t  Latency           :   3;  // 00
        std::uint32_t  Hlacya            :   1;  // 03
        std::uint32_t  Prftbe            :   1;  // 04
        std::uint32_t  Prftbs            :   1;  // 05
        std::uint32_t  _res_06           :  26;  // 06
    };
    
    enum class LATENCY : std::uint32_t{
        WAIT_STATES_0               =   0,
        WAIT_STATES_1               =   1,
        WAIT_STATES_2               =   2,
    };
    
    STM_REGISTER_START(bitfield_t, 0x40022000)
        STM_ACCESSOR_BF(Latency   , LATENCY)
        STM_ACCESSOR_BB(Hlacya    , 3)
        STM_ACCESSOR_BB(Prftbe    , 4)
        STM_GETTER_BB(Prftbs    , 5)
    STM_REGISTER_END
};



}; }; // End stm::registers namespace

#endif // __STM__REGISTER_FLASH_HPP__
