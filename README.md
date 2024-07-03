# Advance-object-avoidance-robot
This repository contains code to control an advanced object avoidance robot using an ESP32 microcontroller. The robot uses a servo motor and TSOP sensor to detect obstacles and adjust its movement accordingly.

Table of Contents
Overview
Features
Hardware Requirements
Pin Configuration
Installation
Usage

This project demonstrates how to control an advanced object avoidance robot using an ESP32 microcontroller. The robot uses a servo motor to scan for obstacles(45 degree rotation) with a TSOP sensor and adjusts its direction to avoid them. The code allows the robot to move forward, backward, and turn left or right based on sensor input.

Features
Obstacle Detection: Uses a TSOP sensor to detect obstacles.
Servo Scanning: Servo motor scans different angles for obstacles.
Movement Control: Controls the robot's movement to avoid obstacles.
Serial Monitoring: Provides real-time feedback through serial communication.
Hardware Requirements
ESP32 Wroom 32D Development Board
Motor Driver (e.g., L298N)
Two DC Motors
TSOP Sensor for obstacle detection
Servo Motor
Power supply for the motors
Connecting wires
Pin Configuration
ESP32 Pin	Description
17- Motor Left (ML1)
5	- Motor Left (ML2)
4-	Motor Right (MR1)
16-	Motor Right (MR2)
22-	TSOP Sensor
23-	Servo Motor
Installation
Clone this repository:

sh
Copy code
git clone https://github.com//NishadGharote//Advance-object-avoidance-robot//edit//main//README.md//advanced-object-avoidance-robot.git
Open the project in the Arduino IDE or your preferred development environment.

Connect your ESP32 to your computer.

Select the appropriate board and port in the Arduino IDE.

Upload the code to your ESP32.

Usage
Connect the motors, servo, and TSOP sensor to the ESP32 according to the pin configuration table.

Power up the ESP32 and the motor driver.

Open the Serial Monitor in the Arduino IDE to view the sensor values and movement directions.

Place the robot in an environment with obstacles to test its avoidance capabilities.

The robot will move based on the sensor input:

Move forward if no obstacle is detected.
Turn left or right if an obstacle is detected, based on the direction of the detection.
