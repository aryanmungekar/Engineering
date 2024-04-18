/*

12. Understanding the connectivity of Raspberry-Pi /Beagle board circuit / Arduino with
IR sensor. Write an application to detect obstacle and notify user using LEDs

*/

// Define pin numbers
const int irSensorPin = 2; // IR sensor OUT pin
const int greenLedPin = 8; // Green LED
const int yellowLedPin = 9; // Yellow LED
const int redLedPin = 10; // Red LED

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the sensor pin as an input
  pinMode(irSensorPin, INPUT);

  // Set the LED pins as outputs
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
}

void loop() {
  // Read the state of the IR sensor
  int obstacleDetected = digitalRead(irSensorPin);

  // Print the sensor state to the serial monitor
  Serial.println(obstacleDetected);

  // If obstacle detected, turn on the red LED and turn off the others
  if (obstacleDetected == HIGH) {
    digitalWrite(redLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
  } else {
    // If no obstacle detected, turn on the green LED and turn off the others
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
  }

  // Delay for a short interval before taking another reading
  delay(100); // Adjust the delay time as needed
}
