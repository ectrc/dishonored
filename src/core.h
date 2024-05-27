#ifndef DISHONORED_CORE_H
#define DISHONORED_CORE_H

#include "state.h"
#include "./modules/module.h"

#include <string>
#include <map>
#include <vector>

class Core {
public:
    Core();
    ~Core();

    inline void Exit() { state.should_exit = true; }
    void WaitForExit();
    void AddModule(std::unique_ptr<Module> module);
private:
    std::map<std::string, std::unique_ptr<Module>> modules;
    DishonoredState state{};
};

#endif