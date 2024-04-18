/*

8. Write a program that asks the user for a number and outputs the number squared that is entered

*/

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Wait for the serial monitor to open
  while (!Serial) {
    ;
  }

  // Prompt the user to enter a number
  Serial.println("Enter a number:");
}

void loop() {
  if (Serial.available() > 0) {
    // Read the number entered by the user
    int number = Serial.parseInt();

    // Calculate the square of the number
    int square = number * number;

    // Output the result
    Serial.print("The square of ");
    Serial.print(number);
    Serial.print(" is ");
    Serial.println(square);

    // Prompt the user to enter another number
    Serial.println("Enter another number:");
  }
}
