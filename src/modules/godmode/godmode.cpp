#include "godmode.h"

void GodModeModule::OnEnable() {
    state->DishonoredPlayerController->bGodMode = true;
}

void GodModeModule::OnDisable() {
    state->DishonoredPlayerController->bGodMode = false;
}