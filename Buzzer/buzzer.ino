const int buzzer=9;

void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
  tone(buzzer,1000);
  delay(2000);
  noTone(buzzer);
  delay(2000);
}
