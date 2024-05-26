#ifndef DISHONORED_NPC_H
#define DISHONORED_NPC_H

#include "../module.h"

#include <utility>

class NPCModule : public Module {
public:
    NPCModule(std::string title, int key) : Module(std::move(title), key) {}
    void OnEnable() override;
};


#endif