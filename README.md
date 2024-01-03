# Smart Plant Watering using IOT
# Abstract

The Smart Watering System employs a NodeMCU 8266 microcontroller along with a DHT11 sensor for automated plant irrigation. Real-time data from temperature and humidity readings are processed to activate an ON/OFF motor for precise watering. The system focuses on water conservation and time efficiency, utilizing NodeMCU 8266 and DHT11 sensors, and can be remotely monitored and controlled through the Blynk IoT app for enhanced plant care.

## Purpose of the project

Self-watering systems estimate and measure the water content (moisture) in the plant and then supply the desired amount of water needed by that plant. The proposed system minimizes water usage as well as keeps the plants healthy. This project mainly aimed to focus on: 
• To water all the plants regularly. 
• To have remote access for watering plants. 
• Real-time monitoring of Soil moisture, Water level, Temperature, Humidity, 
• Automatic watering at low soil moisture. 
Self-watering planters eliminate the inconsistency in watering by allowing the plant to drink from a reservoir on a need basis. It also provides more consistent soil moisture for a longer period within the pot.

## System Specification
### Hardware Requirements

-   ESP8266 NodeMCU
-   Resistive soil moisture sensor
-   DHT11 sensor module
-   LED
-   Bread Board
-   Wires

### Software Requirement

-   8.00 GB (7.65 GB usable)
-   64-bit operating system, x64-based processor
### Technologies Used

-   Arduino IDE
-   Blynk 2.0
- 
## System Implementation

### Modules

-   NodeMCU ESP8266
-   DHT11 moisture sensor
-   Arduino IDE
-   Blynk 2.0

### Module Description

#### NodeMCU ESP8266

The NodeMCU serves as the central processing unit, reading values from moisture sensors and enabling internet connectivity.

Specifications:

-   Microcontroller: Tensilica 32-bit RISC CPU Xtensa LX106
-   Operating Voltage: 3.3V
-   Digital I/O Pins (DIO): 16
-   Analog Input Pins (ADC): 1
-   ...

#### DHT11 Moisture Sensor

The DHT11 sensor measures temperature and humidity accurately, providing serial data for interfacing with microcontrollers.

Specifications:

-   Operating current: 0.3mA (measuring) 60uA (standby)
-   Output: Serial data
-   Temperature Range: 0°C to 50°C
-   Humidity Range: 20% to 90%
-   ...

#### Arduino IDE

The Arduino IDE serves as the development environment for coding and uploading programs to the NodeMCU board.

#### Blynk 2.0

Blynk 2.0 facilitates IoT functionality, enabling remote control and monitoring. It offers a user-friendly graphical interface and supports various widgets for data visualization.

Features:

-   More customization available.
-   Large community support.
-   Easy to understand.