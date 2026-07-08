<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&height=280&color=0:312E81,25:4338CA,50:6366F1,75:7C3AED,100:6D28D9&text=Smart%20EV%20Charger%20Monitoring%20System&fontSize=42&fontColor=ffffff&fontAlignY=38&animation=fadeIn&desc=ESP32%20•%20IoT%20•%20Real-Time%20Monitoring%20•%20Protection%20System&descAlignY=58"/>

# ⚡ Smart EV Charger Monitoring & Protection System

### *An ESP32-based IoT solution for real-time EV charger monitoring, intelligent fault detection, energy tracking, and automated protection.*

<p>

<img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Platform-ESP32-blue?style=for-the-badge"/>

<img src="https://img.shields.io/badge/IoT-Blynk-orange?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Language-Arduino_C++-00979D?style=for-the-badge&logo=arduino"/>

<img src="https://img.shields.io/badge/License-MIT-purple?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Made%20With-❤️-red?style=for-the-badge"/>

</p>

</div>

---

# 📖 Overview

Electric Vehicle (EV) charging infrastructure is becoming increasingly important as EV adoption grows. However, conventional charging systems often lack affordable real-time monitoring and intelligent protection mechanisms that can detect abnormal operating conditions before they lead to equipment damage or safety hazards.

This project presents a **Smart EV Charger Monitoring & Protection System** built around the **ESP32 microcontroller**. It continuously monitors key electrical and thermal parameters—including voltage, current, temperature, power, and energy consumption—and automatically disconnects the charging supply through a relay whenever predefined safety thresholds are exceeded. The monitored data is transmitted over Wi-Fi for remote visualization, enabling users to supervise charging sessions in real time. The implementation combines embedded systems, IoT connectivity, and automated control into a compact, low-cost prototype. :contentReference[oaicite:0]{index=0} :contentReference[oaicite:1]{index=1}

---

# 🎯 Problem Statement

Most low-cost EV charging setups provide limited visibility into charger health and operating conditions. Without continuous monitoring, faults such as:

- Over Voltage
- Over Current
- Excessive Temperature
- Power Fluctuations
- Energy Overconsumption

may go unnoticed until they damage charging equipment or compromise user safety.

A smart monitoring and protection solution is therefore required to improve reliability while remaining affordable for residential and small-scale charging installations.

---

# 💡 Proposed Solution

The proposed system uses an **ESP32 microcontroller** to acquire real-time data from voltage, current, and temperature sensors. The controller processes the sensor readings, computes electrical quantities such as power and energy consumption, and compares them against predefined safety thresholds.

When an unsafe condition is detected, a relay module immediately disconnects the AC supply to the charger, helping prevent overheating, overload, or equipment damage. At the same time, operational data is made available through an IoT dashboard for remote monitoring. :contentReference[oaicite:2]{index=2}

---

# ✨ Key Features

- ⚡ Real-Time Voltage Monitoring
- 🔋 Current Measurement
- 🌡 Temperature Monitoring
- 📈 Live Power Calculation
- ⚙ Energy Consumption Tracking
- 🛡 Automatic Relay-Based Protection
- 📱 Remote IoT Monitoring
- 📊 Real-Time Dashboard
- 📶 Wi-Fi Connectivity
- 🔄 Continuous Sensor Monitoring
- 🚨 Threshold-Based Fault Detection
- 💰 Low-Cost Embedded Implementation

---

# 🚀 System Highlights

| Feature | Description |
|----------|-------------|
| Controller | ESP32 Development Board |
| Connectivity | Wi-Fi |
| Monitoring | Voltage, Current, Temperature |
| Calculated Parameters | Power, Energy |
| Protection | Automatic Relay Shutdown |
| Dashboard | IoT-Based Remote Monitoring |
| Programming | Arduino IDE (Embedded C++) |
| Application | Smart EV Charging |

---

# 🏗 System Architecture

```text
                    AC Input Supply
                           │
                           │
                    ┌──────────────┐
                    │ Relay Module │
                    └──────┬───────┘
                           │
                     EV Charger Load
                           │
        ┌──────────────────┼──────────────────┐
        │                  │                  │
        │                  │                  │
 Voltage Sensor      Current Sensor     Temperature Sensor
        │                  │                  │
        └──────────────────┼──────────────────┘
                           │
                     ESP32 Controller
                           │
          ┌────────────────┼─────────────────┐
          │                │                 │
          │                │                 │
    Data Processing   Protection Logic   Wi-Fi Module
          │                │                 │
          └────────────────┼─────────────────┘
                           │
                     Blynk IoT Dashboard
                           │
                     Mobile Monitoring
```

---

# 🔄 System Workflow

```text
Power ON
    │
    ▼
Initialize ESP32
    │
    ▼
Read Voltage Sensor
    │
Read Current Sensor
    │
Read Temperature Sensor
    │
Calculate Power
    │
Calculate Energy
    │
Compare with Threshold Values
    │
    ├────────────── Safe ──────────────► Upload Data to Dashboard
    │
    │
    └──────── Fault Detected
                 │
                 ▼
        Trigger Relay OFF
                 │
                 ▼
       Disconnect Charger Supply
                 │
                 ▼
      Continue Monitoring Loop
```

---

# 🖼 Repository Preview

> **Recommended Images to Add**

```
images/

├── prototype.jpg
├── circuit.jpg
├── dashboard.png
├── wiring.jpg
├── working.gif
```

Later in this README, these images will be displayed to demonstrate the hardware prototype, wiring, and IoT dashboard.

---

# 📌 Repository Structure

```text
Smart-EV-Charger-Monitoring-System/
│
├── firmware/
├── hardware/
├── docs/
├── images/
├── README.md
├── LICENSE
└── .gitignore
```

---
---

# 🔩 Hardware Components

The Smart EV Charger Monitoring & Protection System is built using affordable and readily available embedded hardware components. The ESP32 acts as the central controller, acquiring sensor data, processing electrical parameters, communicating with the IoT platform, and controlling the protection relay.

---

## 📦 Hardware Specifications

| Component | Specification | Purpose |
|------------|--------------|----------|
| **ESP32 Development Board** | Dual-Core 240MHz, Wi-Fi & Bluetooth | Main Controller |
| **Voltage Sensor** | ZMPT101B AC Voltage Sensor | AC Voltage Measurement |
| **Current Sensor** | ACS712 Hall Effect Sensor | Current Measurement |
| **Temperature Sensor** | LM35 Analog Sensor | Charger Temperature Monitoring |
| **Relay Module** | 5V Single Channel Relay | Automatic Power Cut-Off |
| **Power Supply** | 5V DC | ESP32 & Sensors |
| **EV Charger** | AC Charger | Charging Load |

---

# ⚙ ESP32 Development Board

<div align="center">

<img width="700" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/arduino/arduino-original.svg"/>

</div>

The **ESP32** serves as the brain of the system. It acquires sensor readings, performs calculations, executes protection logic, and transmits monitoring data to the IoT dashboard through Wi-Fi.

### Specifications

| Parameter | Value |
|------------|------|
| CPU | Dual-Core Xtensa LX6 |
| Clock Speed | Up to 240 MHz |
| Wi-Fi | 802.11 b/g/n |
| Bluetooth | BLE + Classic |
| Operating Voltage | 3.3V |
| ADC Resolution | 12-bit |
| GPIO Pins | 34 |

### Responsibilities

- Read analog sensor values
- Process electrical parameters
- Calculate power
- Calculate energy consumption
- Compare threshold values
- Trigger relay protection
- Upload data via Wi-Fi

---

# ⚡ Voltage Sensor (ZMPT101B)

The ZMPT101B module is used to safely measure AC voltage through an isolated transformer circuit.

### Specifications

| Parameter | Value |
|------------|------|
| Operating Voltage | 5V |
| Measurement Type | AC Voltage |
| Adjustable Gain | Yes |
| Isolation | Transformer Based |
| Output | Analog |

### Functions

- AC Voltage Monitoring
- Voltage Fluctuation Detection
- Safety Monitoring

---

# 🔋 Current Sensor (ACS712)

The ACS712 Hall Effect Current Sensor continuously measures charging current flowing to the EV charger.

### Specifications

| Parameter | Value |
|------------|------|
| Operating Voltage | 5V |
| Output | Analog |
| Technology | Hall Effect |
| Isolation | Yes |

### Functions

- Real-Time Current Measurement
- Overcurrent Detection
- Power Calculation
- Energy Monitoring

---

# 🌡 Temperature Sensor (LM35)

The LM35 continuously measures the charger temperature to prevent overheating and thermal damage. It provides a linear analog output without requiring calibration. :contentReference[oaicite:0]{index=0}

### Specifications

| Parameter | Value |
|------------|------|
| Operating Voltage | 4V–30V |
| Temperature Range | -55°C to 150°C |
| Accuracy | ±0.5°C |
| Output | Analog Voltage |
| Sensitivity | 10mV/°C |

### Functions

- Charger Temperature Monitoring
- Overheating Detection
- Thermal Protection
- Safety Enhancement

---

# 🔌 Relay Module

The relay module acts as the electrical protection switch. When unsafe voltage, current, or temperature conditions are detected, the ESP32 turns the relay OFF, disconnecting the charger supply. :contentReference[oaicite:1]{index=1}

### Specifications

| Parameter | Value |
|------------|------|
| Operating Voltage | 5V DC |
| Relay Type | SPDT |
| Channels | 1 |
| Contact Rating | 10A @ 250VAC |
| Trigger | HIGH / LOW |

### Protection Features

- Automatic Charger Shutdown
- Electrical Isolation
- Safe Switching
- Overload Protection

---

# 💻 Software Stack

| Software | Purpose |
|-----------|---------|
| Arduino IDE | Firmware Development |
| ESP32 Board Package | ESP32 Programming |
| Embedded C / Arduino C++ | Application Logic |
| Wi-Fi | IoT Communication |
| Blynk IoT | Remote Monitoring Dashboard |

---

# 🔌 ESP32 Pin Configuration

| ESP32 Pin | Connected Device |
|------------|-----------------|
| GPIO34 | Voltage Sensor |
| GPIO35 | Current Sensor |
| GPIO32 | LM35 Temperature Sensor |
| GPIO26 | Relay Module |
| VIN | 5V Supply |
| GND | Common Ground |

> **Note:** Update the GPIO numbers if your actual hardware wiring differs.

---

# 🔗 Circuit Connections

| Component | ESP32 Connection |
|------------|-----------------|
| Voltage Sensor | Analog Input |
| Current Sensor | Analog Input |
| LM35 | Analog Input |
| Relay Module | Digital Output |
| Wi-Fi | Internal ESP32 Module |

---

# 📡 Data Flow

```text
Voltage Sensor
        │
Current Sensor
        │
Temperature Sensor
        │
        ▼
+----------------------+
|      ESP32 MCU       |
+----------------------+
        │
        ├────────► Calculate Voltage
        ├────────► Calculate Current
        ├────────► Calculate Power
        ├────────► Calculate Energy
        ├────────► Compare Thresholds
        └────────► Relay Protection
                 │
                 ▼
         Blynk IoT Dashboard
                 │
                 ▼
        Mobile Application
```

---

# ⚙ Working Principle

```text
System Start
      │
      ▼
Initialize ESP32
      │
      ▼
Read Voltage
      │
Read Current
      │
Read Temperature
      │
Calculate Power
      │
Calculate Energy
      │
Check Safety Limits
      │
 ┌───────────────┐
 │ Safe?         │
 └──────┬────────┘
        │Yes
        ▼
Upload Data to Blynk
        │
Continue Monitoring
        │
        │No
        ▼
Relay OFF
        │
Disconnect Charger
        │
Continue Monitoring
```

---

# 🛡 Protection Logic

The firmware continuously compares measured values against predefined safety thresholds. Whenever an unsafe condition is detected—such as excessive current, abnormal voltage, or overheating—the relay immediately disconnects the charger supply. Once values return to a safe operating range, monitoring continues, providing an effective first level of protection for the charging system. :contentReference[oaicite:2]{index=2} :contentReference[oaicite:3]{index=3}

---

# 📸 Hardware Gallery

> Add these images to the `/images` folder and update the paths below.

| Prototype | Wiring |
|------------|--------|
| `images/prototype.jpg` | `images/wiring.jpg` |

| Dashboard | Circuit |
|------------|----------|
| `images/dashboard.png` | `images/circuit.png` |

---
---

# 🚀 Installation

## Prerequisites

Before getting started, ensure you have the following installed:

- Arduino IDE 2.x or later
- ESP32 Board Package
- USB Driver for ESP32
- Stable Wi-Fi Connection
- Blynk IoT Account

---

## Required Arduino Libraries

Install the following libraries from the Arduino Library Manager:

```text
WiFi.h
BlynkSimpleEsp32.h
EmonLib (Optional)
Preferences.h
ArduinoJson
```

---

## Clone Repository

```bash
git clone https://github.com/Samarth2624/Smart-EV-Charger-Monitoring-System.git

cd Smart-EV-Charger-Monitoring-System
```

---

## Upload Firmware

Open

```text
firmware/EV_Charger.ino
```

Select

```text
Board:
ESP32 Dev Module
```

Choose the correct COM Port.

Click

```text
Upload
```

---

# 📂 Project Structure

```text
Smart-EV-Charger-Monitoring-System

│
├── firmware/
│   └── EV_Charger.ino
│
├── hardware/
│   ├── Components.md
│   ├── Pinout.md
│   └── Circuit_Diagram.png
│
├── docs/
│   ├── Architecture.png
│   ├── Workflow.png
│   ├── BlockDiagram.png
│   └── Project_Report.pdf
│
├── images/
│   ├── Prototype.jpg
│   ├── Dashboard.png
│   ├── Wiring.jpg
│   └── Working.gif
│
├── LICENSE
│
└── README.md
```

---

# ⚙ Working Methodology

```text
                     Start
                       │
                       ▼
             Initialize ESP32
                       │
                       ▼
          Initialize Sensors & Wi-Fi
                       │
                       ▼
         Read Voltage, Current, Temperature
                       │
                       ▼
          Process Sensor Readings
                       │
                       ▼
        Calculate Power & Energy Usage
                       │
                       ▼
      Compare With Threshold Conditions
                       │
          ┌────────────┴─────────────┐
          │                          │
          ▼                          ▼
      Safe Values             Unsafe Values
          │                          │
          ▼                          ▼
 Update IoT Dashboard         Relay OFF
          │                          │
          ▼                          ▼
 Continue Monitoring     Disconnect Charger
          │                          │
          └────────────┬─────────────┘
                       ▼
                Repeat Continuously
```

---

# 📊 Electrical Parameters

| Parameter | Description |
|------------|-------------|
| Voltage | Measures charger input voltage |
| Current | Measures charging current |
| Temperature | Detects overheating |
| Power | Voltage × Current |
| Energy | Total energy consumed during charging |

---

# 🔒 Protection Mechanism

The protection algorithm continuously checks all sensor values.

If any parameter exceeds predefined thresholds,

- Over Voltage

- Over Current

- Over Temperature

the relay immediately disconnects the charger from the AC supply to prevent equipment damage and improve operational safety. The system continues monitoring after disconnection, allowing safe recovery once conditions return to normal. This protection strategy is central to the project's safety design. :contentReference[oaicite:0]{index=0}

---

# 📱 IoT Dashboard

The ESP32 sends processed data over Wi-Fi to the Blynk IoT platform for remote monitoring.

The dashboard displays:

- Live Voltage
- Live Current
- Temperature
- Power
- Energy Consumption
- Relay Status
- System Health

Users can monitor charging sessions remotely using a smartphone or web dashboard. :contentReference[oaicite:1]{index=1}

---

# 🧪 Testing

The prototype was tested under different operating conditions.

### Normal Operation

- Stable voltage measurement
- Stable current measurement
- Continuous temperature monitoring
- Correct power calculation
- Accurate energy tracking

---

### Fault Testing

The following conditions were intentionally simulated:

- Over Current
- High Temperature
- Voltage Fluctuation

The ESP32 successfully detected abnormal conditions and activated the relay to disconnect the charger, validating the protection mechanism. :contentReference[oaicite:2]{index=2}

---

# 📈 Performance

| Parameter | Performance |
|-----------|-------------|
| Voltage Monitoring | ✅ Stable |
| Current Monitoring | ✅ Stable |
| Temperature Monitoring | ✅ Reliable |
| Relay Response | ✅ Immediate |
| IoT Updates | ✅ Real-Time |
| Wi-Fi Communication | ✅ Stable |
| Embedded Processing | ✅ Continuous |

---

# 📷 Demonstration

Add screenshots to the **images/** folder.

```text
images/

Prototype.jpg

Dashboard.png

Circuit.png

Working.gif

Relay.jpg

SerialMonitor.png
```

Then display them like this:

```markdown
## Prototype

![Prototype](images/Prototype.jpg)

---

## Dashboard

![Dashboard](images/Dashboard.png)

---

## Wiring

![Wiring](images/Wiring.jpg)
```

---

# 💡 Engineering Concepts Used

- Embedded Systems
- Internet of Things (IoT)
- Sensor Interfacing
- Analog Signal Processing
- Relay Control
- Safety Engineering
- Power Monitoring
- Energy Management
- Real-Time Monitoring
- Wireless Communication
- Automation

---
---

# 📊 Results

The Smart EV Charger Monitoring & Protection System successfully demonstrated reliable real-time monitoring, automated protection, and remote visualization of charging parameters. During testing, the ESP32 continuously acquired voltage, current, and temperature data, processed these readings, and calculated power and energy consumption. The relay protection mechanism responded appropriately whenever abnormal operating conditions were introduced, validating the effectiveness of the overall system. :contentReference[oaicite:0]{index=0}

---

## ✅ Functional Validation

| Feature | Status | Description |
|----------|:------:|-------------|
| Voltage Monitoring | ✅ | Continuous AC voltage measurement |
| Current Monitoring | ✅ | Stable current sensing using ACS712 |
| Temperature Monitoring | ✅ | Real-time charger temperature monitoring |
| Power Calculation | ✅ | Computed using voltage and current values |
| Energy Calculation | ✅ | Continuous energy consumption tracking |
| Wi-Fi Communication | ✅ | Reliable ESP32 wireless communication |
| IoT Dashboard | ✅ | Live data visualization |
| Relay Protection | ✅ | Automatic shutdown during unsafe conditions |

---

# 📈 Performance Summary

| Parameter | Result |
|-----------|---------|
| System Startup | Fast |
| Sensor Response | Stable |
| Relay Response Time | Immediate |
| Data Transmission | Real-Time |
| Monitoring Accuracy | Good (after calibration) |
| Overall Stability | Reliable |

---

# 🧪 Experimental Observations

During experimentation, the following observations were made:

- Continuous acquisition of voltage, current, and temperature values.
- Stable ESP32 operation under prolonged execution.
- Successful computation of electrical power and energy.
- Automatic relay activation during simulated fault conditions.
- Reliable wireless transmission of monitoring data to the IoT dashboard.
- Minor fluctuations caused by sensor calibration and network latency. :contentReference[oaicite:1]{index=1}

---

# 📊 Testing Scenarios

| Test Case | Expected Result | Actual Result |
|------------|----------------|---------------|
| Normal Charging | Monitor parameters | ✅ Passed |
| High Temperature | Relay OFF | ✅ Passed |
| High Current | Relay OFF | ✅ Passed |
| Voltage Fluctuation | Fault Detection | ✅ Passed |
| Wi-Fi Connection | Dashboard Update | ✅ Passed |
| Long Duration Monitoring | Stable Operation | ✅ Passed |

---

# 🛡 Safety Features

The embedded protection system continuously evaluates sensor readings against predefined threshold values.

### Electrical Protection

- Over Voltage Protection
- Over Current Protection
- Over Temperature Protection

### Operational Protection

- Automatic Charger Shutdown
- Continuous Fault Monitoring
- Safe Power Isolation
- Equipment Protection

---

# ⚠ Challenges Faced

Developing an embedded IoT system required addressing both hardware and software challenges.

## Sensor Calibration

Voltage, current, and temperature sensors initially produced inconsistent readings due to calibration differences and environmental noise.

**Solution**

- Compared readings with standard measuring instruments.
- Applied software correction factors.
- Performed repeated calibration tests. :contentReference[oaicite:2]{index=2}

---

## Temperature Measurement

The LM35 initially produced incorrect values because of wiring issues and sensor placement.

**Solution**

- Corrected hardware wiring.
- Improved sensor placement closer to the charger heating area. :contentReference[oaicite:3]{index=3}

---

## IoT Synchronization

Sensor values occasionally failed to update correctly on the Blynk dashboard.

**Solution**

- Corrected virtual pin mapping.
- Optimized data transmission intervals.
- Improved Wi-Fi stability. :contentReference[oaicite:4]{index=4}

---

## Signal Noise

Analog sensor outputs contained fluctuations.

**Solution**

- Averaged multiple sensor readings.
- Applied software filtering techniques. :contentReference[oaicite:5]{index=5}

---

## Relay Stability

Incorrect threshold values occasionally caused false triggering.

**Solution**

- Optimized threshold values.
- Improved relay timing logic. :contentReference[oaicite:6]{index=6}

---

## Hardware Integration

Synchronizing sensors, relay, Wi-Fi, and the ESP32 required careful testing.

**Solution**

- Tested every module independently.
- Integrated modules incrementally.
- Verified synchronization before deployment. :contentReference[oaicite:7]{index=7}

---

# ⚡ Advantages

- Low-cost implementation
- Real-time monitoring
- Automatic electrical protection
- Remote IoT access
- Energy consumption tracking
- Scalable architecture
- Easy hardware integration
- Improved operational safety

These benefits align with the report's evaluation of enhanced safety, remote accessibility, and energy tracking. :contentReference[oaicite:8]{index=8}

---

# ⚠ Current Limitations

Like any prototype, the project has some limitations:

- Sensor calibration affects measurement accuracy.
- IoT functionality depends on internet connectivity.
- Designed for prototype-scale deployments rather than industrial charging stations.
- Uses threshold-based fault detection rather than predictive analytics.
- Requires periodic sensor recalibration. :contentReference[oaicite:9]{index=9}

---

# 🌍 Applications

The system can be adapted for a wide range of charging environments.

| Application | Description |
|-------------|-------------|
| 🏠 Home EV Charging | Safe residential charging |
| 🏢 Apartment Charging | Shared charging infrastructure |
| 🅿 Commercial Parking | Small charging stations |
| 🔋 Energy Monitoring | Power usage analysis |
| 🔧 Service Centers | Charger diagnostics |
| ⚡ Smart Grid Integration | Future energy management |

These use cases are directly supported by the project's proposed applications. :contentReference[oaicite:10]{index=10}

---

# 💰 Project Cost

| Component | Cost (₹) |
|------------|---------:|
| ESP32 | 500 |
| Current Sensor | 70 |
| Voltage Sensor | 100 |
| Temperature Sensor | 120 |
| Relay Module | 70 |
| **Total** | **860** |

The prototype demonstrates that a practical smart monitoring solution can be implemented using inexpensive hardware. :contentReference[oaicite:11]{index=11}

---

# 🚀 Future Improvements

The project has strong potential for expansion.

### Planned Enhancements

- 📱 Dedicated mobile application
- ☁ Cloud database integration
- 📊 Advanced analytics dashboard
- 🤖 Predictive maintenance using Machine Learning
- 💳 Billing and cost estimation
- 🔌 Multi-charger support
- ☀ Solar-powered charging integration
- ⚡ Smart Grid connectivity
- 📈 Historical data visualization
- 🔔 Push notifications for fault alerts

These enhancements reflect the future scope identified in the project report. :contentReference[oaicite:12]{index=12}

---

# 🎯 Key Takeaways

- Successfully designed a low-cost smart EV charger monitoring prototype.
- Implemented embedded sensing, real-time processing, and automated protection.
- Demonstrated practical IoT integration for remote monitoring.
- Validated reliable relay-based safety under fault conditions.
- Built a scalable foundation for future smart charging infrastructure.

---

> **"Engineering safer EV charging through intelligent monitoring, embedded control, and IoT connectivity."**

---
---

# 📚 Documentation

Comprehensive project documentation is available to help users understand the system architecture, implementation, and deployment process.

| Document | Description |
|----------|-------------|
| 📖 Project Report | Complete project documentation |
| 🏗 Architecture Diagram | Overall system architecture |
| 🔌 Circuit Diagram | Hardware wiring connections |
| ⚙ Firmware | ESP32 source code |
| 📷 Images | Prototype and implementation |
| 📑 README | Complete setup and usage guide |

---

# 🖼 Project Gallery

## Hardware Prototype

<p align="center">
<img src="images/prototype.jpg" width="700">
</p>

---

## Circuit Diagram

<p align="center">
<img src="images/circuit.png" width="700">
</p>

---

## Wiring Connections

<p align="center">
<img src="images/wiring.jpg" width="700">
</p>

---

## IoT Dashboard

<p align="center">
<img src="images/dashboard.png" width="700">
</p>

---

## Working Demonstration

<p align="center">
<img src="images/demo.gif" width="700">
</p>

---

# 📹 Demo Video

If you have recorded a demonstration, add it here.

```text
https://youtu.be/YOUR_VIDEO_LINK
```

or

```text
https://drive.google.com/file/d/XXXX
```

---

# 🏆 Project Outcomes

This project successfully demonstrates the integration of embedded systems, IoT, sensing technologies, and automated protection mechanisms into a single low-cost solution for EV charging applications.

### Technical Skills Demonstrated

- Embedded Systems
- ESP32 Programming
- Arduino Development
- Sensor Interfacing
- Analog Signal Processing
- Relay Automation
- IoT Communication
- Wi-Fi Networking
- Electrical Monitoring
- Power Measurement
- Energy Monitoring
- System Integration

---

# 📖 Learning Outcomes

Working on this project strengthened practical knowledge in:

- Embedded Programming
- ESP32 Architecture
- Internet of Things
- Analog Sensors
- Industrial Automation
- Electrical Protection
- Power Electronics Basics
- Real-Time Monitoring
- Wireless Communication
- Hardware Debugging

---

# 🤝 Contributing

Contributions are welcome.

If you'd like to improve this project:

1. Fork the repository.
2. Create a feature branch.
3. Commit your changes.
4. Push the branch.
5. Open a Pull Request.

---

# 📝 License

This project is licensed under the MIT License.

See the **LICENSE** file for additional information.

---

# 👨‍💻 Author

<div align="center">

## Samarth Phakatkar
## Soham Kulkarni
## Salina Shaikh


Electronics & Telecommunication Engineering Student

Software Engineering Enthusiast

Artificial Intelligence Learner

Embedded Systems Developer

IoT Developer

</div>

---

# 📬 Connect With Me

<div align="center">

<a href="https://github.com/Samarth2624">
<img src="https://img.shields.io/badge/GitHub-Samarth2624-181717?style=for-the-badge&logo=github"/>
</a>

<a href="https://leetcode.com/u/Samarth26/">
<img src="https://img.shields.io/badge/LeetCode-Samarth26-FFA116?style=for-the-badge&logo=leetcode&logoColor=black"/>
</a>

<a href="mailto:YOUR_EMAIL@gmail.com">
<img src="https://img.shields.io/badge/Email-Contact_Me-D14836?style=for-the-badge&logo=gmail&logoColor=white"/>
</a>

</div>

---

# ⭐ Support

If you found this repository useful,

please consider giving it a ⭐.

It helps increase visibility and motivates future improvements.

---

# 🙏 Acknowledgements

Special thanks to:

- My project guide and faculty members.
- Indira College of Engineering & Management.
- The Arduino and ESP32 open-source communities.
- The Blynk IoT platform.
- Everyone who contributed to the embedded systems ecosystem.

---

<div align="center">

## 🚀 Building Smarter EV Charging Solutions Through Embedded Systems & IoT

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&section=footer&height=150&color=0:312E81,25:4338CA,50:6366F1,75:7C3AED,100:6D28D9"/>

</div>

> **"Building safer and smarter EV charging solutions through Embedded Systems, IoT, and Intelligent Automation."**

---
