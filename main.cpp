/**
 * @file main.cpp
 * @brief A simple program to demonstrate POPCNT, bitwise ADD, and memory operations.
 */

#include "popcnt/popcnt.h"
#include "add/add.h"
#include "readmem/readmem.h"
#include "pop/pop.h"
#include <iostream>
#include <vector>

/**
 * @brief The main function..
 *
 * This program allows the user to choose between four operations:
 * 1. POPCNT: Counts the number of set bits in a given 64-bit integer.
 * 2. ADD: Adds two integers using a bitwise algorithm.
 * 3. Memory: Demonstrates reading from, writing to, and zeroing a memory address.
 * 4. POP: Demonstrates popping a value from a stack.
 *
 * The user is prompted to choose an operation and then provide the necessary
 * input. The result of the operation is then printed to the console.
 */
int main() {
    int choice = 0;
    std::cout << "Choose 0 for POPCNT, 1 for ADD, 2 for Memory Operations, or 3 for POP: ";
    std::cin >> choice;

    if (choice == 1) {
        int num1, num2;
        std::cout << "Enter two numbers to add: ";
        std::cin >> num1 >> num2;
        int result = add(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } else if (choice == 0) {
        uint64_t numbersel = 0;
        std::cout << "Enter a number to perform POPCNT on: ";
        std::cin >> numbersel;
        int result = popcnt(numbersel);
        std::cout << "Result: " << result << std::endl;
    } else if (choice == 2) {
        uintptr_t memory_target = 0;
        uintptr_t* target_ptr = &memory_target;

        int mem_choice = 0;
        std::cout << "\nMemory Operations Menu:\n";
        std::cout << "  1. Read from memory\n";
        std::cout << "  2. Write to memory\n";
        std::cout << "  3. Zero out memory\n";
        std::cout << "Enter your choice: ";
        std::cin >> mem_choice;

        switch (mem_choice) {
            case 1: {
                uintptr_t value = read_memory((uintptr_t)target_ptr);
                std::cout << "Value at address " << target_ptr << " is: " << value << std::endl;
                break;
            }
            case 2: {
                uintptr_t value_to_write;
                std::cout << "Enter a value to write to memory: ";
                std::cin >> value_to_write;
                set_memory((uintptr_t)target_ptr, value_to_write);
                std::cout << "Wrote " << value_to_write << " to address " << target_ptr << std::endl;
                break;
            }
            case 3: {
                zero_memory((uintptr_t)target_ptr);
                std::cout << "Zeroed out memory at address " << target_ptr << std::endl;
                break;
            }
            default:
                std::cout << "Invalid choice." << std::endl;
                break;
        }
    } else if (choice == 3) {
        std::vector<uint32_t> stack_data = {10, 20, 30, 40, 50};
        uint32_t* esp = stack_data.data() + stack_data.size() - 1; // Point to the top of the stack

        std::cout << "Stack (top to bottom): ";
        for (int i = stack_data.size() - 1; i >= 0; --i) {
            std::cout << stack_data[i] << " ";
        }
        std::cout << std::endl;

        uint32_t popped_value = pop(esp);

        std::cout << "Popped value: " << popped_value << std::endl;

        std::cout << "Stack after pop: ";
        for (const auto& val : stack_data) {
            if (&val <= esp) {
                std::cout << val << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
