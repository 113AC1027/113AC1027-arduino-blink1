void setup() {
  // put your setup code here, to run once:
  //pinMode(6, OUTPUT);
  //pinMode(8, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(1000);*/

  /*digitalWrite(3, LOW);// turn the RED LED on
  digitalWrite(4, LOW);// turn the GREEN LED on
  digitalWrite(5, LOW);// turn the GREEN LED on
  delay(1000);// wait for a second

  digitalWrite(3, HIGH);// turn the RED LED off
  digitalWrite(4, HIGH);// turn the GREEN LED off
  digitalWrite(5, HIGH);// turn the GREEN LED off
  delay(1000);// wait for a second*/

  // red
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH); 
  delay(50); 
  // turn off
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(50);
  // green
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  delay(50);
  // turn off
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(50);
  // blue
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW); 
  delay(50);
  // turn off
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(50);
  //purple
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  delay(50);
  // turn off
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(50);
  //yellow
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW); 
  delay(50);
  // turn off
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(50);
  //ligh blue
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 
  delay(50);
  // turn off
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(50);

}
