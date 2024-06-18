#include "hooks/hooks.h"
#include "core.h"

#include <libhat.hpp>
#include <minhook.h>
#include <thread>
#include <windows.h>
#include <iostream>

#define HOOK_PE

namespace Patterns {
    constexpr auto ProcessEvent = hat::compile_signature<"55 8B EC 6A ?? 68 ?? ?? ?? ?? 64 A1 ?? ?? ?? ?? 50 83 EC ?? A1 ?? ?? ?? ?? 33 C5 89 45 ?? 53 56 57 50 8D 45 ?? 64 A3 ?? ?? ?? ?? 8B F1">();
}

namespace Offsets {
    uintptr_t BaseModule = (uintptr_t)GetModuleHandle(nullptr);
    uintptr_t GObjects = BaseModule + 0x1023630;
    uintptr_t GNames = BaseModule + 0x1035674;
    uintptr_t DishonoredEngine = BaseModule + 0x104721C;
    uintptr_t DishonoredPlayerPawn = BaseModule + 0x105F628;

    uintptr_t* ProcessEvent = (uintptr_t*)hat::find_pattern(Patterns::ProcessEvent).get();
}

Core::Core() {
    GObjects = reinterpret_cast<TArray<UObject*>*>(Offsets::GObjects);
    GNames = reinterpret_cast<TArray<FNameEntry*>*>(Offsets::GNames);

    state = DishonoredState{};
    state.GObjects = GObjects;
    state.DishonoredEngine = *reinterpret_cast<UDishonoredEngine**>(Offsets::DishonoredEngine);
    state.DishonoredPlayerPawn = *reinterpret_cast<ADishonoredPlayerPawn**>(Offsets::DishonoredPlayerPawn);
    state.DishonoredPlayerController = reinterpret_cast<ADishonoredPlayerController*>(state.DishonoredPlayerPawn->Controller);

    state.DishonoredPlayerPawn->m_pCurFactionTweak->m_EnemyFactions.clear();
    state.DishonoredPlayerPawn->m_pCurFactionTweak->m_AlliedFactions.clear();
    state.DishonoredPlayerPawn->m_pCurFactionTweak->m_AlliedFactions.push_back(state.DishonoredPlayerPawn->m_pCurFactionTweak);

#ifdef HOOK_PE
    MH_Initialize();
    MH_CreateHook((void*)Offsets::ProcessEvent, (void*)ProcessEventHook, (void**)&ProcessEventOriginal);
    MH_EnableHook(nullptr);
#endif
}

void Core::AddModule(std::unique_ptr<Module> module) {
    module->SetState(&state);
    modules[module->GetTitle()] = std::move(module);
}

void Core::WaitForExit() {
    while (true) {
        if (state.should_exit) break;

        state.DishonoredEngine = *reinterpret_cast<UDishonoredEngine**>(Offsets::DishonoredEngine);
        if (!state.DishonoredEngine) continue;
        state.DishonoredPlayerPawn = *reinterpret_cast<ADishonoredPlayerPawn**>(Offsets::DishonoredPlayerPawn);
        if (!state.DishonoredPlayerPawn) continue;
        state.DishonoredPlayerController = reinterpret_cast<ADishonoredPlayerController*>(state.DishonoredPlayerPawn->Controller);
        if (!state.DishonoredPlayerController) continue;

        for (auto& [name, module] : modules) {
            bool condition = module->IsOnce() ? GetAsyncKeyState(module->GetKey()) & 1 :  GetAsyncKeyState(module->GetKey());
            if (condition) module->IsEnabled() ? module->Disable() : module->Enable();
            if (module->IsEnabled()) module->OnTick();
        }

        if (GetAsyncKeyState(VK_END) & 1) break;

        using namespace std::chrono_literals;
        std::this_thread::sleep_for(10ms);
    }

    this->~Core();
}

Core::~Core() {
    MH_DisableHook(nullptr);
    MH_Uninitialize();
}