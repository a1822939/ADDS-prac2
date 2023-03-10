#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Move.h"
#include "moveFactory.h"
#include <vector>

class Human : public Player
{
private:
    std::string name;

public:
    Human();
    Human(std::string name);
    std::string getName();
    Move* makeMove();
};

#endif