int sensor = 12;
int Status = 13;

void setup() {
  pinMode(sensor, INPUT_PULLUP);   // declare sensor as input
  pinMode(Status, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  long state = digitalRead(sensor);
  if(state == HIGH) {
    digitalWrite(Status, HIGH);
    Serial.println("Porta Aberta!");
    delay(1000);
  } else {
    digitalWrite(Status, LOW);
    Serial.println("Fechada!");
    delay(1000);
  }
}
