//
// Created by Sergey on 21.11.2019.
//

#ifndef REGISTERS_INTERRUPTHANDLER_HPP
#define REGISTERS_INTERRUPTHANDLER_HPP


#include "tim2registers.hpp"  //for TIM2
#include "gpiocregisters.hpp"  //for TIM2
#include "Garlands.h" 


class InterruptHandler 
{
  public:
    static void DummyHandler() 
    { 
      for(;;) 
      {
      } 
    }
    
    
    static void Timer2Handler()
    {
      if (TIM2::SR::UIF::UpdatePending::IsSet() && TIM2::DIER::UIE::Enable::IsSet())
      {
       TIM2::SR::UIF::NoUpdate::Set();
       garlands.Switch();
      }
    }
};

#endif //REGISTERS_INTERRUPTHANDLER_HPP
