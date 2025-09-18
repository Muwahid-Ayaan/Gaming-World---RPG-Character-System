#include "Necromancer.h"

Necromancer::Necromancer() {};
Necromancer::Necromancer(std::string Name, int Health, int Mana, int Level, int Intellegence)
    : Wizard(Name, Health, Mana, Level, Intellegence) {
  std::cout << "Necromancer Created" << std::endl;
};
void Necromancer::Defend() {
  std::cout << Name << "  is Healing" << std::endl;
  Health += Health * 0.5;
}
void Necromancer::UseSpecialAbility() {
  std::cout << Name << " Is raising a wave of undead" << std::endl;
}
Necromancer::~Necromancer() { std::cout << "Necromancer has left the game" << std::endl; }

std::string Necromancer::GetCharacterType() { return "Necromancer"; }