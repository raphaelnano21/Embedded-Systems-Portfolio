# Embedded Systems 3 — IoT & Cloud-Connected Systems

Seven lab experiments on the NodeMCU/ESP8266 platform, adding WiFi connectivity and cloud data logging (ThingSpeak) on top of the sensor/actuator skills from Embedded 1–2. This course marks the shift from standalone devices to networked IoT systems.

> **Before pushing this folder to GitHub:** these sketches contain hardcoded WiFi SSID/password and ThingSpeak API key strings. See the "Handling secrets" note in the [GitHub setup guide](<../GITHUB_SETUP_GUIDE.md>) before making the repository public.

| # | Title | Components | Documentation | Code |
|---|-------|------------|----------------|------|
| 1 | WiFi-Connected Automatic Streetlight/LDR Dimming System | LDR, 9 LEDs, ESP8266 WiFi | [Report](<EXPERIMENT 1/NanoRaphael_CPE162P_C1_Experiment1.pdf>) · [Slides](<EXPERIMENT 1/NanoRaphael_CPE162P_C1_Experiment1.pptx>) | [Experiment1.ino](<EXPERIMENT 1/Nano_CPE162P_C1_Experiment1.ino>) |
| 2 | IR/IoT-Controlled LED, Servo, and Buzzer Actuator Hub | IR receiver, servo, buzzer, status LED, ThingSpeak | [Report](<EXPERIMENT 2/NanoRaphael_CPE162P_C1_Experiment2.pdf>) · [Slides](<EXPERIMENT 2/NanoRaphael_CPE162P_C1_Experiment2.pptx>) | [Experiment2.ino](<EXPERIMENT 2/Nano_CPE162P_C1_Experiment2.ino>) |
| 3 | IoT Weather Monitoring Station with LCD and Cloud Upload | DHT11, 16x2 I2C LCD, ThingSpeak | [Report](<EXPERIMENT 3/NanoRaphael_CPE162P_C1_Experiment3.pdf>) · [Slides](<EXPERIMENT 3/NanoRaphael_CPE162P_C1_Experiment3.pptx>) | [Experiment3.ino](<EXPERIMENT 3/Nano_CPE162P_C1_Experiment3.ino>) |
| 4 | IoT Smart Irrigation System with Cloud Logging | Soil moisture sensor, servo valve, LCD, ThingSpeak | [Report](<EXPERIMENT 4/NanoRaphael_CPE162P_C1_Experiment4.pdf>) · [Slides](<EXPERIMENT 4/NanoRaphael_CPE162P_C1_Experiment4.pptx>) | [Experiment4.ino](<EXPERIMENT 4/Nano_CPE162P_C1_Experiment4.ino>) |
| 5 | IoT Water Volume/Level Monitoring System | Analog water-level sensor, LCD, ThingSpeak | [Report](<EXPERIMENT 5/NanoRaphael_CPE162P_C1_Experiment5.pdf>) · [Slides](<EXPERIMENT 5/NanoRaphael_CPE162P_C1_Experiment5.pptx>) | [Experiment5.ino](<EXPERIMENT 5/Nano_CPE162P_C1_Experiment5.ino>) |
| 6 | IoT Smart Building People-Counter with Automatic Lighting | 2× HC-SR04, status LEDs, LCD, ThingSpeak | [Report](<EXPERIMENT 6/NanoRaphael_CPE162P_C1_Experiment6.pdf>) · [Slides](<EXPERIMENT 6/NanoRaphael_CPE162P_C1_Experiment6.pptx>) | [Experiment6.ino](<EXPERIMENT 6/Nano_CPE162P_C1_Experiment6.ino>) |
| 7 | IoT Multi-Floor Fire Alarm and Detection System | Flame sensor, buzzer, 4 floor LEDs, ThingSpeak | [Report](<EXPERIMENT 7/NanoRaphael_CPE162P_C1_Experiment7.pdf>) · [Slides](<EXPERIMENT 7/NanoRaphael_CPE162P_C1_Experiment7.pptx>) | [Experiment7.ino](<EXPERIMENT 7/Nano_CPE162P_C1_Experiment7.ino>) |

### Skills demonstrated
WiFi station-mode networking (ESP8266WiFi), cloud telemetry via the ThingSpeak API, `millis()`-gated periodic uploads, dual ultrasonic directional counting, multi-zone event/alarm logic, analog-to-physical-unit calibration.

[← Back to portfolio home](<../README.md>)
