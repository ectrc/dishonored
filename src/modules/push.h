#ifndef DISHONORED_PUSH_H
#define DISHONORED_PUSH_H

#include "module.h"

#include <utility>

class PushModule : public Module {
public:
    PushModule(std::string title, std::string desc, int key) : Module(std::move(title), std::move(desc), key) {
        this->SetOnce(false);
    }
    void OnEnable() override;
};


#endif