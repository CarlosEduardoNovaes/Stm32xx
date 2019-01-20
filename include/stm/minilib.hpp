#ifndef __STM__MINILIB_HPP__
#define __STM__MINILIB_HPP__

#include <stddef.h>
#include <stdint.h>

extern "C" void* __attribute__((optimize("O0"))) memset(void *s, int c, size_t n);
extern "C" void __attribute__((optimize("O0"))) memcpy(void *dst, void *src, size_t n);
extern "C" int __attribute__((optimize("O0"))) __aeabi_f2iz(float v) ;
extern "C" void* malloc(size_t size);

#endif // __STM__MINILIB_HPP__
