#ifndef __STM32__REGISTER_SCB_HPP__
#define __STM32__REGISTER_SCB_HPP__

#include <stm32xx/registers/registers.hpp>



/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm32{
namespace registers{

// NVIC_ISER Register
namespace scb_ccr{
    struct bitfield_t{
        uint32_t  Nonbasethrdena    :   1;  // 00
        uint32_t  Usersetmpend      :   1;  // 00
        uint32_t  _res_02           :   1;  // 00
        uint32_t  Unaligntrp        :   1;  // 00
        uint32_t  Div0trp           :   1;  // 00
        uint32_t  _res_05           :   3;  // 00
        uint32_t  Bfhnmign          :   1;  // 00
        uint32_t  Stkalign          :   1;  // 00
        uint32_t  _res_10           :  22;  // 00
    };
    
    STM32_REGISTER_START(bitfield_t, 0xE000ED14)
        STM32_ACCESSOR_BF(Nonbasethrdena    ,  bool)
        STM32_ACCESSOR_BF(Usersetmpend      ,  bool)
        STM32_ACCESSOR_BF(Unaligntrp        ,  bool)
        STM32_ACCESSOR_BF(Div0trp           ,  bool)
        STM32_ACCESSOR_BF(Bfhnmign          ,  bool)
        STM32_ACCESSOR_BF(Stkalign          ,  bool)
    STM32_REGISTER_END
};




};
};
#endif  // __STM32__REGISTER_SCB_HPP__
