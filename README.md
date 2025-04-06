# ESTN_WaveShield

The **ESTN_WaveShield** is a lightweight Arduino library for generating sine, triangle, and square waveforms via PWM output.  
Created for NSCC’s Electronic Systems Technician program and skills competitions, this library interfaces with a custom waveform shield designed for learning, experimentation, and testing.

---

## 🎯 Features

- 📐 Three waveform types: **Sine**, **Triangle**, **Square**
- ⚡ Uses standard PWM output (default: D9)
- 🧰 Designed for the 2025 Nova Scotia Skills Competition at the NSCC Sydney Waterfront Campus

---

## 🛠 Installation

1. Download the ZIP from GitHub or clone the repository:
   ```bash
   git clone https://github.com/YOUR-USERNAME/ESTN_WaveShield.git
   ```

2. Move the folder to your Arduino `libraries/` directory:
   ```
   Documents/Arduino/libraries/
   ```

3. Restart the Arduino IDE.

---

## 🚀 Quick Start

```cpp
#include <ESTN_WaveShield.h>

ESTN_WaveShield wave;

void setup() {
  wave.begin();
}

void loop() {
  wave.outputSine();      // Outputs ~20Hz sine-like waveform
  wave.outputTriangle();  // Outputs ~12Hz triangle waveform
  wave.outputSquare();    // Outputs ~12Hz square waveform
}
```

---

## 📌 Default Pin Mapping

| Function      | Pin |
|---------------|-----|
| PWM Output    | D9  |

Need a different pin? Pass it to the constructor:
```cpp
ESTN_WaveShield wave(6);  // Use digital pin 6 instead
```

---

## 🧪 Designed for 2025 Nova Scotia Skills Competitions

This library is part of the hands-on component for students:
- 🔧 Used with custom shields in PCB assembly and soldering challenges
- 📊 Compatible with waveform validation via oscilloscope
- 💭 Can be extended by students for advanced waveform control

---

## 📄 License

MIT License  
Feel free to use, share, and modify as needed for educational or personal projects.

---

## 📬 Contact

For more info or to contribute:
- NSCC Sydney Waterfront Campus, Electronic Systems Technician Program
