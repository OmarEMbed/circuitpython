// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Dan Halbert for Adafruit Industries
// SPDX-FileCopyrightText: Copyright (c) 2018 Artur Pacholec
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_SHARED_MODULE_BLEIO_ADDRESS_H
#define MICROPY_INCLUDED_SHARED_MODULE_BLEIO_ADDRESS_H

#include "py/obj.h"

#define NUM_BLEIO_ADDRESS_BYTES 6

typedef struct {
    mp_obj_base_t base;
    uint8_t type;
    mp_obj_t bytes;    // a bytes() object
} bleio_address_obj_t;

#endif // MICROPY_INCLUDED_SHARED_MODULE_BLEIO_ADDRESS_H
