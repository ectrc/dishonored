#ifndef DISHONORED_GOD_H
#define DISHONORED_GOD_H

#include "module.h"

#include <utility>

class GodModule : public Module {
public:
    GodModule(std::string title, std::string desc, int key) : Module(std::move(title), std::move(desc), key) {}
    void OnTick() override;
};


#endif