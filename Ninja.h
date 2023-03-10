#ifndef NINJA_H
#define NINJA_H

#include "Move.h"
#include "Pirate.h"
#include "Zombie.h"

class Ninja: public Move{
private:
    std::string name;
public:
    Ninja();
    std::string getName(); 
    bool compareMove(Move* opponentMove);
};

#endif