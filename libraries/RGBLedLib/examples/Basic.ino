#include <RGBLedLib.h>

RGBLed LED(9, 10, 11, CC);
Color R(255, 0, 0);
Color G(0, 255, 0);
Color B(0, 0, 255);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i=0; i<255; i+=25)
  {
    LED.Alpha(i); 
    LED.CurrentColor(R);
    delay(250);
    LED.CurrentColor(G);
    delay(250);
    LED.CurrentColor(B);
    delay(250);
    Serial.print("Alpha: ");
    Serial.println(i);
  }
}