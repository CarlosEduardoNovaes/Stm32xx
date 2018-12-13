#ifndef __STM32_REGISTER_UTILS_H__
#define __STM32_REGISTER_UTILS_H__

#include <stdint.h>
#include "type_traits.h"

// macro to enable read/write function for register enum
#define ENABLE_REGISTER(x, a)          \
template<>                             \
struct EnableRegister<x>            \
{                                      \
    static const bool enable = true;   \
    static const uint32_t address = a; \
};

namespace stm32{
  // EnableRegister
  template<typename Enum>
  struct EnableRegister{
      static const bool enable = false;
      static const uint32_t address = 0;
  };

  // Bit Constants
  constexpr uint32_t Bit0   = (1ul <<  0);
  constexpr uint32_t Bit1   = (1ul <<  1);
  constexpr uint32_t Bit2   = (1ul <<  2);
  constexpr uint32_t Bit3   = (1ul <<  3);
  constexpr uint32_t Bit4   = (1ul <<  4);
  constexpr uint32_t Bit5   = (1ul <<  5);
  constexpr uint32_t Bit6   = (1ul <<  6);
  constexpr uint32_t Bit7   = (1ul <<  7);
  constexpr uint32_t Bit8   = (1ul <<  8);
  constexpr uint32_t Bit9   = (1ul <<  9);
  constexpr uint32_t Bit00  = (1ul <<  0);
  constexpr uint32_t Bit01  = (1ul <<  1);
  constexpr uint32_t Bit02  = (1ul <<  2);
  constexpr uint32_t Bit03  = (1ul <<  3);
  constexpr uint32_t Bit04  = (1ul <<  4);
  constexpr uint32_t Bit05  = (1ul <<  5);
  constexpr uint32_t Bit06  = (1ul <<  6);
  constexpr uint32_t Bit07  = (1ul <<  7);
  constexpr uint32_t Bit08  = (1ul <<  8);
  constexpr uint32_t Bit09  = (1ul <<  9);
  constexpr uint32_t Bit10  = (1ul << 10);
  constexpr uint32_t Bit11  = (1ul << 11);
  constexpr uint32_t Bit12  = (1ul << 12);
  constexpr uint32_t Bit13  = (1ul << 13);
  constexpr uint32_t Bit14  = (1ul << 14);
  constexpr uint32_t Bit15  = (1ul << 15);
  constexpr uint32_t Bit16  = (1ul << 16);
  constexpr uint32_t Bit17  = (1ul << 17);
  constexpr uint32_t Bit18  = (1ul << 18);
  constexpr uint32_t Bit19  = (1ul << 19);
  constexpr uint32_t Bit20  = (1ul << 20);
  constexpr uint32_t Bit21  = (1ul << 21);
  constexpr uint32_t Bit22  = (1ul << 22);
  constexpr uint32_t Bit23  = (1ul << 23);
  constexpr uint32_t Bit24  = (1ul << 24);
  constexpr uint32_t Bit25  = (1ul << 25);
  constexpr uint32_t Bit26  = (1ul << 26);
  constexpr uint32_t Bit27  = (1ul << 27);
  constexpr uint32_t Bit28  = (1ul << 28);
  constexpr uint32_t Bit29  = (1ul << 29);
  constexpr uint32_t Bit30  = (1ul << 30);
  constexpr uint32_t Bit31  = (1ul << 31);

  template <typename Enum>
  typename enable_if<EnableRegister<Enum>::enable, void>::type
  constexpr inline write (Enum value){
      *(reinterpret_cast<volatile Enum*>(EnableRegister<Enum>::address)) = value;
  };
  template <typename Enum>
  typename enable_if<EnableRegister<Enum>::enable, Enum>::type
  constexpr inline read(){
      return (*(reinterpret_cast<volatile Enum*>(EnableRegister<Enum>::address)));
  };
  
  template <typename Enum, uint8_t width, uint8_t shift>
  class Value{
  public:
      Value() = default;
      constexpr Enum operator() (uint32_t v){
          return static_cast<Enum>( ( v & ( (1<<width) - 1 ) ) << shift );
          //return static_cast<Enum>(1);
      };
  private:
  };
  
//   template <typename Enum, uint32_t Address>
//   class Register{
//   public:
//       Register() = default;
//   private:
//       inline volatile uint32_t *getAddress(){
//           return reinterpret_cast<volatile uint32_t*>(Address);
//     };
//   };
  
  


//   // Register type
//   template<uint32_t Address, typename Enum>
//   class Register{
//   public:
//       constexpr Register() = default;
// //         Register(Enum conf){
// //             *getAddress() = static_cast<uint32_t>(conf);
// //         };
//
//       Register& operator=(Enum conf){
//           *getAddress() = static_cast<uint32_t>(conf);
//           return *this;
//      };
//
//
//
//   private:
//       // getAddress functions
//       inline volatile uint32_t *getAddress(){
//           return reinterpret_cast<volatile uint32_t*>(Address);
//       };
//       inline const volatile uint32_t *getAddress() const{
//           return reinterpret_cast<const volatile uint32_t*>(Address);
//       };
//       // TODO replace uint32_t with bool for BitBand functions
//       // bool is supposed to be one byte (uint8_t) and bitband read return integers 0 or 1.
//       // For write it may be safe to convert bool to uint8_t
//       inline volatile uint32_t *getBitBandAddress(const uint32_t bit=0ul){
//           return reinterpret_cast<volatile uint32_t*>(0x42000000+(Address-0x40000000)*32+bit*4);
//       };
//       inline const volatile uint32_t *getBitBandAddress(const uint32_t bit=0ul) const{
//           return reinterpret_cast<const volatile uint32_t*>(0x42000000+(Address-0x40000000)*32+bit*4);
//       };
//   };

};

#endif // __STM32_REGISTER_UTILS_H__
