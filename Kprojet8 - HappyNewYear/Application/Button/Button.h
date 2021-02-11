#pragma once
#include "pin.h"

class Button
{
private:
  IButtonPin& pin; 
public:
  Button(IButtonPin& aPin);
  bool WasPressed();
  void Enable();
};