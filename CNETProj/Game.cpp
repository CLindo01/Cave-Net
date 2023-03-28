#include "Game.h"
#include "Stages.cpp"
#include "Character.h"
#include "Enemies.h"

Game::Game(){
    choice = 0;
    playing = true;
}

Game::~Game()
{

}

//Functions
void Game::mainMenu(){
    std::cout << "MAIN MENU\n"  <<"\tCAVENET\n\n";
    std::cout << "0: Quit\n";
    std::cout << "1: Play\n";

    std::cout << "Choice: "<< "\n";
    std::cin >> choice;
    Cave cb = Cave();

    switch (choice)
    {
        case 0:
            playing = false;
            break;
        case 1:
            playing = true;
            cb.draw_background();
            cb.display_description();

            cb.choices1();
            char stage_sel;
            switch (stage_sel)
            {
                case 'L':
                    cb.draw_boss();
                    std::cout<<"OOGA! ANOTHER CAVEMAN, he does not seem friendly, what will you do?\n"
                               "(A)ttack, (R)un, (T)alk...:\t";

            }



        default:
            break;
    }

}