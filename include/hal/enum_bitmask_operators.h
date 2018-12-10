#ifndef __STM32_ENUM_BITMASK_OPERATORS_H__
#define __STM32_ENUM_BITMASK_OPERATORS_H__

#include <stdint.h>
#include "type_traits.h"

// macro to enable Bit Mask Operators with some enum classes
#define ENABLE_BITMASK_OPERATORS(x)  \
template<>                           \
struct EnableBitMaskOperators<x>     \
{                                    \
    static const bool enable = true; \
};

namespace stm32{

    template<typename Enum>
    struct EnableBitMaskOperators{
        static const bool enable = false;
    };

    // bitwise NOT operator
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, Enum>::type
    constexpr inline operator ~ (Enum lhs){
        return static_cast<Enum>(
            ~static_cast<uint32_t>(lhs) );
    };

    // bitwise AND operator
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, Enum>::type
    constexpr inline operator & (Enum lhs, Enum rhs){
        return static_cast<Enum>(
            static_cast<uint32_t>(lhs) &
            static_cast<uint32_t>(rhs) );
    };

    // bitwise OR operator
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, Enum>::type
    constexpr inline operator | (Enum lhs, Enum rhs){
        return static_cast<Enum>(
            static_cast<uint32_t>(lhs) |
            static_cast<uint32_t>(rhs) );
    };

    // bitwise XOR operator
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, Enum>::type
    constexpr inline operator ^ (Enum lhs, Enum rhs){
        return static_cast<Enum>(
            static_cast<uint32_t>(lhs) ^
            static_cast<uint32_t>(rhs) );
    };

    // compound bitwise AND operator
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, Enum&>::type
    inline  operator &= (Enum& lhs, Enum rhs){
        lhs = static_cast<Enum>(
            static_cast<uint32_t>(lhs) &
            static_cast<uint32_t>(rhs) );
        return lhs;
    };

    // compound bitwise AND operator, volatile
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, volatile Enum&>::type
    inline  operator &= (volatile Enum& lhs, Enum rhs){
        lhs = static_cast<Enum>(
            static_cast<uint32_t>(lhs) &
            static_cast<uint32_t>(rhs) );
        return lhs;
    };

    // compound bitwise OR operator
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, Enum&>::type
    inline operator |= (Enum& lhs, Enum rhs){
        lhs = static_cast<Enum>(
            static_cast<uint32_t>(lhs) |
            static_cast<uint32_t>(rhs) );
        return lhs;
    };

    // compound bitwise OR operator, volatile
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, volatile Enum&>::type
    inline operator |= (volatile Enum& lhs, Enum rhs){
        lhs = static_cast<Enum>(
            static_cast<uint32_t>(lhs) |
            static_cast<uint32_t>(rhs) );
        return lhs;
    };

    // compound bitwise XOR operator
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, Enum&>::type
    inline operator ^= (Enum& lhs, Enum rhs){
        lhs = static_cast<Enum>(
            static_cast<uint32_t>(lhs) ^
            static_cast<uint32_t>(rhs) );
        return lhs;
    };

    // compound bitwise XOR operator, volatile
    template<typename Enum>
    typename enable_if<EnableBitMaskOperators<Enum>::enable, volatile Enum&>::type
    inline operator ^= (volatile Enum& lhs, Enum rhs){
        lhs = static_cast<Enum>(
            static_cast<uint32_t>(lhs) ^
            static_cast<uint32_t>(rhs) );
        return lhs;
    };
};




#endif //__STM32_ENUM_BITMASK_OPERATORS_H__
