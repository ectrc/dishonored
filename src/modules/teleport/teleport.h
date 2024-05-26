#ifndef DISHONORED_TELEPORT_H
#define DISHONORED_TELEPORT_H

#include "../module.h"

#include <utility>

class TeleportModule : public Module {
public:
    TeleportModule(std::string title, int key) : Module(std::move(title), key) {}
    void OnEnable() override;
};


#endif