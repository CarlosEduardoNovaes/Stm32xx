#ifndef __STM__HAL_USART_HPP__
#define __STM__HAL_USART_HPP__

#include <stddef.h>
#include <stdint.h>

#include <stm/f103.hpp>
#include <stm/hal/ringbuffer.hpp>
#include <stm/iostream.hpp>


namespace stm{
namespace hal{
    enum class USARTPIN:std::uint32_t{
        NO_REMAP        =   0,
        REMAP           =   1,
    };
template<stm::hal::USARTPIN REMAP = stm::hal::USARTPIN::NO_REMAP>
struct usart1_descriptor{                                             
    using _sr   =   stm::registers::usart::usart1::sr::reg;      
    using _dr   =   stm::registers::usart::usart1::dr::reg;      
    using _brr  =   stm::registers::usart::usart1::brr::reg;     
    using _cr   =   stm::registers::usart::usart1::cr::reg;      
    using _gtpr =   stm::registers::usart::usart1::gtpr::reg;   
    static inline void enableClock(){
        stm::registers::rcc_apb2enr::reg::setUsart1(true);
    };
    static inline void setBaud(std::uint32_t baud){
        _brr::value() = 72000000 / baud;
    };
    static inline void enablePins(){
        if constexpr(REMAP == stm::hal::USARTPIN::NO_REMAP){
            // Port A clock enabled
            stm::registers::rcc_apb2enr::reg::setIopa(true);
            // TX USART1
            stm::registers::gpio::a::crh::reg::setCnf9(stm::registers::gpio::CNF::AF_PUSH_PULL);
            stm::registers::gpio::a::crh::reg::setMode9(stm::registers::gpio::MODE::OUTPUT_50MHZ);
            // RX USART1 Floating input
            stm::registers::gpio::a::crh::reg::setCnf10(stm::registers::gpio::CNF::DIGITAL);
            stm::registers::gpio::a::crh::reg::setMode10(stm::registers::gpio::MODE::INPUT);
        }
        else if constexpr(REMAP == stm::hal::USARTPIN::REMAP){
            // Port B clock enabled
            stm::registers::rcc_apb2enr::reg::setIopb(true);
            // TX USART1 on PB6
            stm::registers::gpio::b::crl::reg::setCnf6(stm::registers::gpio::CNF::AF_PUSH_PULL);
            stm::registers::gpio::b::crl::reg::setMode6(stm::registers::gpio::MODE::OUTPUT_50MHZ);
            // RX USART1 Floating input on PB7
            stm::registers::gpio::b::crl::reg::setCnf7(stm::registers::gpio::CNF::DIGITAL);
            stm::registers::gpio::b::crl::reg::setMode7(stm::registers::gpio::MODE::INPUT);
        }
    };
    static inline void enableInterrupt(){
        // Interrupt priority is 8
        stm::registers::nvic_ipr::reg::setIpr37(8);
        // Enable USART 1 update at NVIC
        stm::registers::nvic_iser::reg::setEna37(true);
    };
};

template<typename U, std::uint32_t baud=9600, std::uint32_t rxbufsize=64, typename Iobase=::stm::iostream<>>
class Usart_t: public Iobase{
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
    
    
    inline std::size_t write(const char* data, std::size_t n){
        while(n>0){
                putc((*data++));
                n--;
        }
        return n;
    };
    inline std::size_t write(const char* data){
        std::size_t n = 0;
        while(*data != '\0'){
                putc((*data++));
                n++;
        }
        return n;
    };
    inline void _irq_handler(void){
        _rxbuf.write(U::_dr::value());
//         *this << ":: " << reinterpret_cast<std::int32_t>(&_rxbuf._elements) << " :: _irq_handler()\n";
//         *this << ":: " << static_cast<std::int32_t>(_rxbuf._elements) << " :: _irq_handler()\n";
    };
    inline int  getc(){
         *this << ":: " << reinterpret_cast<std::int32_t>(&_rxbuf) << " :: getc()\n";
//         *this << ":: " << static_cast<std::int32_t>(_rxbuf._elements) << " :: getc()\n";
        if(_rxbuf.available()>0){
            return _rxbuf.read();
        }
        return -1;
    };
    RingBuffer<char, rxbufsize> _rxbuf;
private:
    int _getc() override{
        return getc();
    };
    void _putc(char c) override{
        while (!U::_sr::getTxe()); // wait data to be transferred
        U::_dr::setDr(c);
    };
    
    
    
};

// template<typename U, std::uint32_t baud, std::uint32_t rxbufsize>
// RingBuffer<char, rxbufsize>  Usart_t<U, baud, rxbufsize>::_rxbuf;


    
}; // hal namespace
}; // stm namespace


#endif // __STM__HAL_USART_HPP__
