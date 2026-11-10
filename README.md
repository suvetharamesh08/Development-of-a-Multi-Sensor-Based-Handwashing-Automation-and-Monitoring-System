**Arduino-Based Smart Hand Washing System**

**Project Objectives**
Automate water-pump operation based on hand detection.
Control the pump using a relay module.
Monitor light conditions using an LDR module.
Measure surrounding temperature using a DHT11 sensor.
Activate a buzzer when the temperature reaches the configured threshold.
Display sensor readings and system status in the Serial Monitor.

 **Key Features**
Hand detection: Detects a hand using an IR sensor.
Automatic pump control: Uses a relay module to switch the water pump.
Timed water flow: Runs the pump for approximately 3 seconds when the programmed conditions are met.
Light monitoring: Reads the digital output of the LDR module.
Temperature monitoring: Reads temperature using the DHT11 sensor.
Buzzer alert: Sounds when the measured temperature reaches the programmed threshold.
Serial monitoring: Displays sensor readings and operating messages.

 **Working Principle**
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
## 📷 Circuit Connection

<p align="center">
  <img src="circuit_connection.jpg.jpeg" alt="Circuit Connection" width="600">
</p>

** Software Requirements**
Arduino IDE
Arduino C/C++
Adafruit DHT Sensor Library
Adafruit Unified Sensor Library
Include the DHT library in the Arduino sketch:
#include <DHT.h>
 **Serial Monitor**
Open the Arduino Serial Monitor and select 9600 baud to view the sensor readings and system messages.
Example output (illustrative):
Light is ON
Hand Detected
TEMPERATURE: 29 C
Buzzer OFF

TEMPERATURE: 33 C
Buzzer ON
The actual output depends on the sensor readings and the temperature threshold configured in the sketch.

** System Workflow**
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

** Applications**
Educational embedded-systems demonstrations
Touchless water-dispensing prototypes
Automated hygiene-system prototypes
Sensor-interfacing and relay-control experiments

**Future Improvements**
Use non-blocking timing so temperature monitoring continues during pump operation.
Add an LCD or OLED to display temperature and system status.
Add water-level detection and pump dry-run protection.
Add IoT connectivity for remote monitoring.
Improve water conservation with optimized pump-control logic.
** Learning Outcomes**
This project provides practical experience with:
Arduino programming and digital input/output.
IR and LDR sensor interfacing.
DHT11 temperature sensing.
Relay-based load control.
Buzzer interfacing.
Serial communication and debugging.
Combining multiple sensors in an embedded system.

** Acknowledgement**
This project was developed as a hands-on embedded-systems project to explore sensor interfacing, automation, and hardware control using Arduino.
If you find this project useful, feel free to explore the repository and give it a star!
