#ifndef DISHONORED_STATE_H
#define DISHONORED_STATE_H

#include "sdk.hpp"

struct DishonoredState {
    TArray<UObject*>* GObjects;
    UDishonoredEngine* DishonoredEngine;
    ADishonoredPlayerPawn* DishonoredPlayerPawn;
    ADishonoredPlayerController* DishonoredPlayerController;
};

#endif
