#include<LiquidCrystal.h>
LiquidCrystal led(12,11,5,4,3,2);
void setup() {
  led.begin(16,2);
  led.print("Hello");

}

void loop() {
  led.setCursor(0,1);

}
