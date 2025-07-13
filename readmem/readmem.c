//
// Created by Admin on 7/12/2025.
//

#include "readmem.h"

/**
 * @brief Reads the value at a given memory address.
 * @param address The memory address to read from.
 * @return The value at the given memory address.
 */
uintptr_t read_memory(uintptr_t address) {
    return *(volatile uintptr_t*)address;
}

/**
 * @brief Sets the value at a given memory address.
 * @param address The memory address to write to.
 * @param value The value to write.
 */
void set_memory(uintptr_t address, uintptr_t value) {
    *(volatile uintptr_t*)address = value;
}

/**
 * @brief Zeros out the value at a given memory address.
 * @param address The memory address to zero out.
 */
void zero_memory(uintptr_t address) {
    *(volatile uintptr_t*)address = 0;
}