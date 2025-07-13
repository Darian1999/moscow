//
// Created by Admin on 7/12/2025.
//

#ifndef POP_H
#define POP_H

#include <cstdint>

/**
 * @brief Simulates the x86 POP instruction.
 *
 * This function pops a 32-bit value from the top of the stack. It retrieves
 * the value at the memory location pointed to by the stack pointer (esp)
 * and then increments the stack pointer.
 *
 * @param esp A reference to the stack pointer. This pointer will be modified.
 * @return The 32-bit value from the top of the stack.
 */
uint32_t pop(uint32_t*& esp);

#endif //POP_H