// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "genhdr/mpversion.h"
#include "py/mpconfig.h"
#include "py/objstr.h"
#include "py/objtuple.h"
#include "py/qstr.h"

STATIC const qstr os_uname_info_fields[] = {
    MP_QSTR_sysname, MP_QSTR_nodename,
    MP_QSTR_release, MP_QSTR_version, MP_QSTR_machine
};

STATIC const MP_DEFINE_STR_OBJ(os_uname_info_sysname_obj, MICROPY_HW_MCU_NAME);
STATIC const MP_DEFINE_STR_OBJ(os_uname_info_nodename_obj, MICROPY_HW_MCU_NAME);
STATIC const MP_DEFINE_STR_OBJ(os_uname_info_release_obj, MICROPY_VERSION_STRING);
STATIC const MP_DEFINE_STR_OBJ(os_uname_info_version_obj, MICROPY_GIT_TAG " on " MICROPY_BUILD_DATE);
STATIC const MP_DEFINE_STR_OBJ(os_uname_info_machine_obj, MICROPY_HW_BOARD_NAME " with " MICROPY_HW_MCU_NAME);


STATIC MP_DEFINE_ATTRTUPLE(
    os_uname_info_obj,
    os_uname_info_fields,
    5,
    (mp_obj_t)&os_uname_info_sysname_obj,
    (mp_obj_t)&os_uname_info_nodename_obj,
    (mp_obj_t)&os_uname_info_release_obj,
    (mp_obj_t)&os_uname_info_version_obj,
    (mp_obj_t)&os_uname_info_machine_obj
    );

mp_obj_t common_hal_os_uname(void) {
    return (mp_obj_t)&os_uname_info_obj;
}

bool common_hal_os_urandom(uint8_t *buffer, uint32_t length) {
    return false;
}
