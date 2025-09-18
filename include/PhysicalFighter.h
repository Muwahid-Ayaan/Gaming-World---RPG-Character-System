#ifndef PHYSICALFIGHTER_H
#define PHYSICALFIGHTER_H

#include "GameCharacter.h"

class PhysicalFighter : virtual public GameCharacter {
 private:
  int Strength;

 public:
  PhysicalFighter();
  PhysicalFighter(std::string Name, int Health, int Mana, int Level, int Strength);

  
  void Attack() override;

//   std::string GetCharacterType() override;
};
#endif