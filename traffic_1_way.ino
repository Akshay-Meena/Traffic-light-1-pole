void setup() {
  // put your setup code here, to run once:
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(1, LOW);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay(5000);

digitalWrite(1, LOW);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
delay(3000);

digitalWrite(1, HIGH);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
delay(5000);

}
