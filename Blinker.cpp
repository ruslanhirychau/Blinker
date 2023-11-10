#include "Blinker.h"

Blinker::Blinker(int ledPin)
{
    _ledPin = ledPin;
    _pulses = 0;
    _isOn = false;
    _previousMillis = 0;
    _blinkCount = 0;
}

void Blinker::init()
{
    pinMode(_ledPin, OUTPUT);
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
                digitalWrite(_ledPin, LOW);
                _isOn = false;
                _blinkCount++; // Increment here after a full ON/OFF cycle
            }
            else
            {
                digitalWrite(_ledPin, HIGH);
                _isOn = true;
            }
        }
    }
}
