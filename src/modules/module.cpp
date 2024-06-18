#include "module.h"

void Module::Enable() {
    enabled = true;
    once ? std::cout << "Activated " << title << std::endl : std::cout << "Enabling " << title << std::endl;
    OnEnable();
}

void Module::Disable() {
    if (!once) return;
    enabled = false;
    std::cout << "Disabling " << title << std::endl;
    OnDisable();
}