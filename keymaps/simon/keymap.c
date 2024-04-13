// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_8x1(
        KC_S, KC_I, KC_M, KC_O, KC_N, KC_LEFT_SHIFT, KC_2, KC_4
    )
};
