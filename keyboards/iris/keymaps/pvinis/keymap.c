// pvinis iris
// ,-----------------------------.              ,-----------------------------.
// |    |    |    |    |    |    |              |    |    |    |    |    |    |
// |----+----+----+----+----+----|              |----+----+----+----+----+----|
// |    |    |    |    |    |    |              |    |    |    |    |    |    |
// |----+----+----+----x----x----|              |----x----x----+----+----+----|
// |    |    |    |    |    |    |              |    |    |    |    |    |    |
// |----+----+----+----x----x----+----.    ,----|----x----x----+----+----+----|
// |    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |
// `-------------------+----+----+----/    \----+----+----+-------------------'
//                    |    |    |    |      |    |    |    |
//                    `----+---------'      `--------------'


#include QMK_KEYBOARD_H
#include "pvinis.h"
//#include "iris.h"
//#include "action_layer.h"
//#include "eeconfig.h"

#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

#ifdef AUDIO_ENABLE
  //#define STARTUP_SONG SONG(SONIC_RING)
#endif

#ifdef AUDIO_ENABLE
float tone_sonic[][2] = SONG(IN_LIKE_FLINT);
float tone_1[][2] = SONG(QWERTY_SOUND);
float tone_2[][2] = SONG(OLD_SPICE);
float tone_3[][2] = SONG(OVERWATCH_THEME);
float tone_4[][2] = SONG(QWERTY_SOUND);
#endif




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // ,-----------------------------.              ,-----------------------------.
  // | `  |    |    |    |    |QWER|              |    |    |    |    |    | "  |
  // |----+----+----+----+----+----|              |----+----+----+----+----+----|
  // |Tab |    |    |    |    |CARP|              |    |    |    |    |    |Del |
  // |----+----+----+----x----x----|              |----x----x----+----+----+----|
  // |EscC|    |    |    |    |    |              |    |    |    |    |    |Ent |
  // |----+----+----+----x----x----+----.    ,----|----x----x----+----+----+----|
  // |LSft|    |    |    |    |    |Home|    |End |    |    |    |    |    |Rsft|
  // `-------------------+----+----+----/    \----+----+----+-------------------'
  //                    |Cmd |LOWR|Bspc|      |Spc |RASE|RAlt|
  //                    `----+---------'      `--------------'
  [LR_BASE] = LAYOUT_wrapper(
    KC_GRV , _______, _______, _______, _______, QWERTY ,                       _______, _______, _______, _______, _______, KC_QUOT,
    KC_TAB , _______, _______, _______, _______, CARPALX,                       _______, _______, _______, _______, _______, KC_DEL ,
    PV_ESCC, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, KC_ENT ,
    KC_LSFT, _______, _______, _______, _______, _______, KC_HOME,      KC_END, _______, _______, _______, _______, _______, KC_RSFT,
                                        KC_LGUI, SYMBOL , KC_BSPC,      KC_SPC, SYSCTL , KC_RALT
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
    _______, _______, _______, _______, _______, _______,                        _________________SYSCTL_R1_________________, _______,
    _______, _______, _______, _______, _______, _______,                        _________________SYSCTL_R2_________________, _______,
    _______, _______, _______, _______, _______, _______, _______,      _______, _________________SYSCTL_R3_________________, _______,
                                        _______, _______, _______,      _______, _______, _______
  ),

  [LR_KBCTL] = LAYOUT_wrapper(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, PV_VRSN, PV_MAKE, PV_FLSH, XXXXXXX, XXXXXXX,
    BASE   , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, _______, XXXXXXX,      XXXXXXX, _______, XXXXXXX
  )
};
