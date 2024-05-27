#include "powers.h"

#include <iostream>

void PowersModule::OnEnable() {
    for (auto power : state->DishonoredPlayerPawn->m_ActivePowers) {
        power->m_CurrentLevel = 2;
        power->m_pPowerTweaks->m_ManaCost = 0;
        power->m_pPowerTweaks->m_fGlowDuration = 9999.9;
        power->m_pPowerTweaks->m_RuneCosts[0] = 0;
        power->m_pPowerTweaks->m_RuneCosts[1] = 0;

        std::cout << "Power Type: " << (int)power->m_eUISelection << std::endl;
    }
    this->Disable();
}