#include "Blinker.h"

Blinker::Blinker(int pin)
{
    _pin = pin;
    _pulses = 0;
    _isOn = false;
    _previousMillis = 0;
    _blinkCount = 0;
    pinMode(_pin, OUTPUT);
}

void Blinker::blink(int pulses, int period)
{
    _pulses = pulses;
    _period = period;
    _blinkCount = 0;
    _isOn = false;
    _previousMillis = millis();
}

void Blinker::handle()
{
    if (_blinkCount < _pulses)
    {
        unsigned long currentMillis = millis();
        if (currentMillis - _previousMillis >= _period)
        {
            _previousMillis = currentMillis;

            if (_isOn)
            {
                digitalWrite(_pin, LOW);
                _isOn = false;
                _blinkCount++; // Increment here after a full ON/OFF cycle
            }
            else
            {
                digitalWrite(_pin, HIGH);
                _isOn = true;
            }
        }
    }
}
