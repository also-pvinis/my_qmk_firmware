// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY (KC_1) {
      // ¯\_(ツ)_/¯
      unicode_input_start(); register_hex(0xaf); unicode_input_finish();
      register_code (KC_RALT); TAP_ONCE (KC_MINS); unregister_code (KC_RALT);
      register_code (KC_RSFT); TAP_ONCE (KC_8); unregister_code (KC_RSFT);
      unicode_input_start (); register_hex(0x30c4); unicode_input_finish();
      register_code (KC_RSFT); TAP_ONCE (KC_9); TAP_ONCE(KC_7); unregister_code (KC_RSFT);
      unicode_input_start (); register_hex(0xaf); unicode_input_finish();
    }

    SEQ_ONE_KEY (KC_2) {
      // 凸(ツ)凸
      unicode_input_start(); register_hex(0x51F8); unicode_input_finish();
      register_code (KC_RSFT); TAP_ONCE (KC_8); unregister_code (KC_RSFT);
      unicode_input_start (); register_hex(0x30c4); unicode_input_finish();
      register_code (KC_RSFT); TAP_ONCE (KC_9); unregister_code (KC_RSFT);
      unicode_input_start (); register_hex(0x51F8); unicode_input_finish();
    }
  }
}
