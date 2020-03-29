#pragma once


#ifdef PRODUCT
  #undef PRODUCT
  #define PRODUCT Iris Keyboard - pvinis
#endif


// Use I2C or Serial, not both
#define USE_SERIAL
// #define USE_I2C


// Select hand configuration
// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS


// choose pin to use for audio. c6 is the one iris uses.
#ifdef AUDIO_ENABLE
  #define C6_AUDIO
#endif


#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
// #define ENCODERS_PAD_A_RIGHT { B5 }
// #define ENCODERS_PAD_B_RIGHT { C6 }
#define ENCODER_RESOLUTION 2
