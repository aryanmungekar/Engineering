/*

7. Create a program so that when the user enters ‘b’ the green light blinks, ‘g’ the green
light is illuminated ‘y’ the yellow light is illuminated and ‘r’ the red light is illuminated

*/

// Define the pin numbers for the LEDs
const int greenLedPin = 2;
const int yellowLedPin = 3;
const int redLedPin = 4;

void setup() {
  // Initialize the LED pins as outputs
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);

  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read(); // Read the incoming character from serial
    
    // Check the input character and control the LEDs accordingly
    switch (input) {
      case 'g':
        digitalWrite(greenLedPin, HIGH);
        digitalWrite(yellowLedPin, LOW);
        digitalWrite(redLedPin, LOW);
        break;
      case 'y':
        digitalWrite(greenLedPin, LOW);
        digitalWrite(yellowLedPin, HIGH);
        digitalWrite(redLedPin, LOW);
        break;
      case 'r':
        digitalWrite(greenLedPin, LOW);
        digitalWrite(yellowLedPin, LOW);
        digitalWrite(redLedPin, HIGH);
        break;
      case 'b':
        // Blink the green LED
        digitalWrite(greenLedPin, HIGH);
        delay(500); // On for 500 milliseconds
        digitalWrite(greenLedPin, LOW);
        delay(500); // Off for 500 milliseconds
        break;
      default:
        // Turn off all LEDs if the input is not recognized
        digitalWrite(greenLedPin, LOW);
        digitalWrite(yellowLedPin, LOW);
        digitalWrite(redLedPin, LOW);
        break;
    }
  }
}
