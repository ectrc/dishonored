#include "npc.h"

#include <iostream>
#include <numbers>
#include <vector>

void NPCModule::OnEnable() {
    for (auto object : *(this->state->GObjects)) {
        if (!object) continue;

        if (object->IsA<ADishonoredSpawner>()) {
            auto spawner = reinterpret_cast<ADishonoredSpawner*>(object);
            if (spawner->GetNameCPP().find("Default_") != std::string::npos) continue;
            spawner->m_pFactionTweakOverride = this->state->DishonoredPlayerPawn->m_pCurFactionTweak;

            for (auto pawn : spawner->m_SpawnedPawns) {
                if (!pawn) continue;
                if (pawn->m_SpawnerInfo.m_Squad.ToString().find("Samuel") != std::string::npos) continue;
                pawn->Location =  this->state->DishonoredPlayerPawn->Location + this->state->GetAdjustedLookVector() * 300;
                pawn->Velocity = FVector(0, 0, 0);
                pawn->m_pCurFactionTweak = this->state->DishonoredPlayerPawn->m_pCurFactionTweak;
            }
        }
    }
    this->Disable();
}