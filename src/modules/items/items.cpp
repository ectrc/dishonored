#include "items.h"

#include <iostream>

void ItemsModule::OnEnable() {
    for (auto object : *(this->state->GObjects)) {
        if (!object) continue;

        if (object->IsA<ADisPickup_Base>()) {
            auto item = reinterpret_cast<ADisPickup_Base*>(object);
            if (item->GetNameCPP().find("Default_") != std::string::npos) continue;

            item->bDeleteMe = 1;
            item->Location = FVector(this->state->DishonoredPlayerPawn->Location.X, this->state->DishonoredPlayerPawn->Location.Y, this->state->DishonoredPlayerPawn->Location.Z + 100);
            item->CachedLocation = item->Location;
            item->RelativeLocation = item->Location;
            item->bNetDirty = 1;
            item->bUpdateSimulatedPosition = 1;
            item->bReplicateRigidBodyLocation = 1;

            item->InitialLocation = item->Location;
            item->m_PickupStartPos = item->Location;
            item->ReplicatedDrawScale3D = FVector(2, 2, 2);
            item->ReplicatedMeshTranslation = FVector(2, 2, 2);
            item->ReplicatedMeshRotation = FRotator(0, 0, 0);

            item->RBState.Position = FVector(this->state->DishonoredPlayerPawn->Location.X, this->state->DishonoredPlayerPawn->Location.Y, this->state->DishonoredPlayerPawn->Location.Z + 100);
            item->RBState.bNewData = 1;
            item->RBState.LinVel = FVector(100, 100, 100);
            item->bNeedsRBStateReplication = 1;
            item->bCallRigidBodyWakeEvents = 1;
            item->bReplicateRigidBodyLocation = 1;

            item->WorldInfo->m_RatPoolSize = 99999;


            FMatrix newLocalToWorld{};
            newLocalToWorld.XPlane = {1, 0, 0, 0};
            newLocalToWorld.YPlane = {0, 1, 0, 0};
            newLocalToWorld.ZPlane = {0, 0, 1, 0};
            newLocalToWorld.WPlane = {this->state->DishonoredPlayerPawn->Location.X, this->state->DishonoredPlayerPawn->Location.Y, this->state->DishonoredPlayerPawn->Location.Z + 100, 1};
            item->CachedLocalToWorld = newLocalToWorld;

            if (item->StaticMeshComponent != nullptr) {
                std::cout << item->GetNameCPP() << " has a static mesh\n";
                item->StaticMeshComponent->LocalToWorld = newLocalToWorld;
                item->StaticMeshComponent->LocalToWorldDeterminant = newLocalToWorld.determinant();
            }

//            if (item->m_BoxBoundsForPVS != nullptr)  {
//                std::cout << item->GetNameCPP() << " has a box bounds\n";
//                item->m_BoxBoundsForPVS->LocalToWorld = newLocalToWorld;
//                item->m_BoxBoundsForPVS->LocalToWorldDeterminant = newLocalToWorld.determinant();
//            }

            if (item->m_pHighlightStaticMeshComponent != nullptr) {
                std::cout << item->GetNameCPP() << " has a highlight mesh\n";
                item->m_pHighlightStaticMeshComponent->LocalToWorld = newLocalToWorld;
                item->m_pHighlightStaticMeshComponent->LocalToWorldDeterminant = newLocalToWorld.determinant();
            }

            if (item->m_pMovableComponent != nullptr)  {
                std::cout << item->GetNameCPP() << " has a movable component\n";
                item->m_pMovableComponent->m_pBody_Old = item->m_pMovableComponent->m_pBody;
                if (item->m_pMovableComponent->m_pBody == nullptr) continue;
                std::cout << item->GetNameCPP() << " has a body\n";
                item->m_pMovableComponent->m_pBody_Old->m_CurrentPosition = FVector(this->state->DishonoredPlayerPawn->Location.X, this->state->DishonoredPlayerPawn->Location.Y, this->state->DishonoredPlayerPawn->Location.Z + 100);
                item->m_pMovableComponent->m_pBody = item->m_pMovableComponent->m_pBody_Old;
            }

            item->bReplicateRigidBodyLocation = 1;
        }
    }
    this->Disable();
}