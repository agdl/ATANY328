#include "ATANY328.h"

void setup() {
  Serial.begin(115200);
  while(!Serial);
}

void loop() {
  Serial.println("PINB: 0b" + padBinaryString(PINB));
  Serial.println("PINC: 0b" + padBinaryString(PINC));
  Serial.println("PIND: 0b" + padBinaryString(PIND));
  Serial.println();

  delay(1000);
}

String padBinaryString(uint8_t value) {
  String binaryString = String(value, BIN);
  while (binaryString.length() < 8) {
    binaryString = "0" + binaryString;
  }
  return binaryString;
}
