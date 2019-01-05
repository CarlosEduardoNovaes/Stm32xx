#ifndef __STM32__REGISTERS_HPP__
#define __STM32__REGISTERS_HPP__

#include <stdint.h>

/*******************************************************************************
 * Some ugly but usefull MACROS
 ******************************************************************************/

#define STM32_SETTER_BF(field_name,field_type) \
        inline static void set##field_name(field_type f){ \
            bitfield().field_name = static_cast<uint32_t>(f); \
        }
        
#define STM32_GETTER_BF(field_name,field_type) \
        inline static field_type get##field_name(){ \
            return static_cast<field_type>(bitfield().field_name); \
        }
        
#define STM32_ACCESSOR_BF(field_name,field_type) \
        STM32_GETTER_BF(field_name,field_type) \
        STM32_SETTER_BF(field_name,field_type)
        
#define STM32_SETTER_SBF(field_name,field_type) \
        inline static void set##field_name(field_type f){ \
            shadow_bitfield().field_name = static_cast<uint32_t>(f); \
        }
        
#define STM32_GETTER_SBF(field_name,field_type) \
        inline static field_type get##field_name(){ \
            return static_cast<field_type>(shadow_bitfield().field_name); \
        }
        
#define STM32_ACCESSOR_SBF(field_name,field_type) \
        STM32_GETTER_SBF(field_name,field_type) \
        STM32_SETTER_SBF(field_name,field_type)

#define STM32_CLEARER_BB(field_name, bit) \
        inline static void clear##field_name(){ \
            bitband(bit) = false; \
        }

#define STM32_SETTER_BB(field_name, bit) \
        inline static void set##field_name(bool f){ \
            bitband(bit) = f; \
        }

#define STM32_GETTER_BB(field_name, bit) \
        inline static bool get##field_name(){ \
            return bitband(bit);\
        }
        
#define STM32_TOGGLER_BB(field_name, bit) \
        inline static void toggle##field_name(){ \
            bitband(bit) = !bitband(bit); \
        }
        
#define STM32_ACCESSOR_BB(field_name, bit) \
        STM32_GETTER_BB(field_name, bit) \
        STM32_SETTER_BB(field_name, bit) \
        STM32_TOGGLER_BB(field_name, bit) 
        
#define STM32_REGISTER_START(bitfield_type, reg_address)                                    \
        class reg : public ::stm32::registers::BasicRegister<reg_address, bitfield_type>{   \
        public:                                                                             \
            reg(){};
            
#define STM32_REGISTER_SHADOW_START(bitfield_type, shadow_bitfield_type, reg_address)                                    \
        class reg : public ::stm32::registers::BasicRegister<reg_address, bitfield_type, shadow_bitfield_type>{   \
        public:                                                                             \
            reg(){};
        
#define STM32_REGISTER_END  };
          
            
/*******************************************************************************
 * Namespace declaration
 ******************************************************************************/

namespace stm32{
namespace registers{


// BasicRegister template declaration
template <uint32_t Address, typename ...DummyField> class BasicRegister;
// BasicRegister template specialization for one BitField
template <uint32_t Address, typename BitField>
class BasicRegister<Address, BitField>{
public:
    BasicRegister() { };
    inline static constexpr volatile uint32_t& value(){
        return *reinterpret_cast<volatile uint32_t*>(Address);
    };
    inline static constexpr volatile BitField& bitfield(){
        return *reinterpret_cast<volatile BitField*>(Address);
    };
    inline static constexpr volatile bool& bitband(uint32_t bit){
        return *reinterpret_cast<volatile bool*>(reinterpret_cast<volatile uint32_t*>(0x42000000+(Address-0x40000000)*32+bit*4));
    };    
};
//BasicRegister template declaration with Shadow BitField
template <uint32_t Address, typename BitField, typename ShadowBitField>
class BasicRegister<Address, BitField, ShadowBitField>{
public:
    BasicRegister() { };
    inline static constexpr volatile uint32_t& value(){
        return *reinterpret_cast<volatile uint32_t*>(Address);
    };
    inline static constexpr volatile BitField& bitfield(){
        return *reinterpret_cast<volatile BitField*>(Address);
    };
    inline static constexpr volatile ShadowBitField& shadow_bitfield(){
        return *reinterpret_cast<volatile ShadowBitField*>(Address);
    };
    inline static constexpr volatile bool& bitband(uint32_t bit){
        return *reinterpret_cast<volatile bool*>(reinterpret_cast<volatile uint32_t*>(0x42000000+(Address-0x40000000)*32+bit*4));
    };    
};

}; }; // End stm32::registers namespace

#endif // __STM32__REGISTERS_HPP__
