#include <Wire.h>
#include <Adafruit_MLX90614.h>
#include <LiquidCrystal.h>

// Sensor library
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

// LCD library
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  Serial.begin(9600); // Start serial communication
  lcd.begin(16, 2);   // Initialize the LCD
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();

  if (!mlx.begin()) {
    // If the sensor doesn't work
    Serial.println("Sensor error");
    lcd.print("Sensor error");
    while (1); // Stop the code
  }

  lcd.print("Sensor Ready"); // Everything is ready
  delay(2000);
  lcd.clear();
}

void loop() {
  float temp = mlx.readObjectTempC(); // Read the temperature

  if (isnan(temp)) {
    // If the reading is invalid
    lcd.print("Temp Error");
    Serial.println("Temp Error");
    delay(1000);
    return;
  }

  lcd.clear(); // Display the temperature
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");

  Serial.print("Temp: ");
  Serial.println(temp);

  delay(1000); // Wait before the next reading
}
