// pvinis iris
// ,-----------------------------.              ┌────┬────┬────┬────┬────┬────┐
// |    |    |    |    |    |    |              │    │    │    │    │    │    │
// |----+----+----+----+----+----|              ├────┼────┼────┼────┼────┼────┤
// |    |    |    |    |    |    |              │    │    │    │    │    │    │
// |----+----+----+----x----x----|              ├────╆━━━━╅────┼────┼────┼────┤
// |    |    |    |    |    |    |              │    ┃    ┃    │    │    │    │
// |----+----+----+----x----x----+----.    ┌────┼────╄━━━━╃────┼────┼────┼────┤
// |    |    |    |    |    |    |    |    │    │    │    │    │    │    │    │
// `-------------------+----+----+----/    └┬───┴┬───┴┬───┴┬───┴────┴────┴────┘
//                    |    |    |    |      │    │    │    │
//                    `----+---------'      └────┴────┴────┘


#include QMK_KEYBOARD_H
#include "pvinis.h"
//#include "iris.h"
//#include "action_layer.h"
//#include "eeconfig.h"

#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

#ifdef AUDIO_ENABLE
//   #define STARTUP_SONG SONG(SONIC_RING)
#endif

#ifdef AUDIO_ENABLE
//   float n04[][2] = SONG(CLOSE_ENCOUNTERS_5_NOTE);
//   float n10[][2] = SONG(STARTUP_SOUND);
//   float n11[][2] = SONG(GOODBYE_SOUND);
//   float n12[][2] = SONG(PLANCK_SOUND);
//   float n19[][2] = SONG(MUSIC_ON_SOUND);
//   float n20[][2] = SONG(AUDIO_ON_SOUND);
//   float n29[][2] = SONG(CAPS_LOCK_ON_SOUND);
//   float n30[][2] = SONG(CAPS_LOCK_OFF_SOUND);
//   float n31[][2] = SONG(SCROLL_LOCK_ON_SOUND);
//   float n32[][2] = SONG(SCROLL_LOCK_OFF_SOUND);
//   float n33[][2] = SONG(NUM_LOCK_ON_SOUND);
//   float n34[][2] = SONG(NUM_LOCK_OFF_SOUND);
//   float n40[][2] = SONG(ONE_UP_SOUND);
//   float n49[][2] = SONG(E1M1_DOOM);
//   float n53[][2] = SONG(OLD_SPICE);
//   float n56[][2] = SONG(RICK_ROLL);
//   float n57[][2] = SONG(FF_PRELUDE);
//   float n78[][2] = SONG(KATAMARI_ROLLING_STAR);
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // ,-----------------------------.              ,-----------------------------.
  // |    |    |    |    |GAME|QWER|              |    |    |    |    |    |    |
  // |----+----+----+----+----+----|              |----+----+----+----+----+----|
  // |Tab |    |    |    |    |CRPL|              |    |    |    |    |    |Del |
  // |----+----+----+----x----x----|              |----x----x----+----+----+----|
  // |EscC|    |    |    |    |    |              |    |    |    |    |    |Ent |
  // |----+----+----+----x----x----+----.    ,----|----x----x----+----+----+----|
  // |LSft|    |    |    |    |    |Home|    |End |    |    |    |    |    |Rsft|
  // `-------------------+----+----+----/    \----+----+----+-------------------'
  //                    |Cmd |LOWR|Bspc|      |Spc |RASE|RAlt|
  //                    `----+---------'      `--------------'
  [LR_BASE] = LAYOUT_wrapper(
    _______, _______, _______, _______, GAME1  , QWERTY ,                        _______, _______, _______, _______, _______, _______,
    KC_TAB , RGB_MODE_RGBTEST, RGB_MODE_SNAKE, RGB_MODE_KNIGHT, RGB_MODE_XMAS, RGB_MODE_GRADIENT,                        _______, _______, _______, _______, _______, KC_DEL ,
    PV_ESCC, RGB_VAD, RGB_MODE_PLAIN, RGB_MODE_BREATHE, RGB_MODE_RAINBOW, RGB_MODE_SWIRL,                        _______, _______, _______, _______, _______, KC_ENT ,
    KC_LSFT, RGB_VAI, RGB_SAD, RGB_SAI, RGB_HUD, RGB_HUI, RGB_MODE_FORWARD,      _______, _______, _______, _______, _______, _______, KC_RSFT,
                                        KC_LGUI, SYMBOL , RGB_MODE_REVERSE,      KC_SPC , SYSCTL , KC_RALT
  ),

  // ,-----------------------------.              ,-----------------------------.
  // |    |       NUMBERS_L        |              |         NUMBERS_R      |    |
  // |----+----+----+----+----+----|              |----+----+----+----+----+----|
  // |    |                        |              |                        |    |
  // |----+                        |              |                        +----|
  // |    |       QWERTY_L         |              |         QWERTY_R       |    |
  // |----+                        +----.    ,----|                        +----|
  // |    |                        |    |    |    |                        |    |
  // `-------------------+----+----+----/    \----+----+----+-------------------'
  //                    |    |    |    |      |    |    |    |
  //                    `----+---------'      `--------------'
  [LR_QWERTY] = LAYOUT_wrapper(
    _______, ________________NUMBERS_L__________________,                        ________________NUMBERS_R__________________, _______,
    _______, _________________QWERTY_L1_________________,                        _________________QWERTY_R1_________________, _______,
    _______, _____________MOD_QWERTY_L2_________________,                        _____________MOD_QWERTY_R2_________________, _______,
    _______, _________________QWERTY_L3_________________, _______,      _______, _________________QWERTY_R3_________________, _______,
                                        _______, _______, _______,      _______, _______, _______
  ),

  // ,-----------------------------.              ,-----------------------------.
  // |    |       NUMBERS_L        |              |         NUMBERS_R      |    |
  // |----+----+----+----+----+----|              |----+----+----+----+----+----|
  // |    |                        |              |                        |    |
  // |----+                        |              |                        +----|
  // |    |      CARPALX_L         |              |        CARPALX_R       |    |
  // |----+                        +----.    ,----|                        +----|
  // |    |                        |    |    |    |                        |    |
  // `-------------------+----+----+----/    \----+----+----+-------------------'
  //                    |    |    |    |      |    |    |    |
  //                    `----+---------'      `--------------'
  [LR_CARPALX] = LAYOUT_wrapper(
    _______, ________________NUMBERS_L__________________,                        ________________NUMBERS_R__________________, _______,
    _______, ________________CARPALX_L1_________________,                        ________________CARPALX_R1_________________, _______,
    _______, ________________CARPALX_L2_________________,                        ________________CARPALX_R2_________________, _______,
    _______, ________________CARPALX_L3_________________, _______,      _______, ________________CARPALX_R3_________________, _______,
                                        _______, _______, _______,      _______, _______, _______
  ),

  [LR_SYMBOL] = LAYOUT_wrapper(
    KC_F12 , ______________________F_L__________________,                        ______________________F_R__________________, KC_F11 ,
    _______, _________________SYMBOL_L1_________________,                        _________________SYMBOL_R1_________________, _______,
    _______, _________________SYMBOL_L2_________________,                        _________________SYMBOL_R2_________________, _______,
    _______, _________________SYMBOL_L3_________________, _______,      _______, _________________SYMBOL_R3_________________, _______,
                                        _______, _______, _______,      _______, _______, _______
  ),

  [LR_SYSCTL] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
    _______, _________________SYSCTL_L1_________________,                        _________________SYSCTL_R1_________________, _______,
    _______, _________________SYSCTL_L2_________________,                        _________________SYSCTL_R2_________________, _______,
    _______, _________________SYSCTL_L3_________________, _______,      _______, _________________SYSCTL_R3_________________, _______,
                                        _______, _______, _______,      _______, _______, _______
  ),

  [LR_KBCTL] = LAYOUT_wrapper(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, __________________KBCTL_L1_________________,                        __________________KBCTL_R1_________________, XXXXXXX,
    XXXXXXX, __________________KBCTL_L2_________________,                        __________________KBCTL_R2_________________, XXXXXXX,
    BASE   , __________________KBCTL_L3_________________, XXXXXXX,      XXXXXXX, __________________KBCTL_R3_________________, XXXXXXX,
                                        XXXXXXX, _______, XXXXXXX,      XXXXXXX, _______, XXXXXXX
  ),

  // ,-----------------------------.              ,-----------------------------.
  // |    |       NUMBERS_L        |              |         NUMBERS_R      |    |
  // |----+----+----+----+----+----|              |----+----+----+----+----+----|
  // |    |                        |              |                        |    |
  // |----+                        |              |                        +----|
  // |ESC |       QWERTY_L         |              |         QWERTY_R       |    |
  // |----+                        +----.    ,----|                        +----|
  // |    |                        |    |    |    |                        |    |
  // `-------------------+----+----+----/    \----+----+----+-------------------'
  //                    |    |SPC |    |      |    |    |    |
  //                    `----+---------'      `--------------'
  [LR_GAME1] = LAYOUT_wrapper(
    _______, ________________NUMBERS_L__________________,                        ________________NUMBERS_R__________________, KC_BSPC,
    _______, _________________QWERTY_L1_________________,                        _________________QWERTY_R1_________________, QWERTY ,
    KC_ESC , _________________QWERTY_L2_________________,                        _________________QWERTY_R2_________________, _______,
    _______, _________________QWERTY_L3_________________, _______,      _______, _________________QWERTY_R3_________________, _______,
                                        _______, _______, KC_SPC ,      _______, _______, _______
  ),

  [LR_GAME2] = LAYOUT_wrapper(
    _______, ________________NUMBERS_L__________________,                        ________________NUMBERS_R__________________, KC_BSPC,
    _______, _________________QWERTY_L1_________________,                        KC_Y   , KC_U   , KC_UP  , KC_O   , KC_P   , QWERTY ,
    KC_ESC , _________________QWERTY_L2_________________,                        KC_H   , KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, _______,
    _______, _________________QWERTY_L3_________________, _______,      _______, _________________QWERTY_R3_________________, _______,
                                        _______, _______, KC_SPC ,      _______, _______, _______
  ),
};


#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    // if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    // }
}
#endif


bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    #ifdef AUDIO_ENABLE
    // case PV_S04: if (record->event.pressed) PLAY_SONG(n04); return false; break;
    #endif
  }
  return true; // Process everything else normally
}
