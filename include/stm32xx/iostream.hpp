#ifndef __STM32__IOSTREAM_HPP__
#define __STM32__IOSTREAM_HPP__
#include <stdint.h>
#include <stm32xx/f103.hpp>

namespace stm32{
    enum class NumBase:uint32_t{
        Decimal     = 10,
        dec         = 10,
        Dec         = 10,
        Octal       = 8,
        oct         = 8,
        Oct         = 8,
        Hexadecimal = 16,
        hex         = 16,
        Hex         = 16        
    };
    template<NumBase Base=NumBase::Hexadecimal, uint32_t Precision=5, bool Fixed = true >
    class iostream{
    public:
        iostream()= default;
        iostream&   operator<<(const char* val){
            while (*val != '\0'){
                _putc(*val++);
            }
            return *this;
        };
        iostream&   operator<<(bool val){
            if (val){
                *this << "true";
            }
            else{
                *this << "false";
            }
            return *this;
        };
        iostream&   operator<<(int32_t val){
            //_putc('a');
            if (val == 0){
                _putc('0');
                return *this;
            };
             bool    neg = false;
            if (Base == NumBase::Decimal){
                if (val<0){
                    neg = true;
                    val = -val;
                }
            }
            char str[16];
            int i = 0;
            while (val != 0){
                int rem = val % static_cast<int32_t>(Base);
                str[i] = (rem>9)? (rem-10+'a') : (rem+'0');
                i++;
                val /= static_cast<int32_t>(Base);
            };
            if(neg) _putc('-');
            while (i > 0){
                i--;
                _putc (str[i]);
            };
            return *this;
        };
//         iostream&   operator<<(int val){
//             *this << static_cast<int32_t>(val);
//             return *this;
//         }
        iostream&   operator<<(float val) {
             bool neg = false;
             if (val<0.0f){
                 neg = true;
                 val = -val;
             };
              int32_t vali = val;
//             if(neg) _putc('-');
            if (neg) *this << "-";
            *this << vali << ".";
            float frac;
            frac = val;
            frac -= vali;
            for (uint32_t it_i = 0; it_i<Precision; it_i++){
                frac *= 10;
                vali = frac;
                *this << vali;                
                frac -= vali;
            }
            return *this;
        };
    private:
        virtual void    _putc(char c) = 0;
        virtual int     _getc() = 0;
    };
}; // stm32 namespace


#endif // __STM32__IOSTREAM_HPP__
