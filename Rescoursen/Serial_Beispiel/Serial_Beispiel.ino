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
  
  Serial.begin(9600);

  Serial.println("Hello");
  delay(1000);
  Serial.println("Im Robot");
  delay(1000);
  Serial.println("I can blinken");
  delay(1000);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(11, LOW);
  delay(1000);
  Serial.println("or");
  delay(1000);
  Serial.println("Limen");
  delay(1000);
  Serial.println("Lim Lim Lim Lim");
  delay(1000);
  Serial.println("Can you");
  delay(1000);
  Serial.println("speak?");
  delay(1000);
  Serial.println("yes?");
  delay(1000);
  Serial.println("okay");
  delay(1000);
  Serial.println("Printing...");
  delay(3000);
  Serial.println("syntax eror fehlertext: OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOSDGNFKJOOOOOOOOOOOOOOOOOOOOOOOOFGFDFLEDOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOODKFJDJGFJ Datei konnte nicht gefunden werden.");
  delay(1000);
  Serial.println("Neustart...");
  delay(1000);
  Serial.println("Fehler");
  delay(1000);
  Serial.println("Downloading System...");
  delay(2000);
  Serial.println("1%");
  delay(2000);
  Serial.println("2%");
  delay(2000);
  Serial.println("3%");
  delay(2000);
  Serial.println("4%");
  delay(2000);
  Serial.println("5%");
  delay(2000);
  Serial.println("6%");
  delay(2000);
  Serial.println("7%");
  delay(2000);
  Serial.println("8%");
  delay(2000);
  Serial.println("9%");
  delay(2000);
  Serial.println("10%");
  delay(2000);
  Serial.println("11%");
  delay(2000);
  Serial.println("12%");
  delay(2000);
  Serial.println("13%");
  delay(2000);
  Serial.println("14%");
  delay(2000);
  Serial.println("15%");
  delay(1000);
  Serial.println("Fehler: System.propertis konnte nicht gefunden werden.");
  delay(1000);
  Serial.println("System Updaten?");
  delay(5000);
    Serial.println("System wird geupdated");
    delay(2000);
    Serial.println("10%");
    delay(2000);
    Serial.println("20%");
    delay(2000);
    Serial.println("30%");
    delay(2000);
    Serial.println("40%");
    delay(2000);
    Serial.println("50%");
    delay(2000);
    Serial.println("60%");
    delay(2000);
    Serial.println("70%");
    delay(2000);
    Serial.println("80%");
    delay(2000);
    Serial.println("90%");
    delay(2000);
    Serial.println("100%");
    delay(1000);
    Serial.println("System erfolgreich geupdated");
    delay(1000);
    Serial.println("");
    delay(1000);

    
  }
}
