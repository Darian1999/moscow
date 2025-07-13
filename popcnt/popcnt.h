//
// Created by Admin on 7/12/2025.
//

#ifndef POPCNT_H
#define POPCNT_H

#include <cstdint>

/**
 * @brief Counts the number of set bits (1s) in a 64-bit integer.
 *
 * This function provides a C++ implementation of the POPCNT instruction,
 * which is used to count the population of set bits in a machine word.
 * It uses compiler intrinsics for performance when available, otherwise
 * it falls back to a software implementation.
 *
 * @param n The 64-bit unsigned integer whose bits are to be counted.
 * @return The number of set bits in the integer.
 */
int popcnt(uint64_t n);

#endif //POPCNT_H