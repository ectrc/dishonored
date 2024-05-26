#ifndef DISHONORED_HOOKS_H
#define DISHONORED_HOOKS_H

#include "sdk.hpp"

typedef void (__fastcall *ProcessEvent)(void* object, void* function, void* params, void* result);
extern void __fastcall ProcessEventHook(void* object, void* function, void* params, void* result);
inline ProcessEvent ProcessEventOriginal;

#endif