#include <ArduinoButton.h>
ArduinoButton button(2);

void setup() {
    button.begin();
    pinMode(13, OUTPUT);
}

void loop() {
    if (button.isPressed()) {
        digitalWrite(13, HIGH);
    } else if (button.isReleased()) {
        digitalWrite(13, LOW);
    }
}