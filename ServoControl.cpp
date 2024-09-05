#include "ServoControl.h"

ServoControl::ServoControl(uint8_t pin) : servoPin(pin), usPerDegree(10), minPulseWidth(500), maxPulseWidth(2400) {
    // usPerDegree is calculated as (maxPulseWidth - minPulseWidth) / 180
}

void ServoControl::attach() {
    pinMode(servoPin, OUTPUT);
}

void ServoControl::write(int angle) {
    // Constrain angle to 0 - 180 degrees
    angle = constrain(angle, 0, 180);
    // Calculate the pulse width
    uint32_t pulseWidth = minPulseWidth + angle * usPerDegree;
    // Send the PWM signal
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulseWidth);
    digitalWrite(servoPin, LOW);
    delay(20); // Wait for servo to move
}
