#include "ArduinoButton.h"
#include <Arduino.h>

ArduinoButton::init(int pin) {
    this->pin = pin;
    pinMode(pin, INPUT_PULLUP);
}

bool ArduinoButton::isPressed() {
    return !digitalRead(pin);
}

bool ArduinoButton::isReleased() {
    return digitalRead(pin);
}