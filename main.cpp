/**
 * @file main.cpp
 * @brief A simple program to demonstrate POPCNT and bitwise ADD operations.
 */

#include "popcnt/popcnt.h"
#include "add/add.h"
#include <iostream>

/**
 * @brief The main function.
 *
 * This program allows the user to choose between two operations:
 * 1. POPCNT: Counts the number of set bits in a given 64-bit integer.
 * 2. ADD: Adds two integers using a bitwise algorithm.
 *
 * The user is prompted to choose an operation and then provide the necessary
 * input. The result of the operation is then printed to the console.
 */
int main() {
    int choice = 0;
    std::cout << "Choose 0 for POPCNT, or Choose 1 for ADD.";
    std::cin >> choice;

    if (choice == 1) {
        int num1, num2;
        std::cout << "Declare 2 numbers to add.";
        std::cin >> num1 >> num2;
        int result = add(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } else if (choice == 0) {
        uint64_t numbersel = 0;
        std::cout << "Choose a number to perform POPCNT on.";
        std::cin >> numbersel;
        int result = popcnt(numbersel);
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
