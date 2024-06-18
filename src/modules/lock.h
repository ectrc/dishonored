#ifndef DISHONORED_LOCK_H
#define DISHONORED_LOCK_H

#include "module.h"

#include <utility>

class LockModule : public Module {
public:
    LockModule(std::string title, std::string desc, int key) : Module(std::move(title), std::move(desc), key) {
        SetOnce(true);
    }
    void OnEnable() override;
};

#endif