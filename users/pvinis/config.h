#pragma once

#if defined(AUDIO_ENABLE)
// #define STARTUP_SONG SONG(SONIC_RING)
// #define DAC_SAMPLE_MAX 65535U // maybe this works for volume?
#endif

// allow rolling when keys have hold functionality
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_TERM 150

#if defined(MOUSE_KEYS)
  #define MOUSEKEY_WHEEL_TIME_TO_MAX 1
#endif
