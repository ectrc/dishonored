#include "teleport.h"

#include <iostream>
#include <numbers>

void TeleportModule::OnEnable() {
    struct { double Pitch; double Yaw; } rotation{};
    rotation.Pitch = ((state->DishonoredPlayerController->PlayerCamera->Rotation.Pitch * std::numbers::pi) / 32768.0f) + std::numbers::pi / 6;
    rotation.Yaw = (state->DishonoredPlayerController->PlayerCamera->Rotation.Yaw * std::numbers::pi) / 32768.0f;

    FVector camera_look_vector{};
    camera_look_vector.X = cos(rotation.Pitch) * cos(rotation.Yaw);
    camera_look_vector.Y = cos(rotation.Pitch) * sin(rotation.Yaw);
    camera_look_vector.Z = sin(rotation.Pitch);

    this->state->DishonoredPlayerPawn->Location = FVector(
        this->state->DishonoredPlayerPawn->Location.X + camera_look_vector.X * 100,
        this->state->DishonoredPlayerPawn->Location.Y + camera_look_vector.Y * 100,
        this->state->DishonoredPlayerPawn->Location.Z + camera_look_vector.Z * 100
    );
    this->Disable();
}