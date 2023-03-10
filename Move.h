#ifndef MOVE_H
#define MOVE_H
#include "Player.h"
#include "moveFactory.h"
#include <typeinfo>
#include <string>

class Move
{
public:
    virtual std::string getName() = 0; 
    virtual bool compareMove(Move* opponentMove) = 0;
};

#endif