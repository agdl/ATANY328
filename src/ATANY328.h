#pragma once
#pragma GCC optimize ("O2")
#include "Arduino.h"

#ifndef _ATANY328_H_
#define _ATANY328_H_

/*
  ARDUINO PIN  ATMEGA 328
  0            PD0
  1            PD1
  2            PD2
  3            PD3
  4            PD4
  5            PD5
  6            PD6
  7            PD7
  8            PB0
  9            PB1
  10           PB2
  11           PB3
  12           PB4
  13           PB5
  A0           PC0
  A1           PC1
  A2           PC2
  A3           PC3
  A4           PC4
  A5           PC5
*/

#define PB5 13
#define PB4 12
#define PB3 11
#define PB2 10
#define PB1 9
#define PB0 8
#define PD7 7
#define PD6 6
#define PD5 5
#define PD4 4
#define PD3 3
#define PD2 2
#define PD1 1
#define PD0 0
#define PC5 A5
#define PC4 A4
#define PC3 A3
#define PC2 A2
#define PC1 A1
#define PC0 A0

#undef PORTB
#undef PORTC
#undef PORTD

#define SET_PORT_REGISTER(portPosition, arduinoPin, value) \
  if ((1 << portPosition) & value) {                       \
    digitalWrite(arduinoPin, HIGH);                        \
  }

#define CLEAR_PORT_REGISTER(portPosition, arduinoPin, value) \
  if (!((1 << portPosition) & value)) {                      \
    digitalWrite(arduinoPin, LOW);                           \
  }

#define SET_OR_CLEAR_PORT_REGISTER(portPosition, arduinoPin, value) \
  if ((1 << portPosition) & value) {                                \
    digitalWrite(arduinoPin, HIGH);                                 \
  } else {                                                          \
    digitalWrite(arduinoPin, LOW);                                  \
  }

#define SET_DIR_REGISTER(portPosition, arduinoPin, value) \
  if ((1 << portPosition) & value) {                      \
    pinMode(arduinoPin, OUTPUT);                          \
  }

#define CLEAR_DIR_REGISTER(portPosition, arduinoPin, value) \
  if (!((1 << portPosition) & value)) {                     \
    pinMode(arduinoPin, INPUT);                             \
  }

#define SET_OR_CLEAR_DIR_REGISTER(portPosition, arduinoPin, value) \
  if ((1 << portPosition) & value) {                               \
    pinMode(arduinoPin, OUTPUT);                                   \
  } else {                                                         \
    pinMode(arduinoPin, INPUT);                                    \
  }

#define PINB (readPINB())
#define PINC (readPINC())
#define PIND (readPIND())

uint8_t readPINB();
uint8_t readPINC();
uint8_t readPIND();

/** DDR Classes **/
class DDRBClass {
  public:
    DDRBClass() {}
    DDRBClass& operator=(uint8_t value) {
      SET_OR_CLEAR_DIR_REGISTER(0, PB0, value);
      SET_OR_CLEAR_DIR_REGISTER(1, PB1, value);
      SET_OR_CLEAR_DIR_REGISTER(2, PB2, value);
      SET_OR_CLEAR_DIR_REGISTER(3, PB3, value);
      SET_OR_CLEAR_DIR_REGISTER(4, PB4, value);
      SET_OR_CLEAR_DIR_REGISTER(5, PB5, value);
      return *this;
    }

    DDRBClass& operator&=(uint8_t value) {
      CLEAR_DIR_REGISTER(0, PB0, value);
      CLEAR_DIR_REGISTER(1, PB1, value);
      CLEAR_DIR_REGISTER(2, PB2, value);
      CLEAR_DIR_REGISTER(3, PB3, value);
      CLEAR_DIR_REGISTER(4, PB4, value);
      CLEAR_DIR_REGISTER(5, PB5, value);
      return *this;
    }

    DDRBClass& operator|=(uint8_t value) {
      SET_DIR_REGISTER(0, PB0, value);
      SET_DIR_REGISTER(1, PB1, value);
      SET_DIR_REGISTER(2, PB2, value);
      SET_DIR_REGISTER(3, PB3, value);
      SET_DIR_REGISTER(4, PB4, value);
      SET_DIR_REGISTER(5, PB5, value);
      return *this;
    }
};

class DDRCClass {
  public:
    DDRCClass() {}
    DDRCClass& operator=(uint8_t value) {
      SET_OR_CLEAR_DIR_REGISTER(0, PC0, value);
      SET_OR_CLEAR_DIR_REGISTER(1, PC1, value);
      SET_OR_CLEAR_DIR_REGISTER(2, PC2, value);
      SET_OR_CLEAR_DIR_REGISTER(3, PC3, value);
      SET_OR_CLEAR_DIR_REGISTER(4, PC4, value);
      SET_OR_CLEAR_DIR_REGISTER(5, PC5, value);
      return *this;
    }

    DDRCClass& operator&=(uint8_t value) {
      CLEAR_DIR_REGISTER(0, PC0, value);
      CLEAR_DIR_REGISTER(1, PC1, value);
      CLEAR_DIR_REGISTER(2, PC2, value);
      CLEAR_DIR_REGISTER(3, PC3, value);
      CLEAR_DIR_REGISTER(4, PC4, value);
      CLEAR_DIR_REGISTER(5, PC5, value);
      return *this;
    }

    DDRCClass& operator|=(uint8_t value) {
      SET_DIR_REGISTER(0, PC0, value);
      SET_DIR_REGISTER(1, PC1, value);
      SET_DIR_REGISTER(2, PC2, value);
      SET_DIR_REGISTER(3, PC3, value);
      SET_DIR_REGISTER(4, PC4, value);
      SET_DIR_REGISTER(5, PC5, value);
      return *this;
    }
};

class DDRDClass {
  public:
    DDRDClass() {}
    DDRDClass& operator=(uint8_t value) {
      SET_OR_CLEAR_DIR_REGISTER(0, PD0, value);
      SET_OR_CLEAR_DIR_REGISTER(1, PD1, value);
      SET_OR_CLEAR_DIR_REGISTER(2, PD2, value);
      SET_OR_CLEAR_DIR_REGISTER(3, PD3, value);
      SET_OR_CLEAR_DIR_REGISTER(4, PD4, value);
      SET_OR_CLEAR_DIR_REGISTER(5, PD5, value);
      SET_OR_CLEAR_DIR_REGISTER(6, PD6, value);
      SET_OR_CLEAR_DIR_REGISTER(7, PD7, value);
      return *this;
    }

    DDRDClass& operator&=(uint8_t value) {
      CLEAR_DIR_REGISTER(0, PD0, value);
      CLEAR_DIR_REGISTER(1, PD1, value);
      CLEAR_DIR_REGISTER(2, PD2, value);
      CLEAR_DIR_REGISTER(3, PD3, value);
      CLEAR_DIR_REGISTER(4, PD4, value);
      CLEAR_DIR_REGISTER(5, PD5, value);
      CLEAR_DIR_REGISTER(6, PD6, value);
      CLEAR_DIR_REGISTER(7, PD7, value);
      return *this;
    }

    DDRDClass& operator|=(uint8_t value) {
      SET_DIR_REGISTER(0, PD0, value);
      SET_DIR_REGISTER(1, PD1, value);
      SET_DIR_REGISTER(2, PD2, value);
      SET_DIR_REGISTER(3, PD3, value);
      SET_DIR_REGISTER(4, PD4, value);
      SET_DIR_REGISTER(5, PD5, value);
      SET_DIR_REGISTER(6, PD6, value);
      SET_DIR_REGISTER(7, PD7, value);
      return *this;
    }
};

/** PORT Classes **/
class PORTBClass {
  public:
    PORTBClass() {}
    PORTBClass& operator=(uint8_t value) {
      SET_OR_CLEAR_PORT_REGISTER(0, PB0, value);
      SET_OR_CLEAR_PORT_REGISTER(1, PB1, value);
      SET_OR_CLEAR_PORT_REGISTER(2, PB2, value);
      SET_OR_CLEAR_PORT_REGISTER(3, PB3, value);
      SET_OR_CLEAR_PORT_REGISTER(4, PB4, value);
      SET_OR_CLEAR_PORT_REGISTER(5, PB5, value);
      return *this;
    }

    PORTBClass& operator&=(uint8_t value) {
      CLEAR_PORT_REGISTER(0, PB0, value);
      CLEAR_PORT_REGISTER(1, PB1, value);
      CLEAR_PORT_REGISTER(2, PB2, value);
      CLEAR_PORT_REGISTER(3, PB3, value);
      CLEAR_PORT_REGISTER(4, PB4, value);
      CLEAR_PORT_REGISTER(5, PB5, value);
      return *this;
    }

    PORTBClass& operator|=(uint8_t value) {
      SET_PORT_REGISTER(0, PB0, value);
      SET_PORT_REGISTER(1, PB1, value);
      SET_PORT_REGISTER(2, PB2, value);
      SET_PORT_REGISTER(3, PB3, value);
      SET_PORT_REGISTER(4, PB4, value);
      SET_PORT_REGISTER(5, PB5, value);
      return *this;
    }
};

class PORTCClass {
  public:
    PORTCClass() {}
    PORTCClass& operator=(uint8_t value) {
      SET_OR_CLEAR_PORT_REGISTER(0, PC0, value);
      SET_OR_CLEAR_PORT_REGISTER(1, PC1, value);
      SET_OR_CLEAR_PORT_REGISTER(2, PC2, value);
      SET_OR_CLEAR_PORT_REGISTER(3, PC3, value);
      SET_OR_CLEAR_PORT_REGISTER(4, PC4, value);
      SET_OR_CLEAR_PORT_REGISTER(5, PC5, value);
      return *this;
    }

    PORTCClass& operator&=(uint8_t value) {
      CLEAR_PORT_REGISTER(0, PC0, value);
      CLEAR_PORT_REGISTER(1, PC1, value);
      CLEAR_PORT_REGISTER(2, PC2, value);
      CLEAR_PORT_REGISTER(3, PC3, value);
      CLEAR_PORT_REGISTER(4, PC4, value);
      CLEAR_PORT_REGISTER(5, PC5, value);
      return *this;
    }

    PORTCClass& operator|=(uint8_t value) {
      SET_PORT_REGISTER(0, PC0, value);
      SET_PORT_REGISTER(1, PC1, value);
      SET_PORT_REGISTER(2, PC2, value);
      SET_PORT_REGISTER(3, PC3, value);
      SET_PORT_REGISTER(4, PC4, value);
      SET_PORT_REGISTER(5, PC5, value);
      return *this;
    }
};

class PORTDClass {
  public:
    PORTDClass() {}
    PORTDClass& operator=(uint8_t value) {
      SET_OR_CLEAR_PORT_REGISTER(PD0, 0, value);
      SET_OR_CLEAR_PORT_REGISTER(PD1, 1, value);
      SET_OR_CLEAR_PORT_REGISTER(PD2, 2, value);
      SET_OR_CLEAR_PORT_REGISTER(PD3, 3, value);
      SET_OR_CLEAR_PORT_REGISTER(PD4, 4, value);
      SET_OR_CLEAR_PORT_REGISTER(PD5, 5, value);
      SET_OR_CLEAR_PORT_REGISTER(PD6, 6, value);
      SET_OR_CLEAR_PORT_REGISTER(PD7, 7, value);
      return *this;
    }

    PORTDClass& operator&=(uint8_t value) {
      CLEAR_PORT_REGISTER(0, PD0, value);
      CLEAR_PORT_REGISTER(1, PD1, value);
      CLEAR_PORT_REGISTER(2, PD2, value);
      CLEAR_PORT_REGISTER(3, PD3, value);
      CLEAR_PORT_REGISTER(4, PD4, value);
      CLEAR_PORT_REGISTER(5, PD5, value);
      CLEAR_PORT_REGISTER(6, PD6, value);
      CLEAR_PORT_REGISTER(7, PD7, value);
      return *this;
    }

    PORTDClass& operator|=(uint8_t value) {
      SET_PORT_REGISTER(0, PD0, value);
      SET_PORT_REGISTER(1, PD1, value);
      SET_PORT_REGISTER(2, PD2, value);
      SET_PORT_REGISTER(3, PD3, value);
      SET_PORT_REGISTER(4, PD4, value);
      SET_PORT_REGISTER(5, PD5, value);
      SET_PORT_REGISTER(6, PD6, value);
      SET_PORT_REGISTER(7, PD7, value);
      return *this;
    }
};

extern PORTBClass PORTB;
extern PORTCClass PORTC;
extern PORTDClass PORTD;
extern DDRBClass DDRB;
extern DDRCClass DDRC;
extern DDRDClass DDRD;

#endif
