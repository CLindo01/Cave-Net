
#include "Stages.h"

#include <iostream>

class Stages {
public:
    // using description as public member as only printed out
    const char * description = R"(
                  Override this to print something different)";

    // Draw the Ascii background image for top of console
    void draw_background();

    // Cheap clear screen
    void redraw() {
        std::cout << "\n\n\n\n\n\n\n\n\n\n";
        draw_background();
    }

    void draw_boss() {
        std::cout << R"(

                      ______.--------.
                     /'                \
                    /'\                 \
                ..-'\()'\    .'''.    ./'
               |                .'    /
                \..}                  '\.
                 /     {      /'    '\   \
                {------'    .'        '.  '|
                 \        . |           \   |
                  '\_____/  |            |   |
                   /       |             |    |
                 .'       |              |     |
                 |       |              |       |
                 |      |              |       |
                 |                    |         \
                                                 |
    )";
    }
};

class Cave: public Stages {
private:
    // ascii cave to draw and redraw as needed
    const char * cave = R"(
,adPPYba, ,adPPYYba, 8b       d8  ,adPPYba,
a8"     "" ""     `Y8 `8b     d8' a8P_____88
8b         ,adPPPPP88  `8b   d8'  8PP"""""""
"8a,   ,aa 88,    ,88   `8b,d8'   "8b,   ,aa
 `"Ybbd8"' `"8bbdP"Y8     "8"      `"Ybbd8"'  )";

public:
    // using description as public member as only printed out
    const std::string description = R"(
                  You awake and your body feels like it's been flattened...
You push yourself off the cold, gravely-stone floor and peer at a light-source above you.
It's coming from a hole, you must have fell through as you have no idea where you are.
    You are in a dimly lit, cold cave, what will you do? )";

    // Draw the Ascii background image for top of console
    void draw_background() {
        std::cout << cave << "\n";
    }

    void display_description(){
        std::cout << "\n" << description << "\n";
    }

    void redraw() {
        std::cout << "\n\n\n\n\n\n\n\n\n\n";
        draw_background();
    }
    void choices1(){
        std::cout<<"You look around and see three tunnels with light, Which one will you go in: (L)eft, "
                   "(R)ight, or (S)traight? :\t";
    }

    void draw_boss() {
        std::cout << R"(

                      ______.--------.
                     /'                \
                    /'\                 \
                ..-'\()'\    .'''.    ./'
               |                .'    /
                \..}                  '\.
                 /     {      /'    '\   \
                {------'    .'        '.  '|
                 \        . |           \   |
                  '\_____/  |            |   |
                   /       |             |    |
                 .'       |              |     |
                 |       |              |       |
                 |      |              |       |
                 |                    |         \
                                                 |
    )";
    }

};
