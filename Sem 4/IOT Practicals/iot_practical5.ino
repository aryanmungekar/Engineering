/*

5. Write a program using Arduino to control LED (One or more ON/OFF). Or Blinking

*/

// Define the pin number for the LED
const int ledPin = 13;

// Define the interval for blinking (in milliseconds)
const int blinkInterval = 1000; // 1000 milliseconds = 1 second

// Variable to store the current state of the LED
bool ledState = false;

// Variable to store the previous time the LED was toggled
unsigned long previousMillis = 0;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis(); // Get the current time

  // Check if it's time to toggle the LED based on the blink interval
  if (currentMillis - previousMillis >= blinkInterval) {
    previousMillis = currentMillis; // Save the current time as the previous time

    // Toggle the LED state
    ledState = !ledState;

    // Apply the new state to the LED pin
    digitalWrite(ledPin, ledState ? HIGH : LOW);
  }

  // You can add more functionality here, like responding to user input to turn the LED on/off
}
