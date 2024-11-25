#define SW00 1
#define output01 2

void setup() {
  // put your setup code here, to run once:
  pinMode(SW00, INPUT);
  pinMode(output01, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int readSW00 = digitalRead(SW00);
  if (readSW00 == LOW) {
    Serial.println("SW00 is pressed");
    digitalWrite(output01, HIGH);
  } else {
    digitalWrite(output01, LOW);
  }
}