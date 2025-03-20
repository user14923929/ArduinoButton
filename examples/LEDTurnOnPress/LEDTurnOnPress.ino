#include <ArduinoButton.h>
ArduinoButton button;

void void setup() {
    button.init(2);
    pinMode(13, OUTPUT);
}

void loop() {
    if (button.isPressed()) {
        digitalWrite(13, HIGH);
    } else if (button.isReleased()) {
        digitalWrite(13, LOW);
    }
}