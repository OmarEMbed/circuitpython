// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

// Micropython setup

#define MICROPY_HW_BOARD_NAME   "MORPHEANS MorphESP-240"
#define MICROPY_HW_MCU_NAME     "ESP32S2"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO16)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO7)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO6)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO12)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO11)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO13)
