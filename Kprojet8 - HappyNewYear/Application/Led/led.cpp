#include "led.h"


Led::Led(ILedPin& aPin): pin(aPin)
{
}

void Led::Toggle()
{
  pin.Toggle();
}
void Led::TurnOn()
{
  pin.Set(1);
}
void Led::TurnOff()
{
  pin.Set(0);
}

void Led::Enable()
{
  pin.Enable();
  pin.SelectOutputMode();
}