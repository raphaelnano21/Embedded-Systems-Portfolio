# Embedded Systems Portfolio

Arduino UNO and NodeMCU (ESP8266) projects built across three embedded-systems courses — progressing from digital I/O fundamentals, to sensor/actuator control systems, to networked IoT devices with cloud telemetry.

Each project folder includes the Arduino (`.ino`) source code, a lab report (PDF), and presentation slides (PPTX).

## Tech stack

`C++` (Arduino) · Arduino IDE · ESP8266 / NodeMCU · ThingSpeak

## Skills demonstrated

- **Digital & analog I/O:** PWM control of servos, DC motors, and buzzers
- **Sensors:** ultrasonic (HC-SR04), DHT11 temperature/humidity, soil moisture, IR receiver, flame, LDR
- **Actuators:** servo, stepper, DC motor via H-bridge
- **Displays:** multiplexed 7-segment, I2C LCD
- **Input:** pushbuttons, 4x4 matrix keypad, IR remote
- **Timing & control:** non-blocking `millis()` loops, state machines, debouncing
- **Networking & IoT:** WiFi (ESP8266), cloud telemetry via the ThingSpeak API

---

## Introduction to Embedded Systems

Digital I/O and peripheral interfacing fundamentals on the Arduino UNO. Every project here is a standalone, self-contained device.

| # | Project | Components | Report | Slides | Code |
|---|---------|------------|--------|--------|------|
| 1 | [Symphony of Lights](<Introduction to Embedded Systems/Symphony of Lights>) | 9 LEDs, 4 pushbuttons | [PDF](<Introduction to Embedded Systems/Symphony of Lights/NanoRaphael_CPE106P_B1_Experiment1.pdf>) | [PPTX](<Introduction to Embedded Systems/Symphony of Lights/NanoRaphael_CPE160P_B1_Experiment1.pptx>) | [SourceCodes/](<Introduction to Embedded Systems/Symphony of Lights/SourceCodes>) |
| 2 | [Number System Emulator](<Introduction to Embedded Systems/Number System Emulator>) | 7-segment display, IR receiver, 4 buttons | [PDF](<Introduction to Embedded Systems/Number System Emulator/NanoRaphael_CPE160P_B1_Experiment2.pdf>) | [PPTX](<Introduction to Embedded Systems/Number System Emulator/NanoRaphael_CPE160P_B1_Experiment2.pptx>) | [Experiment2.ino](<Introduction to Embedded Systems/Number System Emulator/SourceCodes/Experiment2.ino>) |
| 3 | [Clock](<Introduction to Embedded Systems/Clock>) | 7-segment display, 5 buttons | [PDF](<Introduction to Embedded Systems/Clock/NanoRaphael_CPE160P_B1_Experiment3.pdf>) | [PPTX](<Introduction to Embedded Systems/Clock/NanoRaphael_CPE160P_B1_Experiment3.pptx>) | [Experiment3.ino](<Introduction to Embedded Systems/Clock/SourceCode/Experiment3.ino>) |
| 4 | [Kettle](<Introduction to Embedded Systems/Kettle>) | Servo, DHT11, sound sensor | [PDF](<Introduction to Embedded Systems/Kettle/NanoRaphael_CPE160P_B1_Experiment4.pdf>) | [PPTX](<Introduction to Embedded Systems/Kettle/NanoRaphael_CPE160P_B1_Experiment4.pptx>) | [Experiment4.ino](<Introduction to Embedded Systems/Kettle/SourceCode/Experiment4.ino>) |
| 5 | [Parking Lot Counter](<Introduction to Embedded Systems/Parking Lot Counter>) | 2× HC-SR04, stepper motor, servo, 7-segment display | [PDF](<Introduction to Embedded Systems/Parking Lot Counter/NanoRaphael_CPE160P_B1_Experiment5.pdf>) | [PPTX](<Introduction to Embedded Systems/Parking Lot Counter/NanoRaphael_CPE160P_B1_Experiment5.pptx>) | [Experiment5.ino](<Introduction to Embedded Systems/Parking Lot Counter/SourceCode/Experiment5.ino>) |
| 6 | [Automatic Trash Can](<Introduction to Embedded Systems/Automatic Trash Can>) | HC-SR04, stepper motor, servo | [PDF](<Introduction to Embedded Systems/Automatic Trash Can/NanoRaphael_CPE160P_B1_Experiment6.pdf>) | — | [Experiment6.ino](<Introduction to Embedded Systems/Automatic Trash Can/Experiment6.ino>) |
| 7 | [Watering Plant System](<Introduction to Embedded Systems/Watering Plant System>) | I2C LCD (20x4), servo valve, soil moisture sensor | [PDF](<Introduction to Embedded Systems/Watering Plant System/NanoRaphael_CPE160P_B1_Experiment7.pdf>) | [PPTX](<Introduction to Embedded Systems/Watering Plant System/NanoRaphael_CPE160P_B1_Experiment7.pptx>) | [Experiment7.ino](<Introduction to Embedded Systems/Watering Plant System/SourceCode/Experiment7.ino>) |

---

## Real-Time Projects

More advanced interfacing on the Arduino UNO: IR remote control, keypad input, motor drivers, and combined LCD + 7-segment display systems.

| # | Project | Components | Report | Slides | Code |
|---|---------|------------|--------|--------|------|
| 1 | [Real-Time Basketball Scoreboard](<Real-Time Projects/Real-Time Basketball Scoreboard>) | 7-segment display, 5 buttons | [PDF](<Real-Time Projects/Real-Time Basketball Scoreboard/NanoRaphael_CPE161P_A1_Experiment1.pdf>) | [PPTX](<Real-Time Projects/Real-Time Basketball Scoreboard/NanoRaphael_CPE161P_A1_Experiment1.pptx>) | [Experiment1.1_Scoreboard.ino](<Real-Time Projects/Real-Time Basketball Scoreboard/Experiment1.1_Scoreboard.ino>) |
| 2 | [Real-Time Traffic Light](<Real-Time Projects/Real-Time Traffic Light>) | HC-SR04, 3 traffic LEDs, 7-segment countdown, 2 buttons | [PDF](<Real-Time Projects/Real-Time Traffic Light/NanoRaphael_CPE161P_A1_Experiment2.pdf>) | [PPTX](<Real-Time Projects/Real-Time Traffic Light/NanoRaphael_CPE161P_A1_Experiment2.pptx>) | [Experiment2_Real-time-Traffic-Light.ino](<Real-Time Projects/Real-Time Traffic Light/Experiment2_Real-time-Traffic-Light.ino>) |
| 3 | [Weather Monitoring](<Real-Time Projects/Weather Monitoring>) | DHT11, 16x2 I2C LCD, 5 selector buttons | [PDF](<Real-Time Projects/Weather Monitoring/NanoRaphael_CPE161P_A1_Experiment3.pdf>) | [PPTX](<Real-Time Projects/Weather Monitoring/NanoRaphael_CPE161P_A1_Experiment3.pptx>) | [Experiment3_Weather-Monitoring.ino](<Real-Time Projects/Weather Monitoring/Experiment3_Weather-Monitoring.ino>) |
| 4 | [Appliance Controller](<Real-Time Projects/Appliance Controller>) | IR receiver, stepper, servo, buzzer, 3 status LEDs | [PDF](<Real-Time Projects/Appliance Controller/NanoRaphael_CPE161P_A1_Experiment4.pdf>) | [PPTX](<Real-Time Projects/Appliance Controller/NanoRaphael_CPE161P_A1_Experiment4.pptx>) | [Experiment4_Appliance-Controller.ino](<Real-Time Projects/Appliance Controller/Experiment4_Appliance-Controller.ino>) |
| 5 | [Real-Time Clock](<Real-Time Projects/Real-Time Clock>) | 7-segment display, LCD, 4 buttons | [PDF](<Real-Time Projects/Real-Time Clock/NanoRaphael_CPE161P_A1_Experiment5.pdf>) | [PPTX](<Real-Time Projects/Real-Time Clock/NanoRaphael_CPE161P_A1_Experiment5.pptx>) | [Experiment5_Real_Time_Clock.ino](<Real-Time Projects/Real-Time Clock/Experiment5_Real_Time_Clock.ino>) |
| 6 | [Self-Driving Car](<Real-Time Projects/Self-Driving Car>) | IR receiver, dual H-bridge motor driver, 2 DC motors | [PDF](<Real-Time Projects/Self-Driving Car/NanoRaphael_CPE161P_A1_Experiment6.pdf>) | [PPTX](<Real-Time Projects/Self-Driving Car/NanoRaphael_CPE161P_A1_Experiment6.pptx>) | [Experiment6_Self_Driving_Car.ino](<Real-Time Projects/Self-Driving Car/Experiment6_Self_Driving_Car.ino>) |
| 7 | [Real-Time Vault System](<Real-Time Projects/Real-Time Vault System>) | 4x4 matrix keypad, 16x2 I2C LCD, servo lock | [PDF](<Real-Time Projects/Real-Time Vault System/NanoRaphael_CPE161P_A1_Experiment7.pdf>) | [PPTX](<Real-Time Projects/Real-Time Vault System/NanoRaphael_CPE161P_A1_Experiment7.pptx>) | [Experiment7_RealTime_Vault_System.ino](<Real-Time Projects/Real-Time Vault System/Experiment7_RealTime_Vault_System.ino>) |

---

## IoT ESP-based Systems

WiFi-connected NodeMCU/ESP8266 projects with cloud data logging (ThingSpeak) — the shift from standalone devices to networked IoT systems.

| # | Project | Components | Report | Slides | Code |
|---|---------|------------|--------|--------|------|
| 1 | [IoT-based Automated Street Lighting System](<IoT ESP-based Systems/IoT-based Automated Street Lighting System>) | LDR, 9 LEDs, ESP8266 WiFi | [PDF](<IoT ESP-based Systems/IoT-based Automated Street Lighting System/NanoRaphael_CPE162P_C1_Experiment1.pdf>) | [PPTX](<IoT ESP-based Systems/IoT-based Automated Street Lighting System/NanoRaphael_CPE162P_C1_Experiment1.pptx>) | [Experiment1.ino](<IoT ESP-based Systems/IoT-based Automated Street Lighting System/Nano_CPE162P_C1_Experiment1.ino>) |
| 2 | [Home Appliance Automation using IoT](<IoT ESP-based Systems/Home Appliance Automation using IoT>) | IR receiver, servo, buzzer, status LED, ThingSpeak | [PDF](<IoT ESP-based Systems/Home Appliance Automation using IoT/NanoRaphael_CPE162P_C1_Experiment2.pdf>) | [PPTX](<IoT ESP-based Systems/Home Appliance Automation using IoT/NanoRaphael_CPE162P_C1_Experiment2.pptx>) | [Experiment2.ino](<IoT ESP-based Systems/Home Appliance Automation using IoT/Nano_CPE162P_C1_Experiment2.ino>) |
| 3 | [IoT-based Weather Monitoring System](<IoT ESP-based Systems/IoT-based Weather Monitoring System>) | DHT11, 16x2 I2C LCD, ThingSpeak | [PDF](<IoT ESP-based Systems/IoT-based Weather Monitoring System/NanoRaphael_CPE162P_C1_Experiment3.pdf>) | [PPTX](<IoT ESP-based Systems/IoT-based Weather Monitoring System/NanoRaphael_CPE162P_C1_Experiment3.pptx>) | [Experiment3.ino](<IoT ESP-based Systems/IoT-based Weather Monitoring System/Nano_CPE162P_C1_Experiment3.ino>) |
| 4 | [IoT-based Irrigation System](<IoT ESP-based Systems/IoT-based Irrigation System>) | Soil moisture sensor, servo valve, LCD, ThingSpeak | [PDF](<IoT ESP-based Systems/IoT-based Irrigation System/NanoRaphael_CPE162P_C1_Experiment4.pdf>) | [PPTX](<IoT ESP-based Systems/IoT-based Irrigation System/NanoRaphael_CPE162P_C1_Experiment4.pptx>) | [Experiment4.ino](<IoT ESP-based Systems/IoT-based Irrigation System/Nano_CPE162P_C1_Experiment4.ino>) |
| 5 | [IoT-based Water Monitoring System](<IoT ESP-based Systems/IoT-based Water Monitoring System>) | Analog water-level sensor, LCD, ThingSpeak | [PDF](<IoT ESP-based Systems/IoT-based Water Monitoring System/NanoRaphael_CPE162P_C1_Experiment5.pdf>) | [PPTX](<IoT ESP-based Systems/IoT-based Water Monitoring System/NanoRaphael_CPE162P_C1_Experiment5.pptx>) | [Experiment5.ino](<IoT ESP-based Systems/IoT-based Water Monitoring System/Nano_CPE162P_C1_Experiment5.ino>) |
| 6 | [IoT-based Building System](<IoT ESP-based Systems/IoT-based Building System>) | 2× HC-SR04, status LEDs, LCD, ThingSpeak | [PDF](<IoT ESP-based Systems/IoT-based Building System/NanoRaphael_CPE162P_C1_Experiment6.pdf>) | [PPTX](<IoT ESP-based Systems/IoT-based Building System/NanoRaphael_CPE162P_C1_Experiment6.pptx>) | [Experiment6.ino](<IoT ESP-based Systems/IoT-based Building System/Nano_CPE162P_C1_Experiment6.ino>) |
| 7 | [IoT-based Fire Alarm System](<IoT ESP-based Systems/IoT-based Fire Alarm System>) | Flame sensor, buzzer, 4 floor LEDs, ThingSpeak | [PDF](<IoT ESP-based Systems/IoT-based Fire Alarm System/NanoRaphael_CPE162P_C1_Experiment7.pdf>) | [PPTX](<IoT ESP-based Systems/IoT-based Fire Alarm System/NanoRaphael_CPE162P_C1_Experiment7.pptx>) | [Experiment7.ino](<IoT ESP-based Systems/IoT-based Fire Alarm System/Nano_CPE162P_C1_Experiment7.ino>) |

> WiFi and ThingSpeak API credentials in this section's sketches are stored as placeholder constants — replace them with your own before flashing to a device.

---

## Repository structure

```
├── Introduction to Embedded Systems/   Digital I/O & Peripherals (Arduino UNO)
├── Real-Time Projects/                 Interfacing & Control Systems (Arduino UNO)
└── IoT ESP-based Systems/              IoT & Cloud-Connected Systems (NodeMCU/ESP8266)
```
