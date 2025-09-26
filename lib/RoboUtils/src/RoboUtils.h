/**
 * @file RoboUtils.h
 * @brief Utility functions for robotics project
 * @author Projeto de Robótica 2025/2
 * @date 2025
 */

#ifndef ROBO_UTILS_H
#define ROBO_UTILS_H

#include <Arduino.h>

class RoboUtils {
public:
    /**
     * @brief Initialize the utility class
     */
    static void init();
    
    /**
     * @brief Blink LED with specified pattern
     * @param pin LED pin number
     * @param times Number of blinks
     * @param delay_ms Delay between blinks in milliseconds
     */
    static void blinkLed(int pin, int times, int delay_ms = 500);
    
    /**
     * @brief Print debug message with timestamp
     * @param message Message to print
     */
    static void debugPrint(const char* message);
    
    /**
     * @brief Map value from one range to another (similar to Arduino map function)
     * @param value Value to map
     * @param fromLow Lower bound of source range
     * @param fromHigh Upper bound of source range
     * @param toLow Lower bound of target range
     * @param toHigh Upper bound of target range
     * @return Mapped value
     */
    static long mapValue(long value, long fromLow, long fromHigh, long toLow, long toHigh);
};

#endif // ROBO_UTILS_H