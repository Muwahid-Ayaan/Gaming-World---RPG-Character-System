#ifndef WARRIOR_H
#define WARRIOR_H
#include "PhysicalFighter.h"
class Warrior : public PhysicalFighter{
public:
    Warrior();
    Warrior(std::string Name, int Health, int Mana, int Level, int Strength);
};
#endif