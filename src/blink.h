#ifndef blink_h
#define blink_h

#include <Arduino.h>

void blink(long t, int p){
  digitalWrite(p, 1);
  delay(t);
  digitalWrite(p,0);
  delay(t);
}

#endif
