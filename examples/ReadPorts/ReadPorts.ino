#include "ATANY328.h"

void setup() {
  Serial.begin(115200);
  while(!Serial);
}

void loop() {
  Serial.println("PINB: " + String(PINB));
  Serial.println("PINC: " + String(PINC));
  Serial.println("PIND: " + String(PIND));

  delay(1000);
}
