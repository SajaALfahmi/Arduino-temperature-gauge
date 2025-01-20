# Arduino-temperature-gauge

The purpose of this document is to define the requirements for the Arduino Body Temperature Monitoring System project. It includes the hardware requirements, functional and non-functional requirements, use cases, user stories, scenarios, and acceptance criteria necessary for the successful implementation of the system.

## Features
- Body Temperature Measurement
- Real-time Data Display
- Accurate Temperature Detection
- System Health Monitoring

## Requirements
-  Hardware
 Microcontroller: Arduino Uno.
Ultrasonic Sensor: HC-SR04 for object detection.
Soil Moisture Sensor: Analog sensor (range: 0–1023) for waste classification.
Servo Motor: SG90.
Connecting Wires: Male-to-male and male-to-female jumper wires.

-  software
  Arduino IDE: For writing and uploading the code to the microcontroller

  ## How to Use

  - Setup the System:
Assemble the hardware components as per the circuit design.
Load the Arduino sketch into the Arduino IDE.
Connect the microcontroller to your computer via USB.
Upload the code to the microcontroller.


## System Design

- Measurement Module:
  The GY-906 sensor uses infrared technology to measure the temperature of the object and the surrounding environment.
- Display Module (Optional):
  Displays the temperature readings in real-time on an LCD screen or via the serial monitor.
