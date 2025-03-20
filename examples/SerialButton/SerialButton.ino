#include <ArduinoButton.h>

ArduinoButton button;

void setup() {
    Serial.begin(9600);
    button.init(2); // Initialize the button on pin 2
    pinMode(2, INPUT_PULLUP); // Ensure the button pin is set as input with pull-up
}

void loop() {
    if (button.isPressed()) {
        Serial.println("Button Pressed");
    }
    if (button.isReleased()) {
        Serial.println("Button Released");
    }
}