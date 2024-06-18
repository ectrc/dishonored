#ifndef DISHONORED_NOTHING_H
#define DISHONORED_NOTHING_H

#include "module.h"

#include <utility>

class NothingModule : public Module {
public:
    NothingModule(std::string title, std::string desc, int key) : Module(std::move(title), std::move(desc), key) {};
    void OnEnable() override;
};



#endif
