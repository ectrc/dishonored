#include "src/core.h"
#include "src/modules/god.h"
#include "src/modules/push.h"
#include "src/modules/powers.h"
#include "src/modules/npc.h"
#include "src/modules/lock.h"
#include "src/modules/items.h"
#include "src/modules/nothing.h"

#include <windows.h>
#include <iostream>

void __stdcall entry(void* module) {
    {
        auto core = std::make_unique<Core>();
        core->AddModule(std::make_unique<PushModule>("Push/Fly", "Press G to push forward, hold for a fly effect.", 0x47));
        core->AddModule(std::make_unique<GodModule>("God Mode", "Press Y to toggle god-mode.", 0x59));
        core->AddModule(std::make_unique<PowersModule>("Free Powers", "Press H to make all powers cost 0 runes, and consume 0 mana.", 0x48));
        core->AddModule(std::make_unique<NPCModule>("NPC Teleport", "Press or hold F1 to drag every npc in front of you.", VK_F1));
        core->AddModule(std::make_unique<ItemsModule>("Teleport All Items", "Press F3 to teleport every interactable above your head! (requires game reload)", VK_F3));
        core->AddModule(std::make_unique<LockModule>("Unlock All Areas", "Press F4 to unlock every interactable. This targets every door, taps and more! ", VK_F4));
        core->WaitForExit();
    }

    std::cout << "Exiting\n";
    FreeLibraryAndExitThread((HMODULE)module, 0);
}

[[maybe_unused]] int __stdcall DllMain(void* module, const unsigned long reason, void*) {
    if (reason != DLL_PROCESS_ATTACH) return 0;

    AllocConsole();
    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
    SetConsoleTitleA("Dishonored Internal");

    CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(entry), module, 0, nullptr);
    return 1;
}