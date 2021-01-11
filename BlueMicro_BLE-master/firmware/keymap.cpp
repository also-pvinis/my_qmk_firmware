/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

// Initialize matrix with nothing...
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
    ));


void setupKeymap() {

   // no layers for single keymap
   // this is a keymap that's used for testing that each key is responding properly to key presses
   // flash this keymap to both left and right to test whether each half works properly.
   // once tested, you can flash the left and right to their respective halves.
   uint32_t layer0_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_Y,
            KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  KC_H,
            KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_N,
            KC_4,  KC_5,    KC_6,    KC_7,    KC_8,    KC_9,  KC_0
        );


/* Qwerty
 * ,------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   :  |
 * |------+------+------+------+------+-------------|
 * | L(3) |   A  |   S  |   D  |   F  |   G  |   (  |
 * |------+------+------+------+------+------|------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   -  |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(2) | L(1) |Space |
 * `-----------------------------------------'
 */

    uint32_t layer0_left[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_COLN,   \
            KC_TAB,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,  KC_LPRN,    \
            KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_MINS,    \
            KC_LCTL, KC_LGUI, KC_LALT, LAYER_2, LAYER_1, KC_SPC,_______     \
        );

/* Qwerty
 * ,------------------------------------------------.
 * |   "  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------|
 * |   )  |   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------|------|
 * |   +  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * `------+------+------+------+------+------+------|
 *        | Space| L(1) | Left | Down |  Up  |Right |
 *        `-----------------------------------------'
 */

    uint32_t layer0_right[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_DQUO,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPACE, \
            KC_RPRN,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOTE,  \
            KC_PLUS,  KC_N,    KC_M,    KC_COMMA,KC_DOT,  KC_SLSH,   KC_ENT,    \
            _______,  KC_SPC,  LAYER_1, KC_LEFT, KC_UP,   KC_DOWN,   KC_RIGHT   \
        );


/* Layer 1 (Raise)
* ,------------------------------------------------.
* |  0   |   1  |   2  |   3  |   4  |   5  |   {  |
* |------+------+------+------+------+-------------|
* |   `  |   !  |   @  |   #  |   $  |   %  |   [  |
* |------+------+------+------+------+------|------|
* | Shift| xxx  | xxx  | VOL+ | VOL- | MUTE | S+F5 |
* |------+------+------+------+------+------+------'
* | Ctrl | GUI  | Alt  | L(2) | L(1) |  F5  |
* `-----------------------------------------'
*/
    uint32_t layer1_left[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
            KC_0,    KC_1,    KC_2,    KC_3,    KC_4,   KC_5,     KC_LCBR,        \
            KC_GRAVE,KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,  KC_LBRC,        \
            KC_LSFT, KC_TRNS, KC_TRNS, KC_VOLU,KC_VOLD, KC_MUTE,  LSFT(KC_F5),    \
            KC_LCTL, KC_LGUI, KC_LALT, LAYER_2, LAYER_1,KC_F5,   _______          \
    );


/* Layer 1 (Raise)  RIGHT
* ,------------------------------------------------.
* |   }  |   6  |   7  |   8  |   9  |   0  | Del  |
* |------+------+------+------+------+-------------|
* |   ]  |   ^  |   &  |   *  |   \  |  (   |   )  |
* |------+------+------+------+------+------|------|
* | Space|  xxx | xxx  |   <  |   >  |  |   |Enter |
* `------+------+------+------+------+------+------|
*        | Space| L(1) | Home | PGUP | PGDN | End  |
*        `-----------------------------------------'
*/
    uint32_t layer1_right[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
            KC_RCBR, KC_6,    KC_7,    KC_8,    KC_9,     KC_0,      KC_DEL,    \
            KC_RBRC, KC_CIRC, KC_AMPR, KC_ASTR, KC_BSLS,  KC_LPRN,   KC_RPRN,   \
            KC_SPC,  KC_TRNS, KC_TRNS, KC_LT,   KC_GT,    KC_PIPE,   KC_ENTER,  \
            _______, KC_SPC,  LAYER_1, KC_HOME, KC_PGUP,  KC_PGDN,   KC_END     \
        );


/* Layer 2 (lower)
* ,------------------------------------------------.
* |Ctr(-)|  F12 |  Up  |  F9  | F10 |  xxx  | MAIL |
* |------+------+------+------+------+-------------|
* | S+Tab| Left | Down | Right| F11 |  xxx  | STOP |
* |------+------+------+------+------+------|------|
* | Shift|  xxx |  xxx |  CAL | xxx |  xxx  |Dvorak|
* |------+------+------+------+------+------+------'
* | Ctrl | GUI  | Alt  | L(2) | L(1) |Qwerty|
* `-----------------------------------------'
*/
    uint32_t layer2_left[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
              LCTL(KC_MINS),KC_F12,     KC_UP,      KC_F9,   KC_F10, KC_TRNS, KC_MAIL,      \
              LSFT(KC_TAB), KC_LEFT,    KC_DOWN,    KC_RIGHT,KC_F11, KC_TRNS, KC_MPLY,      \
              KC_LSFT,      KC_TRNS,    KC_TRNS,    KC_CALC, KC_TRNS,KC_TRNS, KM_DVORAK,    \
              KC_LCTL,      KC_LGUI,    KC_LALT,    LAYER_2, LAYER_1,KM_QWERTY,_______      \
        );

/* Layer 2 (lower)
* ,------------------------------------------------.
* | xxx  |  F1  | F2   |  F3  | F4   |  F5  | Lock |
* |------+------+------+------+------+-------------|
* | xxx  |  F7  | F8   |  F9  |  F10 | F11  | batt |
* |------+------+------+------+------+------|------|
* | xxx  | F12  |ISO ~ |  xxx |  xxx | xxx  |screen|
* `------+------+------+------+------+------+------|
*        | Space| L(1) | Home | PGUP | PGDN | End  |
*        `-----------------------------------------'
*/
    uint32_t layer2_right[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
            KC_TRNS,    KC_F1,      KC_F2,      KC_F3  , KC_F4  , KC_F5  , LGUI(KC_L),      \
            KC_TRNS,    KC_F7,      KC_F8,      KC_F9  , KC_F10 , KC_F11 , PRINT_BATTERY,         \
            KM_DVORAK, KC_F12,      KC_NUTL,    KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR,         \
            _______,    KM_QWERTY,  LAYER_1,    KC_HOME, KC_PGUP, KC_PGDN, KC_END           \
        );

/* Layer 3  LEFT
* ,------------------------------------------------.
* | xxx  |  xxx |  xxx |  xxx |  xxx |  xxx |  xxx |
* |------+------+------+------+------+-------------|
* | xxx  |  xxx |  xxx |  xxx |  xxx |  xxx |  xxx |
* |------+------+------+------+------+------|------|
* | xxx  |  xxx |  xxx |  xxx |  xxx |  xxx |  xxx |
* |------+------+------+------+------+------+------'
* | xxx  | xxx  | xxx  | xxx  | xxx  | xxx  |
* `-----------------------------------------'
*/
    uint32_t layer3_left[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_TRNS,    LCTL(KC_Q), LCTL(KC_W), LCTL(KC_E), LCTL(KC_R), LCTL(KC_T), KC_TRNS,    \
        KC_TRNS,    LCTL(KC_A), LCTL(KC_S), LCTL(KC_D), LCTL(KC_F), LCTL(KC_G), KC_TRNS,    \
        KC_TRNS,    LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_B), KC_TRNS,    \
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    _______     \
        );

/* Layer 3 RIGHT
* ,------------------------------------------------.
* | xxx  |  xxx |  xxx |  xxx |  xxx |  xxx |  xxx |
* |------+------+------+------+------+-------------|
* | xxx  |  xxx |  xxx |  xxx |  xxx |  xxx |  xxx |
* |------+------+------+------+------+------|------|
* | xxx  |  xxx |  xxx |  xxx |  xxx |  xxx |  xxx |
* `------+------+------+------+------+------+------|
*        | xxx  | xxx  | xxx  | xxx  | xxx  | xxx  |
*        `-----------------------------------------'
*/
    uint32_t layer3_right[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    LCTL(KC_O), KC_TRNS,    KC_TRNS,  \
        KC_TRNS,    LCTL(KC_H), KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   \
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  \
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     _______ \
        );


    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            #if KEYBOARD_SIDE == SINGLE
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_single[row][col]);
            #endif
            #if KEYBOARD_SIDE == LEFT
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_left[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_left[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_left[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_left[row][col]);
            #endif
            #if KEYBOARD_SIDE == RIGHT
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_right[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_right[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_right[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_right[row][col]);
            #endif
            // if you want to add Tap/Hold or Tap/Doubletap activations, then you add them below.

        }
    }
}

void process_user_macros(uint16_t macroid)
{
    uint32_t qwertyL[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_COLN,   \
            KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  KC_LPRN,    \
            KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_MINS,    \
            KC_LCTL, KC_LGUI, KC_LALT, LAYER_2, LAYER_1, KC_SPC,_______     \
        );
    uint32_t qwertyR[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_DQUO,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPACE, \
            KC_RPRN,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOTE,  \
            KC_PLUS,  KC_N,    KC_M,    KC_COMMA,KC_DOT,  KC_SLSH,   KC_ENT,    \
            _______,  KC_SPC,  LAYER_1, KC_LEFT, KC_UP,   KC_DOWN,   KC_RIGHT   \
        );


    uint32_t dvorakL[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
            KC_ESC,  KC_QUOTE,KC_COMMA,KC_DOT,  KC_P,    KC_Y,  KC_COLN,   \
            KC_TAB,  KC_A,    KC_O,    KC_E,    KC_I,    KC_U,  KC_LPRN,    \
            KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,  KC_MINS,    \
            LAYER_3, KC_LGUI, KC_LALT, LAYER_2, LAYER_1, KC_SPC,_______     \
        );
    uint32_t dvorakR[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
            KC_DQUO,  KC_F,    KC_G,    KC_L,    KC_R,    KC_C,      KC_BSPACE, \
            KC_RPRN,  KC_D,    KC_H,    KC_T,    KC_N,    KC_S,      KC_QUOTE,  \
            KC_PLUS,  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,      KC_ENT,    \
            _______,  KC_SPC,  LAYER_1, KC_LEFT, KC_UP,   KC_DOWN,   KC_RIGHT   \
        );

    switch ((macroid))
    {
        case (KM_QWERTY):
            for (int row = 0; row < MATRIX_ROWS; ++row)
            {
                for (int col = 0; col < MATRIX_COLS; ++col)
                {
                    #if KEYBOARD_SIDE == LEFT
                        matrix[row][col].addActivation(_QWERTY, Method::PRESS, qwertyL[row][col]);
                    #endif
                    #if KEYBOARD_SIDE == RIGHT
                        matrix[row][col].addActivation(_QWERTY, Method::PRESS, qwertyR[row][col]);
                    #endif
                }
            }
        break;
        case (KM_DVORAK):
            for (int row = 0; row < MATRIX_ROWS; ++row)
            {
                for (int col = 0; col < MATRIX_COLS; ++col)
                {
                     #if KEYBOARD_SIDE == LEFT
                        matrix[row][col].addActivation(_DVORAK, Method::PRESS, dvorakL[row][col]);
                    #endif
                    #if KEYBOARD_SIDE == RIGHT
                        matrix[row][col].addActivation(_DVORAK, Method::PRESS, dvorakR[row][col]);
                    #endif
                }
            }
        break;
    }
}

void process_user_layers(uint16_t layermask)
{
    KeyScanner::process_for_tri_layers(_L1, _L2, _L3);
}
