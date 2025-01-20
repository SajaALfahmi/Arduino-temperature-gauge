#include "arduino_secrets.h"

void setup() {
Serial.begin(9600); // Start the serial communication quickly with 9600
Serial.println("Arduino is ready!"); // Confirmation message
}

void loop() {
// Check for data from the device
if (Serial.available() > 0) {
String receivedData = Serial.readString(); // Read the data
Serial.print("Received: ");
Serial.println(receivedData); // Print the received data

// Respond to the incoming data
if (receivedData == "ON") {
Serial.println("Turning ON the LED!");
digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
} else if (receivedData == "OFF") {
Serial.println("Turning OFF the LED!");
digitalWrite(LED_BUILTIN, LOW); // Turn off the built-in LED
} else {
Serial.println("Unknown command!");
}
}

delay(100); // Delay to prevent CPU overload
}