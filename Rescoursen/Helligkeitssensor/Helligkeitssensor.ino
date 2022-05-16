
int D9 = 9; // Variable D9 wird eingeführt und auf 9 gesetzt
int schalter = 0;

void setup() {
  // Alles in diesen geschweiften Klammern, wird zu Beginn
  // des Programms einmal ausgeführt.
  pinMode(D9, OUTPUT);
  pinMode(A0, INPUT); // A0 ist vordefiniert
}

void loop() {
  // Dies hier ist eine Endlosschleife,
  // wie "Wiederhole fortlaufend".
  int messwert = analogRead(A0);
  int helligkeit = messwert * 255 - 255 / 1023;
  
  analogWrite(D9, helligkeit); // entspricht "digital 9 on"
  delay(500);              // entspricht "warte 0,1 Sekunden" 

  schalter = analogRead (1);
  if(schalter == LOW) {

    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
    }
}
