/**
 * @file add.cpp
 * @brief Implements the add function using bitwise operations.
 */

#include "add.h"

/**
 * @brief Adds two integers using a bitwise algorithm.
 *
 * This implementation of addition mirrors the behavior of the ADD assembly
 * instruction, using bitwise operations (XOR and AND) to sum the two numbers
 * without using the `+` operator. It iteratively calculates the sum and carry
 * until there is no carry left.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */
int add(int a, int b) {
    while (b != 0) {
        // Calculate the carry
        int carry = a & b;
        // Calculate the sum without the carry
        a = a ^ b;
        // Shift the carry to the left by one bit
        b = carry << 1;
    }
    return a;
}
