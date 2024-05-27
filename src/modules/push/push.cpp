#include "push.h"

void PushModule::OnEnable() {
    this->state->DishonoredPlayerPawn->Location += state->GetLookVector() * 100;
    this->state->DishonoredPlayerPawn->Velocity = state->GetLookVector() * 1000;
}