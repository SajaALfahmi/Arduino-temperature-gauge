#include "arduino_secrets.h"

#include <Wire.h>
#include <Adafruit_MLX90614.h>
#include <LiquidCrystal_I2C.h>

// GY-906 sensor definition
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

// LCD definition
LiquidCrystal_I2C lcd(0x27, 16, 2); // Address 0x27 may vary by display

void setup() {
// Start communicating with the sensor
mlx.begin();

// Start communicating with the display
lcd.begin(16, 2);
lcd.print("Initializing...");
delay(2000);

// Clearing the display
lcd.clear();
}

void loop() {
// Read the temperature from the sensor (body or room temperature)
float temp = mlx.readObjectTempC(); // Read the body temperature (Celsius)

// Display the temperature on the LCD
lcd.clear();
lcd.setCursor(0, 0); // Place the cursor on the first line
lcd.print("Temp: ");
lcd.print(temp);
lcd.print(" C");

// Delay between readings
delay(1000); // Delay for 1 second before the next reading
}