/*

6. Create a program that illuminates the green LED if the counter is less than 100,
illuminates the yellow LED if the counter is between 101 and 200 and illuminates the
red LED if the counter is greater than 200

*/

// Define the pin numbers for the LEDs
const int greenLedPin = 2;
const int yellowLedPin = 3;
const int redLedPin = 4;

// Define the counter variable
int counter = 0;

void setup() {
  // Initialize the LED pins as outputs
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
}

void loop() {
  // Check the value of the counter and illuminate the corresponding LED
  if (counter < 100) {
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
  } else if (counter >= 101 && counter <= 200) {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }

  // Increment the counter
  counter++;

  // Reset the counter if it exceeds 300 (to demonstrate continuous operation)
  if (counter > 300) {
    counter = 0;
  }

  // You can add a delay here to control the rate of change of the LEDs
  delay(100); // 100 milliseconds delay
}
