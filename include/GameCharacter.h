#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
#include <string>
#include <iostream>
class GameCharacter {
 public:
  virtual void Attack() = 0;
  virtual void Defend() = 0;
  virtual void UseSpecialAbility() = 0;
  virtual std::string GetCharacterType() = 0;
  void DisplayStats();

 protected:
  std::string Name;
  int Health;
  int Mana;
  int Level;

 public:
  GameCharacter();
  GameCharacter(std::string Name, int Health, int Mana, int Level);
  virtual ~GameCharacter() = 0;  // This is important because in a Multilevel Inheritance, A
                                 // derived Destructor can mess with other Destructors, Hence It
                                 // should be overridden later.
};
#endif