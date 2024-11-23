#include "main.h"

/**
 * Sums a variable number of integers.
 * @param count Number of integers to sum.
 * @param ... The integers to sum.
 * @return The sum of the integers.
 */
int sum_of_integers(int count, ...) {
    va_list args;
    int sum = 0;

    va_start(args, count);  // Initialize va_list with the fixed parameter `count`

    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);  // Retrieve the next integer argument
    }

    va_end(args);  // Clean up va_list

    return sum;
}
