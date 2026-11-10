🚰 Arduino-Based Smart Hand Washing System

<h2 style="font-size:20px;">📌 About the Project</h2>The Arduino-Based Smart Hand Washing System is an embedded systems project designed to automate water control and monitor environmental conditions.

The system uses an IR sensor to detect hand presence and automatically controls a water pump through a relay module. An LDR sensor monitors light conditions, while a DHT11 sensor measures the surrounding temperature. A buzzer provides an alert when the temperature reaches the predefined threshold.

This project demonstrates the integration of multiple sensors and actuators using an Arduino microcontroller.

<h2 style="font-size:20px;">✨ Features</h2>- Touchless Water Control: Automatically activates the water pump when a hand is detected.
- Automatic Pump Control: Controls water flow using a relay module for 3 seconds.
- Light Monitoring: Detects light conditions using an LDR sensor.
- Temperature Monitoring: Measures surrounding temperature using a DHT11 sensor.
- Temperature Alert: Activates a buzzer when the temperature reaches 33°C or above.
- Serial Monitor Output: Displays hand detection, light status, and temperature readings.

<h2 style="font-size:20px;">🔧 Components Used</h2>- Arduino Uno
- IR Sensor
- LDR Sensor Module
- DHT11 Temperature and Humidity Sensor
- 1-Channel Relay Module
- DC Water Pump
- Buzzer
- Jumper Wires
- Breadboard
- USB Cable
- External Power Supply (for the water pump, if required)

<h2 style="font-size:20px;">⚙️ How It Works</h2>1. Hand Detection: The IR sensor detects the presence of a hand.
2. Water Pump Activation: When a hand is detected, the Arduino activates the relay and turns ON the water pump.
3. Automatic Water Control: The water pump operates for 3 seconds and then automatically turns OFF.
4. Light Monitoring: The LDR sensor monitors the surrounding light conditions and displays the status in the Serial Monitor.
5. Temperature Monitoring: The DHT11 sensor continuously measures the surrounding temperature.
6. Buzzer Alert: When the temperature reaches 33°C or above, the buzzer is activated.
7. Serial Monitoring: Sensor readings and system status are displayed through the Arduino Serial Monitor.

<h2 style="font-size:20px;">📷 Circuit Connection</h2><p align="center">
  <img src="circuit_connection.jpg.jpeg" alt="Circuit Connection" width="600">
</p><h2 style="font-size:20px;">📟 Serial Monitor Output</h2><p align="center">
  <img src="serial_monitor_output.png" alt="Serial Monitor Output" width="600">
</p><h2 style="font-size:20px;">📚 What I Learned</h2>- Understanding Arduino microcontroller programming.
- Interfacing multiple sensors with Arduino.
- Working with digital input and output pins.
- Controlling a DC water pump using a relay module.
- Understanding IR sensor-based object detection.
- Monitoring light intensity using an LDR sensor.
- Measuring temperature using a DHT11 sensor.
- Implementing conditional statements and timing functions.
- Displaying real-time sensor data using the Serial Monitor.
- Integrating hardware components to develop an embedded system.

<h2 style="font-size:20px;">🚀 Future Improvements</h2>- Integrate an LCD display to show real-time sensor readings.
- Add an ultrasonic sensor for improved hand detection.
- Implement IoT-based monitoring using ESP32 or Wi-Fi connectivity.
- Develop a mobile application to monitor system status.
- Optimize water usage with intelligent pump control.
- Add water-level monitoring to detect low water conditions.

<h2 style="font-size:20px;">🏢 Applications</h2>- Smart handwashing stations.
- Touchless water dispensing systems.
- Smart buildings.
- Public hygiene facilities.
- Automated water management systems.
- Educational embedded systems projects.

---

Developed using Arduino as an Embedded Systems Project.
