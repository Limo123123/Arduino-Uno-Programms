int schalter = 0;

void setup() {
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(0, INPUT);


}

void loop() {

    digitalWrite(11, HIGH);
  
  schalter = analogRead (0);
  if(schalter == LOW) {
    
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(1000);
    
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    delay(3000);
    
    digitalWrite(11, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(1000);
    
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
}
