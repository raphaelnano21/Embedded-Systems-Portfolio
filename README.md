# Raphael Nano — Embedded Systems Portfolio

A collection of 21 Arduino UNO / NodeMCU lab experiments from three embedded-systems courses, showing progression from basic digital I/O to sensor/actuator control systems to networked IoT devices. Each experiment includes its Arduino (`.ino`) source code plus the accompanying lab report (PDF) and presentation slides (PPTX).

## Courses

| Course | Focus | Platform | Experiments |
|--------|-------|----------|--------------|
| [Embedded 1](<Embedded1/README.md>) | Digital I/O & Peripherals | Arduino UNO | 7 |
| [Embedded 2](<Embedded2/README.md>) | Interfacing & Control Systems | Arduino UNO | 7 |
| [Embedded 3](<Embedded3/README.md>) | IoT & Cloud-Connected Systems | NodeMCU / ESP8266 | 7 |

## Skills covered across the portfolio

- Digital & analog I/O, PWM (servo, motor, tone)
- Sensor interfacing: ultrasonic (HC-SR04), DHT11 temperature/humidity, soil moisture, IR receiver, flame, LDR
- Actuator control: servo, stepper, DC motor via H-bridge
- Display technologies: 7-segment (multiplexed), I2C LCD
- Input methods: pushbuttons, 4x4 matrix keypad, IR remote
- Timing & state management: `millis()`-based non-blocking loops, state machines, debouncing
- Networking & IoT: WiFi (ESP8266), cloud telemetry via the ThingSpeak API

## Repository structure

```
Portfolio/
├── README.md                 (this file)
├── GITHUB_SETUP_GUIDE.md     (step-by-step guide to publish this repo)
├── Embedded1/
│   ├── README.md
│   └── EXPERIMENT 1 .. 7/     (report PDF, slides PPTX, source code)
├── Embedded2/
│   ├── README.md
│   └── EXPERIMENT 1 .. 7/
└── Embedded3/
    ├── README.md
    └── EXPERIMENT 1 .. 7/
```

## Note on documentation format

Each experiment's lab report is provided as a PDF (viewable directly in GitHub) alongside the original PPTX slides. Word (.docx) source files for the reports also exist in each folder but are not linked here, since GitHub cannot preview them inline.

## Before you publish

Experiments in `Embedded3/` contain hardcoded WiFi credentials and a ThingSpeak API key. See [GITHUB_SETUP_GUIDE.md](<GITHUB_SETUP_GUIDE.md>) for how to remove these before making the repository public.
