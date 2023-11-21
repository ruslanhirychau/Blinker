#include <Arduino.h> // Include Arduino's main library
#include <Blinker.h> // Include the Blinker library for LED control

Blinker blinker(LED_BUILTIN); // Create a Blinker instance for the built-in LED

void setup()
{
  blinker.init();   // Initialize the blinker
  blinker.blink(3); // Set it to blink 3 times at start-up
}

void loop()
{
  blinker.handle(); // Manage the blinking process in each loop iteration

  static unsigned long previousMillis = millis(); // Store the last time the LED blinked

  // Check if 1 second (1000 milliseconds) has passed
  if (millis() - previousMillis >= 1000)
  {
    blinker.blink();           // Blink once every second
    previousMillis = millis(); // Update the time since last blink
  }
}
