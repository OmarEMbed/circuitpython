// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_P0_19) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_P0_30) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_P0_23) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_P0_28) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_P0_28) },
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_P0_09) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_P0_12) },
    { MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_P0_10) },
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_P0_14) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_P0_26) },
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_P0_17) },
    { MP_ROM_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_P0_08) },
    { MP_ROM_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_P0_06) },
    { MP_ROM_QSTR(MP_QSTR_D16), MP_ROM_PTR(&pin_P0_13) },
    { MP_ROM_QSTR(MP_QSTR_D17), MP_ROM_PTR(&pin_P0_31) },
    { MP_ROM_QSTR(MP_QSTR_D18), MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_D19), MP_ROM_PTR(&pin_P0_03) },
    { MP_ROM_QSTR(MP_QSTR_D20), MP_ROM_PTR(&pin_P0_04) },
    { MP_ROM_QSTR(MP_QSTR_D21), MP_ROM_PTR(&pin_P0_05) },

    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_P0_03) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_P0_04) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_P0_05) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_A6), MP_ROM_PTR(&pin_P0_30) },

    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_P0_31) },

    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_P0_23) },

    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_P0_13) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_P0_08) },
    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_P0_06) },

    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_P0_30) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_P0_19) },

    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
};

MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
