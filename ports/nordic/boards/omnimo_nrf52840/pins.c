// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_A0),           MP_ROM_PTR(&pin_P0_04) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_PMOD4),        MP_ROM_PTR(&pin_P0_04) },   // PMOD

    { MP_ROM_QSTR(MP_QSTR_A1),           MP_ROM_PTR(&pin_P0_05) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_PMOD3),        MP_ROM_PTR(&pin_P0_05) },   // PMOD

    { MP_ROM_QSTR(MP_QSTR_A2),           MP_ROM_PTR(&pin_P0_30) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_PMOD2),        MP_ROM_PTR(&pin_P0_30) },   // PMOD

    { MP_ROM_QSTR(MP_QSTR_A3),           MP_ROM_PTR(&pin_P0_28) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_PMOD1),        MP_ROM_PTR(&pin_P0_28) },   // PMOD

    { MP_ROM_QSTR(MP_QSTR_A4),           MP_ROM_PTR(&pin_P0_02) },   // Feather

    { MP_ROM_QSTR(MP_QSTR_A5),           MP_ROM_PTR(&pin_P0_03) },   // Feather

    { MP_ROM_QSTR(MP_QSTR_VOLTAGE_MONITOR), MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_A6),              MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_BATTERY),         MP_ROM_PTR(&pin_P0_29) },

    { MP_ROM_QSTR(MP_QSTR_SWITCH),       MP_ROM_PTR(&pin_P1_02) },
    { MP_ROM_QSTR(MP_QSTR_BTN1),         MP_ROM_PTR(&pin_P1_02) },

    { MP_ROM_QSTR(MP_QSTR_BTN2),         MP_ROM_PTR(&pin_P1_07) },

    { MP_ROM_QSTR(MP_QSTR_NFC1),         MP_ROM_PTR(&pin_P0_09) },
    { MP_ROM_QSTR(MP_QSTR_NFC2),         MP_ROM_PTR(&pin_P0_10) },

    { MP_ROM_QSTR(MP_QSTR_D2),           MP_ROM_PTR(&pin_P1_09) },   // Feather

    { MP_ROM_QSTR(MP_QSTR_D5),           MP_ROM_PTR(&pin_P1_08) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_TX),  MP_ROM_PTR(&pin_P1_08) },   // mikroBUS


    { MP_ROM_QSTR(MP_QSTR_D6),           MP_ROM_PTR(&pin_P0_07) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_RX),  MP_ROM_PTR(&pin_P0_07) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_D9),           MP_ROM_PTR(&pin_P0_26) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_INT), MP_ROM_PTR(&pin_P0_26) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_D10),          MP_ROM_PTR(&pin_P0_27) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_PWM), MP_ROM_PTR(&pin_P0_27) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_D11),          MP_ROM_PTR(&pin_P1_14) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_D12),          MP_ROM_PTR(&pin_P1_13) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_D13),          MP_ROM_PTR(&pin_P1_12) },   // Feather

    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL),     MP_ROM_PTR(&pin_P0_16) },

    { MP_ROM_QSTR(MP_QSTR_SCK),          MP_ROM_PTR(&pin_P0_14) },   // Feather

    { MP_ROM_QSTR(MP_QSTR_A7),           MP_ROM_PTR(&pin_P0_31) },
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_AN),  MP_ROM_PTR(&pin_P0_31) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_MOSI),         MP_ROM_PTR(&pin_P0_13) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_RST), MP_ROM_PTR(&pin_P0_13) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_MISO),         MP_ROM_PTR(&pin_P0_15) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_CS),  MP_ROM_PTR(&pin_P0_15) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_TX),           MP_ROM_PTR(&pin_P0_25) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_MISO), MP_ROM_PTR(&pin_P0_25) },  // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_RX),           MP_ROM_PTR(&pin_P0_24) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_SCK), MP_ROM_PTR(&pin_P0_24) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_SCL),          MP_ROM_PTR(&pin_P0_11) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_SCL), MP_ROM_PTR(&pin_P0_11) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_SDA),          MP_ROM_PTR(&pin_P0_12) },   // Feather
    { MP_ROM_QSTR(MP_QSTR_mikroBUS_SDA), MP_ROM_PTR(&pin_P0_12) },   // mikroBUS

    { MP_ROM_QSTR(MP_QSTR_PMOD5),        MP_ROM_PTR(&pin_P1_11) },   // PMOD
    { MP_ROM_QSTR(MP_QSTR_PMOD6),        MP_ROM_PTR(&pin_P1_01) },   // PMOD
    { MP_ROM_QSTR(MP_QSTR_PMOD7),        MP_ROM_PTR(&pin_P1_03) },   // PMOD
    { MP_ROM_QSTR(MP_QSTR_PMOD8),        MP_ROM_PTR(&pin_P1_05) },   // PMOD

    { MP_ROM_QSTR(MP_QSTR_LED1),         MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_L),            MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_LED),          MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_RED_LED),      MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_D3),           MP_ROM_PTR(&pin_P1_10) },

    { MP_ROM_QSTR(MP_QSTR_LED2),         MP_ROM_PTR(&pin_P1_15) },
    { MP_ROM_QSTR(MP_QSTR_BLUE_LED),     MP_ROM_PTR(&pin_P1_15) },

    { MP_ROM_QSTR(MP_QSTR_QWIIC_SCL),    MP_ROM_PTR(&pin_P0_06) },

    { MP_ROM_QSTR(MP_QSTR_QWIIC_SDA),    MP_ROM_PTR(&pin_P0_08) },

    { MP_ROM_QSTR(MP_QSTR_VOUTEN),       MP_ROM_PTR(&pin_P1_04) },

    { MP_ROM_QSTR(MP_QSTR_D43),       MP_ROM_PTR(&pin_P1_06) },

    { MP_ROM_QSTR(MP_QSTR_UART),         MP_ROM_PTR(&board_uart_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI),          MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_I2C),          MP_ROM_PTR(&board_i2c_obj) },

    ///  For Qwiic
    { MP_ROM_QSTR(MP_QSTR_QWIIC),        MP_ROM_PTR(&board_i2c_obj) },

};

MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
