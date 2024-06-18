#ifndef DISHONORED_NOTHING_H
#define DISHONORED_NOTHING_H

#include "module.h"

#include <utility>

class ItemsModule : public Module {
public:
    ItemsModule(std::string title, std::string desc, int key) : Module(std::move(title), std::move(desc), key) {
        SetOnce(true);
    };
    void OnEnable() override;
};



#endif
