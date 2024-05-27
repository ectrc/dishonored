#ifndef DISHONORED_HOOKS_H
#define DISHONORED_HOOKS_H

#include "sdk.hpp"

typedef void (__stdcall *ProcessEvent)(void* object, void* function, void* params, void* result);
extern void __stdcall ProcessEventHook(void* object, void* function, void* params, void* result);
inline ProcessEvent ProcessEventOriginal;

#endif