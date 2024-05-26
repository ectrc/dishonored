#include "src/core.h"
#include "src/modules/npc/npc.h"
#include "src/modules/maxpowers/maxpowers.h"
#include "src/modules/godmode/godmode.h"
#include "src/modules/items/items.h"
#include "src/modules/teleport/teleport.h"

#include <windows.h>
#include <iostream>


void __stdcall entry(HMODULE module) {
    {
        auto core = std::make_unique<Core>();
        core->RegisterModule("NPC Teleport", std::make_unique<NPCModule>(std::string("NPC Teleport"), VK_F1));
        core->RegisterModule("God Mode", std::make_unique<GodModeModule>(std::string("God Mode"), VK_F2));
        core->RegisterModule("Free Powers", std::make_unique<MaxPowersModule>(std::string("Free Powers"), VK_F3));
        core->RegisterModule("Teleport Items", std::make_unique<ItemsModule>(std::string("Teleport Items"), VK_F4));
        core->RegisterModule("Teleport Player", std::make_unique<TeleportModule>(std::string("Teleport Player"), VK_F6));
        core->WaitForExit();
    }
    std::cout << "Freeing Library & Exiting Thread" << std::endl;
    FreeLibraryAndExitThread(module, 0);
}

[[maybe_unused]] BOOL WINAPI DllMain(void* module, const unsigned long reason, void*) {
    if (reason != DLL_PROCESS_ATTACH) return 0;

    AllocConsole();
    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
    std::cout << "Dishonored Internal\n";

    CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(entry), module, 0, nullptr);
    return 1;
}