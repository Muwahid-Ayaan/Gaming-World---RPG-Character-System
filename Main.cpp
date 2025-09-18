#include "BattleArena.h"
#include "Paladin.h"

int main() {
  Paladin Saim = Paladin("Saim", 100, 100, 1, 0, 100);

  BattleArena Arena = BattleArena();
  Arena.addCharacter(&Saim);
  Arena.StartBattle();
  Arena.HealAll();
}