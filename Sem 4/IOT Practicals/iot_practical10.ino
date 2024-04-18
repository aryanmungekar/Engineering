/*

10. Write a program read the temperature sensor and send the values to the serial
monitor on the computer

*/

#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to pin 2 on the Arduino
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature sensor
DallasTemperature sensors(&oneWire);

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);

  // Initialize the DS18B20 temperature sensor
  sensors.begin();
}

void loop() {
  // Request temperature readings from all DS18B20 sensors
  sensors.requestTemperatures();

  // Get the temperature value in Celsius
  float temperatureC = sensors.getTempCByIndex(0);

  // Check if the temperature reading is valid (not -127 degrees Celsius)
  if (temperatureC != -127.00) {
    // Print the temperature value to the serial monitor
    Serial.print("Temperature: ");
    Serial.print(temperatureC);
    Serial.println(" °C");
  } else {
    // Print an error message if the temperature reading is invalid
    Serial.println("Error: Unable to read temperature");
  }

  // Delay for a short interval before taking another reading
  delay(1000); // Adjust the delay time as needed
}
