#include QMK_KEYBOARD_H

enum keymap_layer {
  KL_BASE,
  KL_HEX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Base.
     *  +----+----+----+----+----+
     *  |BS  |=   |/   |*   |-   |
     *  +----+----+----+----+----+   
     *  |Tab |7   |8   |9   |+   |
     *  +----+----+----+----+----+
     *  |Fn  |4   |5   |6   |,   |
     *  +----+----+----+----+----+
     *  |(   |1   |2   |3   |    |
     *  +----+----+----+----+    +
     *  |)   |0        |.   |Ent |
     *  +----+----+----+----+----+  
     */
    [KL_BASE] = LAYOUT_combi1016(
        KC_BACKSPACE, KC_EQUAL, KC_SLASH, LSFT(KC_8), KC_MINUS,
        KC_TAB,       KC_7,     KC_8,     KC_9,       LSFT(KC_EQUAL),
        TO(KL_HEX),   KC_4,     KC_5,     KC_6,       KC_COMMA,
        LSFT(KC_9),   KC_1,     KC_2,     KC_3,       KC_NO,
        LSFT(KC_0),   KC_0,     KC_NO,    KC_DOT,     KC_ENTER
    ),

    /*
     * HEX.
     *  +----+----+----+----+----+
     *  |BS  |A   |B   |C   |D   |
     *  +----+----+----+----+----+   
     *  |Tab |7   |8   |9   |E   |
     *  +----+----+----+----+----+
     *  |Fn  |4   |5   |6   |F   |
     *  +----+----+----+----+----+
     *  |H   |1   |2   |3   |    |
     *  +----+----+----+----+    +
     *  |X   |0        |#   |Ent |
     *  +----+----+----+----+----+  
     */
    [KL_HEX] = LAYOUT_combi1016(
        _______,     KC_A,    KC_B,    KC_C,       KC_D,
        _______,     _______, _______, _______,    KC_E,
        TO(KL_BASE), _______, _______, _______,    KC_F,
        KC_H,        _______, _______, _______,    _______,
        KC_X,        _______, _______, LSFT(KC_3), _______
    )
};
