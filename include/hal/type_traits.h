#ifndef __STM32_TYPE_TRAITS_H__
#define __STM32_TYPE_TRAITS_H__

namespace stm32{

  template<bool B, class T = void>
  struct enable_if {};
  template<class T>
  struct enable_if<true, T> { typedef T type; };
};

#endif // __STM32_TYPE_TRAITS_H__
