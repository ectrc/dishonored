#include "hooks.h"

#include <iostream>

void __declspec(naked) ProcessEventHook() {_asm {
    push ebx
    push esi
    push edi
    push eax
}}