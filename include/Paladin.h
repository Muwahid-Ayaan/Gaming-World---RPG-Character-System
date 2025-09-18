#ifndef PALADIN_H
#define PALADIN_H
#include "PhysicalFighter.h"
#include "MagicalCaster.h"
class Paladin : public PhysicalFighter, public MagicalCaster {
 public:
  Paladin();
  Paladin(std::string Name, int Health, int Mana, int Level, int Intellegence, int Strength);
  ~Paladin() override;
  void Defend() override;
  void UseSpecialAbility() override;
  void Attack() override;
  std::string GetCharacterType() override;

};
#endif