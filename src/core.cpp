#include <hooks.h>
#include <core.h>

#include <minhook.h>
#include <windows.h>
#include <iostream>

namespace Patterns {
}

namespace Address {
    uintptr_t Executable = (uintptr_t)GetModuleHandle(nullptr);
    uintptr_t DishonoredPlayerPawn = 0x0105F628;

//    uintptr_t TakeMoney = (uintptr_t)hat::find_pattern(Patterns::TakeMoney).get();
//    uintptr_t PotionRegen = (uintptr_t)hat::find_pattern(Patterns::PotionRegen).get();
}

DishonoredCore::DishonoredCore() {
    this->playerPawn = *(DishonoredPlayerPawn**)(Address::Executable + Address::DishonoredPlayerPawn);

    std::cout << "Player Pawn Address 0x" << std::hex << this->playerPawn << std::endl;
    std::cout << "Player Pawn Health " << std::dec << this->playerPawn->Health << std::endl;

    this->playerPawn->Health = 90;
    this->playerPawn->MaxHealth = 90;

    MH_Initialize();
    MH_EnableHook(nullptr);
}

DishonoredCore::~DishonoredCore() {
    MH_DisableHook(nullptr);
    MH_Uninitialize();
}