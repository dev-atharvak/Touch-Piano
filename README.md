#  ESP32 Touch Piano

An 8-Key Touch Piano built using ESP32, TTP223 Touch Sensors, LM386 Amplifier, and Speaker.

This project allows users to play different musical notes by touching capacitive touch keys. It is USB powered and designed as an educational embedded systems project.

---

##  Features

- 8 Touch Keys
- Different musical note for each key
- USB Powered
- ESP32 Based
- Startup Sound
- LM386 Amplified Audio Output
- Compact Design
- Easy to Build

---

##  Components Used

| Component | Quantity |
|------------|------------|
| ESP32 Development Board | 1 |
| TTP223 Touch Sensor | 8 |
| LM386 Amplifier Module | 1 |
| Speaker | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

##  Pin Connections

### Touch Sensors

| Key      | GPIO   |
|----------|--------|
| C        | GPIO27 |
| D        | GPIO26 |
| E        | GPIO25 |
| F        | GPIO33 |
| G        | GPIO32 |
| A        | GPIO14 |
| B        | GPIO12 |
| C (High) | GPIO13 |

### Speaker

| Component      | GPIO   |
|----------------|--------|
| Speaker Output | GPIO18 |

---

##  Musical Notes

| Key        | Frequency |
|------------|-----------|
| C          | 262 Hz    |
| D          | 294 Hz    |
| E          | 330 Hz    |
| F          | 349 Hz    |
| G          | 392 Hz    |
| A          | 440 Hz    |
| B          | 494 Hz    |
| C (High)   | 523 Hz    |

---

##  Working

1. User touches a touch sensor.
2. TTP223 sends HIGH signal to ESP32.
3. ESP32 generates corresponding frequency.
4. LM386 amplifies the signal.
5. Speaker plays the note.
6. Releasing the key stops the sound.

---

##  Getting Started

### Requirements

- Arduino IDE
- ESP32 Board Package

### Uploading Code

1. Connect ESP32 using USB.
2. Open Arduino IDE.
3. Select:
   - Board: ESP32 Dev Module
   - Correct COM Port
4. Upload the code.
5. Connect components as per wiring diagram.

---

##  Project Structure
```
ESP32-Touch-Piano/
│
├── README.md
├── ESP32_Touch_Piano.ino
├── images/
    ├── front_view.jpg
    └── working_demo.jpg
```

---

##  Future Improvements

- OLED Display
- Bluetooth Piano Mode
- Recording Feature
- Volume Control
- Multiple Instrument Sounds

---

##  Author

AkTechh Solution

Custom Electronics Projects • Embedded Systems • Student Solutions

---

##  License

This project is open-source and available under the MIT License.
