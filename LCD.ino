#include <LiquidCrystal.h> 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2);
    lcd.print("Hello, World!");
}

void loop() {
    lcd.setCursor(0, 1);
    lcd.print("Temp: ");

    int sensorValue = analogRead(A0);
    float voltage = sensorValue * (5.0 / 1023.0);
    float temperature = voltage * 100.0;

    lcd.print(temperature);
    lcd.print(" C  "); 

    delay(1000);
}