class ArduinoButton {
    public:
        ArduinoButton(int pin);
        void begin();
        bool isPressed();
        bool isReleased();
    private:
        int pin;
};