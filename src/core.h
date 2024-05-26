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

    void WaitForExit();
    void RegisterModule(const std::string& name, std::unique_ptr<Module> module);
private:
    std::map<std::string, std::unique_ptr<Module>> modules;
    DishonoredState state{};
};

#endif