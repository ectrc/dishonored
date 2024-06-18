#include "lock.h"

void LockModule::OnEnable() {
    for (auto object : *(this->state->GObjects)) {
        if (!object) continue;

        if (object->IsA<ADishonoredUsableObject>()) {
            auto door = reinterpret_cast<ADishonoredUsableObject*>(object);
            door->m_bEnabled = true;
            door->m_bLocked = false;
        }
    }

    this->Disable();
}