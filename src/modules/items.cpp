#include "items.h"

void ItemsModule::OnEnable() {
    for (auto object : *(this->state->GObjects)) {
        if (!object) continue;

        if (object->IsA<ADisPickup_Base>()) {
            auto item = reinterpret_cast<ADisPickup_Base*>(object);
            if (item->GetNameCPP().find("Default_") != std::string::npos) continue;
            item->Location = state->GetLocation() + FVector(0, 0, 100);
            item->RBState.Position = item->Location;
            item->bNeedsRBStateReplication = true;
        }
    }
    this->Disable();

    this->Disable();
}