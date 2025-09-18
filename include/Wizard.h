#ifndef WIZARD_H
#define WIZARD_H
#include "MagicalCaster.h"
class Wizard : public MagicalCaster{
public:
    Wizard();
    Wizard(std::string Name, int Health, int Mana, int Level, int Intellegence);
};
#endif