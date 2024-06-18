#ifndef DISHONORED_MODULE_H
#define DISHONORED_MODULE_H

#include "../state.h"

#include <string>
#include <utility>
#include <iostream>

class Module {
public:
    Module(std::string _title, std::string _desc, int key) : title(std::move(_title)), description(std::move(_desc)), key(key), enabled(false), once(false) {
        std::cout << description << '\n';
    }
    virtual ~Module() = default;

    void Enable();
    void Disable();
    void Toggle() { enabled ? Disable() : Enable(); }

    void SetState(DishonoredState* _state) { this->state = _state; }
    void SetOnce(bool _once) { this->once = _once; }

    [[nodiscard]] std::string GetTitle() const { return title; }
    [[nodiscard]] bool IsEnabled() const { return enabled; }
    [[nodiscard]] int GetKey() const { return key; }
    [[nodiscard]] bool IsOnce() const { return once; }

    virtual void OnTick() {}
    virtual void OnEnable() {}
    virtual void OnDisable() {}
public:
    DishonoredState* state{};
private:
    std::string title;
    std::string description;
    int key; // virtual key code
    bool enabled;
    bool once; // marks if the module is a one time use
};


#endif
