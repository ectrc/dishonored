# Dishonored Internal Cheat
> Simple internal cheat for the original Dishonored game written in C++.

Built using CLion, CMake and MSVC for Dishonored (steam release version 1.4).

## Features
- **Fly** *Press G to push forward, hold for a fly effect.*
- **God Mode** *Press Y to toggle god-mode.*
- **Free Powers** *Press H to make all powers cost 0 runes, and consume 0 mana.*
- **NPC Teleport** *Press or hold F1 to drag every npc in front of you.*
- **Teleport All Items** *Press F3 to teleport every interactable above your head! (requires game reload)*
- **Unlock All Areas** *Press F4 to unlock every interactable. This targets every door, taps and more!*

## Media
![image](https://github.com/ectrc/dishonored/assets/13946988/da34fb3a-011e-475a-8444-645bf35254e3)


https://github.com/ectrc/dishonored/assets/13946988/ae8cf66e-e873-4d2f-9051-a04f73f5e267


## What is next?
Currently, I have no access to process event aka any function in-game. Traditional hooking does not work. I am going to have to figure out how to unwind the asm manually and capture the values. Once I have got this, I can then hook into internal game logic and anything can be achieved.
