// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_PA10) },

    { MP_ROM_QSTR(MP_QSTR_RED), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_PA05) },

    { MP_ROM_QSTR(MP_QSTR_GREEN), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_BLUE), MP_ROM_PTR(&pin_PA07) },

    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA23) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) }
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
