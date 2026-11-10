🚰 Arduino-Based Smart Hand Washing System
📌 Project Overview
The Arduino-Based Smart Hand Washing System is an embedded systems project that combines automatic water-pump control with light and temperature monitoring.
An IR sensor detects hand presence, an LDR module monitors the light condition, and a relay controls the water pump. A DHT11 sensor measures the surrounding temperature, while a buzzer provides an alert when the temperature reaches the programmed threshold. Sensor readings and system messages are displayed through the Arduino Serial Monitor.
📸 Hardware Implementation
The image below shows the hardware prototype, including the Arduino board, sensor modules, relay module, buzzer, and circuit connections.
￼ 

Figure 1: Hardware implementation of the Smart Hand Washing System. 

🎯 Project Objectives
Automate water-pump operation based on hand detection.
Control the pump using a relay module.
Monitor light conditions using an LDR module.
Measure surrounding temperature using a DHT11 sensor.
Activate a buzzer when the temperature reaches the configured threshold.
Display sensor readings and system status in the Serial Monitor.
✨ Key Features
Hand detection: Detects a hand using an IR sensor.
Automatic pump control: Uses a relay module to switch the water pump.
Timed water flow: Runs the pump for approximately 3 seconds when the programmed conditions are met.
Light monitoring: Reads the digital output of the LDR module.
Temperature monitoring: Reads temperature using the DHT11 sensor.
Buzzer alert: Sounds when the measured temperature reaches the programmed threshold.
Serial monitoring: Displays sensor readings and operating messages.
🛠️ Hardware Components
Component
Purpose
Arduino Uno
Main controller
IR sensor module
Detects hand presence
LDR sensor module
Detects light conditions
DHT11 sensor
Measures temperature
Relay module
Switches the water pump
DC water pump
Controls water flow
Buzzer
Provides an audible alert
Breadboard and jumper wires
Circuit connections
Suitable external power supply
Powers the pump, as required
🔌 Pin Connections
The following pin assignments are based on the project code.
Component
Arduino connection
IR sensor OUT
Digital pin 7
LDR module DO
Digital pin 6
Relay module IN
Digital pin 5
Buzzer positive (+)
Digital pin 4
DHT11 DATA
Digital pin 3
Sensor VCC
5V, where supported
Sensor GND
GND
Note: Confirm the pin labels and voltage requirements of each module before powering the circuit. Use an appropriate external supply for the water pump; do not power the pump directly from an Arduino I/O pin.
⚙️ Working Principle
1. Hand Detection
The IR sensor detects whether a hand is present. In the current program, a LOW signal indicates hand detection, assuming the sensor module has an active-LOW output.
2. Light Detection
The Arduino reads the LDR module's digital output. The program uses the configured light condition as part of the pump activation logic.
3. Water-Pump Control
When the hand-detection and light conditions are satisfied:
The Arduino activates the relay.
The relay switches the water pump ON.
The pump runs for approximately 3 seconds.
The Arduino switches the relay OFF.
The program waits for the hand to be removed before accepting another detection.
4. Temperature Monitoring
The DHT11 sensor measures the surrounding temperature. The Arduino reads the value and displays it in the Serial Monitor.
5. Buzzer Alert
The program compares the temperature reading with a predefined threshold. When the reading is equal to or greater than that threshold, the buzzer is switched ON; otherwise, it remains OFF.
💻 Software Requirements
Arduino IDE
Arduino C/C++
Adafruit DHT Sensor Library
Adafruit Unified Sensor Library
Include the DHT library in the Arduino sketch:
#include <DHT.h>
📟 Serial Monitor
Open the Arduino Serial Monitor and select 9600 baud to view the sensor readings and system messages.
Example output (illustrative):
Light is ON
Hand Detected
TEMPERATURE: 29 C
Buzzer OFF

TEMPERATURE: 33 C
Buzzer ON
The actual output depends on the sensor readings and the temperature threshold configured in the sketch.
🔄 System Workflow
             START
               |
               v
        Initialize Sensors
               |
               v
       Read IR and LDR Inputs
               |
               v
    Are Hand and Light Conditions Met?
           /           \
         YES            NO
          |              |
          v              v
     Relay ON         Relay OFF
          |
          v
    Pump ON for 3 s
          |
          v
       Relay OFF
          |
          v
   Wait for Hand Removal
          |
          v
    Read Temperature
          |
          v
 Temperature >= Threshold?
       /           \
     YES            NO
      |              |
      v              v
  Buzzer ON      Buzzer OFF
       \            /
        \          /
          Repeat
Current code behaviour: The program uses a blocking wait for hand removal. Therefore, temperature monitoring is paused while that wait is running. Continuous temperature monitoring would require a non-blocking control approach.
📂 Repository Structure
Smart-Hand-Washing-System/
│
├── README.md
├── Hand_Washing_System.ino
│
└── Images/
    └── hand_washing_system.jpg
Keep the image in the Images folder with the exact filename shown above so GitHub can display it in the README.
🚀 Applications
Educational embedded-systems demonstrations
Touchless water-dispensing prototypes
Automated hygiene-system prototypes
Sensor-interfacing and relay-control experiments
🔮 Future Improvements
Use non-blocking timing so temperature monitoring continues during pump operation.
Add an LCD or OLED to display temperature and system status.
Add water-level detection and pump dry-run protection.
Add IoT connectivity for remote monitoring.
Improve water conservation with optimized pump-control logic.
📚 Learning Outcomes
This project provides practical experience with:
Arduino programming and digital input/output.
IR and LDR sensor interfacing.
DHT11 temperature sensing.
Relay-based load control.
Buzzer interfacing.
Serial communication and debugging.
Combining multiple sensors in an embedded system.
👩‍💻 Author
Suvetha R
Electronics and Communication Engineering Student
⭐ Acknowledgement
This project was developed as a hands-on embedded-systems project to explore sensor interfacing, automation, and hardware control using Arduino.
If you find this project useful, feel free to explore the repository and give it a star!
