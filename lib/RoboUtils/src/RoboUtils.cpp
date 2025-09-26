/**
 * @file RoboUtils.cpp
 * @brief Implementation of utility functions for robotics project
 * @author Projeto de Robótica 2025/2
 * @date 2025
 */

#include "RoboUtils.h"

void RoboUtils::init() {
    Serial.println("[RoboUtils] Initialized");
}

void RoboUtils::blinkLed(int pin, int times, int delay_ms) {
    for (int i = 0; i < times; i++) {
        digitalWrite(pin, HIGH);
        delay(delay_ms);
        digitalWrite(pin, LOW);
        delay(delay_ms);
    }
}

void RoboUtils::debugPrint(const char* message) {
    Serial.print("[DEBUG ");
    Serial.print(millis());
    Serial.print("ms] ");
    Serial.println(message);
}

long RoboUtils::mapValue(long value, long fromLow, long fromHigh, long toLow, long toHigh) {
    return (value - fromLow) * (toHigh - toLow) / (fromHigh - fromLow) + toLow;
}