# All raspberrypi ports have longints.
LONGINT_IMPL = MPZ

CIRCUITPY_OPTIMIZE_PROPERTY_FLASH_SIZE ?= 1
# CYW43 support does not provide settable MAC addresses for station or AP.
CIRCUITPY_WIFI_RADIO_SETTABLE_MAC_ADDRESS = 0

CIRCUITPY_RP2PIO ?= 1
CIRCUITPY_NEOPIXEL_WRITE ?= $(CIRCUITPY_RP2PIO)
CIRCUITPY_FLOPPYIO ?= 1
CIRCUITPY_FRAMEBUFFERIO ?= $(CIRCUITPY_DISPLAYIO)
CIRCUITPY_FULL_BUILD ?= 1
CIRCUITPY_AUDIOMP3 ?= 1
CIRCUITPY_BITOPS ?= 1
CIRCUITPY_HASHLIB ?= 1
CIRCUITPY_HASHLIB_MBEDTLS ?= 1
CIRCUITPY_IMAGECAPTURE ?= 1
CIRCUITPY_MAX3421E ?= 0
CIRCUITPY_MEMORYMAP ?= 1
CIRCUITPY_PWMIO ?= 1
CIRCUITPY_RGBMATRIX ?= $(CIRCUITPY_DISPLAYIO)
CIRCUITPY_ROTARYIO ?= 1
CIRCUITPY_ROTARYIO_SOFTENCODER = 1
CIRCUITPY_SYNTHIO_MAX_CHANNELS = 24
CIRCUITPY_USB_HOST ?= 1
CIRCUITPY_USB_VIDEO ?= 1

# Things that need to be implemented.
CIRCUITPY_FREQUENCYIO = 0

# Use PWM internally
CIRCUITPY_I2CTARGET = 1
CIRCUITPY_NVM = 1
# Use PIO internally
CIRCUITPY_PULSEIO ?= 1
CIRCUITPY_WATCHDOG ?= 1

# Use of analogbufio
CIRCUITPY_ANALOGBUFIO = 1

# Audio via PWM
CIRCUITPY_AUDIOIO = 0
CIRCUITPY_AUDIOBUSIO ?= 1
CIRCUITPY_AUDIOCORE ?= 1
CIRCUITPY_AUDIOPWMIO ?= 1

CIRCUITPY_AUDIOMIXER ?= 1

ifeq ($(CHIP_VARIANT),RP2040)
CIRCUITPY_ALARM ?= 1

# Default PICODVI off because it uses RAM to store code run on the second CPU for RP2040.
CIRCUITPY_PICODVI ?= 0

CIRCUITPY_TOUCHIO ?= 1

# delay in ms before calling cyw43_arch_init_with_country
CIRCUITPY_CYW43_INIT_DELAY ?= 1000
endif

ifeq ($(CHIP_VARIANT),RP2350)
# This needs to be implemented.
CIRCUITPY_ALARM = 0
# Default PICODVI on because it doesn't require much code in RAM to talk to HSTX.
CIRCUITPY_PICODVI ?= 1

# Our generic touchio uses a pull down and RP2350 A2 hardware doesn't work correctly.
# So, turn touchio off because it doesn't work.
CIRCUITPY_TOUCHIO = 0

# delay in ms before calling cyw43_arch_init_with_country
CIRCUITPY_CYW43_INIT_DELAY ?= 0

# Audio effects
CIRCUITPY_AUDIOEFFECTS ?= 1
endif

INTERNAL_LIBM = 1

CIRCUITPY_BUILD_EXTENSIONS ?= uf2

# Number of USB endpoint pairs.
USB_NUM_ENDPOINT_PAIRS = 8

INTERNAL_FLASH_FILESYSTEM = 1
CIRCUITPY_SETTABLE_PROCESSOR_FREQUENCY = 1

# Usually lots of flash space available
CIRCUITPY_MESSAGE_COMPRESSION_LEVEL ?= 1

# (ssl is selectively enabled but it's always the mbedtls implementation)
CIRCUITPY_SSL_MBEDTLS = 1
