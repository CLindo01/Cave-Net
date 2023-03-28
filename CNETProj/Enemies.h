#pragma once

#include <string>


class Boss
{public:
    Boss();
    virtual ~Boss();

    //Functions
    void initialize();
    //Accessors
    inline const std::string& getName() const { return this-> name; }
    inline const double&  getX() const { return this-> xPos; }
    inline const double& getY() const { return this-> yPos; }
    inline const int& getHP() const { return this-> hp; }
    inline const int& getHPmax() const { return this-> hpmax; }
    inline const int& getDamage() const { return this-> damage; }
    //Modifier

private:
    std::string name;
    double xPos;
    double yPos;
    int hp;
    int hpmax;
    int damage;
};

class Mob
{public:
    Mob();
    virtual ~Mob();

    //Functions
    void initialize();
    //Accessors
    inline const std::string& getName() const { return this-> name; }
    inline const double&  getX() const { return this-> xPos; }
    inline const double& getY() const { return this-> yPos; }
    inline const int& getHP() const { return this-> hp; }
    inline const int& getHPmax() const { return this-> hpmax; }
    inline const int& getDamage() const { return this-> damage; }
    //Modifier

private:
    std::string name;
    double xPos;
    double yPos;
    int hp;
    int hpmax;
    int damage;
};