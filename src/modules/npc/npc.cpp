#include "npc.h"

#include <iostream>
#include <numbers>

void NPCModule::OnEnable() {
    struct { double Pitch; double Yaw; } rotation{};
    rotation.Pitch = ((state->DishonoredPlayerController->PlayerCamera->Rotation.Pitch * std::numbers::pi) / 32768.0f) + std::numbers::pi / 6;
    rotation.Yaw = (state->DishonoredPlayerController->PlayerCamera->Rotation.Yaw * std::numbers::pi) / 32768.0f;

    FVector camera_look_vector{};
    camera_look_vector.X = cos(rotation.Pitch) * cos(rotation.Yaw);
    camera_look_vector.Y = cos(rotation.Pitch) * sin(rotation.Yaw);
    camera_look_vector.Z = sin(rotation.Pitch);

    for (auto object : *(this->state->GObjects)) {
        if (!object) continue;

        if (object->IsA<ADishonoredSpawner>()) {
            auto spawner = reinterpret_cast<ADishonoredSpawner*>(object);
            spawner->m_bCanSpawnWhenVisible = true;
            spawner->m_bCanSpawnWhenPlayerNear = true;
            spawner->m_MaxSpawnsPerFrame = 100;
            spawner->m_fDelayBetweenSpawnsOverride = 0.0f;
            spawner->m_pFactionTweakOverride = this->state->DishonoredPlayerPawn->m_pCurFactionTweak;

            for (auto pawn : spawner->m_SpawnedPawns) {
                if (!pawn) continue;

                pawn->Location = FVector(
                    this->state->DishonoredPlayerPawn->Location.X + camera_look_vector.X * 300,
                    this->state->DishonoredPlayerPawn->Location.Y + camera_look_vector.Y * 300,
                    this->state->DishonoredPlayerPawn->Location.Z + camera_look_vector.Z * 300
                );
                pawn->Velocity = FVector(0, 0, 0);
                pawn->AngularVelocity = FVector(0, 0, 0);
            }
        }
    }
    this->Disable();
}