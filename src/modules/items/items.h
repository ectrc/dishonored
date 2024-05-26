#ifndef DISHONORED_ITEMS_H
#define DISHONORED_ITEMS_H

#include "../module.h"

#include <utility>

class ItemsModule : public Module {
public:
    ItemsModule(std::string title, int key) : Module(std::move(title), key) {}
    void OnEnable() override;
};


#endif