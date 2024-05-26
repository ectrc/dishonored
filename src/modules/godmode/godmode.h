#ifndef DISHONORED_GODMODE_H
#define DISHONORED_GODMODE_H

#include "../module.h"

#include <utility>

class GodModeModule : public Module {
public:
    GodModeModule(std::string title, int key) : Module(std::move(title), key) {}
    void OnEnable() override;
    void OnDisable() override;
};


#endif