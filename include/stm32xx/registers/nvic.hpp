#ifndef __STM32__REGISTER_NVIC_HPP__
#define __STM32__REGISTER_NVIC_HPP__

#include <stm32xx/registers/registers.hpp>

#define STM32_SETTER_BF_BITCLEAR(field_name,field_type) \
        inline static void clr##field_name(field_type f){ \
            bitfield().field_name = static_cast<uint32_t>(f); \
        }
#define STM32_ACCESSOR_BF_BITCLEAR(field_name,field_type) \
        STM32_GETTER_BF(field_name,field_type) \
        STM32_SETTER_BF_BITCLEAR(field_name,field_type)

/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm32{
namespace registers{

// NVIC_ISER Register
namespace nvic_iser{
    struct bitfield_t{
        uint32_t  Ena00          :   1;  // 00
        uint32_t  Ena01          :   1;  // 00
        uint32_t  Ena02          :   1;  // 00
        uint32_t  Ena03          :   1;  // 00
        uint32_t  Ena04          :   1;  // 00
        uint32_t  Ena05          :   1;  // 00
        uint32_t  Ena06          :   1;  // 00
        uint32_t  Ena07          :   1;  // 00
        uint32_t  Ena08          :   1;  // 00
        uint32_t  Ena09          :   1;  // 00
        uint32_t  Ena10          :   1;  // 00
        uint32_t  Ena11          :   1;  // 00
        uint32_t  Ena12          :   1;  // 00
        uint32_t  Ena13          :   1;  // 00
        uint32_t  Ena14          :   1;  // 00
        uint32_t  Ena15          :   1;  // 00
        uint32_t  Ena16          :   1;  // 00
        uint32_t  Ena17          :   1;  // 00
        uint32_t  Ena18          :   1;  // 00
        uint32_t  Ena19          :   1;  // 00
        uint32_t  Ena20          :   1;  // 00
        uint32_t  Ena21          :   1;  // 00
        uint32_t  Ena22          :   1;  // 00
        uint32_t  Ena23          :   1;  // 00
        uint32_t  Ena24          :   1;  // 00
        uint32_t  Ena25          :   1;  // 00
        uint32_t  Ena26          :   1;  // 00
        uint32_t  Ena27          :   1;  // 00
        uint32_t  Ena28          :   1;  // 00
        uint32_t  Ena29          :   1;  // 00
        uint32_t  Ena30          :   1;  // 00
        uint32_t  Ena31          :   1;  // 00
        uint32_t  Ena32          :   1;  // 00
        uint32_t  Ena33          :   1;  // 00
        uint32_t  Ena34          :   1;  // 00
        uint32_t  Ena35          :   1;  // 00
        uint32_t  Ena36          :   1;  // 00
        uint32_t  Ena37          :   1;  // 00
        uint32_t  Ena38          :   1;  // 00
        uint32_t  Ena39          :   1;  // 00
        uint32_t  Ena40          :   1;  // 00
        uint32_t  Ena41          :   1;  // 00
        uint32_t  Ena42          :   1;  // 00
        uint32_t  Ena43          :   1;  // 00
        uint32_t  Ena44          :   1;  // 00
        uint32_t  Ena45          :   1;  // 00
        uint32_t  Ena46          :   1;  // 00
        uint32_t  Ena47          :   1;  // 00
        uint32_t  Ena48          :   1;  // 00
        uint32_t  Ena49          :   1;  // 00
        uint32_t  Ena50          :   1;  // 00
        uint32_t  Ena51          :   1;  // 00
        uint32_t  Ena52          :   1;  // 00
        uint32_t  Ena53          :   1;  // 00
        uint32_t  Ena54          :   1;  // 00
        uint32_t  Ena55          :   1;  // 00
        uint32_t  Ena56          :   1;  // 00
        uint32_t  Ena57          :   1;  // 00
        uint32_t  Ena58          :   1;  // 00
        uint32_t  Ena59          :   1;  // 00
        uint32_t  Ena60          :   1;  // 00
        uint32_t  Ena61          :   1;  // 00
        uint32_t  Ena62          :   1;  // 00
        uint32_t  Ena63          :   1;  // 00
        uint32_t  Ena64          :   1;  // 00
        uint32_t  Ena65          :   1;  // 00
        uint32_t  Ena66          :   1;  // 00
        uint32_t  Ena67          :   1;  // 00
        uint32_t  Ena68          :   1;  // 00
        uint32_t  Ena69          :   1;  // 00
        uint32_t  Ena70          :   1;  // 00
        uint32_t  Ena71          :   1;  // 00
        uint32_t  Ena72          :   1;  // 00
        uint32_t  Ena73          :   1;  // 00
        uint32_t  Ena74          :   1;  // 00
        uint32_t  Ena75          :   1;  // 00
        uint32_t  Ena76          :   1;  // 00
        uint32_t  Ena77          :   1;  // 00
        uint32_t  Ena78          :   1;  // 00
        uint32_t  Ena79          :   1;  // 00
        uint32_t  Ena80          :   1;  // 00
        uint32_t  _res_17           :  15;  // 00
    };
    
    STM32_REGISTER_START(bitfield_t, 0xE000E100)
        STM32_ACCESSOR_BF(Ena00   ,  bool)
        STM32_ACCESSOR_BF(Ena01   ,  bool)
        STM32_ACCESSOR_BF(Ena02   ,  bool)
        STM32_ACCESSOR_BF(Ena03   ,  bool)
        STM32_ACCESSOR_BF(Ena04   ,  bool)
        STM32_ACCESSOR_BF(Ena05   ,  bool)
        STM32_ACCESSOR_BF(Ena06   ,  bool)
        STM32_ACCESSOR_BF(Ena07   ,  bool)
        STM32_ACCESSOR_BF(Ena08   ,  bool)
        STM32_ACCESSOR_BF(Ena09   ,  bool)
        STM32_ACCESSOR_BF(Ena10   ,  bool)
        STM32_ACCESSOR_BF(Ena11   ,  bool)
        STM32_ACCESSOR_BF(Ena12   ,  bool)
        STM32_ACCESSOR_BF(Ena13   ,  bool)
        STM32_ACCESSOR_BF(Ena14   ,  bool)
        STM32_ACCESSOR_BF(Ena15   ,  bool)
        STM32_ACCESSOR_BF(Ena16   ,  bool)
        STM32_ACCESSOR_BF(Ena17   ,  bool)
        STM32_ACCESSOR_BF(Ena18   ,  bool)
        STM32_ACCESSOR_BF(Ena19   ,  bool)
        STM32_ACCESSOR_BF(Ena20   ,  bool)
        STM32_ACCESSOR_BF(Ena21   ,  bool)
        STM32_ACCESSOR_BF(Ena22   ,  bool)
        STM32_ACCESSOR_BF(Ena23   ,  bool)
        STM32_ACCESSOR_BF(Ena24   ,  bool)
        STM32_ACCESSOR_BF(Ena25   ,  bool)
        STM32_ACCESSOR_BF(Ena26   ,  bool)
        STM32_ACCESSOR_BF(Ena27   ,  bool)
        STM32_ACCESSOR_BF(Ena28   ,  bool)
        STM32_ACCESSOR_BF(Ena29   ,  bool)
        STM32_ACCESSOR_BF(Ena30   ,  bool)
        STM32_ACCESSOR_BF(Ena31   ,  bool)
        STM32_ACCESSOR_BF(Ena32   ,  bool)
        STM32_ACCESSOR_BF(Ena33   ,  bool)
        STM32_ACCESSOR_BF(Ena34   ,  bool)
        STM32_ACCESSOR_BF(Ena35   ,  bool)
        STM32_ACCESSOR_BF(Ena36   ,  bool)
        STM32_ACCESSOR_BF(Ena37   ,  bool)
        STM32_ACCESSOR_BF(Ena38   ,  bool)
        STM32_ACCESSOR_BF(Ena39   ,  bool)
        STM32_ACCESSOR_BF(Ena40   ,  bool)
        STM32_ACCESSOR_BF(Ena41   ,  bool)
        STM32_ACCESSOR_BF(Ena42   ,  bool)
        STM32_ACCESSOR_BF(Ena43   ,  bool)
        STM32_ACCESSOR_BF(Ena44   ,  bool)
        STM32_ACCESSOR_BF(Ena45   ,  bool)
        STM32_ACCESSOR_BF(Ena46   ,  bool)
        STM32_ACCESSOR_BF(Ena47   ,  bool)
        STM32_ACCESSOR_BF(Ena48   ,  bool)
        STM32_ACCESSOR_BF(Ena49   ,  bool)
        STM32_ACCESSOR_BF(Ena50   ,  bool)
        STM32_ACCESSOR_BF(Ena51   ,  bool)
        STM32_ACCESSOR_BF(Ena52   ,  bool)
        STM32_ACCESSOR_BF(Ena53   ,  bool)
        STM32_ACCESSOR_BF(Ena54   ,  bool)
        STM32_ACCESSOR_BF(Ena55   ,  bool)
        STM32_ACCESSOR_BF(Ena56   ,  bool)
        STM32_ACCESSOR_BF(Ena57   ,  bool)
        STM32_ACCESSOR_BF(Ena58   ,  bool)
        STM32_ACCESSOR_BF(Ena59   ,  bool)
        STM32_ACCESSOR_BF(Ena60   ,  bool)
        STM32_ACCESSOR_BF(Ena61   ,  bool)
        STM32_ACCESSOR_BF(Ena62   ,  bool)
        STM32_ACCESSOR_BF(Ena63   ,  bool)
        STM32_ACCESSOR_BF(Ena64   ,  bool)
        STM32_ACCESSOR_BF(Ena65   ,  bool)
        STM32_ACCESSOR_BF(Ena66   ,  bool)
        STM32_ACCESSOR_BF(Ena67   ,  bool)
        STM32_ACCESSOR_BF(Ena68   ,  bool)
        STM32_ACCESSOR_BF(Ena69   ,  bool)
        STM32_ACCESSOR_BF(Ena70   ,  bool)
        STM32_ACCESSOR_BF(Ena71   ,  bool)
        STM32_ACCESSOR_BF(Ena72   ,  bool)
        STM32_ACCESSOR_BF(Ena73   ,  bool)
        STM32_ACCESSOR_BF(Ena74   ,  bool)
        STM32_ACCESSOR_BF(Ena75   ,  bool)
        STM32_ACCESSOR_BF(Ena76   ,  bool)
        STM32_ACCESSOR_BF(Ena77   ,  bool)
        STM32_ACCESSOR_BF(Ena78   ,  bool)
        STM32_ACCESSOR_BF(Ena79   ,  bool)
        STM32_ACCESSOR_BF(Ena80   ,  bool)
    STM32_REGISTER_END
};


// NVIC_ICER Register
namespace nvic_icer{
    struct bitfield_t{
        uint32_t  Ena00          :   1;  // 00
        uint32_t  Ena01          :   1;  // 00
        uint32_t  Ena02          :   1;  // 00
        uint32_t  Ena03          :   1;  // 00
        uint32_t  Ena04          :   1;  // 00
        uint32_t  Ena05          :   1;  // 00
        uint32_t  Ena06          :   1;  // 00
        uint32_t  Ena07          :   1;  // 00
        uint32_t  Ena08          :   1;  // 00
        uint32_t  Ena09          :   1;  // 00
        uint32_t  Ena10          :   1;  // 00
        uint32_t  Ena11          :   1;  // 00
        uint32_t  Ena12          :   1;  // 00
        uint32_t  Ena13          :   1;  // 00
        uint32_t  Ena14          :   1;  // 00
        uint32_t  Ena15          :   1;  // 00
        uint32_t  Ena16          :   1;  // 00
        uint32_t  Ena17          :   1;  // 00
        uint32_t  Ena18          :   1;  // 00
        uint32_t  Ena19          :   1;  // 00
        uint32_t  Ena20          :   1;  // 00
        uint32_t  Ena21          :   1;  // 00
        uint32_t  Ena22          :   1;  // 00
        uint32_t  Ena23          :   1;  // 00
        uint32_t  Ena24          :   1;  // 00
        uint32_t  Ena25          :   1;  // 00
        uint32_t  Ena26          :   1;  // 00
        uint32_t  Ena27          :   1;  // 00
        uint32_t  Ena28          :   1;  // 00
        uint32_t  Ena29          :   1;  // 00
        uint32_t  Ena30          :   1;  // 00
        uint32_t  Ena31          :   1;  // 00
        uint32_t  Ena32          :   1;  // 00
        uint32_t  Ena33          :   1;  // 00
        uint32_t  Ena34          :   1;  // 00
        uint32_t  Ena35          :   1;  // 00
        uint32_t  Ena36          :   1;  // 00
        uint32_t  Ena37          :   1;  // 00
        uint32_t  Ena38          :   1;  // 00
        uint32_t  Ena39          :   1;  // 00
        uint32_t  Ena40          :   1;  // 00
        uint32_t  Ena41          :   1;  // 00
        uint32_t  Ena42          :   1;  // 00
        uint32_t  Ena43          :   1;  // 00
        uint32_t  Ena44          :   1;  // 00
        uint32_t  Ena45          :   1;  // 00
        uint32_t  Ena46          :   1;  // 00
        uint32_t  Ena47          :   1;  // 00
        uint32_t  Ena48          :   1;  // 00
        uint32_t  Ena49          :   1;  // 00
        uint32_t  Ena50          :   1;  // 00
        uint32_t  Ena51          :   1;  // 00
        uint32_t  Ena52          :   1;  // 00
        uint32_t  Ena53          :   1;  // 00
        uint32_t  Ena54          :   1;  // 00
        uint32_t  Ena55          :   1;  // 00
        uint32_t  Ena56          :   1;  // 00
        uint32_t  Ena57          :   1;  // 00
        uint32_t  Ena58          :   1;  // 00
        uint32_t  Ena59          :   1;  // 00
        uint32_t  Ena60          :   1;  // 00
        uint32_t  Ena61          :   1;  // 00
        uint32_t  Ena62          :   1;  // 00
        uint32_t  Ena63          :   1;  // 00
        uint32_t  Ena64          :   1;  // 00
        uint32_t  Ena65          :   1;  // 00
        uint32_t  Ena66          :   1;  // 00
        uint32_t  Ena67          :   1;  // 00
        uint32_t  Ena68          :   1;  // 00
        uint32_t  Ena69          :   1;  // 00
        uint32_t  Ena70          :   1;  // 00
        uint32_t  Ena71          :   1;  // 00
        uint32_t  Ena72          :   1;  // 00
        uint32_t  Ena73          :   1;  // 00
        uint32_t  Ena74          :   1;  // 00
        uint32_t  Ena75          :   1;  // 00
        uint32_t  Ena76          :   1;  // 00
        uint32_t  Ena77          :   1;  // 00
        uint32_t  Ena78          :   1;  // 00
        uint32_t  Ena79          :   1;  // 00
        uint32_t  Ena80          :   1;  // 00
        uint32_t  _res_17           :  15;  // 00
    };
    
    STM32_REGISTER_START(bitfield_t, 0xE000E180)
        STM32_ACCESSOR_BF_BITCLEAR(Ena00   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena01   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena02   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena03   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena04   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena05   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena06   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena07   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena08   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena09   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena10   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena11   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena12   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena13   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena14   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena15   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena16   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena17   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena18   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena19   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena20   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena21   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena22   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena23   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena24   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena25   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena26   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena27   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena28   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena29   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena30   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena31   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena32   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena33   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena34   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena35   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena36   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena37   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena38   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena39   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena40   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena41   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena42   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena43   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena44   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena45   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena46   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena47   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena48   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena49   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena50   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena51   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena52   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena53   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena54   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena55   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena56   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena57   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena58   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena59   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena60   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena61   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena62   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena63   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena64   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena65   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena66   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena67   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena68   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena69   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena70   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena71   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena72   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena73   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena74   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena75   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena76   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena77   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena78   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena79   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Ena80   ,  bool)
    STM32_REGISTER_END
};


// NVIC_ISPR Register
namespace nvic_ispr{
    struct bitfield_t{
        uint32_t  Pend00          :   1;  // 00
        uint32_t  Pend01          :   1;  // 00
        uint32_t  Pend02          :   1;  // 00
        uint32_t  Pend03          :   1;  // 00
        uint32_t  Pend04          :   1;  // 00
        uint32_t  Pend05          :   1;  // 00
        uint32_t  Pend06          :   1;  // 00
        uint32_t  Pend07          :   1;  // 00
        uint32_t  Pend08          :   1;  // 00
        uint32_t  Pend09          :   1;  // 00
        uint32_t  Pend10          :   1;  // 00
        uint32_t  Pend11          :   1;  // 00
        uint32_t  Pend12          :   1;  // 00
        uint32_t  Pend13          :   1;  // 00
        uint32_t  Pend14          :   1;  // 00
        uint32_t  Pend15          :   1;  // 00
        uint32_t  Pend16          :   1;  // 00
        uint32_t  Pend17          :   1;  // 00
        uint32_t  Pend18          :   1;  // 00
        uint32_t  Pend19          :   1;  // 00
        uint32_t  Pend20          :   1;  // 00
        uint32_t  Pend21          :   1;  // 00
        uint32_t  Pend22          :   1;  // 00
        uint32_t  Pend23          :   1;  // 00
        uint32_t  Pend24          :   1;  // 00
        uint32_t  Pend25          :   1;  // 00
        uint32_t  Pend26          :   1;  // 00
        uint32_t  Pend27          :   1;  // 00
        uint32_t  Pend28          :   1;  // 00
        uint32_t  Pend29          :   1;  // 00
        uint32_t  Pend30          :   1;  // 00
        uint32_t  Pend31          :   1;  // 00
        uint32_t  Pend32          :   1;  // 00
        uint32_t  Pend33          :   1;  // 00
        uint32_t  Pend34          :   1;  // 00
        uint32_t  Pend35          :   1;  // 00
        uint32_t  Pend36          :   1;  // 00
        uint32_t  Pend37          :   1;  // 00
        uint32_t  Pend38          :   1;  // 00
        uint32_t  Pend39          :   1;  // 00
        uint32_t  Pend40          :   1;  // 00
        uint32_t  Pend41          :   1;  // 00
        uint32_t  Pend42          :   1;  // 00
        uint32_t  Pend43          :   1;  // 00
        uint32_t  Pend44          :   1;  // 00
        uint32_t  Pend45          :   1;  // 00
        uint32_t  Pend46          :   1;  // 00
        uint32_t  Pend47          :   1;  // 00
        uint32_t  Pend48          :   1;  // 00
        uint32_t  Pend49          :   1;  // 00
        uint32_t  Pend50          :   1;  // 00
        uint32_t  Pend51          :   1;  // 00
        uint32_t  Pend52          :   1;  // 00
        uint32_t  Pend53          :   1;  // 00
        uint32_t  Pend54          :   1;  // 00
        uint32_t  Pend55          :   1;  // 00
        uint32_t  Pend56          :   1;  // 00
        uint32_t  Pend57          :   1;  // 00
        uint32_t  Pend58          :   1;  // 00
        uint32_t  Pend59          :   1;  // 00
        uint32_t  Pend60          :   1;  // 00
        uint32_t  Pend61          :   1;  // 00
        uint32_t  Pend62          :   1;  // 00
        uint32_t  Pend63          :   1;  // 00
        uint32_t  Pend64          :   1;  // 00
        uint32_t  Pend65          :   1;  // 00
        uint32_t  Pend66          :   1;  // 00
        uint32_t  Pend67          :   1;  // 00
        uint32_t  Pend68          :   1;  // 00
        uint32_t  Pend69          :   1;  // 00
        uint32_t  Pend70          :   1;  // 00
        uint32_t  Pend71          :   1;  // 00
        uint32_t  Pend72          :   1;  // 00
        uint32_t  Pend73          :   1;  // 00
        uint32_t  Pend74          :   1;  // 00
        uint32_t  Pend75          :   1;  // 00
        uint32_t  Pend76          :   1;  // 00
        uint32_t  Pend77          :   1;  // 00
        uint32_t  Pend78          :   1;  // 00
        uint32_t  Pend79          :   1;  // 00
        uint32_t  Pend80          :   1;  // 00
        uint32_t  _res_17           :  15;  // 00
    };
    
    STM32_REGISTER_START(bitfield_t, 0xE000E200)
        STM32_ACCESSOR_BF(Pend00   ,  bool)
        STM32_ACCESSOR_BF(Pend01   ,  bool)
        STM32_ACCESSOR_BF(Pend02   ,  bool)
        STM32_ACCESSOR_BF(Pend03   ,  bool)
        STM32_ACCESSOR_BF(Pend04   ,  bool)
        STM32_ACCESSOR_BF(Pend05   ,  bool)
        STM32_ACCESSOR_BF(Pend06   ,  bool)
        STM32_ACCESSOR_BF(Pend07   ,  bool)
        STM32_ACCESSOR_BF(Pend08   ,  bool)
        STM32_ACCESSOR_BF(Pend09   ,  bool)
        STM32_ACCESSOR_BF(Pend10   ,  bool)
        STM32_ACCESSOR_BF(Pend11   ,  bool)
        STM32_ACCESSOR_BF(Pend12   ,  bool)
        STM32_ACCESSOR_BF(Pend13   ,  bool)
        STM32_ACCESSOR_BF(Pend14   ,  bool)
        STM32_ACCESSOR_BF(Pend15   ,  bool)
        STM32_ACCESSOR_BF(Pend16   ,  bool)
        STM32_ACCESSOR_BF(Pend17   ,  bool)
        STM32_ACCESSOR_BF(Pend18   ,  bool)
        STM32_ACCESSOR_BF(Pend19   ,  bool)
        STM32_ACCESSOR_BF(Pend20   ,  bool)
        STM32_ACCESSOR_BF(Pend21   ,  bool)
        STM32_ACCESSOR_BF(Pend22   ,  bool)
        STM32_ACCESSOR_BF(Pend23   ,  bool)
        STM32_ACCESSOR_BF(Pend24   ,  bool)
        STM32_ACCESSOR_BF(Pend25   ,  bool)
        STM32_ACCESSOR_BF(Pend26   ,  bool)
        STM32_ACCESSOR_BF(Pend27   ,  bool)
        STM32_ACCESSOR_BF(Pend28   ,  bool)
        STM32_ACCESSOR_BF(Pend29   ,  bool)
        STM32_ACCESSOR_BF(Pend30   ,  bool)
        STM32_ACCESSOR_BF(Pend31   ,  bool)
        STM32_ACCESSOR_BF(Pend32   ,  bool)
        STM32_ACCESSOR_BF(Pend33   ,  bool)
        STM32_ACCESSOR_BF(Pend34   ,  bool)
        STM32_ACCESSOR_BF(Pend35   ,  bool)
        STM32_ACCESSOR_BF(Pend36   ,  bool)
        STM32_ACCESSOR_BF(Pend37   ,  bool)
        STM32_ACCESSOR_BF(Pend38   ,  bool)
        STM32_ACCESSOR_BF(Pend39   ,  bool)
        STM32_ACCESSOR_BF(Pend40   ,  bool)
        STM32_ACCESSOR_BF(Pend41   ,  bool)
        STM32_ACCESSOR_BF(Pend42   ,  bool)
        STM32_ACCESSOR_BF(Pend43   ,  bool)
        STM32_ACCESSOR_BF(Pend44   ,  bool)
        STM32_ACCESSOR_BF(Pend45   ,  bool)
        STM32_ACCESSOR_BF(Pend46   ,  bool)
        STM32_ACCESSOR_BF(Pend47   ,  bool)
        STM32_ACCESSOR_BF(Pend48   ,  bool)
        STM32_ACCESSOR_BF(Pend49   ,  bool)
        STM32_ACCESSOR_BF(Pend50   ,  bool)
        STM32_ACCESSOR_BF(Pend51   ,  bool)
        STM32_ACCESSOR_BF(Pend52   ,  bool)
        STM32_ACCESSOR_BF(Pend53   ,  bool)
        STM32_ACCESSOR_BF(Pend54   ,  bool)
        STM32_ACCESSOR_BF(Pend55   ,  bool)
        STM32_ACCESSOR_BF(Pend56   ,  bool)
        STM32_ACCESSOR_BF(Pend57   ,  bool)
        STM32_ACCESSOR_BF(Pend58   ,  bool)
        STM32_ACCESSOR_BF(Pend59   ,  bool)
        STM32_ACCESSOR_BF(Pend60   ,  bool)
        STM32_ACCESSOR_BF(Pend61   ,  bool)
        STM32_ACCESSOR_BF(Pend62   ,  bool)
        STM32_ACCESSOR_BF(Pend63   ,  bool)
        STM32_ACCESSOR_BF(Pend64   ,  bool)
        STM32_ACCESSOR_BF(Pend65   ,  bool)
        STM32_ACCESSOR_BF(Pend66   ,  bool)
        STM32_ACCESSOR_BF(Pend67   ,  bool)
        STM32_ACCESSOR_BF(Pend68   ,  bool)
        STM32_ACCESSOR_BF(Pend69   ,  bool)
        STM32_ACCESSOR_BF(Pend70   ,  bool)
        STM32_ACCESSOR_BF(Pend71   ,  bool)
        STM32_ACCESSOR_BF(Pend72   ,  bool)
        STM32_ACCESSOR_BF(Pend73   ,  bool)
        STM32_ACCESSOR_BF(Pend74   ,  bool)
        STM32_ACCESSOR_BF(Pend75   ,  bool)
        STM32_ACCESSOR_BF(Pend76   ,  bool)
        STM32_ACCESSOR_BF(Pend77   ,  bool)
        STM32_ACCESSOR_BF(Pend78   ,  bool)
        STM32_ACCESSOR_BF(Pend79   ,  bool)
        STM32_ACCESSOR_BF(Pend80   ,  bool)
    STM32_REGISTER_END
};

// NVIC_ICPR Register
namespace nvic_icpr{
    struct bitfield_t{
        uint32_t  Pend00          :   1;  // 00
        uint32_t  Pend01          :   1;  // 00
        uint32_t  Pend02          :   1;  // 00
        uint32_t  Pend03          :   1;  // 00
        uint32_t  Pend04          :   1;  // 00
        uint32_t  Pend05          :   1;  // 00
        uint32_t  Pend06          :   1;  // 00
        uint32_t  Pend07          :   1;  // 00
        uint32_t  Pend08          :   1;  // 00
        uint32_t  Pend09          :   1;  // 00
        uint32_t  Pend10          :   1;  // 00
        uint32_t  Pend11          :   1;  // 00
        uint32_t  Pend12          :   1;  // 00
        uint32_t  Pend13          :   1;  // 00
        uint32_t  Pend14          :   1;  // 00
        uint32_t  Pend15          :   1;  // 00
        uint32_t  Pend16          :   1;  // 00
        uint32_t  Pend17          :   1;  // 00
        uint32_t  Pend18          :   1;  // 00
        uint32_t  Pend19          :   1;  // 00
        uint32_t  Pend20          :   1;  // 00
        uint32_t  Pend21          :   1;  // 00
        uint32_t  Pend22          :   1;  // 00
        uint32_t  Pend23          :   1;  // 00
        uint32_t  Pend24          :   1;  // 00
        uint32_t  Pend25          :   1;  // 00
        uint32_t  Pend26          :   1;  // 00
        uint32_t  Pend27          :   1;  // 00
        uint32_t  Pend28          :   1;  // 00
        uint32_t  Pend29          :   1;  // 00
        uint32_t  Pend30          :   1;  // 00
        uint32_t  Pend31          :   1;  // 00
        uint32_t  Pend32          :   1;  // 00
        uint32_t  Pend33          :   1;  // 00
        uint32_t  Pend34          :   1;  // 00
        uint32_t  Pend35          :   1;  // 00
        uint32_t  Pend36          :   1;  // 00
        uint32_t  Pend37          :   1;  // 00
        uint32_t  Pend38          :   1;  // 00
        uint32_t  Pend39          :   1;  // 00
        uint32_t  Pend40          :   1;  // 00
        uint32_t  Pend41          :   1;  // 00
        uint32_t  Pend42          :   1;  // 00
        uint32_t  Pend43          :   1;  // 00
        uint32_t  Pend44          :   1;  // 00
        uint32_t  Pend45          :   1;  // 00
        uint32_t  Pend46          :   1;  // 00
        uint32_t  Pend47          :   1;  // 00
        uint32_t  Pend48          :   1;  // 00
        uint32_t  Pend49          :   1;  // 00
        uint32_t  Pend50          :   1;  // 00
        uint32_t  Pend51          :   1;  // 00
        uint32_t  Pend52          :   1;  // 00
        uint32_t  Pend53          :   1;  // 00
        uint32_t  Pend54          :   1;  // 00
        uint32_t  Pend55          :   1;  // 00
        uint32_t  Pend56          :   1;  // 00
        uint32_t  Pend57          :   1;  // 00
        uint32_t  Pend58          :   1;  // 00
        uint32_t  Pend59          :   1;  // 00
        uint32_t  Pend60          :   1;  // 00
        uint32_t  Pend61          :   1;  // 00
        uint32_t  Pend62          :   1;  // 00
        uint32_t  Pend63          :   1;  // 00
        uint32_t  Pend64          :   1;  // 00
        uint32_t  Pend65          :   1;  // 00
        uint32_t  Pend66          :   1;  // 00
        uint32_t  Pend67          :   1;  // 00
        uint32_t  Pend68          :   1;  // 00
        uint32_t  Pend69          :   1;  // 00
        uint32_t  Pend70          :   1;  // 00
        uint32_t  Pend71          :   1;  // 00
        uint32_t  Pend72          :   1;  // 00
        uint32_t  Pend73          :   1;  // 00
        uint32_t  Pend74          :   1;  // 00
        uint32_t  Pend75          :   1;  // 00
        uint32_t  Pend76          :   1;  // 00
        uint32_t  Pend77          :   1;  // 00
        uint32_t  Pend78          :   1;  // 00
        uint32_t  Pend79          :   1;  // 00
        uint32_t  Pend80          :   1;  // 00
        uint32_t  _res_17           :  15;  // 00
    };
    
    STM32_REGISTER_START(bitfield_t, 0xE000E280)
        STM32_ACCESSOR_BF_BITCLEAR(Pend00   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend01   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend02   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend03   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend04   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend05   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend06   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend07   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend08   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend09   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend10   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend11   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend12   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend13   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend14   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend15   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend16   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend17   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend18   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend19   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend20   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend21   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend22   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend23   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend24   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend25   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend26   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend27   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend28   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend29   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend30   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend31   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend32   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend33   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend34   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend35   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend36   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend37   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend38   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend39   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend40   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend41   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend42   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend43   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend44   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend45   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend46   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend47   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend48   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend49   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend50   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend51   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend52   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend53   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend54   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend55   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend56   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend57   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend58   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend59   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend60   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend61   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend62   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend63   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend64   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend65   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend66   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend67   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend68   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend69   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend70   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend71   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend72   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend73   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend74   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend75   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend76   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend77   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend78   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend79   ,  bool)
        STM32_ACCESSOR_BF_BITCLEAR(Pend80   ,  bool)
    STM32_REGISTER_END
};


// NVIC_IABR Register
namespace nvic_iabr{
    struct bitfield_t{
        uint32_t  Active00          :   1;  // 00
        uint32_t  Active01          :   1;  // 00
        uint32_t  Active02          :   1;  // 00
        uint32_t  Active03          :   1;  // 00
        uint32_t  Active04          :   1;  // 00
        uint32_t  Active05          :   1;  // 00
        uint32_t  Active06          :   1;  // 00
        uint32_t  Active07          :   1;  // 00
        uint32_t  Active08          :   1;  // 00
        uint32_t  Active09          :   1;  // 00
        uint32_t  Active10          :   1;  // 00
        uint32_t  Active11          :   1;  // 00
        uint32_t  Active12          :   1;  // 00
        uint32_t  Active13          :   1;  // 00
        uint32_t  Active14          :   1;  // 00
        uint32_t  Active15          :   1;  // 00
        uint32_t  Active16          :   1;  // 00
        uint32_t  Active17          :   1;  // 00
        uint32_t  Active18          :   1;  // 00
        uint32_t  Active19          :   1;  // 00
        uint32_t  Active20          :   1;  // 00
        uint32_t  Active21          :   1;  // 00
        uint32_t  Active22          :   1;  // 00
        uint32_t  Active23          :   1;  // 00
        uint32_t  Active24          :   1;  // 00
        uint32_t  Active25          :   1;  // 00
        uint32_t  Active26          :   1;  // 00
        uint32_t  Active27          :   1;  // 00
        uint32_t  Active28          :   1;  // 00
        uint32_t  Active29          :   1;  // 00
        uint32_t  Active30          :   1;  // 00
        uint32_t  Active31          :   1;  // 00
        uint32_t  Active32          :   1;  // 00
        uint32_t  Active33          :   1;  // 00
        uint32_t  Active34          :   1;  // 00
        uint32_t  Active35          :   1;  // 00
        uint32_t  Active36          :   1;  // 00
        uint32_t  Active37          :   1;  // 00
        uint32_t  Active38          :   1;  // 00
        uint32_t  Active39          :   1;  // 00
        uint32_t  Active40          :   1;  // 00
        uint32_t  Active41          :   1;  // 00
        uint32_t  Active42          :   1;  // 00
        uint32_t  Active43          :   1;  // 00
        uint32_t  Active44          :   1;  // 00
        uint32_t  Active45          :   1;  // 00
        uint32_t  Active46          :   1;  // 00
        uint32_t  Active47          :   1;  // 00
        uint32_t  Active48          :   1;  // 00
        uint32_t  Active49          :   1;  // 00
        uint32_t  Active50          :   1;  // 00
        uint32_t  Active51          :   1;  // 00
        uint32_t  Active52          :   1;  // 00
        uint32_t  Active53          :   1;  // 00
        uint32_t  Active54          :   1;  // 00
        uint32_t  Active55          :   1;  // 00
        uint32_t  Active56          :   1;  // 00
        uint32_t  Active57          :   1;  // 00
        uint32_t  Active58          :   1;  // 00
        uint32_t  Active59          :   1;  // 00
        uint32_t  Active60          :   1;  // 00
        uint32_t  Active61          :   1;  // 00
        uint32_t  Active62          :   1;  // 00
        uint32_t  Active63          :   1;  // 00
        uint32_t  Active64          :   1;  // 00
        uint32_t  Active65          :   1;  // 00
        uint32_t  Active66          :   1;  // 00
        uint32_t  Active67          :   1;  // 00
        uint32_t  Active68          :   1;  // 00
        uint32_t  Active69          :   1;  // 00
        uint32_t  Active70          :   1;  // 00
        uint32_t  Active71          :   1;  // 00
        uint32_t  Active72          :   1;  // 00
        uint32_t  Active73          :   1;  // 00
        uint32_t  Active74          :   1;  // 00
        uint32_t  Active75          :   1;  // 00
        uint32_t  Active76          :   1;  // 00
        uint32_t  Active77          :   1;  // 00
        uint32_t  Active78          :   1;  // 00
        uint32_t  Active79          :   1;  // 00
        uint32_t  Active80          :   1;  // 00
        uint32_t  _res_17           :  15;  // 00
    };
    
    STM32_REGISTER_START(bitfield_t, 0xE000E300)
        STM32_ACCESSOR_BF(Active00   ,  bool)
        STM32_ACCESSOR_BF(Active01   ,  bool)
        STM32_ACCESSOR_BF(Active02   ,  bool)
        STM32_ACCESSOR_BF(Active03   ,  bool)
        STM32_ACCESSOR_BF(Active04   ,  bool)
        STM32_ACCESSOR_BF(Active05   ,  bool)
        STM32_ACCESSOR_BF(Active06   ,  bool)
        STM32_ACCESSOR_BF(Active07   ,  bool)
        STM32_ACCESSOR_BF(Active08   ,  bool)
        STM32_ACCESSOR_BF(Active09   ,  bool)
        STM32_ACCESSOR_BF(Active10   ,  bool)
        STM32_ACCESSOR_BF(Active11   ,  bool)
        STM32_ACCESSOR_BF(Active12   ,  bool)
        STM32_ACCESSOR_BF(Active13   ,  bool)
        STM32_ACCESSOR_BF(Active14   ,  bool)
        STM32_ACCESSOR_BF(Active15   ,  bool)
        STM32_ACCESSOR_BF(Active16   ,  bool)
        STM32_ACCESSOR_BF(Active17   ,  bool)
        STM32_ACCESSOR_BF(Active18   ,  bool)
        STM32_ACCESSOR_BF(Active19   ,  bool)
        STM32_ACCESSOR_BF(Active20   ,  bool)
        STM32_ACCESSOR_BF(Active21   ,  bool)
        STM32_ACCESSOR_BF(Active22   ,  bool)
        STM32_ACCESSOR_BF(Active23   ,  bool)
        STM32_ACCESSOR_BF(Active24   ,  bool)
        STM32_ACCESSOR_BF(Active25   ,  bool)
        STM32_ACCESSOR_BF(Active26   ,  bool)
        STM32_ACCESSOR_BF(Active27   ,  bool)
        STM32_ACCESSOR_BF(Active28   ,  bool)
        STM32_ACCESSOR_BF(Active29   ,  bool)
        STM32_ACCESSOR_BF(Active30   ,  bool)
        STM32_ACCESSOR_BF(Active31   ,  bool)
        STM32_ACCESSOR_BF(Active32   ,  bool)
        STM32_ACCESSOR_BF(Active33   ,  bool)
        STM32_ACCESSOR_BF(Active34   ,  bool)
        STM32_ACCESSOR_BF(Active35   ,  bool)
        STM32_ACCESSOR_BF(Active36   ,  bool)
        STM32_ACCESSOR_BF(Active37   ,  bool)
        STM32_ACCESSOR_BF(Active38   ,  bool)
        STM32_ACCESSOR_BF(Active39   ,  bool)
        STM32_ACCESSOR_BF(Active40   ,  bool)
        STM32_ACCESSOR_BF(Active41   ,  bool)
        STM32_ACCESSOR_BF(Active42   ,  bool)
        STM32_ACCESSOR_BF(Active43   ,  bool)
        STM32_ACCESSOR_BF(Active44   ,  bool)
        STM32_ACCESSOR_BF(Active45   ,  bool)
        STM32_ACCESSOR_BF(Active46   ,  bool)
        STM32_ACCESSOR_BF(Active47   ,  bool)
        STM32_ACCESSOR_BF(Active48   ,  bool)
        STM32_ACCESSOR_BF(Active49   ,  bool)
        STM32_ACCESSOR_BF(Active50   ,  bool)
        STM32_ACCESSOR_BF(Active51   ,  bool)
        STM32_ACCESSOR_BF(Active52   ,  bool)
        STM32_ACCESSOR_BF(Active53   ,  bool)
        STM32_ACCESSOR_BF(Active54   ,  bool)
        STM32_ACCESSOR_BF(Active55   ,  bool)
        STM32_ACCESSOR_BF(Active56   ,  bool)
        STM32_ACCESSOR_BF(Active57   ,  bool)
        STM32_ACCESSOR_BF(Active58   ,  bool)
        STM32_ACCESSOR_BF(Active59   ,  bool)
        STM32_ACCESSOR_BF(Active60   ,  bool)
        STM32_ACCESSOR_BF(Active61   ,  bool)
        STM32_ACCESSOR_BF(Active62   ,  bool)
        STM32_ACCESSOR_BF(Active63   ,  bool)
        STM32_ACCESSOR_BF(Active64   ,  bool)
        STM32_ACCESSOR_BF(Active65   ,  bool)
        STM32_ACCESSOR_BF(Active66   ,  bool)
        STM32_ACCESSOR_BF(Active67   ,  bool)
        STM32_ACCESSOR_BF(Active68   ,  bool)
        STM32_ACCESSOR_BF(Active69   ,  bool)
        STM32_ACCESSOR_BF(Active70   ,  bool)
        STM32_ACCESSOR_BF(Active71   ,  bool)
        STM32_ACCESSOR_BF(Active72   ,  bool)
        STM32_ACCESSOR_BF(Active73   ,  bool)
        STM32_ACCESSOR_BF(Active74   ,  bool)
        STM32_ACCESSOR_BF(Active75   ,  bool)
        STM32_ACCESSOR_BF(Active76   ,  bool)
        STM32_ACCESSOR_BF(Active77   ,  bool)
        STM32_ACCESSOR_BF(Active78   ,  bool)
        STM32_ACCESSOR_BF(Active79   ,  bool)
        STM32_ACCESSOR_BF(Active80   ,  bool)
    STM32_REGISTER_END
};

// NVIC_IPR Register
namespace nvic_ipr{
    struct bitfield_t{
        uint32_t  _res_00           :   4;  // 00
        uint32_t    Ipr00           :   4;  // 00
        uint32_t  _res_01           :   4;  // 00
        uint32_t    Ipr01           :   4;  // 00
        uint32_t  _res_02           :   4;  // 00
        uint32_t    Ipr02           :   4;  // 00
        uint32_t  _res_03           :   4;  // 00
        uint32_t    Ipr03           :   4;  // 00
        uint32_t  _res_04           :   4;  // 00
        uint32_t    Ipr04           :   4;  // 00
        uint32_t  _res_05           :   4;  // 00
        uint32_t    Ipr05           :   4;  // 00
        uint32_t  _res_06           :   4;  // 00
        uint32_t    Ipr06           :   4;  // 00
        uint32_t  _res_07           :   4;  // 00
        uint32_t    Ipr07           :   4;  // 00
        uint32_t  _res_08           :   4;  // 00
        uint32_t    Ipr08           :   4;  // 00
        uint32_t  _res_09           :   4;  // 00
        uint32_t    Ipr09           :   4;  // 00
        uint32_t  _res_10           :   4;  // 00
        uint32_t    Ipr10           :   4;  // 00
        uint32_t  _res_11           :   4;  // 00
        uint32_t    Ipr11           :   4;  // 00
        uint32_t  _res_12           :   4;  // 00
        uint32_t    Ipr12           :   4;  // 00
        uint32_t  _res_13           :   4;  // 00
        uint32_t    Ipr13           :   4;  // 00
        uint32_t  _res_14           :   4;  // 00
        uint32_t    Ipr14           :   4;  // 00
        uint32_t  _res_15           :   4;  // 00
        uint32_t    Ipr15           :   4;  // 00
        uint32_t  _res_16           :   4;  // 00
        uint32_t    Ipr16           :   4;  // 00
        uint32_t  _res_17           :   4;  // 00
        uint32_t    Ipr17           :   4;  // 00
        uint32_t  _res_18           :   4;  // 00
        uint32_t    Ipr18           :   4;  // 00
        uint32_t  _res_19           :   4;  // 00
        uint32_t    Ipr19           :   4;  // 00
        uint32_t  _res_20           :   4;  // 00
        uint32_t    Ipr20           :   4;  // 00
        uint32_t  _res_21           :   4;  // 00
        uint32_t    Ipr21           :   4;  // 00
        uint32_t  _res_22           :   4;  // 00
        uint32_t    Ipr22           :   4;  // 00
        uint32_t  _res_23           :   4;  // 00
        uint32_t    Ipr23           :   4;  // 00
        uint32_t  _res_24           :   4;  // 00
        uint32_t    Ipr24           :   4;  // 00
        uint32_t  _res_25           :   4;  // 00
        uint32_t    Ipr25           :   4;  // 00
        uint32_t  _res_26           :   4;  // 00
        uint32_t    Ipr26           :   4;  // 00
        uint32_t  _res_27           :   4;  // 00
        uint32_t    Ipr27           :   4;  // 00
        uint32_t  _res_28           :   4;  // 00
        uint32_t    Ipr28           :   4;  // 00
        uint32_t  _res_29           :   4;  // 00
        uint32_t    Ipr29           :   4;  // 00
        uint32_t  _res_30           :   4;  // 00
        uint32_t    Ipr30           :   4;  // 00
        uint32_t  _res_31           :   4;  // 00
        uint32_t    Ipr31           :   4;  // 00
        uint32_t  _res_32           :   4;  // 00
        uint32_t    Ipr32           :   4;  // 00
        uint32_t  _res_33           :   4;  // 00
        uint32_t    Ipr33           :   4;  // 00
        uint32_t  _res_34           :   4;  // 00
        uint32_t    Ipr34           :   4;  // 00
        uint32_t  _res_35           :   4;  // 00
        uint32_t    Ipr35           :   4;  // 00
        uint32_t  _res_36           :   4;  // 00
        uint32_t    Ipr36           :   4;  // 00
        uint32_t  _res_37           :   4;  // 00
        uint32_t    Ipr37           :   4;  // 00
        uint32_t  _res_38           :   4;  // 00
        uint32_t    Ipr38           :   4;  // 00
        uint32_t  _res_39           :   4;  // 00
        uint32_t    Ipr39           :   4;  // 00
        uint32_t  _res_40           :   4;  // 00
        uint32_t    Ipr40           :   4;  // 00
        uint32_t  _res_41           :   4;  // 00
        uint32_t    Ipr41           :   4;  // 00
        uint32_t  _res_42           :   4;  // 00
        uint32_t    Ipr42           :   4;  // 00
        uint32_t  _res_43           :   4;  // 00
        uint32_t    Ipr43           :   4;  // 00
        uint32_t  _res_44           :   4;  // 00
        uint32_t    Ipr44           :   4;  // 00
        uint32_t  _res_45           :   4;  // 00
        uint32_t    Ipr45           :   4;  // 00
        uint32_t  _res_46           :   4;  // 00
        uint32_t    Ipr46           :   4;  // 00
        uint32_t  _res_47           :   4;  // 00
        uint32_t    Ipr47           :   4;  // 00
        uint32_t  _res_48           :   4;  // 00
        uint32_t    Ipr48           :   4;  // 00
        uint32_t  _res_49           :   4;  // 00
        uint32_t    Ipr49           :   4;  // 00
        uint32_t  _res_50           :   4;  // 00
        uint32_t    Ipr50           :   4;  // 00
        uint32_t  _res_51           :   4;  // 00
        uint32_t    Ipr51           :   4;  // 00
        uint32_t  _res_52           :   4;  // 00
        uint32_t    Ipr52           :   4;  // 00
        uint32_t  _res_53           :   4;  // 00
        uint32_t    Ipr53           :   4;  // 00
        uint32_t  _res_54           :   4;  // 00
        uint32_t    Ipr54           :   4;  // 00
        uint32_t  _res_55           :   4;  // 00
        uint32_t    Ipr55           :   4;  // 00
        uint32_t  _res_56           :   4;  // 00
        uint32_t    Ipr56           :   4;  // 00
        uint32_t  _res_57           :   4;  // 00
        uint32_t    Ipr57           :   4;  // 00
        uint32_t  _res_58           :   4;  // 00
        uint32_t    Ipr58           :   4;  // 00
        uint32_t  _res_59           :   4;  // 00
        uint32_t    Ipr59           :   4;  // 00
        uint32_t  _res_60           :   4;  // 00
        uint32_t    Ipr60           :   4;  // 00
        uint32_t  _res_61           :   4;  // 00
        uint32_t    Ipr61           :   4;  // 00
        uint32_t  _res_62           :   4;  // 00
        uint32_t    Ipr62           :   4;  // 00
        uint32_t  _res_63           :   4;  // 00
        uint32_t    Ipr63           :   4;  // 00
        uint32_t  _res_64           :   4;  // 00
        uint32_t    Ipr64           :   4;  // 00
        uint32_t  _res_65           :   4;  // 00
        uint32_t    Ipr65           :   4;  // 00
        uint32_t  _res_66           :   4;  // 00
        uint32_t    Ipr66           :   4;  // 00
        uint32_t  _res_67           :   4;  // 00
        uint32_t    Ipr67           :   4;  // 00
        uint32_t  _res_68           :   4;  // 00
        uint32_t    Ipr68           :   4;  // 00
        uint32_t  _res_69           :   4;  // 00
        uint32_t    Ipr69           :   4;  // 00
        uint32_t  _res_70           :   4;  // 00
        uint32_t    Ipr70           :   4;  // 00
        uint32_t  _res_71           :   4;  // 00
        uint32_t    Ipr71           :   4;  // 00
        uint32_t  _res_72           :   4;  // 00
        uint32_t    Ipr72           :   4;  // 00
        uint32_t  _res_73           :   4;  // 00
        uint32_t    Ipr73           :   4;  // 00
        uint32_t  _res_74           :   4;  // 00
        uint32_t    Ipr74           :   4;  // 00
        uint32_t  _res_75           :   4;  // 00
        uint32_t    Ipr75           :   4;  // 00
        uint32_t  _res_76           :   4;  // 00
        uint32_t    Ipr76           :   4;  // 00
        uint32_t  _res_77           :   4;  // 00
        uint32_t    Ipr77           :   4;  // 00
        uint32_t  _res_78           :   4;  // 00
        uint32_t    Ipr78           :   4;  // 00
        uint32_t  _res_79           :   4;  // 00
        uint32_t    Ipr79           :   4;  // 00
        uint32_t  _res_80           :   4;  // 00
        uint32_t    Ipr80           :   4;  // 00
        uint32_t  _res_pad          :  24;  // 00
    };
    
    STM32_REGISTER_START(bitfield_t, 0xE000E400)
        STM32_ACCESSOR_BF(Ipr00      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr01      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr02      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr03      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr04      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr05      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr06      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr07      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr08      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr09      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr10      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr11      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr12      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr13      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr14      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr15      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr16      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr17      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr18      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr19      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr20      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr21      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr22      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr23      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr24      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr25      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr26      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr27      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr28      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr29      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr30      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr31      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr32      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr33      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr34      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr35      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr36      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr37      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr38      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr39      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr40      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr41      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr42      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr43      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr44      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr45      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr46      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr47      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr48      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr49      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr50      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr51      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr52      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr53      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr54      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr55      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr56      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr57      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr58      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr59      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr60      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr61      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr62      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr63      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr64      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr65      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr66      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr67      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr68      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr69      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr70      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr71      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr72      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr73      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr74      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr75      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr76      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr77      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr78      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr79      ,  uint8_t)
        STM32_ACCESSOR_BF(Ipr80      ,  uint8_t)        
    STM32_REGISTER_END
};


};
};
#endif  // __STM32__REGISTER_NVIC_HPP__
