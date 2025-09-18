#ifndef NECROMANCER_H
#define NECROMANCER_H
#include "Wizard.h"

class Necromancer : public Wizard {
 public:
  Necromancer();
  Necromancer(std::string Name, int Health, int Mana, int Level, int Intellegence);
  ~Necromancer() override;
  void Defend() override;
  void UseSpecialAbility() override;
  std::string GetCharacterType() override;
};
#endif