#include <iostream>
#include "Game.h"
#include "Game.cpp"

int main() {
    srand(time(NULL));

    Game game;

    while (game.getPlaying())
    {
        game.mainMenu();
    }
    return 0;
}
