#pragma once

#include "Functions.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>



class Game
{
public:
    Game();
    virtual ~Game();

    //Operators

    //Functions
    void mainMenu();

    //Accessors
    inline bool getPlaying() const { return this->playing;}

private:
    int choice;
    bool playing;

};