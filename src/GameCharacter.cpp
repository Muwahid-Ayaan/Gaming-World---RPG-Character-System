#include "GameCharacter.h"

GameCharacter::GameCharacter(std::string Name, int Health, int Mana, int Level)
    : Name(Name), Health(Health), Mana(Mana), Level(Level) {}

GameCharacter::GameCharacter() {
  // std::cout << Name << " Character has entered the Match" << std::endl;
};

void GameCharacter::DisplayStats() {
  std::cout << this->Name << std::endl;
  std::cout << this->Health << std::endl;
  std::cout << this->Level << std::endl;
  std::cout << this->Mana << std::endl;
}
GameCharacter::~GameCharacter() {}
