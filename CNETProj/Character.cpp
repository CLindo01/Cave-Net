#include "Character.h"

Character::Character()
{
     name = "Caveman";
     hp = 0;
     hpmax = 0;
     damage = 0;
}


//Functions
void Character::initialize() {
    this->name = name;
    this->hp = 10;
    this->hpmax = 10;
    this->damage = 2;
}