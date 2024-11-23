#include "main.h"

/**
 * Prints a variable number of integers, one per line.
 * @param count Number of integers to print.
 * @param ... The integers to print.
 */
void print_list(int count, ...) {
    va_list args;

    va_start(args, count);  // Initialize va_list with the fixed parameter `count`

    for (int i = 0; i < count; i++) {
        printf("%d\n", va_arg(args, int));  // Retrieve the next integer argument
    }

    va_end(args);  // Clean up va_list
}
