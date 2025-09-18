#include "Wizard.h"

Wizard::Wizard() {};
Wizard::Wizard(std::string Name, int Health, int Mana, int Level, int Intellegence)
    : MagicalCaster(Name, Health, Mana, Level, Intellegence) {
        // std::cout << "Wizard Created" << std::endl;
    };