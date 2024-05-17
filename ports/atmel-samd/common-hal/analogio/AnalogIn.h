// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2016 Scott Shawcroft
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_ANALOGIO_ANALOGIN_H
#define MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_ANALOGIO_ANALOGIN_H

#include "common-hal/microcontroller/Pin.h"

#include "py/obj.h"

typedef struct {
    mp_obj_base_t base;
    const mcu_pin_obj_t *pin;
    Adc *instance;
    uint8_t channel;
} analogio_analogin_obj_t;

void analogin_reset(void);

#endif // MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_ANALOGIO_ANALOGIN_H
