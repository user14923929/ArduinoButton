# ArduinoButton Library

The `ArduinoButton` library provides a simple interface for working with buttons in Arduino projects. It allows you to easily check if a button is pressed or released.

## Features

- Simple API for button handling.
- Supports internal pull-up resistors.

## Installation

1. Copy the `ArduinoButton` library folder to your Arduino `libraries` directory.
2. Restart the Arduino IDE if it is open.

## Usage

### Example

```cpp
#include <ArduinoButton.h>

ArduinoButton button(2); // Initialize button on pin 2

void setup() {
    button.begin(); // Configure the button pin
    Serial.begin(9600);
}

void loop() {
    if (button.isPressed()) {
        Serial.println("Button is pressed!");
    } else if (button.isReleased()) {
        Serial.println("Button is released!");
    }
}
```

## API Reference

### Constructor

```cpp
ArduinoButton(int pin);
```

- **`pin`**: The pin number where the button is connected.

### Methods

#### `void begin()`

Initializes the button pin as an input with an internal pull-up resistor.

#### `bool isPressed()`

Returns `true` if the button is pressed, `false` otherwise.

#### `bool isReleased()`

Returns `true` if the button is released, `false` otherwise.

## License

This library is open-source and available under the MIT License.  