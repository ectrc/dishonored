#include "items.h"

#include <iostream>

void ItemsModule::OnEnable() {
    for (auto object : *(this->state->GObjects)) {
        if (!object) continue;

        if (object->IsA<ADisPickup_Base>()) {
            auto item = reinterpret_cast<ADisPickup_Base*>(object);
            if (item->GetNameCPP().find("Default_") != std::string::npos) continue;

            std::cout << item->GetNameCPP() << '\n';
            if (item->m_pMovableComponent == nullptr) continue;
            std::cout << item->GetNameCPP() << " has moveable component" << '\n';
            std::cout << item->m_pMovableComponent->Owner->GetNameCPP() << '\n';
            if (item->m_pMovableComponent->m_pBody == nullptr) continue;
            std::cout << item->GetNameCPP() << " has body" << '\n';
            if (item->m_pMovableComponent->m_pBody_Old == nullptr) continue;
            std::cout << item->GetNameCPP() << " has old body" << '\n';

            item->Location = FVector(this->state->DishonoredPlayerPawn->Location.X, this->state->DishonoredPlayerPawn->Location.Y, this->state->DishonoredPlayerPawn->Location.Z + 100);
            item->RBState.Position = FVector(this->state->DishonoredPlayerPawn->Location.X, this->state->DishonoredPlayerPawn->Location.Y, this->state->DishonoredPlayerPawn->Location.Z + 100);
            item->bNeedsRBStateReplication = true;
            item->m_pMovableComponent->m_pBody_Old->m_CurrentPosition = FVector(this->state->DishonoredPlayerPawn->Location.X, this->state->DishonoredPlayerPawn->Location.Y, this->state->DishonoredPlayerPawn->Location.Z + 100);
            item->m_pMovableComponent->m_pBody_Old =  item->m_pMovableComponent->m_pBody;
        }
    }
    this->Disable();
}