# Blinker Arduino Library

## Description
The Blinker library is designed for Arduino boards, providing a simple and efficient way to manage LED blinking patterns. It uses non-blocking code, allowing the Arduino to run other tasks while controlling LEDs. This library is ideal for projects that require LED notifications or indicators.

## Features
- Non-blocking LED blinking
- Customizable number of blinks and blink duration
- Easy to integrate and use in any Arduino project

## Installation
1. Download the library as a zip.
2. Open the Arduino IDE, go to Sketch > Include Library > Add .ZIP Library, and select the downloaded zip file.
3. Once installed, you can include the Blinker library in your sketches with `#include <Blinker.h>`.

## Usage
Here's a simple example of how to use the Blinker library:

```cpp
#include <Blinker.h>

Blinker blinker;

void setup() {
  blinker.blink(); // Default to 1 blink of 50ms
}

void loop() {
  blinker.handle();
}
