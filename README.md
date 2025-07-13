
# Moscow

Moscow is a C++ project that provides implementations of several low-level operations, demonstrating bitwise manipulations and direct memory access.

## Features

This project includes the following functionalities:

*   **Bitwise Addition:** An implementation of addition for two integers using only bitwise operations, mimicking the `ADD` assembly instruction.
*   **Population Count (POPCNT):** A function to count the number of set bits (1s) in a 64-bit integer.
*   **Direct Memory Manipulation:** A set of functions to read from, write to, and zero out specific memory addresses.

## Modules

The project is organized into the following modules:

*   `add/`: Contains the implementation for the bitwise addition function.
*   `popcnt/`: Contains the implementation for the population count (POPCNT) function.
*   `readmem/`: Contains functions for direct memory manipulation (`read_memory`, `set_memory`, `zero_memory`).

## Building and Running

This project uses CMake for building.

### Prerequisites

*   A C++ compiler (like GCC, Clang, or MSVC)
*   CMake (version 3.31 or higher)

### Build Steps

1.  **Clone the repository (if applicable) or ensure you are in the project's root directory.**

2.  **Create a build directory:**
    ```bash
    mkdir build
    cd build
    ```

3.  **Configure the project with CMake:**
    ```bash
    cmake ..
    ```

4.  **Build the project:**
    ```bash
    cmake --build .
    ```

    This will create an executable named `moscow` (or `moscow.exe` on Windows) in the build directory.

## Usage

After building, you can run the executable from your terminal. The program will prompt you to choose an operation to perform.

```
$ ./moscow
Choose 0 for POPCNT, or Choose 1 for ADD.
```

*   If you choose `0`, it will ask for a number to perform the POPCNT operation on.
*   If you choose `1`, it will ask for two numbers to add together.

The program also includes functionality for memory manipulation, which can be integrated into the `main` function as needed for demonstration or use.
