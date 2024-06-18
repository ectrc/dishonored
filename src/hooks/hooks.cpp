#include "hooks.h"

#include <iostream>

void __stdcall ProcessEventHook(void* object, void* function, void* params, void* result) {
    //TODO:  if i access any of the params or the return value: it crashes; I prob need to manually unwind the stack
    return ProcessEventOriginal(object, function, params, result);
}