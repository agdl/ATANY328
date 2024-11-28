#include "ATANY328.h"

void setup() {
  DDRB |= (1 << 5); // Set 13 as output
}

void loop() {
  PORTB |= (1 << 5); // Turn 13 on
  delay(70);

  PORTB &= ~(1 << 5); // Turn 13 off
  delay(70);
}
