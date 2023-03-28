
#include "Enemies.h"

Boss::Boss()
{
    name = "Rooka";
    hp = 0;
    hpmax = 0;
    damage = 0;
}


//Functions
void Boss::initialize() {
    this->name = name;
    this->hp = 15;
    this->hpmax = 15;
    this->damage = 3;
}

Mob::Mob()
{
    name = "Beast";
    hp = 0;
    hpmax = 0;
    damage = 0;
}


//Functions
void Mob::initialize() {
    this->name = name;
    this->hp = 5;
    this->hpmax = 5;
    this->damage = 1;
}