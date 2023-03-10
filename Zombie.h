#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
#include "Pirate.h"
#include "Monkey.h"

class Zombie: public Move{
private:
    std::string name;
public:
    Zombie();
    std::string getName(); 
    bool compareMove(Move* opponentMove);


};

#endif