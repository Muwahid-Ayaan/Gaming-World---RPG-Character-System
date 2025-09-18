#include "BattleArena.h"

void BattleArena::addCharacter(GameCharacter* character) {
  std::cout << "Character added " << character->GetCharacterType() << std::endl;
  Characters.push_back(character);
}
void BattleArena::StartBattle() {
  std::cout << "A Battle is starting" << std::endl;
  for (int Index = 0; Index < Characters.size(); ++Index) {
    Characters[Index]->Attack();
  }
}
void BattleArena::HealAll() {
  std::cout << "Characters are Healing" << std::endl;
  for (int Index = 0; Index < Characters.size(); ++Index) {
    Characters[Index]->Defend();
  }
}
BattleArena::~BattleArena() {
  std::vector<GameCharacter*> deallocator;
  Characters.clear();
  Characters.swap(deallocator);

  std::cout << "Battle Ended" << std::endl;
}
