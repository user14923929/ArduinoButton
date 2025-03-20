class ArduinoButton {
    public:
        void init(int pin);
        bool isPressed();
        bool isReleased();
    private:
        int pin;
};