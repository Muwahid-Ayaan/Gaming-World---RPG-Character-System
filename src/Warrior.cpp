#include "Warrior.h"

Warrior::Warrior() {};
Warrior::Warrior(std::string Name, int Health, int Mana, int Level, int Strengt)
    : PhysicalFighter(Name, Health, Mana, Level, Strengt) {
        // std::cout << "Warrior Created" << std::endl;
    };