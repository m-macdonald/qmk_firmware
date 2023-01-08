#include QMK_KEYBOARD_H

enum Layer_name {
    HOME,
    NAV,
    NUM,
    FUN,
    MEDIA,
    QWERTY
};

const uint16_t PROGMEM qwerty_toggle_combo[] = {KC_N, KC_E, KC_I, KC_O, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(qwerty_toggle_combo, TG(5))
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  TG(3) |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   F  |   P  |   B  |  L1  |           |  L1  |   J  |   L  |   U  |   Y  |  ;/: |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   R  |   S  |   T  |   G  |------|           |------|   M  |   N  |   E  |   I  |   O  |' / Cmd |
 * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   D  |   V  |      |           |      |   K  |   H  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1|  '"  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Del  | Esc  |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |L1/Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
	LAYOUT(
			// left hand
        KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,       KC_TRNS,   KC_TRNS,
      	KC_TRNS,    KC_Q,           KC_W,           KC_F,           KC_P,          KC_B,      KC_TRNS,
        KC_TRNS,    LGUI_T(KC_A),   ALT_T(KC_R),    CTL_T(KC_S),    LSFT_T(KC_T),  KC_G,
        KC_TRNS,    CTL_T(KC_Z),    LALT_T(KC_X),   KC_C,           KC_D,          KC_V,      KC_TRNS,
        KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_ESC,
                                                                                      KC_TRNS,       KC_TRNS,
                                                                                                    KC_TRNS,
                                                                        LT(1, KC_SPC), LT(4, KC_TAB), KC_TRNS,
        // right hand
        KC_TRNS,        KC_6,   KC_7,           KC_8,           KC_9,             KC_0,             KC_TRNS,
        KC_TRNS,        KC_J,   KC_L,           KC_U,           KC_Y,             KC_QUOT,          KC_TRNS,
                        KC_M,   LSFT_T(KC_N),   LCTL_T(KC_E),   LALT_T(KC_I),     LGUI_T(KC_O),     KC_TRNS,
        MEH_T(KC_NO),   KC_K,   KC_H,           KC_COMM,        RALT_T(KC_DOT),   KC_SLSH,          KC_TRNS,
                                KC_DEL,         KC_TRNS,        KC_TRNS,          KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, LT(2, KC_ENT), LT(3, KC_BSPC)
    ),
/* Keymap 1: Nav
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |  Play  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |Brwser|
 *                                 |      |      |------|       |------|      |Back  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
	LAYOUT(
       // left hand
       KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
       KC_NO, KC_RBT,   KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
       KC_NO, KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,
       KC_NO, KC_NO,    KC_RALT,  KC_NO,    KC_NO,    KC_NO, KC_NO,
       KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                                      KC_NO,  KC_NO,
                                                              KC_NO,
                                                KC_NO, KC_NO, KC_NO,
    // right hand
      KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO,  KC_AGIN,  KC_PSTE,  KC_COPY,  KC_CUT,   KC_UNDO,  KC_NO,
              KC_LCAP,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_NO,
      KC_NO,  KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_NO,
                        KC_DEL,   KC_NO,    KC_NO,    KC_NO,    KC_NO,
      KC_NO, KC_NO,
      KC_NO,
      KC_NO, KC_ENT, KC_BSPC
    ),
/* Keymap 2: Symbol/Num Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |         |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |      |      |      |                                       |      |      |   0  |   =  |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |       |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
	LAYOUT(
       // left hand
       KC_NO,  KC_NO,     KC_NO,    KC_NO,   KC_NO,     KC_NO,    KC_NO,
       KC_NO,  KC_LBRC,   KC_7,     KC_8,    KC_9,      KC_RBRC,  KC_NO,
       KC_NO,  KC_SCLN,   KC_4,     KC_5,    KC_6,      KC_EQL,
       KC_NO,  KC_GRV,    KC_1,     KC_2,    KC_3,      KC_BSLS,  KC_NO,
       KC_NO,  KC_NO,     KC_NO,    KC_NO,   KC_DOT,
                                                          KC_NO,    KC_NO,
                                                                    KC_NO,
                                                  KC_0,  KC_MINS,   KC_NO,
       // right hand
       KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
       KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    QK_RBT,   KC_NO,
                KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,  KC_NO,
       KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_RALT,  KC_NO,    KC_NO,
                          KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_NO, KC_NO
    ),
  /* Keymap 3: Functions
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |  Play  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |Brwser|
 *                                 |      |      |------|       |------|      |Back  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
	LAYOUT(
       // left hand
       KC_NO, KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO, KC_NO,
       KC_NO, KC_F12, KC_F7, KC_F8,   KC_F9,  KC_SYRQ, KC_NO,
       KC_NO, KC_F11, KC_F4, KC_F5,   KC_F6,  KC_SCRL,
       KC_NO, KC_F10, KC_F1, KC_F2,   KC_F3,  KC_PAUS, KC_NO,
       KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,
                                           KC_NO, KC_NO,
                                                    KC_NO,
                                  KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO,
                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_NO, KC_NO
    ),

/* Keymap 4: Media
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |  Play  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |Brwser|
 *                                 |      |      |------|       |------|      |Back  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
	LAYOUT(
       // left hand
       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_LGUI, KC_LALT, KC_LSFT, KC_NO, KC_NO,
       KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                           KC_NO, KC_NO,
                                                    KC_NO,
                                  KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO,  RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO,
                KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                          KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_MSTP, KC_MPLY
    ),
/* Keymap 5:  QWERTY
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
	LAYOUT(
       // left hand
       KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRNS,
       KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRNS,
       KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_TRNS,
       KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_SPC, KC_BSPC, KC_TRNS,
    // right hand
       KC_TRNS,  KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
       KC_TRNS,  KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS,
                 KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS,
       KC_TRNS,  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TAB, KC_ENT
    )
};
