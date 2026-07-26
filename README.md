# 🌡️ Temperature-Based Motor Speed Control System

## Overview
The Temperature-Based Motor Speed Control System is an embedded systems project that automatically controls the speed of a DC motor according to the surrounding temperature. An LM35 temperature sensor continuously monitors the ambient temperature, while an Arduino Uno processes the sensor data and generates a PWM signal to control the motor speed through an L298N motor driver.

As the temperature increases, the motor speed increases automatically. When the temperature decreases, the motor speed is reduced, thereby improving energy efficiency.

## Components Used
- Arduino Uno
- LM35 Temperature Sensor
- L298N Motor Driver
- DC Motor
- 16×2 LCD Display
- Breadboard
- Jumper Wires
- Power Supply

## Working Principle
1. LM35 measures the surrounding temperature.
2. Arduino reads the analog output.
3. Temperature is converted into Celsius.
4. PWM signal controls motor speed.
5. LCD displays temperature and motor speed.

## Features
- Automatic motor speed control
- Real-time temperature monitoring
- PWM-based control
- LCD display output
- Energy-efficient operation

## Applications
- Smart cooling systems
- Industrial automation
- Electronic equipment cooling
- Ventilation systems
- Temperature-controlled environments

## Technologies Used
- Arduino IDE
- Embedded C
- PWM Control
- Sensor Interfacing

## Author
Harshini
