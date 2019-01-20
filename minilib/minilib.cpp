#include <stm/minilib.hpp>
extern "C" void* __attribute__((optimize("O0"))) memset(void *s, int c, size_t n)
{
    unsigned char* p=static_cast<unsigned char*>(s);
    while(n--)
       *p++ = (unsigned char)c;
    return s;
}

extern "C" void __attribute__((optimize("O0"))) memcpy(void *dst, void *src, size_t n)
{
    unsigned char* d=static_cast<unsigned char*>(dst);
    unsigned char* s=static_cast<unsigned char*>(src);
    while(n--)
       *d++ = *s++;
}

extern "C" int __attribute__((optimize("O0"))) __aeabi_f2iz(float v) {
    return 3;
}

extern "C" void* malloc(size_t size){
    return reinterpret_cast<void*>(0x20000000);
};
 
