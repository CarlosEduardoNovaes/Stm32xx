#ifndef __STM32__REGISTER_GPIO_HPP__
#define __STM32__REGISTER_GPIO_HPP__

#include <stm32xx/registers/registers.hpp>

#define STM32_GPIO_CRL_DECL(base_address)                                               \
namespace crl{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Mode0             :   2;                                         \
        uint32_t   Cnf0             :   2;                                         \
        uint32_t  Mode1             :   2;                                         \
        uint32_t   Cnf1             :   2;                                         \
        uint32_t  Mode2             :   2;                                         \
        uint32_t   Cnf2             :   2;                                         \
        uint32_t  Mode3             :   2;                                         \
        uint32_t   Cnf3             :   2;                                         \
        uint32_t  Mode4             :   2;                                         \
        uint32_t   Cnf4             :   2;                                         \
        uint32_t  Mode5             :   2;                                         \
        uint32_t   Cnf5             :   2;                                         \
        uint32_t  Mode6             :   2;                                         \
        uint32_t   Cnf6             :   2;                                         \
        uint32_t  Mode7             :   2;                                         \
        uint32_t   Cnf7             :   2;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_ACCESSOR_BF   (Mode0     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf0     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode1     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf1     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode2     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf2     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode3     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf3     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode4     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf4     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode5     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf5     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode6     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf6     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode7     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf7     , ::stm32::registers::gpio::CNF     )            \
    STM32_REGISTER_END                                                                  \
};

#define STM32_GPIO_CRH_DECL(base_address)                                               \
namespace crh{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Mode8             :   2;                                              \
        uint32_t   Cnf8             :   2;                                              \
        uint32_t  Mode9             :   2;                                              \
        uint32_t   Cnf9             :   2;                                              \
        uint32_t  Mode10            :   2;                                              \
        uint32_t   Cnf10            :   2;                                              \
        uint32_t  Mode11            :   2;                                              \
        uint32_t   Cnf11            :   2;                                              \
        uint32_t  Mode12            :   2;                                              \
        uint32_t   Cnf12            :   2;                                              \
        uint32_t  Mode13            :   2;                                              \
        uint32_t   Cnf13            :   2;                                              \
        uint32_t  Mode14            :   2;                                              \
        uint32_t   Cnf14            :   2;                                              \
        uint32_t  Mode15            :   2;                                              \
        uint32_t   Cnf15            :   2;                                              \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                      \
        STM32_ACCESSOR_BF   (Mode8     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf8     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode9     , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf9     , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode10    , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf10    , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode11    , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf11    , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode12    , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf12    , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode13    , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf13    , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode14    , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf14    , ::stm32::registers::gpio::CNF     )            \
        STM32_ACCESSOR_BF   (Mode15    , ::stm32::registers::gpio::MODE    )            \
        STM32_ACCESSOR_BF   ( Cnf15    , ::stm32::registers::gpio::CNF     )            \
    STM32_REGISTER_END                                                                  \
};


#define STM32_GPIO_IDR_DECL(base_address)                                               \
namespace idr{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Idr0              :   1;                                              \
        uint32_t  Idr1              :   1;                                              \
        uint32_t  Idr2              :   1;                                              \
        uint32_t  Idr3              :   1;                                              \
        uint32_t  Idr4              :   1;                                              \
        uint32_t  Idr5              :   1;                                              \
        uint32_t  Idr6              :   1;                                              \
        uint32_t  Idr7              :   1;                                              \
        uint32_t  Idr8              :   1;                                              \
        uint32_t  Idr9              :   1;                                              \
        uint32_t  Idr10             :   1;                                              \
        uint32_t  Idr11             :   1;                                              \
        uint32_t  Idr12             :   1;                                              \
        uint32_t  Idr13             :   1;                                              \
        uint32_t  Idr14             :   1;                                              \
        uint32_t  Idr15             :   1;                                              \
        uint32_t  _res_16           :  16;                                              \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                      \
        STM32_GETTER_BB(Idr0        , 0  )                                              \
        STM32_GETTER_BB(Idr1        , 1  )                                              \
        STM32_GETTER_BB(Idr2        , 2  )                                              \
        STM32_GETTER_BB(Idr3        , 3  )                                              \
        STM32_GETTER_BB(Idr4        , 4  )                                              \
        STM32_GETTER_BB(Idr5        , 5  )                                              \
        STM32_GETTER_BB(Idr6        , 6  )                                              \
        STM32_GETTER_BB(Idr7        , 7  )                                              \
        STM32_GETTER_BB(Idr8        , 8  )                                              \
        STM32_GETTER_BB(Idr9        , 9  )                                              \
        STM32_GETTER_BB(Idr10       , 10 )                                              \
        STM32_GETTER_BB(Idr11       , 11 )                                              \
        STM32_GETTER_BB(Idr12       , 12 )                                              \
        STM32_GETTER_BB(Idr13       , 13 )                                              \
        STM32_GETTER_BB(Idr14       , 14 )                                              \
        STM32_GETTER_BB(Idr15       , 15 )                                              \
    STM32_REGISTER_END                                                                  \
};


#define STM32_GPIO_ODR_DECL(base_address)                                               \
namespace odr{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Odr0              :   1;                                              \
        uint32_t  Odr1              :   1;                                              \
        uint32_t  Odr2              :   1;                                              \
        uint32_t  Odr3              :   1;                                              \
        uint32_t  Odr4              :   1;                                              \
        uint32_t  Odr5              :   1;                                              \
        uint32_t  Odr6              :   1;                                              \
        uint32_t  Odr7              :   1;                                              \
        uint32_t  Odr8              :   1;                                              \
        uint32_t  Odr9              :   1;                                              \
        uint32_t  Odr10             :   1;                                              \
        uint32_t  Odr11             :   1;                                              \
        uint32_t  Odr12             :   1;                                              \
        uint32_t  Odr13             :   1;                                              \
        uint32_t  Odr14             :   1;                                              \
        uint32_t  Odr15             :   1;                                              \
        uint32_t  _res_16           :  16;                                              \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                      \
        STM32_SETTER_BB(Odr0        , 0  )                                              \
        STM32_SETTER_BB(Odr1        , 1  )                                              \
        STM32_SETTER_BB(Odr2        , 2  )                                              \
        STM32_SETTER_BB(Odr3        , 3  )                                              \
        STM32_SETTER_BB(Odr4        , 4  )                                              \
        STM32_SETTER_BB(Odr5        , 5  )                                              \
        STM32_SETTER_BB(Odr6        , 6  )                                              \
        STM32_SETTER_BB(Odr7        , 7  )                                              \
        STM32_SETTER_BB(Odr8        , 8  )                                              \
        STM32_SETTER_BB(Odr9        , 9  )                                              \
        STM32_SETTER_BB(Odr10       , 10 )                                              \
        STM32_SETTER_BB(Odr11       , 11 )                                              \
        STM32_SETTER_BB(Odr12       , 12 )                                              \
        STM32_SETTER_BB(Odr13       , 13 )                                              \
        STM32_SETTER_BB(Odr14       , 14 )                                              \
        STM32_SETTER_BB(Odr15       , 15 )                                              \
    STM32_REGISTER_END                                                                  \
};


#define STM32_GPIO_BSR_DECL(base_address)                                               \
namespace bsr{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Bs0               :   1;                                              \
        uint32_t  Bs1               :   1;                                              \
        uint32_t  Bs2               :   1;                                              \
        uint32_t  Bs3               :   1;                                              \
        uint32_t  Bs4               :   1;                                              \
        uint32_t  Bs5               :   1;                                              \
        uint32_t  Bs6               :   1;                                              \
        uint32_t  Bs7               :   1;                                              \
        uint32_t  Bs8               :   1;                                              \
        uint32_t  Bs9               :   1;                                              \
        uint32_t  Bs10              :   1;                                              \
        uint32_t  Bs11              :   1;                                              \
        uint32_t  Bs12              :   1;                                              \
        uint32_t  Bs13              :   1;                                              \
        uint32_t  Bs14              :   1;                                              \
        uint32_t  Bs15              :   1;                                              \
        uint32_t  Br0               :   1;                                              \
        uint32_t  Br1               :   1;                                              \
        uint32_t  Br2               :   1;                                              \
        uint32_t  Br3               :   1;                                              \
        uint32_t  Br4               :   1;                                              \
        uint32_t  Br5               :   1;                                              \
        uint32_t  Br6               :   1;                                              \
        uint32_t  Br7               :   1;                                              \
        uint32_t  Br8               :   1;                                              \
        uint32_t  Br9               :   1;                                              \
        uint32_t  Br10              :   1;                                              \
        uint32_t  Br11              :   1;                                              \
        uint32_t  Br12              :   1;                                              \
        uint32_t  Br13              :   1;                                              \
        uint32_t  Br14              :   1;                                              \
        uint32_t  Br15              :   1;                                              \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                      \
        STM32_SETTER_BB(Bs0        , 0  )                                               \
        STM32_SETTER_BB(Bs1        , 1  )                                               \
        STM32_SETTER_BB(Bs2        , 2  )                                               \
        STM32_SETTER_BB(Bs3        , 3  )                                               \
        STM32_SETTER_BB(Bs4        , 4  )                                               \
        STM32_SETTER_BB(Bs5        , 5  )                                               \
        STM32_SETTER_BB(Bs6        , 6  )                                               \
        STM32_SETTER_BB(Bs7        , 7  )                                               \
        STM32_SETTER_BB(Bs8        , 8  )                                               \
        STM32_SETTER_BB(Bs9        , 9  )                                               \
        STM32_SETTER_BB(Bs10       , 10 )                                               \
        STM32_SETTER_BB(Bs11       , 11 )                                               \
        STM32_SETTER_BB(Bs12       , 12 )                                               \
        STM32_SETTER_BB(Bs13       , 13 )                                               \
        STM32_SETTER_BB(Bs14       , 14 )                                               \
        STM32_SETTER_BB(Bs15       , 15 )                                               \
        STM32_SETTER_BB(Br0        , 16 )                                               \
        STM32_SETTER_BB(Br1        , 17 )                                               \
        STM32_SETTER_BB(Br2        , 18 )                                               \
        STM32_SETTER_BB(Br3        , 19 )                                               \
        STM32_SETTER_BB(Br4        , 20 )                                               \
        STM32_SETTER_BB(Br5        , 21 )                                               \
        STM32_SETTER_BB(Br6        , 22 )                                               \
        STM32_SETTER_BB(Br7        , 23 )                                               \
        STM32_SETTER_BB(Br8        , 24 )                                               \
        STM32_SETTER_BB(Br9        , 25 )                                               \
        STM32_SETTER_BB(Br10       , 26 )                                               \
        STM32_SETTER_BB(Br11       , 27 )                                               \
        STM32_SETTER_BB(Br12       , 28 )                                               \
        STM32_SETTER_BB(Br13       , 29 )                                               \
        STM32_SETTER_BB(Br14       , 30 )                                               \
        STM32_SETTER_BB(Br15       , 31 )                                               \
    STM32_REGISTER_END                                                                  \
};

#define STM32_GPIO_BR_DECL(base_address)                                                \
namespace br{                                                                           \
    struct bitfield_t{                                                                  \
        uint32_t  Br0               :   1;                                              \
        uint32_t  Br1               :   1;                                              \
        uint32_t  Br2               :   1;                                              \
        uint32_t  Br3               :   1;                                              \
        uint32_t  Br4               :   1;                                              \
        uint32_t  Br5               :   1;                                              \
        uint32_t  Br6               :   1;                                              \
        uint32_t  Br7               :   1;                                              \
        uint32_t  Br8               :   1;                                              \
        uint32_t  Br9               :   1;                                              \
        uint32_t  Br10              :   1;                                              \
        uint32_t  Br11              :   1;                                              \
        uint32_t  Br12              :   1;                                              \
        uint32_t  Br13              :   1;                                              \
        uint32_t  Br14              :   1;                                              \
        uint32_t  Br15              :   1;                                              \
        uint32_t  _res_16           :  16;                                              \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                      \
        STM32_SETTER_BB(Br0        , 0  )                                               \
        STM32_SETTER_BB(Br1        , 1  )                                               \
        STM32_SETTER_BB(Br2        , 2  )                                               \
        STM32_SETTER_BB(Br3        , 3  )                                               \
        STM32_SETTER_BB(Br4        , 4  )                                               \
        STM32_SETTER_BB(Br5        , 5  )                                               \
        STM32_SETTER_BB(Br6        , 6  )                                               \
        STM32_SETTER_BB(Br7        , 7  )                                               \
        STM32_SETTER_BB(Br8        , 8  )                                               \
        STM32_SETTER_BB(Br9        , 9  )                                               \
        STM32_SETTER_BB(Br10       , 10 )                                               \
        STM32_SETTER_BB(Br11       , 11 )                                               \
        STM32_SETTER_BB(Br12       , 12 )                                               \
        STM32_SETTER_BB(Br13       , 13 )                                               \
        STM32_SETTER_BB(Br14       , 14 )                                               \
        STM32_SETTER_BB(Br15       , 15 )                                               \
    STM32_REGISTER_END                                                                  \
};

#define STM32_GPIO_LCKR_DECL(base_address)                                              \
namespace lckr{                                                                         \
    struct bitfield_t{                                                                  \
        uint32_t  Lck0               :   1;                                             \
        uint32_t  Lck1               :   1;                                             \
        uint32_t  Lck2               :   1;                                             \
        uint32_t  Lck3               :   1;                                             \
        uint32_t  Lck4               :   1;                                             \
        uint32_t  Lck5               :   1;                                             \
        uint32_t  Lck6               :   1;                                             \
        uint32_t  Lck7               :   1;                                             \
        uint32_t  Lck8               :   1;                                             \
        uint32_t  Lck9               :   1;                                             \
        uint32_t  Lck10              :   1;                                             \
        uint32_t  Lck11              :   1;                                             \
        uint32_t  Lck12              :   1;                                             \
        uint32_t  Lck13              :   1;                                             \
        uint32_t  Lck14              :   1;                                             \
        uint32_t  Lck15              :   1;                                             \
        uint32_t  Lckk               :   1;                                             \
        uint32_t  _res_17            :  15;                                             \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                      \
        STM32_ACCESSOR_BB(Lck0        , 0  )                                            \
        STM32_ACCESSOR_BB(Lck1        , 1  )                                            \
        STM32_ACCESSOR_BB(Lck2        , 2  )                                            \
        STM32_ACCESSOR_BB(Lck3        , 3  )                                            \
        STM32_ACCESSOR_BB(Lck4        , 4  )                                            \
        STM32_ACCESSOR_BB(Lck5        , 5  )                                            \
        STM32_ACCESSOR_BB(Lck6        , 6  )                                            \
        STM32_ACCESSOR_BB(Lck7        , 7  )                                            \
        STM32_ACCESSOR_BB(Lck8        , 8  )                                            \
        STM32_ACCESSOR_BB(Lck9        , 9  )                                            \
        STM32_ACCESSOR_BB(Lck10       , 10 )                                            \
        STM32_ACCESSOR_BB(Lck11       , 11 )                                            \
        STM32_ACCESSOR_BB(Lck12       , 12 )                                            \
        STM32_ACCESSOR_BB(Lck13       , 13 )                                            \
        STM32_ACCESSOR_BB(Lck14       , 14 )                                            \
        STM32_ACCESSOR_BB(Lck15       , 15 )                                            \
        STM32_ACCESSOR_BB(Lckk        , 16 )                                            \
    STM32_REGISTER_END                                                                  \
};

#define STM32_GPIO_DECL(base_address)           \
STM32_GPIO_CRL_DECL(base_address)               \
STM32_GPIO_CRH_DECL(base_address + 0x04)        \
STM32_GPIO_IDR_DECL(base_address + 0x08)        \
STM32_GPIO_ODR_DECL(base_address + 0x0C)        \
STM32_GPIO_BSR_DECL(base_address + 0x10)        \
STM32_GPIO_BR_DECL (base_address + 0x14)        \
STM32_GPIO_LCKR_DECL(base_address + 0x18)


/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm32{
namespace registers{
    
// GPIO namespace
namespace gpio{
    enum class CNF : uint32_t{
        ANALOG                      =   0,
        DIGITAL                     =   1,
        DIGITAL_PULL_UPDOWN         =   2,
        RESERVED                    =   3,
        GP_PUSH_PULL                =   0,
        GP_OPEN_DRAIN               =   1,
        AF_PUSH_PULL                =   2,
        AF_OPEN_DRAIN               =   3,
    };
    enum class MODE : uint32_t{
        INPUT                       =   0,
        OUTPUT_10MHZ                =   1,
        OUTPUT_02MHZ                =   2,
        OUTPUT_50MHZ                =   3,
    };


namespace a{
    STM32_GPIO_DECL(0x40010800)
};    // End gpio::a namespace
namespace b{
    STM32_GPIO_DECL(0x40010C00)
};    // End gpio::b namespace
namespace c{
    STM32_GPIO_DECL(0x40011000)
};    // End gpio::c namespace
namespace d{
    STM32_GPIO_DECL(0x40011400)
};    // End gpio::d namespace
namespace e{
    STM32_GPIO_DECL(0x40011800)
};    // End gpio::e namespace
namespace f{
    STM32_GPIO_DECL(0x40011C00)
};    // End gpio::f namespace
namespace g{
    STM32_GPIO_DECL(0x40012000)
};    // End gpio::g namespace


    
    
};    // End gpio namespace

}; }; // End stm32::registers namespace


#endif // __STM32__REGISTER_GPIO_HPP__
