#ifndef DISHONORED_MODULE_H
#define DISHONORED_MODULE_H

#include "../state.h"

#include <string>
#include <utility>
#include <iostream>

class Module {
public:
    Module(std::string title, int key) : title(std::move(title)), key(key), enabled(false) {}
    virtual ~Module() = default;

    void Enable() {
        enabled = true;
        std::cout << "Enabling " << title << std::endl;
        OnEnable();
    }

    void Disable() {
        enabled = false;
        std::cout << "Disabling " << title << std::endl;
        OnDisable();
    }

    void Toggle() {
        enabled ? Disable() : Enable();
    }

    void SetState(DishonoredState* state) {
        this->state = state;
    }

    void SetOnce(bool once) {
        this->once = once;
    }

    [[nodiscard]] std::string GetTitle() const {
        return title;
    }

    [[nodiscard]] bool IsEnabled() const {
        return enabled;
    }

    [[nodiscard]] int GetKey() const {
        return key;
    }

    [[nodiscard]] bool IsOnce() const {
        return once;
    }

    virtual void OnTick() {}
    virtual void OnEnable() {}
    virtual void OnDisable() {}
public:
    DishonoredState* state;
private:
    std::string title;
    int key;
    bool enabled;
    bool once;
};


#endif
