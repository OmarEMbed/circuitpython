// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright 2019 Sony Semiconductor Solutions Corporation
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_CXD56_COMMON_HAL_BUSIO_I2C_H
#define MICROPY_INCLUDED_CXD56_COMMON_HAL_BUSIO_I2C_H

#include "py/obj.h"

#include "common-hal/microcontroller/Pin.h"

typedef struct {
    mp_obj_base_t base;
    struct i2c_master_s *i2c_dev;
    uint32_t frequency;
    bool has_lock;
    const mcu_pin_obj_t *scl_pin;
    const mcu_pin_obj_t *sda_pin;
} busio_i2c_obj_t;

#endif // MICROPY_INCLUDED_CXD56_COMMON_HAL_BUSIO_I2C_H
