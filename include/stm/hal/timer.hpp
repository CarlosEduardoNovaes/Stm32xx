#ifndef __STM__HAL_TIMER_HPP__
#define __STM__HAL_TIMER_HPP__

#include <stddef.h>
#include <stdint.h>

#include <stm/f103.hpp>

namespace stm{
namespace hal{
    enum class TIMERPIN:std::uint32_t{
        NO_REMAP        =   0,
        PARTIAL_REMAP   =   1,
        FULL_REMAP      =   3,
    };
    template<stm::hal::TIMERPIN REMAP = stm::hal::TIMERPIN::NO_REMAP>
    struct timer1_descriptor{
        using   _cr1    =   stm::registers::timer::t1::cr1::reg;
        using   _cr2    =   stm::registers::timer::t1::cr2::reg;
        using   _smcr   =   stm::registers::timer::t1::smcr::reg;
        using   _dier   =   stm::registers::timer::t1::dier::reg;
        using   _sr     =   stm::registers::timer::t1::sr::reg;
        using   _egr    =   stm::registers::timer::t1::egr::reg;
        using   _ccmr1  =   stm::registers::timer::t1::ccmr1::reg;
        using   _ccmr2  =   stm::registers::timer::t1::ccmr2::reg;
        using   _ccer   =   stm::registers::timer::t1::ccer::reg;
        using   _cnt    =   stm::registers::timer::t1::cnt::reg;
        using   _psc    =   stm::registers::timer::t1::psc::reg;
        using   _arr    =   stm::registers::timer::t1::arr::reg;
        using   _rcr    =   stm::registers::timer::t1::rcr::reg;
        using   _ccr1   =   stm::registers::timer::t1::ccr1::reg;
        using   _ccr2   =   stm::registers::timer::t1::ccr2::reg;
        using   _ccr3   =   stm::registers::timer::t1::ccr3::reg;
        using   _ccr4   =   stm::registers::timer::t1::ccr4::reg;
        using   _bdtr   =   stm::registers::timer::t1::bdtr::reg;
        using   _dcr    =   stm::registers::timer::t1::dcr::reg;
        using   _dmar   =   stm::registers::timer::t1::dmar::reg;
        static inline void enableClock(){
            stm::registers::rcc_apb2enr::reg::setTim1(true);
        };
        static inline void enablePinETR(){
            if constexpr(REMAP == stm::hal::TIMERPIN::NO_REMAP || REMAP == stm::hal::TIMERPIN::PARTIAL_REMAP){
                // Port A clock enabled
                stm::registers::rcc_apb2enr::reg::setIopa(true);
                // ETR is mapped on PA12
                stm::registers::gpio::a::crh::reg::setCnf12(stm::registers::gpio::CNF::DIGITAL);
                stm::registers::gpio::a::crh::reg::setMode12(stm::registers::gpio::MODE::INPUT);
            }
            else if constexpr (REMAP == stm::hal::TIMERPIN::FULL_REMAP){
                // Port E clock enabled
                stm::registers::rcc_apb2enr::reg::setIope(true);
                // ETR is mapped on PE7
                stm::registers::gpio::e::crl::reg::setCnf7(stm::registers::gpio::CNF::DIGITAL);
                stm::registers::gpio::e::crl::reg::setMode7(stm::registers::gpio::MODE::INPUT);                
            }
            else{
                static_assert(  REMAP == stm::hal::TIMERPIN::NO_REMAP      || 
                                REMAP == stm::hal::TIMERPIN::PARTIAL_REMAP   || 
                                REMAP == stm::hal::TIMERPIN::FULL_REMAP   ,
                                "Invalid Remap for stm::hal::timer1_descriptor"
                             );
            }
        }
    };
    
}; // End namespace hal 
}; // End namespace stm



#endif // __STM__HAL_TIMER_HPP__
