#include <hp_BH1750.h>

hp_BH1750 BH1750;

void setup() {
  Serial.begin(9600);
  bool avail = BH1750.begin(BH1750_TO_GROUND);
}

void loop() {
  if (BH1750.hasValue()) {
    float lux = BH1750.getLux();
    Serial.println(lux);
    BH1750.start();
  }
}