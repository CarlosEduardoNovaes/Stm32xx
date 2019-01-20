#ifndef __STM__REGISTER_SCB_HPP__
#define __STM__REGISTER_SCB_HPP__

#include <stm/registers/registers.hpp>



/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm{
namespace registers{

// NVIC_ISER Register
namespace scb_ccr{
    struct bitfield_t{
        std::uint32_t  Nonbasethrdena    :   1;  // 00
        std::uint32_t  Usersetmpend      :   1;  // 00
        std::uint32_t  _res_02           :   1;  // 00
        std::uint32_t  Unaligntrp        :   1;  // 00
        std::uint32_t  Div0trp           :   1;  // 00
        std::uint32_t  _res_05           :   3;  // 00
        std::uint32_t  Bfhnmign          :   1;  // 00
        std::uint32_t  Stkalign          :   1;  // 00
        std::uint32_t  _res_10           :  22;  // 00
    };
    
    STM_REGISTER_START(bitfield_t, 0xE000ED14)
        STM_ACCESSOR_BF(Nonbasethrdena    ,  bool)
        STM_ACCESSOR_BF(Usersetmpend      ,  bool)
        STM_ACCESSOR_BF(Unaligntrp        ,  bool)
        STM_ACCESSOR_BF(Div0trp           ,  bool)
        STM_ACCESSOR_BF(Bfhnmign          ,  bool)
        STM_ACCESSOR_BF(Stkalign          ,  bool)
    STM_REGISTER_END
};




};
};
#endif  // __STM__REGISTER_SCB_HPP__
