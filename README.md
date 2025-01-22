# Arduino Body Temperature Monitoring System

This document outlines the details of the Arduino Body Temperature Monitoring System project, including its hardware and software requirements, features, system design, and usage instructions.

## Features
- **Body Temperature Measurement:** Measures the temperature using the GY-906 infrared temperature sensor.
- **Real-time Data Display:** Displays temperature readings on an LCD screen.
- **Accurate Temperature Detection:** Ensures precise temperature readings.
- **Alert System:** Activates a buzzer alarm when the temperature exceeds a predefined threshold.
- **System Health Monitoring:** Monitors the functionality of components in real-time.

## Requirements

### Hardware
- **Microcontroller:** Arduino Uno.
- **Temperature Sensor:** GY-906 for accurate infrared temperature readings.
- **Buzzer:** Provides an audible alert for high-temperature warnings.
- **LCD Screen:** Displays temperature readings in real-time.
- **Connecting Wires:** Male-to-male and male-to-female jumper wires.
- **Power Supply:** USB cable or external power source for the Arduino board.

### Software
- **Arduino IDE:** For writing, debugging, and uploading the code to the Arduino Uno.

## How to Use

1. **Setup the System:**
   - Assemble the hardware components as per the circuit diagram.
   - Ensure proper connections between the GY-906 sensor, buzzer, LCD screen, and Arduino Uno.
2. **Load the Code:**
   - Open the Arduino IDE.
   - Load the provided Arduino sketch.
   - Connect the Arduino Uno to your computer via USB.
   - Upload the code to the Arduino Uno.
3. **Operate the System:**
   - Power the Arduino Uno.
   - Monitor the LCD screen for temperature readings.
   - Listen for the buzzer alert if the temperature exceeds the set threshold.

## System Design

### Modules
1. **Measurement Module:**
   - Uses the GY-906 infrared sensor to measure body and ambient temperature.
   - Reads temperature data continuously for real-time monitoring.

2. **Display Module:**
   - Shows the temperature readings on an LCD screen or through the Arduino serial monitor.

3. **Alert Module:**
   - Activates the buzzer when the temperature exceeds a specified threshold, ensuring timely notifications for high-temperature conditions.

## Future Enhancements
- Integrating wireless communication (e.g., Bluetooth or Wi-Fi) for remote monitoring.
- Adding a feature to log temperature data over time.
- Providing a mobile or web interface for user convenience.
