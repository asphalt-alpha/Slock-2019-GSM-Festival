void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(3000);

  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(1000);

  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(3   000);

  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(1000);
}
