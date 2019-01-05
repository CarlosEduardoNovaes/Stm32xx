#include <stm32xx/f103.hpp>
#include <stm32xx/hal/usart.hpp>






template<bool BoolAlpha, bool FloatFormat, uint32_t Width>
struct iostream_dsc{
    static constexpr bool boolalpha = BoolAlpha;
    static constexpr bool floatformat = FloatFormat;
    static constexpr uint32_t width = Width;
};

volatile int32_t foo_i;
volatile float   foo_f;
volatile float   foo_g[16];



extern "C" void testa_cast(){
    foo_i = static_cast<int32_t>(foo_f);
};


volatile bool time_elapsed = false;
using Serial = stm32::hal::Usart_t<stm32::hal::usart1_descriptor, 9600, 64>;

Serial* mySerial_ptr;





// volatile  uint32_t ctes[10] ={
//     2, 3, 5, 7, 11, 13, 17, 23, 29, 37
// };

volatile  uint8_t ctes[10] ={
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10
};
volatile  uint32_t ctes2[16] ={
    0, 2, 1, 3, 1, 4, 5, 6, 0, 2, 1, 3, 1, 4, 5, 6
};



using namespace stm32::registers;






void delay ( void ){
    volatile int count = 3'000 *100;
    while ( count-- );
//Reset Timer1 counter
//     timer::t1::cnt::reg::value() = 0x0000;
//     timer::t1::egr::reg::setUg(true);
//      while (timer::t1::cnt::reg::value()<500);
}

void bigdelay ( void ){
    volatile int count = 50'000 *100;
    while ( count-- );
}

int main(void) {
    Serial mySerial;
    mySerial_ptr = &mySerial;
    foo_g[0]=10.9f;
    foo_i = 8;
    rcc_apb2enr::reg::setIopc(true);
    
    
    gpio::c::crh::reg::setCnf13(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode13(gpio::MODE::OUTPUT_50MHZ);
    gpio::c::crh::reg::setCnf14(gpio::CNF::GP_PUSH_PULL);
    gpio::c::crh::reg::setMode14(gpio::MODE::OUTPUT_50MHZ);
    
    // Alternate Function clock
    //rcc_apb2enr::reg::setAfio(true);
    
   
    

    
    
    // Apaga os leds
    gpio::c::odr::reg::setOdr13(true);
    gpio::c::odr::reg::setOdr14(true);
    

    
    // Enable Timer1 clock
    rcc_apb2enr::reg::setTim1(true);
    //Reset Cr1 just in case
    timer::t1::cr1::reg::value() = 0;
    
    //Reset Timer1 counter
    //timer::t1::cnt::reg::value() = 0x0000;
    
    // Prescaller Value for 10kHz
    timer::t1::psc::reg::value() = 7199;
    // Auto Preload not prebuffered
    timer::t1::cr1::reg::setArpe(false);
    // Auto Preload Value
    timer::t1::arr::reg::value() = 200;
    
    // Update Events generate interrupts
    timer::t1::dier::reg::setUie(true);
    
    // Edge aligned mode
    timer::t1::cr1::reg::setCms(timer::CMS::EDGE_ALIGNED);
    // Upcounter
    timer::t1::cr1::reg::setDir(true);
   

    // Interrupt priority is 1
    nvic_ipr::reg::setIpr25(1);
    
    // Enable Timer 1 update at NVIC
    nvic_iser::reg::setEna25(true);
    
    // Finally Enable Timer 1
    timer::t1::cr1::reg::setCen(true);
    
    
    // Usart1 HAL
    
    
    mySerial.init();
    
    

    

    

    while(true){
       for (int it_i=0; it_i<ctes[3]; it_i++){
           while(!time_elapsed);
           time_elapsed = false;
           gpio::c::odr::reg::setOdr13(false);
           //gpio::c::br::reg::value() = 1 << 13;
           while(!time_elapsed);
           time_elapsed = false;
           gpio::c::odr::reg::setOdr13(true);
           //gpio::c::bsr::reg::value() = 1 << 13;            
        }
        while(!time_elapsed);
        time_elapsed = false;
        int c = mySerial.getc();
        if (c>=0){
            //Serial::putc(c);
            //Serial::putc(c);
            foo_f = 3.1415926;
            mySerial << foo_f;
            //foo_i = static_cast<int32_t>(foo_f);
            //mySerial << static_cast<int32_t>(sizeof(float));
            //Serial::putc(c);
            //mySerial << "\n" << foo_g[1];
            
            mySerial.putc('\n');
            //gpio::c::odr::reg::setOdr14(false);
        }
        
        bigdelay();
        //gpio::c::odr::reg::setOdr14(true);
        
        
   };
};



extern "C"  __attribute__ ((interrupt ("IRQ"))) void _tim1_up_isr_ (void)
{
    time_elapsed = true;
    stm32::registers::timer::t1::sr::reg::clearUif();
};

extern "C" __attribute__ ((interrupt ("IRQ"))) void _usart1_isr_ (void)
{
    mySerial_ptr->_irq_handler();  
};

