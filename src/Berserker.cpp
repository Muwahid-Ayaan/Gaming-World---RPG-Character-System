#include "Berserker.h"

Berserker::Berserker() {};
Berserker::Berserker(std::string Name, int Health, int Mana, int Level, int Strength)
    : PhysicalFighter(Name, Health, Mana, Level, Strength) {
  std::cout << "Berserker Created" << std::endl;
};
void Berserker::Defend() {
  std::cout << Name << " is Healing" << std::endl;
  Health += Health * 0.5;
}

void Berserker::UseSpecialAbility(){
    std::cout << Name << " is turning into a hot fireball of fury" << std::endl;
}
std::string Berserker::GetCharacterType(){
    return "Berserker";
}
Berserker::~Berserker(){
    std::cout << "Berserker has left the game" << std::endl;
}