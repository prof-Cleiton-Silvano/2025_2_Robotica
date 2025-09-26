/**
 * @file test_robo_utils.cpp
 * @brief Unit tests for RoboUtils library
 * @author Projeto de Robótica 2025/2
 * @date 2025
 */

#include <unity.h>
#include <Arduino.h>
#include "RoboUtils.h"

// Test function for mapValue
void test_map_value() {
    // Test basic mapping
    long result = RoboUtils::mapValue(5, 0, 10, 0, 100);
    TEST_ASSERT_EQUAL(50, result);
    
    // Test reverse mapping
    result = RoboUtils::mapValue(5, 0, 10, 100, 0);
    TEST_ASSERT_EQUAL(50, result);
    
    // Test negative values
    result = RoboUtils::mapValue(-5, -10, 10, 0, 100);
    TEST_ASSERT_EQUAL(25, result);
}

// Test initialization (basic functionality test)
void test_init() {
    // This test just ensures init() doesn't crash
    RoboUtils::init();
    TEST_ASSERT_TRUE(true); // If we reach here, init didn't crash
}

// Setup function for tests
void setUp(void) {
    // Set up any required state before each test
}

// Teardown function for tests
void tearDown(void) {
    // Clean up after each test
}

// Main test function
void setup() {
    delay(2000); // Wait for serial monitor
    
    UNITY_BEGIN();
    
    RUN_TEST(test_init);
    RUN_TEST(test_map_value);
    
    UNITY_END();
}

void loop() {
    // Empty loop - tests run in setup()
}