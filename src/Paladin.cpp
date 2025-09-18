#include "Paladin.h"
Paladin::Paladin(std::string Name, int Health, int Mana, int Level, int Intellegence, int Strength)
    : PhysicalFighter(Name, Health, Mana, Level, Strength),
      MagicalCaster(Name, Health, Mana, Level, Intellegence),
      GameCharacter(Name, Health, Mana, Level) {}
Paladin::~Paladin() { std::cout << Name << " has left the match" << std::endl; }
void Paladin::Defend() {
  std::cout << Name << " is Healing" << std::endl;
  Health += Health * 0.5;
}

Paladin::Paladin() {};
void Paladin::UseSpecialAbility() { std::cout << Name << " is Healing Allies" << std::endl; }
void Paladin::Attack() { std::cout << Name << " is attacking using light" << std::endl; }
std::string Paladin::GetCharacterType() { return "Paladin"; };
