# Embedded Systems 2 — Interfacing & Control Systems

Seven lab experiments building on Embedded 1 with more advanced interfacing: IR remote control, keypad input, motor drivers, and combined LCD + 7-segment display systems. Still Arduino UNO, standalone (no networking).

| # | Title | Components | Documentation | Code |
|---|-------|------------|----------------|------|
| 1 | Two-Team Sports Scoreboard | 7-segment display (SevSeg), 5 buttons | [Report](<EXPERIMENT 1/NanoRaphael_CPE161P_A1_Experiment1.pdf>) · [Slides](<EXPERIMENT 1/NanoRaphael_CPE161P_A1_Experiment1.pptx>) | [Experiment1.1_Scoreboard.ino](<EXPERIMENT 1/Experiment1.1_Scoreboard.ino>) |
| 2 | Ultrasonic Pedestrian-Adaptive Traffic Light with Countdown | HC-SR04, 3 traffic LEDs, 7-segment countdown, 2 buttons | [Report](<EXPERIMENT 2/NanoRaphael_CPE161P_A1_Experiment2.pdf>) · [Slides](<EXPERIMENT 2/NanoRaphael_CPE161P_A1_Experiment2.pptx>) | [Experiment2_Real-time-Traffic-Light.ino](<EXPERIMENT 2/Experiment2_Real-time-Traffic-Light.ino>) |
| 3 | Multi-Zone Temperature Monitor with LCD | DHT11, 16x2 I2C LCD, 5 selector buttons | [Report](<EXPERIMENT 3/NanoRaphael_CPE161P_A1_Experiment3.pdf>) · [Slides](<EXPERIMENT 3/NanoRaphael_CPE161P_A1_Experiment3.pptx>) | [Experiment3_Weather-Monitoring.ino](<EXPERIMENT 3/Experiment3_Weather-Monitoring.ino>) |
| 4 | IR Remote-Controlled Automatic Door/Barrier with Buzzer Feedback | IR receiver, stepper, servo, buzzer, 3 status LEDs | [Report](<EXPERIMENT 4/NanoRaphael_CPE161P_A1_Experiment4.pdf>) · [Slides](<EXPERIMENT 4/NanoRaphael_CPE161P_A1_Experiment4.pptx>) | [Experiment4_Appliance-Controller.ino](<EXPERIMENT 4/Experiment4_Appliance-Controller.ino>) |
| 5 | Adjustable Real-Time Clock with LCD + 7-Segment Display | SevSeg display, LCD, 4 buttons | [Report](<EXPERIMENT 5/NanoRaphael_CPE161P_A1_Experiment5.pdf>) · [Slides](<EXPERIMENT 5/NanoRaphael_CPE161P_A1_Experiment5.pptx>) | [Experiment5_Real_Time_Clock.ino](<EXPERIMENT 5/Experiment5_Real_Time_Clock.ino>) |
| 6 | IR Remote-Controlled Self-Driving/RC Car | IR receiver, dual H-bridge motor driver, 2 DC motors | [Report](<EXPERIMENT 6/NanoRaphael_CPE161P_A1_Experiment6.pdf>) · [Slides](<EXPERIMENT 6/NanoRaphael_CPE161P_A1_Experiment6.pptx>) | [Experiment6_Self_Driving_Car.ino](<EXPERIMENT 6/Experiment6_Self_Driving_Car.ino>) |
| 7 | Keypad-Secured Electronic Vault with Servo Lock | 4x4 matrix keypad, 16x2 I2C LCD, servo lock | [Report](<EXPERIMENT 7/NanoRaphael_CPE161P_A1_Experiment7.pdf>) · [Slides](<EXPERIMENT 7/NanoRaphael_CPE161P_A1_Experiment7.pptx>) | [Experiment7_RealTime_Vault_System.ino](<EXPERIMENT 7/Experiment7_RealTime_Vault_System.ino>) |

### Skills demonstrated
IR protocol decoding, PWM motor speed control, H-bridge direction logic, matrix keypad scanning, password/string comparison, state-machine timing, dual-display coordination (LCD + 7-segment), software-generated tone/buzzer signals.

[← Back to portfolio home](<../README.md>)
