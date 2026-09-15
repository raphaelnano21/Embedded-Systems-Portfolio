# Embedded Systems 1 — Arduino UNO Fundamentals

Seven lab experiments covering the fundamentals of embedded programming on the Arduino UNO: digital/analog I/O, sensor interfacing, actuator control (servo/stepper), and display multiplexing. No networking — every project here is a standalone, self-contained device.

| # | Title | Components | Documentation | Code |
|---|-------|------------|----------------|------|
| 1 | Multi-Song LED Chase / Light Show Suite | 9 LEDs (pins 5–13), 4 pushbuttons | [Report](<EXPERIMENT 1/NanoRaphael_CPE106P_B1_Experiment1.pdf>) · [Slides](<EXPERIMENT 1/NanoRaphael_CPE160P_B1_Experiment1.pptx>) | [SourceCodes/](<EXPERIMENT 1/SourceCodes>) |
| 2 | IR Remote-Controlled 4-Digit Counter/Display | 7-segment display (SevSeg), IR receiver, 4 buttons | [Report](<EXPERIMENT 2/NanoRaphael_CPE160P_B1_Experiment2.pdf>) · [Slides](<EXPERIMENT 2/NanoRaphael_CPE160P_B1_Experiment2.pptx>) | [Experiment2.ino](<EXPERIMENT 2/SourceCodes/Experiment2.ino>) |
| 3 | Adjustable Digital Clock Display | 7-segment display (SevSeg), 5 buttons | [Report](<EXPERIMENT 3/NanoRaphael_CPE160P_B1_Experiment3.pdf>) · [Slides](<EXPERIMENT 3/NanoRaphael_CPE160P_B1_Experiment3.pptx>) | [Experiment3.ino](<EXPERIMENT 3/SourceCode/Experiment3.ino>) |
| 4 | Sound/Humidity-Activated Servo Trash Bin | Servo, DHT11, sound sensor | [Report](<EXPERIMENT 4/NanoRaphael_CPE160P_B1_Experiment4.pdf>) · [Slides](<EXPERIMENT 4/NanoRaphael_CPE160P_B1_Experiment4.pptx>) | [Experiment4.ino](<EXPERIMENT 4/SourceCode/Experiment4.ino>) |
| 5 | Ultrasonic Parking Slot Counter with Stepper Gate | 2× HC-SR04, stepper motor, servo, 7-segment display | [Report](<EXPERIMENT 5/NanoRaphael_CPE160P_B1_Experiment5.pdf>) · [Slides](<EXPERIMENT 5/NanoRaphael_CPE160P_B1_Experiment5.pptx>) | [Experiment5.ino](<EXPERIMENT 5/SourceCode/Experiment5.ino>) |
| 6 | Automatic Ultrasonic Trash-Can Lid with Compactor | HC-SR04, stepper motor, servo | [Report](<EXPERIMENT 6/NanoRaphael_CPE160P_B1_Experiment6.pdf>) | [Experiment6.ino](<EXPERIMENT 6/Experiment6.ino>) |
| 7 | Automated Plant Watering System with LCD Feedback | I2C LCD (20x4), servo valve, soil moisture sensor | [Report](<EXPERIMENT 7/NanoRaphael_CPE160P_B1_Experiment7.pdf>) · [Slides](<EXPERIMENT 7/NanoRaphael_CPE160P_B1_Experiment7.pptx>) | [Experiment7.ino](<EXPERIMENT 7/SourceCode/Experiment7.ino>) |

### Skills demonstrated
Digital and analog I/O, `millis()`-based non-blocking timing, servo/stepper actuation, ultrasonic ranging (`pulseIn`), DHT sensor polling, 7-segment display multiplexing, I2C LCD communication, threshold-based state logic.

[← Back to portfolio home](<../README.md>)
