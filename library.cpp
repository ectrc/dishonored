#include <core.h>

#include <iostream>

void __stdcall entry(HMODULE module) {
    auto core = std::make_unique<DishonoredCore>();
//    core->RegisterModule("fov", new CoreModule("Field Of View"));

    while (!GetAsyncKeyState(VK_END)) Sleep(100);
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