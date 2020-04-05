
void keyboard_post_init_keymap(void) {
#if BACKLIGHT_ENABLE
    backlight_enable();
    backlight_level(5);
#    ifdef BACKLIGHT_BREATHING
    breathing_enable();
#    endif
#endif
}
