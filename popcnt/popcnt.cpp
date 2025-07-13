//
// Created by Admin on 7/12/2025.
//

#include "popcnt.h"
#include <cstdint>

// Include the appropriate header for compiler intrinsics.
#if defined(_MSC_VER)
#include <intrin.h>
#endif

int popcnt(uint64_t n) {
    // Use the __popcnt64 intrinsic on MSVC for x86 and x64 architectures.
#if defined(_MSC_VER) && (defined(_M_X64) || defined(_M_IX86))
    return __popcnt64(n);
    // Use the __builtin_popcountll intrinsic on GCC and Clang.
#elif defined(__GNUC__) || defined(__clang__)
    return __builtin_popcountll(n);
#else
    // Provide a fallback implementation for other compilers.
    // This method is known as the Brian Kernighan's algorithm.
    int count = 0;
    while (n > 0) {
        // This operation clears the least significant set bit.
        n &= (n - 1);
        count++;
    }
    return count;
#endif
}