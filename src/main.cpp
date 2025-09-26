/**
 * @file main.cpp
 * @brief Main program for ESP32 robotics project
 * @author Projeto de Robótica 2025/2
 * @date 2025
 */

#include <Arduino.h>
#include "config.h"
#include "RoboUtils.h"

// Global variables
bool ledState = false;
unsigned long lastBlink = 0;

/**
 * @brief Setup function - runs once at startup
 */
void setup() {
    // Initialize serial communication
    Serial.begin(SERIAL_BAUD_RATE);
    delay(1000);  // Wait for serial to initialize
    
    Serial.println("===============================");
    Serial.print("Project: ");
    Serial.println(PROJECT_NAME);
    Serial.print("Version: ");
    Serial.println(PROJECT_VERSION);
    Serial.print("Author: ");
    Serial.println(PROJECT_AUTHOR);
    Serial.println("===============================");
    
    // Initialize utilities
    RoboUtils::init();
    
    // Initialize built-in LED
    pinMode(LED_BUILTIN_PIN, OUTPUT);
    digitalWrite(LED_BUILTIN_PIN, LOW);
    
    RoboUtils::debugPrint("Hardware initialized");
    RoboUtils::debugPrint("Setup complete!");
    
    // Welcome blink pattern
    RoboUtils::blinkLed(LED_BUILTIN_PIN, 3, 200);
}

/**
 * @brief Main loop function - runs continuously
 */
void loop() {
    unsigned long currentTime = millis();
    
    // Blink LED every LOOP_DELAY_MS
    if (currentTime - lastBlink >= LOOP_DELAY_MS) {
        ledState = !ledState;
        digitalWrite(LED_BUILTIN_PIN, ledState);
        
        if (DEBUG_ENABLED) {
            String message = "LED State: " + String(ledState ? "ON" : "OFF");
            RoboUtils::debugPrint(message.c_str());
        }
        
        lastBlink = currentTime;
    }
    
    // Add your robotics code here
    // Example: read sensors, control motors, etc.
    
    delay(10); // Small delay to prevent excessive CPU usage
}