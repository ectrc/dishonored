#ifndef DISHONORED_SDK_H
#define DISHONORED_SDK_H

#include <libhat.hpp>
#include <cstdint>
#include <windows.h>

class DishonoredPlayerPawn {
public:
    char pad_0x0000[0x344]; //0x0000
    int Health; //0x0344
    int MaxHealth; //0x0348
    char pad_0x034C[0xEF0]; //0x034C
};

#endif