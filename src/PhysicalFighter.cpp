#include "PhysicalFighter.h"

PhysicalFighter::PhysicalFighter() {}
PhysicalFighter::PhysicalFighter(std::string Name, int Health, int Mana, int Level, int Strength)
    : GameCharacter(Name, Health, Mana, Level), Strength(Strength) {
  //   std::cout << "Magical Caster has been selected" << std::endl;
}

void PhysicalFighter::Attack() {
  std::cout << Name << " is attacking using strength based powers" << std::endl;
};

// std::string PhysicalFighter::GetCharacterType() { return "Physical Fighter"; };