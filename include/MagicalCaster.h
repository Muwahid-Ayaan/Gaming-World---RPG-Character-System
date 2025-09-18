#ifndef MAGICALCASTER_H
#define MAGICALCASTER_H
#include "GameCharacter.h"

class MagicalCaster : virtual public GameCharacter {
 private:
  int Intellegence;

 public:
  MagicalCaster();
  MagicalCaster(std::string Name, int Health, int Mana, int Level, int Intellegence);
  void Attack() override;

  //   std::string GetCharacterType() override;
};
#endif