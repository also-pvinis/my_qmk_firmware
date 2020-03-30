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
//   #define STARTUP_SONG SONG(SONIC_RING)
#endif

#ifdef AUDIO_ENABLE
  float n01[][2] = SONG(LP_NUMB);
  float n02[][2] = SONG(ODE_TO_JOY);
  float n03[][2] = SONG(ROCK_A_BYE_BABY);
  float n04[][2] = SONG(CLOSE_ENCOUNTERS_5_NOTE);
  float n05[][2] = SONG(DOE_A_DEER);
  float n06[][2] = SONG(IN_LIKE_FLINT);
  float n07[][2] = SONG(IMPERIAL_MARCH);
  float n08[][2] = SONG(CLUEBOARD_SOUND);
  float n09[][2] = SONG(BASKET_CASE);
  float n10[][2] = SONG(STARTUP_SOUND);
  float n11[][2] = SONG(GOODBYE_SOUND);
  float n12[][2] = SONG(PLANCK_SOUND);
  float n13[][2] = SONG(PREONIC_SOUND);
  float n14[][2] = SONG(QWERTY_SOUND);
  float n15[][2] = SONG(COLEMAK_SOUND);
  float n16[][2] = SONG(DVORAK_SOUND);
  float n17[][2] = SONG(PLOVER_SOUND);
  float n18[][2] = SONG(PLOVER_GOODBYE_SOUND);
  float n19[][2] = SONG(MUSIC_ON_SOUND);
  float n20[][2] = SONG(AUDIO_ON_SOUND);
  float n21[][2] = SONG(AUDIO_OFF_SOUND);
  float n22[][2] = SONG(MUSIC_OFF_SOUND);
  float n23[][2] = SONG(VOICE_CHANGE_SOUND);
  float n24[][2] = SONG(CHROMATIC_SOUND);
  float n25[][2] = SONG(MAJOR_SOUND);
  float n26[][2] = SONG(MINOR_SOUND);
  float n27[][2] = SONG(GUITAR_SOUND);
  float n28[][2] = SONG(VIOLIN_SOUND);
  float n29[][2] = SONG(CAPS_LOCK_ON_SOUND);
  float n30[][2] = SONG(CAPS_LOCK_OFF_SOUND);
  float n31[][2] = SONG(SCROLL_LOCK_ON_SOUND);
  float n32[][2] = SONG(SCROLL_LOCK_OFF_SOUND);
  float n33[][2] = SONG(NUM_LOCK_ON_SOUND);
  float n34[][2] = SONG(NUM_LOCK_OFF_SOUND);
  float n35[][2] = SONG(AG_NORM_SOUND);
  float n36[][2] = SONG(AG_SWAP_SOUND);
  float n37[][2] = SONG(UNICODE_WINDOWS);
  float n38[][2] = SONG(UNICODE_LINUX);
  float n39[][2] = SONG(COIN_SOUND);
  float n40[][2] = SONG(ONE_UP_SOUND);
  float n41[][2] = SONG(SONIC_RING);
  float n42[][2] = SONG(ZELDA_PUZZLE);
  float n43[][2] = SONG(ZELDA_TREASURE);
  float n44[][2] = SONG(TERMINAL_SOUND);
  float n45[][2] = SONG(OVERWATCH_THEME);
  float n46[][2] = SONG(MARIO_THEME);
  float n47[][2] = SONG(MARIO_GAMEOVER);
  float n48[][2] = SONG(MARIO_MUSHROOM);
  float n49[][2] = SONG(E1M1_DOOM);
//   float n50[][2] = SONG(DISNEY_SONG);
//   float n51[][2] = SONG(NUMBER_ONE);
//   float n52[][2] = SONG(CABBAGE_SONG);
//   float n53[][2] = SONG(OLD_SPICE);
//   float n54[][2] = SONG(VICTORY_FANFARE_SHORT);
//   float n55[][2] = SONG(ALL_STAR);
//   float n56[][2] = SONG(RICK_ROLL);
//   float n57[][2] = SONG(FF_PRELUDE);
//   float n58[][2] = SONG(TO_BOLDLY_GO);
//   float n59[][2] = SONG(KATAWARE_DOKI);
//   float n60[][2] = SONG(CAMPANELLA);
//   float n61[][2] = SONG(MICHISHIRUBE);
//   float n62[][2] = SONG(LIEBESLEID);
//   float n63[][2] = SONG(MELODIES_OF_LIFE);
//   float n64[][2] = SONG(EYES_ON_ME);
//   float n65[][2] = SONG(SONG_OF_THE_ANCIENTS);
//   float n66[][2] = SONG(NIER_AMUSEMENT_PARK);
//   float n67[][2] = SONG(COPIED_CITY);
//   float n68[][2] = SONG(VAGUE_HOPE_COLD_RAIN);
//   float n69[][2] = SONG(KAINE_SALVATION);
//   float n70[][2] = SONG(WEIGHT_OF_THE_WORLD);
//   float n71[][2] = SONG(ISABELLAS_LULLABY);
//   float n72[][2] = SONG(FANTASIE_IMPROMPTU);
//   float n73[][2] = SONG(TERRAS_THEME);
//   float n74[][2] = SONG(RENAI_CIRCULATION);
//   float n75[][2] = SONG(PLATINUM_DISCO);
//   float n76[][2] = SONG(ADVENTURE_TIME);
//   float n77[][2] = SONG(NOCTURNE_OP_9_NO_1);
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
    KC_TAB , _______, _______, _______, _______, CARPALX,                        _______, _______, _______, _______, _______, KC_DEL ,
    PV_ESCC, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, KC_ENT ,
    KC_LSFT, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, KC_RSFT,
                                        KC_LGUI, SYMBOL , KC_BSPC,      KC_SPC , SYSCTL , KC_RALT
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
    case PV_S01: if (record->event.pressed) PLAY_SONG(n01); return false; break;
    case PV_S02: if (record->event.pressed) PLAY_SONG(n02); return false; break;
    case PV_S03: if (record->event.pressed) PLAY_SONG(n03); return false; break;
    case PV_S04: if (record->event.pressed) PLAY_SONG(n04); return false; break;
    case PV_S05: if (record->event.pressed) PLAY_SONG(n05); return false; break;
    case PV_S06: if (record->event.pressed) PLAY_SONG(n06); return false; break;
    case PV_S07: if (record->event.pressed) PLAY_SONG(n07); return false; break;
    case PV_S08: if (record->event.pressed) PLAY_SONG(n08); return false; break;
    case PV_S09: if (record->event.pressed) PLAY_SONG(n09); return false; break;
    case PV_S10: if (record->event.pressed) PLAY_SONG(n10); return false; break;
    case PV_S11: if (record->event.pressed) PLAY_SONG(n11); return false; break;
    case PV_S12: if (record->event.pressed) PLAY_SONG(n12); return false; break;
    case PV_S13: if (record->event.pressed) PLAY_SONG(n13); return false; break;
    case PV_S14: if (record->event.pressed) PLAY_SONG(n14); return false; break;
    case PV_S15: if (record->event.pressed) PLAY_SONG(n15); return false; break;
    case PV_S16: if (record->event.pressed) PLAY_SONG(n16); return false; break;
    case PV_S17: if (record->event.pressed) PLAY_SONG(n17); return false; break;
    case PV_S18: if (record->event.pressed) PLAY_SONG(n18); return false; break;
    case PV_S19: if (record->event.pressed) PLAY_SONG(n19); return false; break;
    case PV_S20: if (record->event.pressed) PLAY_SONG(n20); return false; break;
    case PV_S21: if (record->event.pressed) PLAY_SONG(n21); return false; break;
    case PV_S22: if (record->event.pressed) PLAY_SONG(n22); return false; break;
    case PV_S23: if (record->event.pressed) PLAY_SONG(n23); return false; break;
    case PV_S24: if (record->event.pressed) PLAY_SONG(n24); return false; break;
    case PV_S25: if (record->event.pressed) PLAY_SONG(n25); return false; break;
    case PV_S26: if (record->event.pressed) PLAY_SONG(n26); return false; break;
    case PV_S27: if (record->event.pressed) PLAY_SONG(n27); return false; break;
    case PV_S28: if (record->event.pressed) PLAY_SONG(n28); return false; break;
    case PV_S29: if (record->event.pressed) PLAY_SONG(n29); return false; break;
    case PV_S30: if (record->event.pressed) PLAY_SONG(n30); return false; break;
    case PV_S31: if (record->event.pressed) PLAY_SONG(n31); return false; break;
    case PV_S32: if (record->event.pressed) PLAY_SONG(n32); return false; break;
    case PV_S33: if (record->event.pressed) PLAY_SONG(n33); return false; break;
    case PV_S34: if (record->event.pressed) PLAY_SONG(n34); return false; break;
    case PV_S35: if (record->event.pressed) PLAY_SONG(n35); return false; break;
    case PV_S36: if (record->event.pressed) PLAY_SONG(n36); return false; break;
    case PV_S37: if (record->event.pressed) PLAY_SONG(n37); return false; break;
    case PV_S38: if (record->event.pressed) PLAY_SONG(n38); return false; break;
    case PV_S39: if (record->event.pressed) PLAY_SONG(n39); return false; break;
    case PV_S40: if (record->event.pressed) PLAY_SONG(n40); return false; break;
    case PV_S41: if (record->event.pressed) PLAY_SONG(n41); return false; break;
    case PV_S42: if (record->event.pressed) PLAY_SONG(n42); return false; break;
    case PV_S43: if (record->event.pressed) PLAY_SONG(n43); return false; break;
    case PV_S44: if (record->event.pressed) PLAY_SONG(n44); return false; break;
    case PV_S45: if (record->event.pressed) PLAY_SONG(n45); return false; break;
    case PV_S46: if (record->event.pressed) PLAY_SONG(n46); return false; break;
    case PV_S47: if (record->event.pressed) PLAY_SONG(n47); return false; break;
    case PV_S48: if (record->event.pressed) PLAY_SONG(n48); return false; break;
    case PV_S49: if (record->event.pressed) PLAY_SONG(n49); return false; break;
    // case PV_S50: if (record->event.pressed) PLAY_SONG(n50); return false; break;
    // case PV_S51: if (record->event.pressed) PLAY_SONG(n51); return false; break;
    // case PV_S52: if (record->event.pressed) PLAY_SONG(n52); return false; break;
    // case PV_S53: if (record->event.pressed) PLAY_SONG(n53); return false; break;
    // case PV_S54: if (record->event.pressed) PLAY_SONG(n54); return false; break;
    // case PV_S55: if (record->event.pressed) PLAY_SONG(n55); return false; break;
    // case PV_S56: if (record->event.pressed) PLAY_SONG(n56); return false; break;
    // case PV_S57: if (record->event.pressed) PLAY_SONG(n57); return false; break;
    // case PV_S58: if (record->event.pressed) PLAY_SONG(n58); return false; break;
    // case PV_S59: if (record->event.pressed) PLAY_SONG(n59); return false; break;
    // case PV_S60: if (record->event.pressed) PLAY_SONG(n60); return false; break;
    // case PV_S61: if (record->event.pressed) PLAY_SONG(n61); return false; break;
    // case PV_S62: if (record->event.pressed) PLAY_SONG(n62); return false; break;
    // case PV_S63: if (record->event.pressed) PLAY_SONG(n63); return false; break;
    // case PV_S64: if (record->event.pressed) PLAY_SONG(n64); return false; break;
    // case PV_S65: if (record->event.pressed) PLAY_SONG(n65); return false; break;
    // case PV_S66: if (record->event.pressed) PLAY_SONG(n66); return false; break;
    // case PV_S67: if (record->event.pressed) PLAY_SONG(n67); return false; break;
    // case PV_S68: if (record->event.pressed) PLAY_SONG(n68); return false; break;
    // case PV_S69: if (record->event.pressed) PLAY_SONG(n69); return false; break;
    // case PV_S70: if (record->event.pressed) PLAY_SONG(n70); return false; break;
    // case PV_S71: if (record->event.pressed) PLAY_SONG(n71); return false; break;
    // case PV_S72: if (record->event.pressed) PLAY_SONG(n72); return false; break;
    // case PV_S73: if (record->event.pressed) PLAY_SONG(n73); return false; break;
    // case PV_S74: if (record->event.pressed) PLAY_SONG(n74); return false; break;
    // case PV_S75: if (record->event.pressed) PLAY_SONG(n75); return false; break;
    // case PV_S76: if (record->event.pressed) PLAY_SONG(n76); return false; break;
    // case PV_S77: if (record->event.pressed) PLAY_SONG(n77); return false; break;
    // case PV_S78: if (record->event.pressed) PLAY_SONG(n78); return false; break;
    #endif
  }
  return true; // Process everything else normally
}
