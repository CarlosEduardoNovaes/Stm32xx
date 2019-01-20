#ifndef __STM__IOSTREAM_HPP__
#define __STM__IOSTREAM_HPP__

#include <stm/f103.hpp>
#include <type_traits>


namespace stm{
    enum class NumBase:std::int32_t{
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
    template<typename T>
    struct is_iostream_integer{
        static const bool value = false;
        static const bool signed_number = false;
        using bits = union{
            uint32_t    unsigned_type;
            int32_t     signed_type;
        };
    };
//     Same as std::uint16_t
//     template<> struct is_iostream_integer<unsigned short int> { static const bool signed_number = false; static const bool value = true; using bits = union{unsigned short int unsigned_type; short int signed_type;};};
//     Same as std::int16_t
//     template<> struct is_iostream_integer<short int> { static const bool signed_number = true; static const bool value = true; using bits = union{unsigned short int unsigned_type; short int signed_type;};};
//     Same as std::uint32_t, but treated as different type in c++
    template<> struct is_iostream_integer<unsigned int> { static const bool signed_number = false; static const bool value = true; using bits = union{unsigned int unsigned_type; int signed_type;};};
//     Same as std::int32_t, but treated as different type in c++
    template<> struct is_iostream_integer<int> { static const bool signed_number = true; static const bool value = true; using bits = union{unsigned int unsigned_type; int signed_type;};};
//     Same as std::uint32_t    
//     template<> struct is_iostream_integer<unsigned long int> { static const bool signed_number = false; static const bool value = true; using bits = union{unsigned long int unsigned_type; long int signed_type;};};
//     Same as std::int32_t
//     template<> struct is_iostream_integer<long int> { static const bool signed_number = true; static const bool value = true; using bits = union{unsigned long int unsigned_type; long int signed_type;};};
//     Same as std::uint64_t
//     template<> struct is_iostream_integer<unsigned long long int> { static const bool signed_number = false; static const bool value = true; using bits = union{unsigned long long int unsigned_type; long long int signed_type;};};
//     Same as std::int64_t
//     template<> struct is_iostream_integer<long long int> { static const bool signed_number = true; static const bool value = true; using bits = union{unsigned long long int unsigned_type; long long int signed_type;};};
    template<> struct is_iostream_integer<std::uint8_t> { static const bool signed_number = false; static const bool value = true; using bits = union{std::uint8_t unsigned_type; std::int8_t signed_type;};};
    template<> struct is_iostream_integer<std::int8_t> { static const bool signed_number = true; static const bool value = true; using bits = union{std::uint8_t unsigned_type; std::int8_t signed_type;};};
    template<> struct is_iostream_integer<std::uint16_t> { static const bool signed_number = false; static const bool value = true; using bits = union{std::uint16_t unsigned_type; std::int16_t signed_type;};};
    template<> struct is_iostream_integer<std::int16_t> { static const bool signed_number = true; static const bool value = true; using bits = union{std::uint16_t unsigned_type; std::int16_t signed_type;};};
    template<> struct is_iostream_integer<std::uint32_t> { static const bool signed_number = false; static const bool value = true; using bits = union{std::uint32_t unsigned_type; std::int32_t signed_type;};};
    template<> struct is_iostream_integer<std::int32_t> { static const bool signed_number = true; static const bool value = true; using bits = union{std::uint32_t unsigned_type; std::int32_t signed_type;};};
    template<> struct is_iostream_integer<std::uint64_t> { static const bool signed_number = false; static const bool value = true; using bits = union{std::uint64_t unsigned_type; std::int64_t signed_type;};};
    template<> struct is_iostream_integer<std::int64_t> { static const bool signed_number = true; static const bool value = true; using bits = union{std::uint64_t unsigned_type; std::int64_t signed_type;};};
//     template<> struct is_iostream_integer<std::uint128_t> { static const bool value = true; using bits = union{std::uint128_t unsigned_type; std::int128_t signed_type;};};
//     template<> struct is_iostream_integer<std::int128_t> { static const bool value = true; using bits = union{std::uint128_t unsigned_type; std::int128_t signed_type;};};
    
    
    template<typename T>
    struct is_iostream_float_number{
        static const bool value = false;
        using bits = union{
            float       float_type;
            uint32_t    raw_type;
        };
    };
    template<> struct is_iostream_float_number<float> { static const bool value = true; using bits = union{float float_type; std::uint32_t raw_type;};};
    template<> struct is_iostream_float_number<double> { static const bool value = true; using bits = union{double float_type; std::uint64_t raw_type;};};
    template<> struct is_iostream_float_number<long double> { static const bool value = true; using bits = union{long double float_type; std::uint64_t raw_type;};};
    
    template <typename T>
    constexpr T _iostream_pow(T num, unsigned int pow)
    {
        return (pow >= sizeof(unsigned int)*8) ? 0 : pow == 0 ? 1 : num * _iostream_pow(num, pow-1);
    };
    
    template<NumBase Base=NumBase::Decimal, std::int32_t Precision=5, bool Fixed = true >
    class iostream{
    public:
        iostream()= default;
        // Template version of operator <<
        template<typename RHS>
        iostream<Base, Precision, Fixed>&   operator<<(RHS val){
            if constexpr(std::is_same<RHS, const char*>::value){
                while (*val != '\0'){
                    _putc(*val++);
                }
            }
            if constexpr(std::is_same<RHS, char>::value){
                _putc(val);
            }
            else if constexpr(std::is_same<RHS, bool>::value){
                if (val){
                    *this << "true";
                }
                else{
                    *this << "false";
                }
            }
            // if RHS is a integral value
            else if constexpr(stm::is_iostream_integer<RHS>::value){
                // handle zero number
                if (val == 0){
                    _putc('0');
                    return *this;
                };
                #pragma GCC diagnostic push
                #pragma GCC diagnostic ignored "-Wunused-but-set-variable"
                bool    neg = false;
                #pragma GCC diagnostic pop
                // negative simbol only in Decimal Representation
                if constexpr(stm::is_iostream_integer<RHS>::signed_number){
                    if (val<0){
                        if constexpr(Base == NumBase::Decimal){
                            neg = true;
                            val = -val;
                        }
                    }
                }
                char str[32];
                int i = 0;
                typename stm::is_iostream_integer<RHS>::bits& bits_union = reinterpret_cast<typename stm::is_iostream_integer<RHS>::bits&>(val);
                while (bits_union.unsigned_type != 0){
                    typename stm::is_iostream_integer<RHS>::bits rem;
                    rem.unsigned_type = bits_union.unsigned_type % static_cast<std::int32_t>(Base);
                    str[i] = (rem.unsigned_type>9)? (rem.unsigned_type-10+'A') : (rem.unsigned_type+'0');
                    i++;
                    bits_union.unsigned_type /= static_cast<std::int32_t>(Base);
                };
                if constexpr(Base == NumBase::Decimal){
                    if(neg) _putc('-');
                }
                else if constexpr(Base == NumBase::Hexadecimal){
                    *this << "0x";
                }
                else if constexpr(Base == NumBase::Octal){
                    *this << "0";
                }
                while (i > 0){
                    i--;
                    _putc (str[i]);
                };
            }
            else if constexpr(stm::is_iostream_float_number<RHS>::value){
                if constexpr(Base==NumBase::Decimal){
                    // specialization for decimal representation
                    bool neg = false;
                    if (val<0.0f){
                        neg = true;
                        val = -val;
                    };
                    std::int64_t vali = val;
                    if (neg) *this << "-";
                    *this << vali << ".";
                    RHS frac;
                    frac = val;
                    frac -= vali;
                    for (std::int32_t it_i = 0; it_i<Precision; it_i++){
                        frac *= 10;
                        vali = frac;
                        *this << vali;
                        frac -= vali;
                    }
                }
                else{
                    // specialization for other representations
//                     #pragma GCC diagnostic push
//                     #pragma GCC diagnostic ignored "-Wstrict-aliasing"
                    typename stm::is_iostream_float_number<RHS>::bits& bits_union = reinterpret_cast<typename stm::is_iostream_float_number<RHS>::bits&>(val);
                    *this << bits_union.raw_type;
//                     #pragma GCC diagnostic pop
            };
            }
            else{
                _flags.failbit = true;
            }
            return *this;
        };
        

    private:
        virtual void    _putc(char c) = 0;
        virtual int     _getc() = 0;
        struct {
            std::uint32_t   eofbit  : 1;
            std::uint32_t   failbit : 1;
            std::uint32_t   badbit  : 1;
        } _flags;
    };


    
}; // stm namespace


#endif // __STM__IOSTREAM_HPP__
