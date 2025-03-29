#include "ArduinoButton.h"
#include <Arduino.h>

void ArduinoButton::ArduinoButton(int pin) {
    this->pin = pin;
}

void ArduinoButton::begin() {
    pinMode(pin, INPUT_PULLUP);
}

bool ArduinoButton::isPressed() {
    return !digitalRead(pin);
}

bool ArduinoButton::isReleased() {
    return digitalRead(pin);
}