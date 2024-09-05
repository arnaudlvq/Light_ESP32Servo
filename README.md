# Light_ESP32Servo (ServoControl Class)

### Simple and Elegant Servo Motor Control for ESP32

---

## Introduction

The `ServoControl` class provides a minimalistic and reliable way to control servo motors on the ESP32 without the need for any external libraries. By directly managing PWM signals, this implementation ensures smooth and consistent servo operation, perfect for applications where stability and simplicity are key.

## Features

- **Direct PWM Control:**
  - Precisely controls the servo motor by generating the appropriate PWM signal.
  - Eliminates dependency on external servo libraries, reducing potential bugs and memory usage.

- **Lightweight and Efficient:**
  - Minimal overhead with only essential functions for attaching and controlling the servo.
  - Optimized for performance and simplicity.

- **Easy Integration:**
  - Designed to be easily integrated into any ESP32 project.
  - Simply include the `ServoControl.h` file and create an instance of the `ServoControl` class.

## Example

```
// Include the new ServoControl header
#include "ServoControl.h"

// Define the servo control object & specify the pin to which the servo is connected (PIN_SG90)
ServoControl sg90(PIN_SG90);


void openServo() {
    sg90.write(0);  // Move the servo to 0 degrees (example)
    delay(1000);
}

void closeServo() {
    sg90.write(90);  // Move the servo to 90 degrees (example)
    delay(1000);
}

// In the setup function, initialize the servo
void setup() {
    Serial.begin(115200);
    
    // Attach the servo to the specified pin
    sg90.attach();
    delay(2000);
    ...
}

```


https://github.com/user-attachments/assets/fafd2013-9476-4323-b27b-d113fc06dc57


