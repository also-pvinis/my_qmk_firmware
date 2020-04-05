#include "pvinis.h"
#include "version.h"


#ifdef AUDIO_ENABLE
  #include "audio.h"

  float song_sonic_ring[][2] = SONG(SONIC_RING);
  float song_coin_sound[][2] = SONG(COIN_SOUND);
#endif


// SYMBOL + SYSCTL = KBCTL
uint32_t layer_state_set_user(uint32_t state) {
  uint32_t intermediate_state = update_tri_layer_state(state, LR_SYMBOL, LR_SYSCTL, LR_KBCTL);
  intermediate_state = layer_state_set_user_local(intermediate_state);
  return intermediate_state;
}


// functions for the individual keymaps to implement if they need something extra
__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}


// Handle my own keycodes.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case PV_VRSN:
      if (record->event.pressed) {
        SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;

    case PV_MAKE:
    // make ergodox_ez:pvinis:teensy
      if (!record->event.pressed) {
        SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP
#if (defined(BOOTLOADER_DFU) || defined(BOOTLOADER_LUFA_DFU) || defined(BOOTLOADER_QMK_DFU))
          ":dfu"
#elif defined(BOOTLOADER_HALFKAY)
          ":teensy"
#elif defined(BOOTLOADER_CATERINA)
          ":avrdude"
#endif
          SS_TAP(X_ENTER)
        );
      }
      return false;

    case PV_FLSH:
      reset_keyboard();
      return false;

    case PV_SSNC:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(song_sonic_ring);
        #endif
      }
      return false;

    case PV_SCIN:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(song_coin_sound);
        #endif
      }
      return false;

    case PV_LTGL:
#ifdef RGBLIGHT_ENABLE
#endif
      return false;
  }
  return process_record_keymap(keycode, record);
}


#ifdef TAP_DANCE_ENABLE
qk_tap_dance_action_t tap_dance_actions[] = {
};
#endif // TAP_DANCE_ENABLE


// init stuff
void keyboard_post_init_user(void) {
    keyboard_post_init_user_local();
}


// default functions
__attribute__ ((weak))
void keyboard_post_init_user_local(void) {}

__attribute__ ((weak))
uint32_t layer_state_set_user_local(uint32_t state) {
    return state;
}
