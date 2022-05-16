int schalter = 0;

void setup() {
  pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(0, INPUT);


}

void loop() {

    schalter = analogRead (0);
  if(schalter == LOW) {
    
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), LOW);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);
    digitalWrite(random(9,12), HIGH);
    delay(500);

    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    
    }
    
}
