#define SW00 A0
#define SW01 A1
#define SW02 A2

void setup() {
  // put your setup code here, to run once:
  pinMode(SW00, INPUT);
  pinMode(SW01, INPUT);
  pinMode(SW02, INPUT);
  Serial.begin(9600);
}

void loop() {
  int readSW00 = analogRead(SW00);
  int readSW01 = analogRead(SW01);
  int readSW02 = analogRead(SW02);
  Serial.println(readSW00);
  Serial.println(readSW01);
  Serial.println(readSW02);
  delay(1000);
  
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
