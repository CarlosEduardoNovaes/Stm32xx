#ifndef __STM__REGISTER_TIMER_HPP__
#define __STM__REGISTER_TIMER_HPP__

#include <stm/registers/registers.hpp>

#define STM_TIMER_CR1_DECL(base_address)                                               \
namespace cr1{                                                                          \
    struct bitfield_t{                                                                  \
        std::uint32_t  Cen               :   1;                                         \
        std::uint32_t  Udis              :   1;                                         \
        std::uint32_t  Urs               :   1;                                         \
        std::uint32_t  Opm               :   1;                                         \
        std::uint32_t  Dir               :   1;                                         \
        std::uint32_t  Cms               :   2;                                         \
        std::uint32_t  Arpe              :   1;                                         \
        std::uint32_t  Ckd               :   2;                                         \
        std::uint32_t  _res_10           :  22;                                         \
    };                                                                                  \
    STM_REGISTER_START(bitfield_t, base_address)                                        \
        STM_ACCESSOR_BB   (Cen       , 0                                 )            \
        STM_ACCESSOR_BB   (Udis      , 1                                 )            \
        STM_ACCESSOR_BB   (Urs       , 2                                 )            \
        STM_ACCESSOR_BB   (Opm       , 3                                 )            \
        STM_ACCESSOR_BB   (Dir       , 4                                 )            \
        STM_ACCESSOR_BF   (Cms       , ::stm::registers::timer::CMS    )            \
        STM_ACCESSOR_BB   (Arpe      , 7                                 )            \
        STM_ACCESSOR_BF   (Ckd       , ::stm::registers::timer::CKD     )            \
    STM_REGISTER_END                                                                  \
};

#define STM_TIMER_CR2_DECL(base_address)                                               \
namespace cr2{                                                                          \
    struct bitfield_t{                                                                  \
        std::uint32_t  Ccpc              :   1;                                         \
        std::uint32_t  _res_01           :   1;                                         \
        std::uint32_t  Ccus              :   1;                                         \
        std::uint32_t  Ccds              :   1;                                         \
        std::uint32_t  Mms               :   3;                                         \
        std::uint32_t  Ti1s              :   1;                                         \
        std::uint32_t  Ois1              :   1;                                         \
        std::uint32_t  Ois1n             :   1;                                         \
        std::uint32_t  Ois2              :   1;                                         \
        std::uint32_t  Ois2n             :   1;                                         \
        std::uint32_t  Ois3              :   1;                                         \
        std::uint32_t  Ois3n             :   1;                                         \
        std::uint32_t  Ois4              :   1;                                         \
        std::uint32_t  _res_15           :  17;                                         \
    };                                                                                  \
    STM_REGISTER_START(bitfield_t, base_address)                                        \
        STM_ACCESSOR_BB   (Ccpc      , 0                                 )            \
        STM_ACCESSOR_BB   (Ccus      , 2                                 )            \
        STM_ACCESSOR_BB   (Ccds      , 3                                 )            \
        STM_ACCESSOR_BF   (Mms       , ::stm::registers::timer::MMS    )            \
        STM_ACCESSOR_BB   (Ti1s      , 7                                 )            \
        STM_ACCESSOR_BB   (Ois1      , 8                                 )            \
        STM_ACCESSOR_BB   (Ois1n     , 9                                 )            \
        STM_ACCESSOR_BB   (Ois2      , 10                                )            \
        STM_ACCESSOR_BB   (Ois2n     , 11                                )            \
        STM_ACCESSOR_BB   (Ois3      , 12                                )            \
        STM_ACCESSOR_BB   (Ois3n     , 13                                )            \
        STM_ACCESSOR_BB   (Ois4      , 14                                )            \
    STM_REGISTER_END                                                                  \
};
#define STM_TIMER_SMCR_DECL(base_address)                                               \
namespace smcr{                                                                          \
    struct bitfield_t{                                                                  \
        std::uint32_t  Sms               :   3;                                         \
        std::uint32_t  _res_03           :   1;                                         \
        std::uint32_t  Ts                :   3;                                         \
        std::uint32_t  Msm               :   1;                                         \
        std::uint32_t  Etf               :   4;                                         \
        std::uint32_t  Etps              :   2;                                         \
        std::uint32_t  Ece               :   1;                                         \
        std::uint32_t  Etp               :   1;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                                  \
    STM_REGISTER_START(bitfield_t, base_address)                                        \
        STM_ACCESSOR_BF   (Sms       , ::stm::registers::timer::SMS    )            \
        STM_ACCESSOR_BF   (Ts        , ::stm::registers::timer::TS     )            \
        STM_ACCESSOR_BB   (Msm       , 7                                 )            \
        STM_ACCESSOR_BF   (Etf       , ::stm::registers::timer::ETF    )            \
        STM_ACCESSOR_BF   (Etps      , ::stm::registers::timer::ETPS   )            \
        STM_ACCESSOR_BB   (Ece       , 14                                )            \
        STM_ACCESSOR_BB   (Etp       , 15                                )            \
    STM_REGISTER_END                                                                  \
};
#define STM_TIMER_DIER_DECL(base_address)                                               \
namespace dier{                                                                          \
    struct bitfield_t{                                                                  \
        std::uint32_t  Uie               :   1;                                         \
        std::uint32_t  Cc1ie             :   1;                                         \
        std::uint32_t  Cc2ie             :   1;                                         \
        std::uint32_t  Cc3ie             :   1;                                         \
        std::uint32_t  Cc4ie             :   1;                                         \
        std::uint32_t  Comie             :   1;                                         \
        std::uint32_t  Tie               :   1;                                         \
        std::uint32_t  Bie               :   1;                                         \
        std::uint32_t  Ude               :   1;                                         \
        std::uint32_t  Cc1de             :   1;                                         \
        std::uint32_t  Cc2de             :   1;                                         \
        std::uint32_t  Cc3de             :   1;                                         \
        std::uint32_t  Cc4de             :   1;                                         \
        std::uint32_t  Comde             :   1;                                         \
        std::uint32_t  Tde               :   1;                                         \
        std::uint32_t  _res_15           :  17;                                         \
    };                                                                                  \
    STM_REGISTER_START(bitfield_t, base_address)                                        \
        STM_ACCESSOR_BB   (Uie       , 0                                 )            \
        STM_ACCESSOR_BB   (CC1ie     , 1                                 )            \
        STM_ACCESSOR_BB   (CC2ie     , 2                                 )            \
        STM_ACCESSOR_BB   (CC3ie     , 3                                 )            \
        STM_ACCESSOR_BB   (CC4ie     , 4                                 )            \
        STM_ACCESSOR_BB   (Comie     , 5                                 )            \
        STM_ACCESSOR_BB   (Tie       , 6                                 )            \
        STM_ACCESSOR_BB   (Bie       , 7                                 )            \
        STM_ACCESSOR_BB   (Ude       , 8                                 )            \
        STM_ACCESSOR_BB   (CC1de     , 9                                 )            \
        STM_ACCESSOR_BB   (CC2de     ,10                                 )            \
        STM_ACCESSOR_BB   (CC3de     ,11                                 )            \
        STM_ACCESSOR_BB   (CC4de     ,12                                 )            \
        STM_ACCESSOR_BB   (Comde     ,13                                 )            \
        STM_ACCESSOR_BB   (Tde       ,14                                 )            \
    STM_REGISTER_END                                                                  \
};

#define STM_TIMER_SR_DECL(base_address)                                               \
namespace sr{                                                                          \
    struct bitfield_t{                                                                  \
        std::uint32_t  Uif               :   1;                                         \
        std::uint32_t  Cc1if             :   1;                                         \
        std::uint32_t  Cc2if             :   1;                                         \
        std::uint32_t  Cc3if             :   1;                                         \
        std::uint32_t  Cc4if             :   1;                                         \
        std::uint32_t  Comif             :   1;                                         \
        std::uint32_t  Tif               :   1;                                         \
        std::uint32_t  Bif               :   1;                                         \
        std::uint32_t  _res_08           :   1;                                         \
        std::uint32_t  Cc1of             :   1;                                         \
        std::uint32_t  Cc2of             :   1;                                         \
        std::uint32_t  Cc3of             :   1;                                         \
        std::uint32_t  Cc4of             :   1;                                         \
        std::uint32_t  _res_13           :  19;                                         \
    };                                                                                  \
    STM_REGISTER_START(bitfield_t, base_address)                                        \
        STM_GETTER_BB   (Uif       , 0                                 )            \
        STM_GETTER_BB   (CC1if     , 1                                 )            \
        STM_GETTER_BB   (CC2if     , 2                                 )            \
        STM_GETTER_BB   (CC3if     , 3                                 )            \
        STM_GETTER_BB   (CC4if     , 4                                 )            \
        STM_GETTER_BB   (Comif     , 5                                 )            \
        STM_GETTER_BB   (Tif       , 6                                 )            \
        STM_GETTER_BB   (Bif       , 7                                 )            \
        STM_GETTER_BB   (CC1of     , 9                                 )            \
        STM_GETTER_BB   (CC2of     ,10                                 )            \
        STM_GETTER_BB   (CC3of     ,11                                 )            \
        STM_GETTER_BB   (CC4of     ,12                                 )            \
        STM_CLEARER_BB   (Uif       , 0                                 )            \
        STM_CLEARER_BB   (CC1if     , 1                                 )            \
        STM_CLEARER_BB   (CC2if     , 2                                 )            \
        STM_CLEARER_BB   (CC3if     , 3                                 )            \
        STM_CLEARER_BB   (CC4if     , 4                                 )            \
        STM_CLEARER_BB   (Comif     , 5                                 )            \
        STM_CLEARER_BB   (Tif       , 6                                 )            \
        STM_CLEARER_BB   (Bif       , 7                                 )            \
        STM_CLEARER_BB   (CC1of     , 9                                 )            \
        STM_CLEARER_BB   (CC2of     ,10                                 )            \
        STM_CLEARER_BB   (CC3of     ,11                                 )            \
        STM_CLEARER_BB   (CC4of     ,12                                 )            \
    STM_REGISTER_END                                                                  \
};

#define STM_TIMER_EGR_DECL(base_address)                                               \
namespace egr{                                                                          \
    struct bitfield_t{                                                                  \
        std::uint32_t  Ug                :   1;                                         \
        std::uint32_t  Cc1g              :   1;                                         \
        std::uint32_t  Cc2g              :   1;                                         \
        std::uint32_t  Cc3g              :   1;                                         \
        std::uint32_t  Cc4g              :   1;                                         \
        std::uint32_t  Comg              :   1;                                         \
        std::uint32_t  Tg                :   1;                                         \
        std::uint32_t  Bg                :   1;                                         \
        std::uint32_t  _res_8            :  24;                                         \
    };                                                                                  \
    STM_REGISTER_START(bitfield_t, base_address)                                        \
        STM_SETTER_BB   (Ug        , 0                                 )            \
        STM_SETTER_BB   (CC1g      , 1                                 )            \
        STM_SETTER_BB   (CC2g      , 2                                 )            \
        STM_SETTER_BB   (CC3g      , 3                                 )            \
        STM_SETTER_BB   (CC4g      , 4                                 )            \
        STM_SETTER_BB   (Comg      , 5                                 )            \
        STM_SETTER_BB   (Tg        , 6                                 )            \
        STM_SETTER_BB   (Bg        , 7                                 )            \
    STM_REGISTER_END                                                                  \
};

#define STM_TIMER_CCMR1_DECL(base_address)                                               \
namespace ccmr1{                                                                          \
    struct bitfield_t{                                                                  \
        std::uint32_t  Cc1s              :   2;                                         \
        std::uint32_t  Ic1psc            :   2;                                         \
        std::uint32_t  Ic1f              :   4;                                         \
        std::uint32_t  Cc2s              :   2;                                         \
        std::uint32_t  Ic2psc            :   2;                                         \
        std::uint32_t  Ic2f              :   4;                                         \
    };                                                                             \
    struct shadow_bitfield_t{                                                                  \
        std::uint32_t  Cc1s              :   2;                                         \
        std::uint32_t  Oc1fe             :   1;                                         \
        std::uint32_t  Oc1pe             :   1;                                         \
        std::uint32_t  Oc1m              :   3;                                         \
        std::uint32_t  Oc1ce             :   1;                                         \
        std::uint32_t  Cc2s              :   2;                                         \
        std::uint32_t  Oc2fe             :   1;                                         \
        std::uint32_t  Oc2pe             :   1;                                         \
        std::uint32_t  Oc2m              :   3;                                         \
        std::uint32_t  Oc2ce             :   1;                                         \
    };                                                                             \
    STM_REGISTER_SHADOW_START(bitfield_t, shadow_bitfield_t, base_address)       \
        STM_ACCESSOR_BF   (Cc1s      , ::stm::registers::timer::CCS    )       \
        STM_ACCESSOR_BF   (Ic1psc    , ::stm::registers::timer::ICPSC  )       \
        STM_ACCESSOR_BF   (Ic1f      , ::stm::registers::timer::ICF    )       \
        STM_ACCESSOR_BF   (Cc2s      , ::stm::registers::timer::CCS    )       \
        STM_ACCESSOR_BF   (Ic2psc    , ::stm::registers::timer::ICPSC  )       \
        STM_ACCESSOR_BF   (Ic2f      , ::stm::registers::timer::ICF    )       \
        STM_ACCESSOR_BB   (Oc1fe     , 2                                 )       \
        STM_ACCESSOR_BB   (Oc1pe     , 3                                 )       \
        STM_ACCESSOR_SBF  (Oc1m      , ::stm::registers::timer::OCM    )       \
        STM_ACCESSOR_BB   (Oc1ce     , 7                                 )       \
        STM_ACCESSOR_BB   (Oc2fe     , 2                                 )       \
        STM_ACCESSOR_BB   (Oc2pe     , 3                                 )       \
        STM_ACCESSOR_SBF  (Oc2m      , ::stm::registers::timer::OCM    )       \
        STM_ACCESSOR_BB   (Oc2ce     , 7                                 )       \
    STM_REGISTER_END                                                                  \
};

#define STM_TIMER_CCMR2_DECL(base_address)                                       \
namespace ccmr2{                                                                   \
    struct bitfield_t{                                                             \
        std::uint32_t  Cc3s              :   2;                                         \
        std::uint32_t  Ic3psc            :   2;                                         \
        std::uint32_t  Ic3f              :   4;                                         \
        std::uint32_t  Cc4s              :   2;                                         \
        std::uint32_t  Ic4psc            :   2;                                         \
        std::uint32_t  Ic4f              :   4;                                         \
    };                                                                             \
    struct shadow_bitfield_t{                                                      \
        std::uint32_t  Cc3s              :   2;                                         \
        std::uint32_t  Oc3fe             :   1;                                         \
        std::uint32_t  Oc3pe             :   1;                                         \
        std::uint32_t  Oc3m              :   3;                                         \
        std::uint32_t  Oc3ce             :   1;                                         \
        std::uint32_t  Cc4s              :   2;                                         \
        std::uint32_t  Oc4fe             :   1;                                         \
        std::uint32_t  Oc4pe             :   1;                                         \
        std::uint32_t  Oc4m              :   3;                                         \
        std::uint32_t  Oc4ce             :   1;                                         \
    };                                                                             \
    STM_REGISTER_SHADOW_START(bitfield_t, shadow_bitfield_t, base_address)       \
        STM_ACCESSOR_BF   (Cc3s      , ::stm::registers::timer::CCS    )       \
        STM_ACCESSOR_BF   (Ic3psc    , ::stm::registers::timer::ICPSC  )       \
        STM_ACCESSOR_BF   (Ic3f      , ::stm::registers::timer::ICF    )       \
        STM_ACCESSOR_BF   (Cc4s      , ::stm::registers::timer::CCS    )       \
        STM_ACCESSOR_BF   (Ic4psc    , ::stm::registers::timer::ICPSC  )       \
        STM_ACCESSOR_BF   (Ic4f      , ::stm::registers::timer::ICF    )       \
        STM_ACCESSOR_BB   (Oc3fe     , 2                                 )       \
        STM_ACCESSOR_BB   (Oc3pe     , 3                                 )       \
        STM_ACCESSOR_SBF  (Oc3m      , ::stm::registers::timer::OCM    )       \
        STM_ACCESSOR_BB   (Oc3ce     , 7                                 )       \
        STM_ACCESSOR_BB   (Oc4fe     , 2                                 )       \
        STM_ACCESSOR_BB   (Oc4pe     , 3                                 )       \
        STM_ACCESSOR_SBF  (Oc4m      , ::stm::registers::timer::OCM    )       \
        STM_ACCESSOR_BB   (Oc4ce     , 7                                 )       \
    STM_REGISTER_END                                                                  \
};

#define STM_TIMER_CCER_DECL(base_address)                                        \
namespace ccer{                                                                    \
    struct bitfield_t{                                                             \
        std::uint32_t  Cc1e              :   1;                                         \
        std::uint32_t  Cc1p              :   1;                                         \
        std::uint32_t  Cc1ne             :   1;                                         \
        std::uint32_t  Cc1np             :   1;                                         \
        std::uint32_t  Cc2e              :   1;                                         \
        std::uint32_t  Cc2p              :   1;                                         \
        std::uint32_t  Cc2ne             :   1;                                         \
        std::uint32_t  Cc2np             :   1;                                         \
        std::uint32_t  Cc3e              :   1;                                         \
        std::uint32_t  Cc3p              :   1;                                         \
        std::uint32_t  Cc3ne             :   1;                                         \
        std::uint32_t  Cc3np             :   1;                                         \
        std::uint32_t  Cc4e              :   1;                                         \
        std::uint32_t  Cc4p              :   1;                                         \
        std::uint32_t  _res_14           :  18;                                         \
    };                                                                                  \
    STM_REGISTER_START(bitfield_t, base_address)                                        \
        STM_ACCESSOR_BB   (Cc1e      , 0                                 )            \
        STM_ACCESSOR_BB   (Cc1p      , 1                                 )            \
        STM_ACCESSOR_BB   (Cc1ne     , 2                                 )            \
        STM_ACCESSOR_BB   (Cc1np     , 3                                 )            \
        STM_ACCESSOR_BB   (Cc2e      , 4                                 )            \
        STM_ACCESSOR_BB   (Cc2p      , 5                                 )            \
        STM_ACCESSOR_BB   (Cc2ne     , 6                                 )            \
        STM_ACCESSOR_BB   (Cc2np     , 7                                 )            \
        STM_ACCESSOR_BB   (Cc3e      , 8                                 )            \
        STM_ACCESSOR_BB   (Cc3p      , 9                                 )            \
        STM_ACCESSOR_BB   (Cc3ne     ,10                                 )            \
        STM_ACCESSOR_BB   (Cc3np     ,11                                 )            \
        STM_ACCESSOR_BB   (Cc4e      ,12                                 )            \
        STM_ACCESSOR_BB   (Cc4p      ,13                                 )            \
    STM_REGISTER_END                                                                  \
};

#define STM_TIMER_CNT_DECL(base_address)                                         \
namespace cnt{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Cnt               :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Cnt       , uint16_t                          )       \
    STM_REGISTER_END                                                             \
};
#define STM_TIMER_PSC_DECL(base_address)                                         \
namespace psc{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Psc               :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Psc       , uint16_t                          )       \
    STM_REGISTER_END                                                             \
};
#define STM_TIMER_ARR_DECL(base_address)                                         \
namespace arr{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Arr               :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Arr       , uint16_t                          )       \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_RCR_DECL(base_address)                                         \
namespace rcr{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Rep               :   8;                                         \
        std::uint32_t  _res_08           :  24;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Rep       , uint8_t                          )        \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_CCR1_DECL(base_address)                                         \
namespace ccr1{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Ccr1              :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Ccr1      , uint16_t                          )       \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_CCR2_DECL(base_address)                                         \
namespace ccr2{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Ccr2              :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Ccr2      , uint16_t                          )       \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_CCR3_DECL(base_address)                                         \
namespace ccr3{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Ccr3              :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Ccr3      , uint16_t                          )       \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_CCR4_DECL(base_address)                                         \
namespace ccr4{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Ccr4              :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Ccr4      , uint16_t                          )       \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_BDTR_DECL(base_address)                                         \
namespace bdtr{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Dtg               :   8;                                         \
        std::uint32_t  Lock              :   2;                                         \
        std::uint32_t  Ossi              :   1;                                         \
        std::uint32_t  Ossr              :   1;                                         \
        std::uint32_t  Bke               :   1;                                         \
        std::uint32_t  Bkp               :   1;                                         \
        std::uint32_t  Aoe               :   1;                                         \
        std::uint32_t  Moe               :   1;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Dtg    , uint8_t                              )       \
        STM_ACCESSOR_BF   (Lock   , ::stm::registers::timer::LOCK      )       \
        STM_ACCESSOR_BB   (Ossi   , 10                                   )       \
        STM_ACCESSOR_BB   (Ossr   , 11                                   )       \
        STM_ACCESSOR_BB   (Bke    , 12                                   )       \
        STM_ACCESSOR_BB   (Bkp    , 13                                   )       \
        STM_ACCESSOR_BB   (Aoe    , 14                                   )       \
        STM_ACCESSOR_BB   (Moe    , 15                                   )       \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_DCR_DECL(base_address)                                         \
namespace dcr{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Dba               :   5;                                         \
        std::uint32_t  _res_05           :   3;                                         \
        std::uint32_t  Dbl               :   5;                                         \
        std::uint32_t  _res_13           :  19;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Dba    , std::uint32_t                             )       \
        STM_ACCESSOR_BF   (Dbl    , std::uint32_t                             )       \
    STM_REGISTER_END                                                             \
};

#define STM_TIMER_DMAR_DECL(base_address)                                         \
namespace dmar{                                                                     \
    struct bitfield_t{                                                             \
        std::uint32_t  Dmab              :  16;                                         \
        std::uint32_t  _res_16           :  16;                                         \
    };                                                                             \
    STM_REGISTER_START(bitfield_t, base_address)                                 \
        STM_ACCESSOR_BF   (Dmab   , uint16_t                             )       \
    STM_REGISTER_END                                                             \
};


#define STM_TIMER_DECL(base_address)           \
STM_TIMER_CR1_DECL(base_address)               \
STM_TIMER_CR2_DECL(base_address + 0x04)        \
STM_TIMER_SMCR_DECL(base_address + 0x08)       \
STM_TIMER_DIER_DECL(base_address + 0x0C)       \
STM_TIMER_SR_DECL(base_address + 0x10)         \
STM_TIMER_EGR_DECL(base_address + 0x14)        \
STM_TIMER_CCMR1_DECL(base_address + 0x18)      \
STM_TIMER_CCMR2_DECL(base_address + 0x1C)      \
STM_TIMER_CCER_DECL(base_address + 0x20)       \
STM_TIMER_CNT_DECL(base_address + 0x24)        \
STM_TIMER_PSC_DECL(base_address + 0x28)        \
STM_TIMER_ARR_DECL(base_address + 0x2C)        \
STM_TIMER_RCR_DECL(base_address + 0x30)        \
STM_TIMER_CCR1_DECL(base_address + 0x34)       \
STM_TIMER_CCR2_DECL(base_address + 0x38)       \
STM_TIMER_CCR3_DECL(base_address + 0x3C)       \
STM_TIMER_CCR4_DECL(base_address + 0x40)       \
STM_TIMER_BDTR_DECL(base_address + 0x44)       \
STM_TIMER_DCR_DECL(base_address + 0x48)       \
STM_TIMER_DMAR_DECL(base_address + 0x4C)       \


/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/
namespace stm{
namespace registers{
namespace timer{
    enum class CMS : std::uint32_t{
        EDGE_ALIGNED                =   0,
        CENTER_ALIGNED_1            =   1,
        CENTER_ALIGNED_2            =   2,
        CENTER_ALIGNED_3            =   3,
    };
    enum class CKD : std::uint32_t{
        NO_DIV                      =   0,
        DIV_BY_2                    =   1,
        DIV_BY_4                    =   2,
        RESERVED                    =   3,
    };
    enum class MMS : std::uint32_t{
        RESET                       =   0,
        ENABLE                      =   1,
        UPDATE                      =   2,
        COMPARE_PULSE               =   3,
        COMPARE_OCR1REF             =   4,
        COMPARE_OCR2REF             =   5,
        COMPARE_OCR3REF             =   6,
        COMPARE_OCR4REF             =   7,
    };
    enum class TS : std::uint32_t{
        INTERNAL_TRIGGER_0          =   0,
        INTERNAL_TRIGGER_1          =   1,
        INTERNAL_TRIGGER_2          =   2,
        INTERNAL_TRIGGER_3          =   3,
        TI1_EDGE_DETECTOR           =   4,
        FILTERED_TIMER_INPUT_1      =   5,
        FILTERED_TIMER_INPUT_2      =   6,
        EXTERNAL_TRIGGER_INPUT      =   7,
    };
    enum class SMS : std::uint32_t{
        DISABLED                    =   0,
        ENCODER_MODE_1              =   1,
        ENCODER_MODE_2              =   2,
        ENCODER_MODE_3              =   3,
        RESET_MODE                  =   4,
        GATED_MODE                  =   5,
        TRIGGER_MODE                =   6,
        EXTERNAL_CLOCK_MODE_1       =   7,
    };
    enum class ETF : std::uint32_t{
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
    enum class ETPS : std::uint32_t{
        NO_DIV                      =   0,
        ETRP_DIV_BY_2               =   1,
        ETRP_DIV_BY_4               =   2,
        ETRP_DIV_BY_8               =   3,
    };
    enum class CCS : std::uint32_t{
        OUTPUT                      =   0,
        INPUT_NORMAL                =   1,
        INPUT_SWAP                  =   2,
        INPUT_TRC                   =   3,
        INPUT_TI1IC1                =   1,
        INPUT_TI2IC2                =   1,
        INPUT_TI3IC3                =   1,
        INPUT_TI4IC4                =   1,
        INPUT_TI1IC2                =   2,
        INPUT_TI2IC1                =   2,
        INPUT_TI3IC4                =   2,
        INPUT_TI4IC2                =   2,
    };
    enum class ICPSC : std::uint32_t{
        CAPTURE_ALL                 =   0,
        CAPTURE_ONCE_EVERY_2        =   1,
        CAPTURE_ONCE_EVERY_4        =   2,
        CAPTURE_ONCE_EVERY_8        =   3,
    };
    enum class ICF : std::uint32_t{
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
    enum class OCM : std::uint32_t{
        FROZEN                      =   0,
        ACTIVE_LEVEL_ON_MATCH       =   1,
        INACTIVE_LEVEL_ON_MATCH     =   2,
        TOGGLE_ON_MATCH             =   3,
        FORCE_INACTIVE_LEVEL        =   4,
        FORCE_ACTIVE_LEVEL          =   5,
        PWM_MODE_1                  =   6,
        PWM_MODE_2                  =   7,
    };
    enum class LOCK : std::uint32_t{
        OFF                         =   0,
        LEVEL_1                     =   1,
        LEVEL_2                     =   2,
        LEVEL_3                     =   3,
    };

namespace t1{
    STM_TIMER_DECL(0x40012C00)
};
namespace t2{
    STM_TIMER_DECL(0x40000000)
};
namespace t3{
    STM_TIMER_DECL(0x40000400)
};
namespace t4{
    STM_TIMER_DECL(0x40000800)
};
    

    
};
};
};

#endif // __STM__REGISTER_TIMER_HPP__
