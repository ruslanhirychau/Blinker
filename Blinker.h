#ifndef Blinker_h
#define Blinker_h

#include <Arduino.h>

class Blinker
{
public:
    Blinker(int ledPin);
    void init();
    void blink(int pulses = 1, int period = 50);
    void handle();

private:
    int _ledPin;
    int _pulses;
    int _period;
    bool _isOn;
    unsigned long _previousMillis;
    int _blinkCount;
};

#endif
