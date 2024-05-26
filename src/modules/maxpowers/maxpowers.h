#ifndef DISHONORED_MAXPOWERS_H
#define DISHONORED_MAXPOWERS_H

#include "../module.h"

#include <utility>

class MaxPowersModule : public Module {
public:
    MaxPowersModule(std::string title, int key) : Module(std::move(title), key) {}
    void OnEnable() override;
};


#endif