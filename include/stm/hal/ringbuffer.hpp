#ifndef __STM__HAL_RINGBUFFER_HPP__
#define __STM__HAL_RINGBUFFER_HPP__

#include <cstddef>

namespace stm{
namespace hal{

template<typename T, std::size_t N>
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
    inline std::size_t available(){
        //stm::registers::gpio::c::odr::reg::setOdr14(false);
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
    std::size_t  _elements;

   
};

    
    
    
}; // hal namespace
    
    
}; // stm namespace


#endif // __STM__HAL_RINGBUFFER_HPP__
