#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {
      for(int i = 0; i < 4; ++i)
      {
         myLED = !myLED;
         ThisThread::sleep_for(100ms);
      }
      for(int j = 0; j < 6; ++j)
      {
         myLED2 = !myLED2;
         ThisThread::sleep_for(100ms);
      }
   }
}
