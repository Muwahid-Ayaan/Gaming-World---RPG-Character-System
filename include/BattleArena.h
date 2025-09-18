#ifndef BATTLEARENA_H
#define BATTLEARENA_H
#include "GameCharacter.h"
#include <vector>
class BattleArena{
private:
    std::vector<GameCharacter*> Characters;
public:
void addCharacter ( GameCharacter* character);
void StartBattle();
void HealAll();
~BattleArena();

};
#endif