#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"
#include "Ninja.h"
#include "Zombie.h"

class Robot: public Move{
private:
    std::string name;
public:
    Robot();
    std::string getName(); 
    bool compareMove(Move* opponentMove);

};

#endif