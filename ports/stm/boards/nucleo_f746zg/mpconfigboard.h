// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Lucian Copeland for Adafruit Industries
// SPDX-FileCopyrightText: Copyright (c) 2020 Mark Olsson <mark@markolsson.se>
//
// SPDX-License-Identifier: MIT

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "NUCLEO STM32F746"
#define MICROPY_HW_MCU_NAME         "STM32F746"

#define FLASH_SIZE                  (0x100000)
#define FLASH_PAGE_SIZE             (0x4000)

// H7 and F7 MPU definitions
#define CPY_FLASH_REGION_SIZE   ARM_MPU_REGION_SIZE_1MB
#define CPY_ITCM_REGION_SIZE    ARM_MPU_REGION_SIZE_16KB
#define CPY_DTCM_REGION_SIZE    ARM_MPU_REGION_SIZE_128KB
#define CPY_SRAM_REGION_SIZE    ARM_MPU_REGION_SIZE_256KB
#define CPY_SRAM_SUBMASK        0x00
#define CPY_SRAM_START_ADDR     0x20010000

#define HSE_VALUE ((uint32_t)8000000)
#define LSE_VALUE ((uint32_t)32768)
#define BOARD_HSE_SOURCE (RCC_HSE_BYPASS) // ST boards use the STLink clock signal
#define BOARD_HAS_LOW_SPEED_CRYSTAL (1)

#define CIRCUITPY_CONSOLE_UART_TX (&pin_PD08)
#define CIRCUITPY_CONSOLE_UART_RX (&pin_PD09)
