const int LED = 10;
const int LED2 = 11;
const int LED3 = 12;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(10);
  digitalWrite(LED2, HIGH);
  delay(1000);
   digitalWrite(LED2, LOW);
  delay(10);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  delay(10);
}
