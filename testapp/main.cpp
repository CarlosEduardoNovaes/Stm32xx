#include <stm32xx/registers/rcc_lmhxl.hpp>


// #include "../include/hal/rcc.h"
// #include "../include/hal/gpio.h"
// 
// 
// #define STM32XX_SETTER_BF(field_name,field_type) \
//         inline static void set##field_name(field_type f){ \
//             bitfield().field_name = f; \
//         }
//         
// #define STM32XX_GETTER_BF(field_name,field_type) \
//         inline static field_type get##field_name(){ \
//             return static_cast<field_type>(bitfield().field_name); \
//         }
//         
// #define STM32XX_ACCESSOR_BF(field_name,field_type) \
//         STM32XX_GETTER_BF(field_name,field_type) \
//         STM32XX_SETTER_BF(field_name,field_type)
// 
// #define STM32XX_SETTER_BB(field_name, bit) \
//         inline static void set##field_name(bool f){ \
//             bitband(bit) = f; \
//         }
// 
// #define STM32XX_GETTER_BB(field_name, bit) \
//         inline static bool get##field_name(){ \
//             return bitband(bit);\
//         }
//         
// #define STM32XX_TOGGLER_BB(field_name, bit) \
//         inline static void toggle##field_name(){ \
//             bitband(bit) = !bitband(bit); \
//         }
//         
// #define STM32XX_ACCESSOR_BB(field_name, bit) \
//         STM32XX_GETTER_BB(field_name, bit) \
//         STM32XX_SETTER_BB(field_name, bit) \
//         STM32XX_TOGGLER_BB(field_name, bit) 
//         
// #define STM32XX_REGISTER_START(bitfield_type, reg_address)                          \
//         class reg : public ::internals::BasicRegister<bitfield_type, reg_address>{  \
//         public:                                                                     \
//             reg(){};
//         
// #define STM32XX_REGISTER_END  };
//             
// namespace internals{
//     
// template <typename BitField, uint32_t Address>
// class BasicRegister{
// public:
//     //static constexpr uint32_t _address = Address;
//     
// public:
//     BasicRegister() { };
//     inline static constexpr volatile uint32_t& value(){
//         return *reinterpret_cast<volatile uint32_t*>(Address);
//     };
//     inline static constexpr volatile BitField& bitfield(){
//         return *reinterpret_cast<volatile BitField*>(Address);
//     };
//     inline static constexpr volatile bool& bitband(uint32_t bit){
//         return *reinterpret_cast<volatile bool*>(reinterpret_cast<volatile uint32_t*>(0x42000000+(Address-0x40000000)*32+bit*4));
//     };
//     
// };
// 
// };








using namespace stm32::registers;


int main(void) {
    //stm32::registers::rcc_cr::reg::value() = 10;
    rcc_cfrg::reg::setAdcpre(rcc_cfrg::ADCPRE::PCLK_DIV_BY_6);
//     //myreg::reg::value() = (myreg::reg::value() & (0xFFFFFF00)) | 2;
//     //myreg::reg::bitfield().Field0=2;
//     myreg::reg::setBits0(true);
//     myreg::reg::setField0(myreg::Field0::CONFIG_D);
//     temp = myreg::reg::getField0();
//     myreg::reg::toggleBits0();
    //return myreg::reg::value();
};
