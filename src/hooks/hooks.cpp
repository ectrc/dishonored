#include "hooks.h"

#include <iostream>

void __fastcall ProcessEventHook(void* object, void* function, void* params, void* result) {
//    std::cout << "ProcessEventHook " << object << " " << function << " " << params << " " << result << '\n';
//    SuspendThread(GetCurrentThread());
    ProcessEventOriginal(object, function, params, result);
}