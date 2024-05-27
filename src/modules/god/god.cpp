#include "god.h"

void GodModule::OnTick() {
    state->DishonoredPlayerController->bGodMode = IsEnabled();
}