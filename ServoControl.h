#ifndef SERVO_CONTROL_H
#define SERVO_CONTROL_H

#include <Arduino.h>

class ServoControl {
public:
    ServoControl(uint8_t pin);
    void attach();
    void write(int angle);

private:
    uint8_t servoPin;
    uint32_t usPerDegree;
    uint32_t minPulseWidth;
    uint32_t maxPulseWidth;
};

#endif
