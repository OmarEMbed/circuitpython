// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Joey Castillo
//
// SPDX-License-Identifier: MIT

#define MICROPY_HW_BOARD_NAME "The Open Book Feather"
#define MICROPY_HW_MCU_NAME "samd51j19"

#define CIRCUITPY_MCU_FAMILY samd51

#define MICROPY_HW_LED_STATUS   (&pin_PA23)

#define DEFAULT_I2C_BUS_SCL (&pin_PA13)
#define DEFAULT_I2C_BUS_SDA (&pin_PA12)

#define DEFAULT_SPI_BUS_SCK (&pin_PA17)
#define DEFAULT_SPI_BUS_MOSI (&pin_PB23)
#define DEFAULT_SPI_BUS_MISO (&pin_PB22)

#define DEFAULT_UART_BUS_RX (&pin_PB17)
#define DEFAULT_UART_BUS_TX (&pin_PB16)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
