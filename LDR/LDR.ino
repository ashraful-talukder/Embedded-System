
int LED=13;
void setup() {
pinMode(A0,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
int value=analogRead(A0);
Serial.println(value);
if(value<50){
digitalWrite(LED,HIGH);
}
else{
digitalWrite(LED,LOW);
}
delay(1000);
}
