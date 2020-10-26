#include<Servo.h>

int servoPin=3;

Servo Servol;

void setup() {
Servol.attach(servoPin);

}

void loop() {
Servol.write(0);
delay(1000);
Servol.write(90);
delay(1000);
Servol.write(180);
delay(1000);

}
