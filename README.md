# ATANY328 Library

The `ATANY328` library allows you to program any Arduino board like an ATMEGA328. This library provides classes and macros to emulate the ATMEGA328 registers, making it easier to port code between different Arduino boards.

## Installation

1. Download the library from the [GitHub repository](https://github.com/agdl/ATANY328).
2. Extract the downloaded ZIP file.
3. Move the extracted folder to your Arduino libraries directory (usually located at `~/Documents/Arduino/libraries`).

## Classes
The library provides the following classes to emulate the ATMEGA328 registers:

PORTBClass
PORTCClass
PORTDClass
DDRBClass
DDRCClass
DDRDClass
Macros
The library defines several macros to manipulate the registers:

SET_PORT_REGISTER(portPosition, arduinoPin, value)
CLEAR_PORT_REGISTER(portPosition, arduinoPin, value)
SET_OR_CLEAR_PORT_REGISTER(portPosition, arduinoPin, value)
SET_DIR_REGISTER(portPosition, arduinoPin, value)
CLEAR_DIR_REGISTER(portPosition, arduinoPin, value)
SET_OR_CLEAR_DIR_REGISTER(portPosition, arduinoPin, value)
License
This library is licensed under the GNU Lesser General Public License. See the LICENSE file for more details.

## Authors
Arturo Guadalupi

## Maintainer
Arturo Guadalupi