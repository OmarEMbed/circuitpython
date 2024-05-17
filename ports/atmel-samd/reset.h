// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT
#ifndef MICROPY_INCLUDED_ATMEL_SAMD_RESET_H
#define MICROPY_INCLUDED_ATMEL_SAMD_RESET_H

#include <stdbool.h>
#include <stdint.h>

#include "py/mpconfig.h"

// Copied from inc/uf2.h in https://github.com/Microsoft/uf2-samd21
#define DBL_TAP_MAGIC 0xf01669ef // Randomly selected, adjusted to have first and last bit set
#define DBL_TAP_MAGIC_QUICK_BOOT 0xf02669ef

extern uint32_t _bootloader_dbl_tap;

void reset_to_bootloader(void) NORETURN;
void reset(void) NORETURN;
bool bootloader_available(void);

#endif  // MICROPY_INCLUDED_ATMEL_SAMD_RESET_H
