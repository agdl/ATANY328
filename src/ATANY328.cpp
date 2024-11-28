#include "ATANY328.h"

#warning "ATMEGA328 registers emulation is enabled. You may encounter some speed issue. Please consider to disable it in the Tools menu"

PORTBClass PORTB;
PORTCClass PORTC;
PORTDClass PORTD;

DDRBClass DDRB;
DDRCClass DDRC;
DDRDClass DDRD;

uint8_t readPINB() {
  uint8_t value = 0x00;

  value |= digitalRead(PB0) << 0;
  value |= digitalRead(PB1) << 1;
  value |= digitalRead(PB2) << 2;
  value |= digitalRead(PB3) << 3;
  value |= digitalRead(PB4) << 4;
  value |= digitalRead(PB5) << 5;

  return value;
}

uint8_t readPINC() {
  uint8_t value = 0x00;

  value |= digitalRead(PC0) << 0;
  value |= digitalRead(PC1) << 1;
  value |= digitalRead(PC2) << 2;
  value |= digitalRead(PC3) << 3;
  value |= digitalRead(PC4) << 4;
  value |= digitalRead(PC5) << 5;

  return value;
}

uint8_t readPIND() {
  uint8_t value = 0x00;

  value |= digitalRead(PD0) << 0;
  value |= digitalRead(PD1) << 1;
  value |= digitalRead(PD2) << 2;
  value |= digitalRead(PD3) << 3;
  value |= digitalRead(PD4) << 4;
  value |= digitalRead(PD5) << 5;
  value |= digitalRead(PD6) << 6;
  value |= digitalRead(PD7) << 7;

  return value;
}