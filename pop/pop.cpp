//
// Created by Admin on 7/12/2025.
//

#include "pop.h"

uint32_t pop(uint32_t*& esp) {
    uint32_t value = *esp;
    esp++;
    return value;
}