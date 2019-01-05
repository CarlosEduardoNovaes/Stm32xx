#ifndef __STM32__REGISTER_USART_HPP__
#define __STM32__REGISTER_USART_HPP__

#include <stm32xx/registers/registers.hpp>

#define STM32_USART_SR_DECL(base_address)                                          \
namespace sr{                                                                      \
    struct bitfield_t{                                                             \
        uint32_t  Pe                :   1;                                         \
        uint32_t  Fe                :   1;                                         \
        uint32_t  Ne                :   1;                                         \
        uint32_t  Oe                :   1;                                         \
        uint32_t  Idle              :   1;                                         \
        uint32_t  Rxne              :   1;                                         \
        uint32_t  Tc                :   1;                                         \
        uint32_t  Txe               :   1;                                         \
        uint32_t  Lbd               :   1;                                         \
        uint32_t  Cts               :   1;                                         \
        uint32_t  _res_10           :  22;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_GETTER_BB     (Pe        , 0                                 )       \
        STM32_GETTER_BB     (Fe        , 1                                 )       \
        STM32_GETTER_BB     (Ne        , 2                                 )       \
        STM32_GETTER_BB     (Oe        , 3                                 )       \
        STM32_GETTER_BB     (Idle      , 4                                 )       \
        STM32_GETTER_BB     (Rxne      , 5                                 )       \
        STM32_CLEARER_BB    (Rxne      , 5                                 )       \
        STM32_GETTER_BB     (Tc        , 6                                 )       \
        STM32_CLEARER_BB    (Tc        , 6                                 )       \
        STM32_GETTER_BB     (Txe       , 7                                 )       \
        STM32_GETTER_BB     (Lbd       , 8                                 )       \
        STM32_CLEARER_BB    (Lbd       , 8                                 )       \
        STM32_GETTER_BB     (Cts       , 9                                 )       \
        STM32_CLEARER_BB    (Cts       , 9                                 )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_USART_DR_DECL(base_address)                                          \
namespace dr{                                                                      \
    struct bitfield_t{                                                             \
        uint32_t  Dr                :   8;                                         \
        uint32_t  _res_08           :  24;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Dr       , uint8_t                          )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_USART_BRR_DECL(base_address)                                         \
namespace brr{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  DivFraction       :   4;                                         \
        uint32_t  DivMantissa       :  12;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF    (DivFraction, uint8_t                          )      \
        STM32_ACCESSOR_BF    (DivMantissa, uint16_t                         )      \
    STM32_REGISTER_END                                                             \
};

#define STM32_USART_CR_DECL(base_address)                                          \
namespace cr{                                                                      \
    struct bitfield_t{                                                             \
        uint32_t  Skb               :   1;                                         \
        uint32_t  Rwu               :   1;                                         \
        uint32_t  Re                :   1;                                         \
        uint32_t  Te                :   1;                                         \
        uint32_t  Idleie            :   1;                                         \
        uint32_t  Rxneie            :   1;                                         \
        uint32_t  Tcie              :   1;                                         \
        uint32_t  Txeie             :   1;                                         \
        uint32_t  Peie              :   1;                                         \
        uint32_t  Ps                :   1;                                         \
        uint32_t  Pce               :   1;                                         \
        uint32_t  Wake              :   1;                                         \
        uint32_t  M                 :   1;                                         \
        uint32_t  Ue                :   1;                                         \
        uint32_t  _res_14           :  18;                                         \
        uint32_t  Addr              :   4;                                         \
        uint32_t  _res_36           :   1;                                         \
        uint32_t  Lbdl              :   1;                                         \
        uint32_t  Lbdie             :   1;                                         \
        uint32_t  _res_39           :   1;                                         \
        uint32_t  Lbcl              :   1;                                         \
        uint32_t  Cpha              :   1;                                         \
        uint32_t  Cpol              :   1;                                         \
        uint32_t  Clken             :   1;                                         \
        uint32_t  Stop              :   2;                                         \
        uint32_t  Linen             :   1;                                         \
        uint32_t  _res_47           :  17;                                         \
        uint32_t  Eie               :   1;                                         \
        uint32_t  Iren              :   1;                                         \
        uint32_t  Irlp              :   1;                                         \
        uint32_t  Hdsel             :   1;                                         \
        uint32_t  Nack              :   1;                                         \
        uint32_t  Scen              :   1;                                         \
        uint32_t  Dmar              :   1;                                         \
        uint32_t  Dmat              :   1;                                         \
        uint32_t  Rtse              :   1;                                         \
        uint32_t  Ctse              :   1;                                         \
        uint32_t  Ctsie             :   1;                                         \
        uint32_t  _res_75           :  21;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BB    (Skb       , 0                                 )       \
        STM32_ACCESSOR_BB    (Rwu       , 1                                 )       \
        STM32_ACCESSOR_BB    (Re        , 2                                 )       \
        STM32_ACCESSOR_BB    (Te        , 3                                 )       \
        STM32_ACCESSOR_BB    (Idleie    , 4                                 )       \
        STM32_ACCESSOR_BB    (Rxneie    , 5                                 )       \
        STM32_ACCESSOR_BB    (Tcie      , 6                                 )       \
        STM32_ACCESSOR_BB    (Txeie     , 7                                 )       \
        STM32_ACCESSOR_BB    (Peie      , 8                                 )       \
        STM32_ACCESSOR_BB    (Ps        , 9                                 )       \
        STM32_ACCESSOR_BB    (Pce       ,10                                 )       \
        STM32_ACCESSOR_BB    (Wake      ,11                                 )       \
        STM32_ACCESSOR_BB    (M         ,12                                 )       \
        STM32_ACCESSOR_BB    (Ue        ,13                                 )       \
        STM32_ACCESSOR_BF    (Addr      , uint8_t                           )       \
        STM32_ACCESSOR_BB    (Lbdl      ,37                                 )       \
        STM32_ACCESSOR_BB    (Lbdie     ,38                                 )       \
        STM32_ACCESSOR_BB    (Lbc       ,40                                 )       \
        STM32_ACCESSOR_BB    (Cpha      ,41                                 )       \
        STM32_ACCESSOR_BB    (Cpol      ,42                                 )       \
        STM32_ACCESSOR_BB    (Clken     ,43                                 )       \
        STM32_ACCESSOR_BF    (Stop      ,::stm32::registers::usart::STOP    )       \
        STM32_ACCESSOR_BB    (Linen     ,46                                 )       \
        STM32_ACCESSOR_BB    (Eie       ,64                                 )       \
        STM32_ACCESSOR_BB    (Iren      ,65                                 )       \
        STM32_ACCESSOR_BB    (Irlp      ,66                                 )       \
        STM32_ACCESSOR_BB    (Hdsel     ,67                                 )       \
        STM32_ACCESSOR_BB    (Nack      ,68                                 )       \
        STM32_ACCESSOR_BB    (Scen      ,69                                 )       \
        STM32_ACCESSOR_BB    (Dmar      ,70                                 )       \
        STM32_ACCESSOR_BB    (Dmat      ,71                                 )       \
        STM32_ACCESSOR_BB    (Rtse      ,72                                 )       \
        STM32_ACCESSOR_BB    (Ctse      ,73                                 )       \
        STM32_ACCESSOR_BB    (Ctsie     ,74                                 )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_USART_GTPR_DECL(base_address)                                        \
namespace gtpr{                                                                    \
    struct bitfield_t{                                                             \
        uint32_t  Psc               :   8;                                         \
        uint32_t  Gt                :   8;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF    (Psc    , uint8_t                          )           \
        STM32_ACCESSOR_BF    (Gt     , uint8_t                          )           \
    STM32_REGISTER_END                                                             \
};

#define STM32_USART_DECL(base_address)              \
STM32_USART_SR_DECL   (base_address)                \
STM32_USART_DR_DECL   (base_address + 0x04)         \
STM32_USART_BRR_DECL  (base_address + 0x08)         \
STM32_USART_CR_DECL   (base_address + 0x0C)         \
STM32_USART_GTPR_DECL (base_address + 0x18)         \

namespace stm32{
namespace registers{
namespace usart{

    enum class STOP : uint32_t{
        ONE_BIT                     =   0,
        HALF_BIT                    =   1,
        TWO_BIT                     =   2,
        ONE_AND_HALF_BIT            =   3,
    };

namespace usart1{
    STM32_USART_DECL(0x40013800)
};
namespace usart2{
    STM32_USART_DECL(0x40004000)
};
namespace usart3{
    STM32_USART_DECL(0x40004800)
};
namespace uart4{
    STM32_USART_DECL(0x40004C00)
};
namespace uart5{
    STM32_USART_DECL(0x40005000)
};
    
};
};
};

#endif // __STM32__REGISTER_USART_HPP__
