int SW00 = 8, SW01 = 9, SW02 = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(SW00, INPUT_PULLUP);
  pinMode(SW01, INPUT_PULLUP);
  pinMode(SW02, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int readSW00 = digitalRead(SW00);
  int readSW01 = digitalRead(SW01);
  int readSW02 = digitalRead(SW02);

  if (readSW00 == LOW) {
    Serial.println("SW00 is pressed");
  }
  if (readSW01 == LOW) {
    Serial.println("SW01 is pressed");
  }
  if (readSW02 == LOW) {
    Serial.println("SW02 is pressed");
  }
}
