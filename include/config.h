/**
 * @file config.h
 * @brief Configuration constants for ESP32 robotics project
 * @author Projeto de Robótica 2025/2
 * @date 2025
 */

#ifndef CONFIG_H
#define CONFIG_H

// Hardware Configuration
#define LED_BUILTIN_PIN     2      // Built-in LED pin on ESP32
#define SERIAL_BAUD_RATE    115200 // Serial communication baud rate

// Timing Configuration
#define LOOP_DELAY_MS       1000   // Main loop delay in milliseconds
#define BLINK_DELAY_MS      500    // LED blink delay in milliseconds

// Project Information
#define PROJECT_NAME        "ESP32 Robotics Project"
#define PROJECT_VERSION     "1.0.0"
#define PROJECT_AUTHOR      "Projeto de Robótica 2025/2"

// Debug Configuration
#define DEBUG_ENABLED       true   // Enable debug messages
#define DEBUG_LED_ENABLED   true   // Enable debug LED blinking

// Pin Definitions (examples - adjust based on your hardware)
#define MOTOR_LEFT_PIN1     4      // Left motor pin 1
#define MOTOR_LEFT_PIN2     5      // Left motor pin 2
#define MOTOR_RIGHT_PIN1    6      // Right motor pin 1
#define MOTOR_RIGHT_PIN2    7      // Right motor pin 2

#define SENSOR_TRIGGER_PIN  8      // Ultrasonic sensor trigger pin
#define SENSOR_ECHO_PIN     9      // Ultrasonic sensor echo pin

// Servo pins
#define SERVO_PIN           10     // Servo motor pin

#endif // CONFIG_H