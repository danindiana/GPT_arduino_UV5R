#ifndef SimpleRandom_h
#define SimpleRandom_h

#include "Arduino.h"

class SimpleRandom
{
public:
    SimpleRandom() {
        // Seed the random number generator with noise from an unconnected analog pin
        randomSeed(analogRead(A0));
    }

    uint8_t random8() {
        return random(0, 0xFF);
    }

    uint16_t random16() {
        return random(0, 0xFFFF);
    }

    uint32_t random32() {
        return ((uint32_t)random16() << 16) | random16();
    }

    uint32_t random(uint32_t max) {
        return random(max);
    }

    uint32_t random(uint32_t min, uint32_t max) {
        return random(min, max);
    }
};

#endif
