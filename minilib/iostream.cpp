#include <stm32xx/iostream.hpp>

namespace stm32{
    // constructor
    iostream::iostream(){
    };
    iostream::fmtflags          iostream::flags() const{
        _flags;
    };
    iostream::fmtflags          iostream::flags(iostream::fmtflags fmtfl){
        _flags = fmtfl;
    };
    iostream::fmtflags          iostream::setf(iostream::fmtflags fmtfl){
        fmtflags old = _flags;
        _flags = static_cast<fmtflags>(_flags | fmtfl);
        return old;
    };
    iostream::fmtflags          iostream::unsetf(iostream::fmtflags fmtfl){
        fmtflags old = _flags;
        _flags = static_cast<fmtflags>(_flags & ~fmtfl);
        return old;
    };
    uint32_t                    iostream::precision() const{
        return _precision;
    };
    uint32_t                    iostream::precision(uint32_t prec){
        uint32_t old = _precision;
        _precision = prec;
        return old;
    };
    uint32_t                    iostream::width() const{
        return _width;
    };
    uint32_t                    iostream::width(uint32_t wide){
        uint32_t old = _width;
        _width = wide;
        return old;
        
    };
    char                        iostream::fill() const{
        return _fill;
    };
    char                        iostream::fill(char fillch){
        char old = _fill;
        _fill = fillch;
        return old;
    };
    iostream& iostream::operator <<(uint32_t val){

        
    };
}; // end of namespace stm32
