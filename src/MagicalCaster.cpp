#include "MagicalCaster.h"

MagicalCaster::MagicalCaster() {}
MagicalCaster::MagicalCaster(std::string Name, int Health, int Mana, int Level, int Intellegence)
    : GameCharacter(Name, Health, Mana, Level), Intellegence(Intellegence) {
//   std::cout << "Magical Caster has been selected" << std::endl;

}


void MagicalCaster::Attack() {
    std::cout << Name << " is attacking using magic based powers" << std::endl;
};

// std::string MagicalCaster::GetCharacterType() {
    // return "Magical Caster";
// };