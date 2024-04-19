#ifndef DISHONORED_CORE_H
#define DISHONORED_CORE_H

#include "sdk.h"

#include <string>
#include <map>

class CoreModule {
public:
    explicit CoreModule(const std::string& title) {
        this->title = title;
    };
    virtual ~CoreModule() = default;
private:
    std::string title;
};

class DishonoredCore {
public:
    DishonoredCore();
    ~DishonoredCore();

    void RegisterModule(const std::string& name, CoreModule* module) {
        modules[name] = module;
    }
private:
    std::map<std::string, CoreModule*> modules;
    DishonoredPlayerPawn* playerPawn{};
};

#endif