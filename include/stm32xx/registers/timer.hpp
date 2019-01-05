#ifndef __STM32__REGISTER_TIMER_HPP__
#define __STM32__REGISTER_TIMER_HPP__

#include <stm32xx/registers/registers.hpp>

#define STM32_TIMER_CR1_DECL(base_address)                                               \
namespace cr1{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Cen               :   1;                                         \
        uint32_t  Udis              :   1;                                         \
        uint32_t  Urs               :   1;                                         \
        uint32_t  Opm               :   1;                                         \
        uint32_t  Dir               :   1;                                         \
        uint32_t  Cms               :   2;                                         \
        uint32_t  Arpe              :   1;                                         \
        uint32_t  Ckd               :   2;                                         \
        uint32_t  _res_10           :  22;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_ACCESSOR_BB   (Cen       , 0                                 )            \
        STM32_ACCESSOR_BB   (Udis      , 1                                 )            \
        STM32_ACCESSOR_BB   (Urs       , 2                                 )            \
        STM32_ACCESSOR_BB   (Opm       , 3                                 )            \
        STM32_ACCESSOR_BB   (Dir       , 4                                 )            \
        STM32_ACCESSOR_BF   (Cms       , ::stm32::registers::timer::CMS    )            \
        STM32_ACCESSOR_BB   (Arpe      , 7                                 )            \
        STM32_ACCESSOR_BF   (Ckd       , ::stm32::registers::timer::CKD     )            \
    STM32_REGISTER_END                                                                  \
};

#define STM32_TIMER_CR2_DECL(base_address)                                               \
namespace cr2{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Ccpc              :   1;                                         \
        uint32_t  _res_01           :   1;                                         \
        uint32_t  Ccus              :   1;                                         \
        uint32_t  Ccds              :   1;                                         \
        uint32_t  Mms               :   3;                                         \
        uint32_t  Ti1s              :   1;                                         \
        uint32_t  Ois1              :   1;                                         \
        uint32_t  Ois1n             :   1;                                         \
        uint32_t  Ois2              :   1;                                         \
        uint32_t  Ois2n             :   1;                                         \
        uint32_t  Ois3              :   1;                                         \
        uint32_t  Ois3n             :   1;                                         \
        uint32_t  Ois4              :   1;                                         \
        uint32_t  _res_15           :  17;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_ACCESSOR_BB   (Ccpc      , 0                                 )            \
        STM32_ACCESSOR_BB   (Ccus      , 2                                 )            \
        STM32_ACCESSOR_BB   (Ccds      , 3                                 )            \
        STM32_ACCESSOR_BF   (Mms       , ::stm32::registers::timer::MMS    )            \
        STM32_ACCESSOR_BB   (Ti1s      , 7                                 )            \
        STM32_ACCESSOR_BB   (Ois1      , 8                                 )            \
        STM32_ACCESSOR_BB   (Ois1n     , 9                                 )            \
        STM32_ACCESSOR_BB   (Ois2      , 10                                )            \
        STM32_ACCESSOR_BB   (Ois2n     , 11                                )            \
        STM32_ACCESSOR_BB   (Ois3      , 12                                )            \
        STM32_ACCESSOR_BB   (Ois3n     , 13                                )            \
        STM32_ACCESSOR_BB   (Ois4      , 14                                )            \
    STM32_REGISTER_END                                                                  \
};
#define STM32_TIMER_SMCR_DECL(base_address)                                               \
namespace smcr{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Sms               :   3;                                         \
        uint32_t  _res_03           :   1;                                         \
        uint32_t  Ts                :   3;                                         \
        uint32_t  Msm               :   1;                                         \
        uint32_t  Etf               :   4;                                         \
        uint32_t  Etps              :   2;                                         \
        uint32_t  Ece               :   1;                                         \
        uint32_t  Etp               :   1;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_ACCESSOR_BF   (Sms       , ::stm32::registers::timer::SMS    )            \
        STM32_ACCESSOR_BF   (Ts        , ::stm32::registers::timer::TS     )            \
        STM32_ACCESSOR_BB   (Msm       , 7                                 )            \
        STM32_ACCESSOR_BF   (Etf       , ::stm32::registers::timer::ETF    )            \
        STM32_ACCESSOR_BF   (Etps      , ::stm32::registers::timer::ETPS   )            \
        STM32_ACCESSOR_BB   (Ece       , 14                                )            \
        STM32_ACCESSOR_BB   (Etp       , 15                                )            \
    STM32_REGISTER_END                                                                  \
};
#define STM32_TIMER_DIER_DECL(base_address)                                               \
namespace dier{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Uie               :   1;                                         \
        uint32_t  Cc1ie             :   1;                                         \
        uint32_t  Cc2ie             :   1;                                         \
        uint32_t  Cc3ie             :   1;                                         \
        uint32_t  Cc4ie             :   1;                                         \
        uint32_t  Comie             :   1;                                         \
        uint32_t  Tie               :   1;                                         \
        uint32_t  Bie               :   1;                                         \
        uint32_t  Ude               :   1;                                         \
        uint32_t  Cc1de             :   1;                                         \
        uint32_t  Cc2de             :   1;                                         \
        uint32_t  Cc3de             :   1;                                         \
        uint32_t  Cc4de             :   1;                                         \
        uint32_t  Comde             :   1;                                         \
        uint32_t  Tde               :   1;                                         \
        uint32_t  _res_15           :  17;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_ACCESSOR_BB   (Uie       , 0                                 )            \
        STM32_ACCESSOR_BB   (CC1ie     , 1                                 )            \
        STM32_ACCESSOR_BB   (CC2ie     , 2                                 )            \
        STM32_ACCESSOR_BB   (CC3ie     , 3                                 )            \
        STM32_ACCESSOR_BB   (CC4ie     , 4                                 )            \
        STM32_ACCESSOR_BB   (Comie     , 5                                 )            \
        STM32_ACCESSOR_BB   (Tie       , 6                                 )            \
        STM32_ACCESSOR_BB   (Bie       , 7                                 )            \
        STM32_ACCESSOR_BB   (Ude       , 8                                 )            \
        STM32_ACCESSOR_BB   (CC1de     , 9                                 )            \
        STM32_ACCESSOR_BB   (CC2de     ,10                                 )            \
        STM32_ACCESSOR_BB   (CC3de     ,11                                 )            \
        STM32_ACCESSOR_BB   (CC4de     ,12                                 )            \
        STM32_ACCESSOR_BB   (Comde     ,13                                 )            \
        STM32_ACCESSOR_BB   (Tde       ,14                                 )            \
    STM32_REGISTER_END                                                                  \
};

#define STM32_TIMER_SR_DECL(base_address)                                               \
namespace sr{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Uif               :   1;                                         \
        uint32_t  Cc1if             :   1;                                         \
        uint32_t  Cc2if             :   1;                                         \
        uint32_t  Cc3if             :   1;                                         \
        uint32_t  Cc4if             :   1;                                         \
        uint32_t  Comif             :   1;                                         \
        uint32_t  Tif               :   1;                                         \
        uint32_t  Bif               :   1;                                         \
        uint32_t  _res_08           :   1;                                         \
        uint32_t  Cc1of             :   1;                                         \
        uint32_t  Cc2of             :   1;                                         \
        uint32_t  Cc3of             :   1;                                         \
        uint32_t  Cc4of             :   1;                                         \
        uint32_t  _res_13           :  19;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_GETTER_BB   (Uif       , 0                                 )            \
        STM32_GETTER_BB   (CC1if     , 1                                 )            \
        STM32_GETTER_BB   (CC2if     , 2                                 )            \
        STM32_GETTER_BB   (CC3if     , 3                                 )            \
        STM32_GETTER_BB   (CC4if     , 4                                 )            \
        STM32_GETTER_BB   (Comif     , 5                                 )            \
        STM32_GETTER_BB   (Tif       , 6                                 )            \
        STM32_GETTER_BB   (Bif       , 7                                 )            \
        STM32_GETTER_BB   (CC1of     , 9                                 )            \
        STM32_GETTER_BB   (CC2of     ,10                                 )            \
        STM32_GETTER_BB   (CC3of     ,11                                 )            \
        STM32_GETTER_BB   (CC4of     ,12                                 )            \
        STM32_CLEARER_BB   (Uif       , 0                                 )            \
        STM32_CLEARER_BB   (CC1if     , 1                                 )            \
        STM32_CLEARER_BB   (CC2if     , 2                                 )            \
        STM32_CLEARER_BB   (CC3if     , 3                                 )            \
        STM32_CLEARER_BB   (CC4if     , 4                                 )            \
        STM32_CLEARER_BB   (Comif     , 5                                 )            \
        STM32_CLEARER_BB   (Tif       , 6                                 )            \
        STM32_CLEARER_BB   (Bif       , 7                                 )            \
        STM32_CLEARER_BB   (CC1of     , 9                                 )            \
        STM32_CLEARER_BB   (CC2of     ,10                                 )            \
        STM32_CLEARER_BB   (CC3of     ,11                                 )            \
        STM32_CLEARER_BB   (CC4of     ,12                                 )            \
    STM32_REGISTER_END                                                                  \
};

#define STM32_TIMER_EGR_DECL(base_address)                                               \
namespace egr{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Ug                :   1;                                         \
        uint32_t  Cc1g              :   1;                                         \
        uint32_t  Cc2g              :   1;                                         \
        uint32_t  Cc3g              :   1;                                         \
        uint32_t  Cc4g              :   1;                                         \
        uint32_t  Comg              :   1;                                         \
        uint32_t  Tg                :   1;                                         \
        uint32_t  Bg                :   1;                                         \
        uint32_t  _res_8            :  24;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_SETTER_BB   (Ug        , 0                                 )            \
        STM32_SETTER_BB   (CC1g      , 1                                 )            \
        STM32_SETTER_BB   (CC2g      , 2                                 )            \
        STM32_SETTER_BB   (CC3g      , 3                                 )            \
        STM32_SETTER_BB   (CC4g      , 4                                 )            \
        STM32_SETTER_BB   (Comg      , 5                                 )            \
        STM32_SETTER_BB   (Tg        , 6                                 )            \
        STM32_SETTER_BB   (Bg        , 7                                 )            \
    STM32_REGISTER_END                                                                  \
};

#define STM32_TIMER_CCMR1_DECL(base_address)                                               \
namespace ccmr1{                                                                          \
    struct bitfield_t{                                                                  \
        uint32_t  Cc1s              :   2;                                         \
        uint32_t  Ic1psc            :   2;                                         \
        uint32_t  Ic1f              :   4;                                         \
        uint32_t  Cc2s              :   2;                                         \
        uint32_t  Ic2psc            :   2;                                         \
        uint32_t  Ic2f              :   4;                                         \
    };                                                                             \
    struct shadow_bitfield_t{                                                                  \
        uint32_t  Cc1s              :   2;                                         \
        uint32_t  Oc1fe             :   1;                                         \
        uint32_t  Oc1pe             :   1;                                         \
        uint32_t  Oc1m              :   3;                                         \
        uint32_t  Oc1ce             :   1;                                         \
        uint32_t  Cc2s              :   2;                                         \
        uint32_t  Oc2fe             :   1;                                         \
        uint32_t  Oc2pe             :   1;                                         \
        uint32_t  Oc2m              :   3;                                         \
        uint32_t  Oc2ce             :   1;                                         \
    };                                                                             \
    STM32_REGISTER_SHADOW_START(bitfield_t, shadow_bitfield_t, base_address)       \
        STM32_ACCESSOR_BF   (Cc1s      , ::stm32::registers::timer::CCS    )       \
        STM32_ACCESSOR_BF   (Ic1psc    , ::stm32::registers::timer::ICPSC  )       \
        STM32_ACCESSOR_BF   (Ic1f      , ::stm32::registers::timer::ICF    )       \
        STM32_ACCESSOR_BF   (Cc2s      , ::stm32::registers::timer::CCS    )       \
        STM32_ACCESSOR_BF   (Ic2psc    , ::stm32::registers::timer::ICPSC  )       \
        STM32_ACCESSOR_BF   (Ic2f      , ::stm32::registers::timer::ICF    )       \
        STM32_ACCESSOR_BB   (Oc1fe     , 2                                 )       \
        STM32_ACCESSOR_BB   (Oc1pe     , 3                                 )       \
        STM32_ACCESSOR_SBF  (Oc1m      , ::stm32::registers::timer::OCM    )       \
        STM32_ACCESSOR_BB   (Oc1ce     , 7                                 )       \
        STM32_ACCESSOR_BB   (Oc2fe     , 2                                 )       \
        STM32_ACCESSOR_BB   (Oc2pe     , 3                                 )       \
        STM32_ACCESSOR_SBF  (Oc2m      , ::stm32::registers::timer::OCM    )       \
        STM32_ACCESSOR_BB   (Oc2ce     , 7                                 )       \
    STM32_REGISTER_END                                                                  \
};

#define STM32_TIMER_CCMR2_DECL(base_address)                                       \
namespace ccmr2{                                                                   \
    struct bitfield_t{                                                             \
        uint32_t  Cc3s              :   2;                                         \
        uint32_t  Ic3psc            :   2;                                         \
        uint32_t  Ic3f              :   4;                                         \
        uint32_t  Cc4s              :   2;                                         \
        uint32_t  Ic4psc            :   2;                                         \
        uint32_t  Ic4f              :   4;                                         \
    };                                                                             \
    struct shadow_bitfield_t{                                                      \
        uint32_t  Cc3s              :   2;                                         \
        uint32_t  Oc3fe             :   1;                                         \
        uint32_t  Oc3pe             :   1;                                         \
        uint32_t  Oc3m              :   3;                                         \
        uint32_t  Oc3ce             :   1;                                         \
        uint32_t  Cc4s              :   2;                                         \
        uint32_t  Oc4fe             :   1;                                         \
        uint32_t  Oc4pe             :   1;                                         \
        uint32_t  Oc4m              :   3;                                         \
        uint32_t  Oc4ce             :   1;                                         \
    };                                                                             \
    STM32_REGISTER_SHADOW_START(bitfield_t, shadow_bitfield_t, base_address)       \
        STM32_ACCESSOR_BF   (Cc3s      , ::stm32::registers::timer::CCS    )       \
        STM32_ACCESSOR_BF   (Ic3psc    , ::stm32::registers::timer::ICPSC  )       \
        STM32_ACCESSOR_BF   (Ic3f      , ::stm32::registers::timer::ICF    )       \
        STM32_ACCESSOR_BF   (Cc4s      , ::stm32::registers::timer::CCS    )       \
        STM32_ACCESSOR_BF   (Ic4psc    , ::stm32::registers::timer::ICPSC  )       \
        STM32_ACCESSOR_BF   (Ic4f      , ::stm32::registers::timer::ICF    )       \
        STM32_ACCESSOR_BB   (Oc3fe     , 2                                 )       \
        STM32_ACCESSOR_BB   (Oc3pe     , 3                                 )       \
        STM32_ACCESSOR_SBF  (Oc3m      , ::stm32::registers::timer::OCM    )       \
        STM32_ACCESSOR_BB   (Oc3ce     , 7                                 )       \
        STM32_ACCESSOR_BB   (Oc4fe     , 2                                 )       \
        STM32_ACCESSOR_BB   (Oc4pe     , 3                                 )       \
        STM32_ACCESSOR_SBF  (Oc4m      , ::stm32::registers::timer::OCM    )       \
        STM32_ACCESSOR_BB   (Oc4ce     , 7                                 )       \
    STM32_REGISTER_END                                                                  \
};

#define STM32_TIMER_CCER_DECL(base_address)                                        \
namespace ccer{                                                                    \
    struct bitfield_t{                                                             \
        uint32_t  Cc1e              :   1;                                         \
        uint32_t  Cc1p              :   1;                                         \
        uint32_t  Cc1ne             :   1;                                         \
        uint32_t  Cc1np             :   1;                                         \
        uint32_t  Cc2e              :   1;                                         \
        uint32_t  Cc2p              :   1;                                         \
        uint32_t  Cc2ne             :   1;                                         \
        uint32_t  Cc2np             :   1;                                         \
        uint32_t  Cc3e              :   1;                                         \
        uint32_t  Cc3p              :   1;                                         \
        uint32_t  Cc3ne             :   1;                                         \
        uint32_t  Cc3np             :   1;                                         \
        uint32_t  Cc4e              :   1;                                         \
        uint32_t  Cc4p              :   1;                                         \
        uint32_t  _res_14           :  18;                                         \
    };                                                                                  \
    STM32_REGISTER_START(bitfield_t, base_address)                                        \
        STM32_ACCESSOR_BB   (Cc1e      , 0                                 )            \
        STM32_ACCESSOR_BB   (Cc1p      , 1                                 )            \
        STM32_ACCESSOR_BB   (Cc1ne     , 2                                 )            \
        STM32_ACCESSOR_BB   (Cc1np     , 3                                 )            \
        STM32_ACCESSOR_BB   (Cc2e      , 4                                 )            \
        STM32_ACCESSOR_BB   (Cc2p      , 5                                 )            \
        STM32_ACCESSOR_BB   (Cc2ne     , 6                                 )            \
        STM32_ACCESSOR_BB   (Cc2np     , 7                                 )            \
        STM32_ACCESSOR_BB   (Cc3e      , 8                                 )            \
        STM32_ACCESSOR_BB   (Cc3p      , 9                                 )            \
        STM32_ACCESSOR_BB   (Cc3ne     ,10                                 )            \
        STM32_ACCESSOR_BB   (Cc3np     ,11                                 )            \
        STM32_ACCESSOR_BB   (Cc4e      ,12                                 )            \
        STM32_ACCESSOR_BB   (Cc4p      ,13                                 )            \
    STM32_REGISTER_END                                                                  \
};

#define STM32_TIMER_CNT_DECL(base_address)                                         \
namespace cnt{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Cnt               :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Cnt       , uint16_t                          )       \
    STM32_REGISTER_END                                                             \
};
#define STM32_TIMER_PSC_DECL(base_address)                                         \
namespace psc{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Psc               :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Psc       , uint16_t                          )       \
    STM32_REGISTER_END                                                             \
};
#define STM32_TIMER_ARR_DECL(base_address)                                         \
namespace arr{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Arr               :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Arr       , uint16_t                          )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_RCR_DECL(base_address)                                         \
namespace rcr{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Rep               :   8;                                         \
        uint32_t  _res_08           :  24;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Rep       , uint8_t                          )        \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_CCR1_DECL(base_address)                                         \
namespace ccr1{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Ccr1              :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Ccr1      , uint16_t                          )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_CCR2_DECL(base_address)                                         \
namespace ccr2{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Ccr2              :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Ccr2      , uint16_t                          )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_CCR3_DECL(base_address)                                         \
namespace ccr3{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Ccr3              :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Ccr3      , uint16_t                          )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_CCR4_DECL(base_address)                                         \
namespace ccr4{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Ccr4              :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Ccr4      , uint16_t                          )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_BDTR_DECL(base_address)                                         \
namespace bdtr{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Dtg               :   8;                                         \
        uint32_t  Lock              :   2;                                         \
        uint32_t  Ossi              :   1;                                         \
        uint32_t  Ossr              :   1;                                         \
        uint32_t  Bke               :   1;                                         \
        uint32_t  Bkp               :   1;                                         \
        uint32_t  Aoe               :   1;                                         \
        uint32_t  Moe               :   1;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Dtg    , uint8_t                              )       \
        STM32_ACCESSOR_BF   (Lock   , ::stm32::registers::timer::LOCK      )       \
        STM32_ACCESSOR_BB   (Ossi   , 10                                   )       \
        STM32_ACCESSOR_BB   (Ossr   , 11                                   )       \
        STM32_ACCESSOR_BB   (Bke    , 12                                   )       \
        STM32_ACCESSOR_BB   (Bkp    , 13                                   )       \
        STM32_ACCESSOR_BB   (Aoe    , 14                                   )       \
        STM32_ACCESSOR_BB   (Moe    , 15                                   )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_DCR_DECL(base_address)                                         \
namespace dcr{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Dba               :   5;                                         \
        uint32_t  _res_05           :   3;                                         \
        uint32_t  Dbl               :   5;                                         \
        uint32_t  _res_13           :  19;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Dba    , uint32_t                             )       \
        STM32_ACCESSOR_BF   (Dbl    , uint32_t                             )       \
    STM32_REGISTER_END                                                             \
};

#define STM32_TIMER_DMAR_DECL(base_address)                                         \
namespace dmar{                                                                     \
    struct bitfield_t{                                                             \
        uint32_t  Dmab              :  16;                                         \
        uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM32_REGISTER_START(bitfield_t, base_address)                                 \
        STM32_ACCESSOR_BF   (Dmab   , uint16_t                             )       \
    STM32_REGISTER_END                                                             \
};


#define STM32_TIMER_DECL(base_address)           \
STM32_TIMER_CR1_DECL(base_address)               \
STM32_TIMER_CR2_DECL(base_address + 0x04)        \
STM32_TIMER_SMCR_DECL(base_address + 0x08)       \
STM32_TIMER_DIER_DECL(base_address + 0x0C)       \
STM32_TIMER_SR_DECL(base_address + 0x10)         \
STM32_TIMER_EGR_DECL(base_address + 0x14)        \
STM32_TIMER_CCMR1_DECL(base_address + 0x18)      \
STM32_TIMER_CCMR2_DECL(base_address + 0x1C)      \
STM32_TIMER_CCER_DECL(base_address + 0x20)       \
STM32_TIMER_CNT_DECL(base_address + 0x24)        \
STM32_TIMER_PSC_DECL(base_address + 0x28)        \
STM32_TIMER_ARR_DECL(base_address + 0x2C)        \
STM32_TIMER_RCR_DECL(base_address + 0x30)        \
STM32_TIMER_CCR1_DECL(base_address + 0x34)       \
STM32_TIMER_CCR2_DECL(base_address + 0x38)       \
STM32_TIMER_CCR3_DECL(base_address + 0x3C)       \
STM32_TIMER_CCR4_DECL(base_address + 0x40)       \
STM32_TIMER_BDTR_DECL(base_address + 0x44)       \
STM32_TIMER_DCR_DECL(base_address + 0x48)       \
STM32_TIMER_DMAR_DECL(base_address + 0x4C)       \


/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/
namespace stm32{
namespace registers{
namespace timer{
    enum class CMS : uint32_t{
        EDGE_ALIGNED                =   0,
        CENTER_ALIGNED_1            =   1,
        CENTER_ALIGNED_2            =   2,
        CENTER_ALIGNED_3            =   3,
    };
    enum class CKD : uint32_t{
        NO_DIV                      =   0,
        DIV_BY_2                    =   1,
        DIV_BY_4                    =   2,
        RESERVED                    =   3,
    };
    enum class MMS : uint32_t{
        RESET                       =   0,
        ENABLE                      =   1,
        UPDATE                      =   2,
        COMPARE_PULSE               =   3,
        COMPARE_OCR1REF             =   4,
        COMPARE_OCR2REF             =   5,
        COMPARE_OCR3REF             =   6,
        COMPARE_OCR4REF             =   7,
    };
    enum class TS : uint32_t{
        INTERNAL_TRIGGER_0          =   0,
        INTERNAL_TRIGGER_1          =   1,
        INTERNAL_TRIGGER_2          =   2,
        INTERNAL_TRIGGER_3          =   3,
        TI1_EDGE_DETECTOR           =   4,
        FILTERED_TIMER_INPUT_1      =   5,
        FILTERED_TIMER_INPUT_2      =   6,
        EXTERNAL_TRIGGER_INPUT      =   7,
    };
    enum class SMS : uint32_t{
        DISABLED                    =   0,
        ENCODER_MODE_1              =   1,
        ENCODER_MODE_2              =   2,
        ENCODER_MODE_3              =   3,
        RESET_MODE                  =   4,
        GATED_MODE                  =   5,
        TRIGGER_MODE                =   6,
        EXTERNAL_CLOCK_MODE_1       =   7,
    };
    enum class ETF : uint32_t{
        NO_FILTER                   =   0,
        CK_INT_PERIOD_TIMES_2       =   1,
        CK_INT_PERIOD_TIMES_4       =   2,
        CK_INT_PERIOD_TIMES_8       =   3,
        DTS_PERIOD_TIMES_12         =   4,
        DTS_PERIOD_TIMES_16         =   5,
        DTS_PERIOD_TIMES_24         =   6,
        DTS_PERIOD_TIMES_32         =   7,
        DTS_PERIOD_TIMES_48         =   8,
        DTS_PERIOD_TIMES_64         =   9,
        DTS_PERIOD_TIMES_80         =  10,
        DTS_PERIOD_TIMES_96         =  11,
        DTS_PERIOD_TIMES_128        =  12,
        DTS_PERIOD_TIMES_160        =  13,
        DTS_PERIOD_TIMES_190        =  14,
        DTS_PERIOD_TIMES_256        =  15,
    };
    enum class ETPS : uint32_t{
        NO_DIV                      =   0,
        ETRP_DIV_BY_2               =   1,
        ETRP_DIV_BY_4               =   2,
        ETRP_DIV_BY_8               =   3,
    };
    enum class CCS : uint32_t{
        OUTPUT                      =   0,
        INPUT_T1                    =   1,
        INPUT_T2                    =   2,
        INPUT_TRC                   =   3,
    };
    enum class ICPSC : uint32_t{
        CAPTURE_ALL                 =   0,
        CAPTURE_ONCE_EVERY_2        =   1,
        CAPTURE_ONCE_EVERY_4        =   2,
        CAPTURE_ONCE_EVERY_8        =   3,
    };
    enum class ICF : uint32_t{
        NO_FILTER                   =   0,
        CK_INT_PERIOD_TIMES_2       =   1,
        CK_INT_PERIOD_TIMES_4       =   2,
        CK_INT_PERIOD_TIMES_8       =   3,
        DTS_PERIOD_TIMES_12         =   4,
        DTS_PERIOD_TIMES_16         =   5,
        DTS_PERIOD_TIMES_24         =   6,
        DTS_PERIOD_TIMES_32         =   7,
        DTS_PERIOD_TIMES_48         =   8,
        DTS_PERIOD_TIMES_64         =   9,
        DTS_PERIOD_TIMES_80         =  10,
        DTS_PERIOD_TIMES_96         =  11,
        DTS_PERIOD_TIMES_128        =  12,
        DTS_PERIOD_TIMES_160        =  13,
        DTS_PERIOD_TIMES_190        =  14,
        DTS_PERIOD_TIMES_256        =  15,
    };
    enum class OCM : uint32_t{
        FROZEN                      =   0,
        ACTIVE_LEVEL_ON_MATCH       =   1,
        INACTIVE_LEVEL_ON_MATCH     =   2,
        TOGGLE_ON_MATCH             =   3,
        FORCE_INACTIVE_LEVEL        =   4,
        FORCE_ACTIVE_LEVEL          =   5,
        PWM_MODE_1                  =   6,
        PWM_MODE_2                  =   7,
    };
    enum class LOCK : uint32_t{
        OFF                         =   0,
        LEVEL_1                     =   1,
        LEVEL_2                     =   2,
        LEVEL_3                     =   3,
    };

namespace t1{
    STM32_TIMER_DECL(0x40012C00)
};
namespace t2{
    STM32_TIMER_DECL(0x40000000)
};
namespace t3{
    STM32_TIMER_DECL(0x40000400)
};
namespace t4{
    STM32_TIMER_DECL(0x40000800)
};
    

    
};
};
};

#endif // __STM32__REGISTER_TIMER_HPP__
