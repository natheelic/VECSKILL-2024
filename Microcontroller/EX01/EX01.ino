#include <Servo.h>

#define VRSW A1
#define SERVOPIN 6

Servo ENservo;
void setup() {
  pinMode(VRSW, INPUT);
  pinMode(SERVOPIN, OUTPUT);
  ENservo.attach(SERVOPIN);
  Serial.begin(9600);
}
void loop() {
  int readValue = analogRead(VRSW);
  Serial.println(readValue);
  int mapValue = map(readValue, 0, 1023, 180, 0);
  Serial.println(mapValue);
  ENservo.write(mapValue);
  delay(100);
}