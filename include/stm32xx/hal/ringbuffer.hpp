#ifndef __STM32__HAL_RINGBUFFER_HPP__
#define __STM32__HAL_RINGBUFFER_HPP__

#include <stddef.h>

namespace stm32{
namespace hal{

template<typename T, size_t N>
class RingBuffer{
public:
    RingBuffer(){
        _head_ptr = _buffer;
        _tail_ptr = _buffer;
        _elements = 0;
        _overflow = false;
    };
    inline bool hasOverflow(){
        return _overflow;
    };
    inline void write(T v){
        *_head_ptr = v;
        _head_ptr++;
        _elements++;
        if (_head_ptr == _buffer + N){
            _head_ptr = _buffer;
        };
        if (_elements>N) _overflow = true;
        
    };
    inline size_t available(){
        //stm32::registers::gpio::c::odr::reg::setOdr14(false);
        return _elements;
    };
    inline  T read(){
        T ret;
        ret = *_tail_ptr;
        _tail_ptr++;
        if (_tail_ptr == _buffer + N){
            _tail_ptr = _buffer;
        };
        _elements--;
        return ret;
    };
    
//private:
public:
    T       _buffer[N];
    T*      _head_ptr;
    T*      _tail_ptr;
    bool    _overflow;
    size_t  _elements;

   
};

    
    
    
}; // hal namespace
    
    
}; // stm32 namespace


#endif // __STM32__HAL_RINGBUFFER_HPP__
