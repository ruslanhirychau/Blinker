#include <Arduino.h> // Include the main Arduino library
#include <Blinker.h> // Include the Blinker library for LED control

Blinker blinker; // Create a Blinker instance for the built-in LED
// Blinker blinker(2); // Create a Blinker instance for the LED on pin 2

void setup()
{
  blinker.blink(3); // Set the LED to blink 3 times at startup
}

void loop()
{
  blinker.handle(); // Manage the blinking process during each loop iteration

  static unsigned long previousMillis = millis(); // Store the last time the LED blinked

  // Check if 1 second (1000 milliseconds) has elapsed
  if (millis() - previousMillis >= 1000)
  {
    blinker.blink();           // Blink the LED once every second
    previousMillis = millis(); // Update the time since the last blink
  }
}
