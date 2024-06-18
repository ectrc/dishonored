#ifndef DISHONORED_POWERS_H
#define DISHONORED_POWERS_H

#include "module.h"

#include <utility>

class PowersModule : public Module {
public:
    PowersModule(std::string title, std::string desc, int key) : Module(std::move(title), std::move(desc), key) {
        this->SetOnce(true);
    }
    void OnEnable() override;
};


#endif