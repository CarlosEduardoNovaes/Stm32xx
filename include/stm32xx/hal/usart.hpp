#ifndef __STM32__HAL_USART_HPP__
#define __STM32__HAL_USART_HPP__

#include <stddef.h>
#include <stdint.h>

#include <stm32xx/f103.hpp>
#include <stm32xx/hal/ringbuffer.hpp>
#include <stm32xx/iostream.hpp>

namespace stm32{
namespace hal{
struct usart1_descriptor{                                             \
    using _sr   =   stm32::registers::usart::usart1::sr::reg;      \
    using _dr   =   stm32::registers::usart::usart1::dr::reg;      \
    using _brr  =   stm32::registers::usart::usart1::brr::reg;     \
    using _cr   =   stm32::registers::usart::usart1::cr::reg;      \
    using _gtpr =   stm32::registers::usart::usart1::gtpr::reg;   \
    static inline void enableClock(){
        stm32::registers::rcc_apb2enr::reg::setUsart1(true);
    };
    static inline void setBaud(uint32_t baud){
        _brr::value() = 72000000 / baud;
    };
    static inline void enablePins(uint8_t remap=0){
        switch (remap){
            case 0:
            default:
                // Port A clock enabled
                stm32::registers::rcc_apb2enr::reg::setIopa(true);
                // TX USART1
                stm32::registers::gpio::a::crh::reg::setCnf9(stm32::registers::gpio::CNF::AF_PUSH_PULL);
                stm32::registers::gpio::a::crh::reg::setMode9(stm32::registers::gpio::MODE::OUTPUT_50MHZ);
                // RX USART1 Floating input
                stm32::registers::gpio::a::crh::reg::setCnf10(stm32::registers::gpio::CNF::DIGITAL);
                stm32::registers::gpio::a::crh::reg::setMode10(stm32::registers::gpio::MODE::INPUT);
                break;            
        }
    };
    static inline void enableInterrupt(){
        // Interrupt priority is 8
        stm32::registers::nvic_ipr::reg::setIpr37(8);
        // Enable USART 1 update at NVIC
        stm32::registers::nvic_iser::reg::setEna37(true);
    };
};

template<typename U, uint32_t baud=9600, uint32_t rxbufsize=64>
class Usart_t: public ::stm32::iostream<>{
public:
    inline Usart_t(){
    };
    inline void init(){
        U::enableClock();
        U::enablePins();
        // USART1
        // Receiver enabled
        U::_cr::setRe(true);
        // Transmitter enabled
        U::_cr::setTe(true);
        // Parity control disabled
        U::_cr::setPce(false);
        // Word length start+8+stop bits
        U::_cr::setM(false);
        // Set Baudrate
        U::setBaud(baud);
        // Enable USART1
        U::_cr::setUe(true);
        // Interrupts enabled for reading
        U::enableInterrupt();
        U::_cr::setRxneie(true);
    };
    inline void putc(char c){
        while (!U::_sr::getTxe()); // wait data to be transferred
        U::_dr::setDr(c);
    };
    
    
    inline size_t write(const char* data, size_t n){
        while(n>0){
                putc((*data++));
                n--;
        }
        return n;
    };
    inline size_t write(const char* data){
        size_t n = 0;
        while(*data != '\0'){
                putc((*data++));
                n++;
        }
        return n;
    };
    inline void _irq_handler(void){
        _rxbuf.write(U::_dr::value());
//         *this << ":: " << reinterpret_cast<int32_t>(&_rxbuf._elements) << " :: _irq_handler()\n";
//         *this << ":: " << static_cast<int32_t>(_rxbuf._elements) << " :: _irq_handler()\n";
    };
    //inline int __attribute__((optimize("O0"))) getc(){
    inline int  getc(){
         *this << ":: " << reinterpret_cast<int32_t>(&_rxbuf) << " :: getc()\n";
//         *this << ":: " << static_cast<int32_t>(_rxbuf._elements) << " :: getc()\n";
        if(_rxbuf.available()>0){
            return _rxbuf.read();
        }
        return -1;
    };
    RingBuffer<char, rxbufsize> _rxbuf;
private:
    int _getc(){
        return getc();
    };
    void _putc(char c){
        while (!U::_sr::getTxe()); // wait data to be transferred
        U::_dr::setDr(c);
    };
    
    
    
};

// template<typename U, uint32_t baud, uint32_t rxbufsize>
// RingBuffer<char, rxbufsize>  Usart_t<U, baud, rxbufsize>::_rxbuf;


    
}; // hal namespace
}; // stm32 namespace


#endif // __STM32__HAL_USART_HPP__
