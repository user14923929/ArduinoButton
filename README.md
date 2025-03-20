# ArduinoButton Library

The `ArduinoButton` library provides a simple interface for working with buttons in Arduino projects. It allows you to easily check if a button is pressed or released.

## Features

- Initialize a button with a specified pin.
- Check if the button is pressed.
- Check if the button is released.

## Installation

1. Copy the `ArduinoButton` library folder to your Arduino `libraries` directory.
2. Restart the Arduino IDE if it is open.

## Usage

Include the library in your Arduino sketch:

```cpp
#include <ArduinoButton.h>
```

### Example

```cpp
#include <ArduinoButton.h>

ArduinoButton button;

void setup() {
    button.init(2); // Initialize button on pin 2
    Serial.begin(9600);
}

void loop() {
    if (button.isPressed()) {
        Serial.println("Button is pressed!");
    }
    if (button.isReleased()) {
        Serial.println("Button is released!");
    }
}
```

## API Reference

### `void init(int pin)`
Initializes the button on the specified pin. The pin is set to `INPUT_PULLUP` mode.

### `bool isPressed()`
Returns `true` if the button is pressed, `false` otherwise.

### `bool isReleased()`
Returns `true` if the button is released, `false` otherwise.

## License

This library is open-source and available under the MIT License.  