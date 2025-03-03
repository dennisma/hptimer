
#include <Arduino.h>
#include <hpTiming.h>

void setup()
{
  Serial.begin(115200);
  while (!Serial)
    ;
  // delay(4000);
}

void loop()
{
  hpTiming hp(true);
  //hp.startClock();
  asm volatile("nop \n");
  hp.endClock();
  Serial.print(">nop:");
  Serial.println(hp.nS());
  delay(1000);
}