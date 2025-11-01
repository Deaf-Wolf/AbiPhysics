#ifndef INPUT_UTILS_H
#define INPUT_UTILS_H

#include <string>

/**
 * @file input_utils.h
 * @brief Input validation utilities for user interaction
 *
 * Provides robust input handling that prevents crashes from invalid input.
 */

namespace InputUtils {
    /**
     * Prompts user for a double value with validation
     * @param prompt The prompt message to display
     * @return Valid double value from user
     */
    double getValidDouble(const std::string& prompt);

    /**
     * Prompts user for an integer value with validation
     * @param prompt The prompt message to display
     * @param min Minimum allowed value (inclusive)
     * @param max Maximum allowed value (inclusive)
     * @return Valid integer value within range
     */
    int getValidInt(const std::string& prompt, int min, int max);

    /**
     * Clears input buffer and error flags
     */
    void clearInput();
}

#endif // INPUT_UTILS_H
