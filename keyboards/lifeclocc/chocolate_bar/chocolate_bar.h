#pragma once

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define noo KC_NO

#define LAYOUT( \
  LA1, LA2, LA3, LA4, LA5, LA6,               RA2, RA3, RA4, RA5, RA6, RA7, \
  LB1, LB2, LB3, LB4, LB5, LB6,               RB2, RB3, RB4, RB5, RB6, RB7, \
  LC1, LC2, LC3, LC4, LC5, LC6,               RC2, RC3, RC4, RC5, RC6, RC7, \
  LD1, LD2  LD3, LD4, LD5, LD6, LD7,     RD1, RD2, RD3, RD4, RD5, RD6, RD7
  ) \
  { \
    { LA1, LA2, LA3, LA4, LA5, LA6, noo }, \
    { LB1, LB2, LB3, LB4, LB5, LB6, noo }, \
    { LC1, LC2, LC3, LC4, LC5, LC6, noo }, \
    { LD1, noo, LD3, LD4, LD5, LD6, LD7 }, \
    { noo, RA2, RA3, RA4, RA5, RA6, RA7 }, \
    { noo, RB2, RB3, RB4, RB5, RB6, RB7 }, \
    { noo, RC2, RC3, RC4, RC5, RC6, RC7 }, \
    { RD1, RD2, RD3, RD4, RD5, RD6, RD7 }  \
  }