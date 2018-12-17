#include <minilib.hpp>
extern "C" void* __attribute__((optimize("O0"))) memset(void *s, int c, size_t n)
{
    unsigned char* p=static_cast<unsigned char*>(s);
    while(n--)
       *p++ = (unsigned char)c;
    return s;
}
