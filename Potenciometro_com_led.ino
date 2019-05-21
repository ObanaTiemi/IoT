const int POT = A0;
const int LED = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(POT, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valor = analogRead(POT);
  Serial.println(valor);
  analogWrite(LED, valor/4);
}
