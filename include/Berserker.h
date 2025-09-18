#ifndef BERSERKER_H
#define BERSERKER_H
#include "PhysicalFighter.h"


class Berserker : public PhysicalFighter{
public:
Berserker();
Berserker(std::string Name, int Health, int Mana, int Level, int strength);
~Berserker() override;
void Defend() override;
void UseSpecialAbility() override;
std::string GetCharacterType() override;
};
#endif