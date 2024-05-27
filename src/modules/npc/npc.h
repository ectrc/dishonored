#ifndef DISHONORED_NPC_H
#define DISHONORED_NPC_H

#include "../module.h"

#include <utility>

class NPCModule : public Module {
public:
    NPCModule(std::string title, std::string desc, int key) : Module(std::move(title), std::move(desc), key) {
        this->SetOnce(false);
    }
    void OnEnable() override;
};


#endif