#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Move.h"
#include <vector>

class Human : public Player
{
public:
    Human();
    Human(std::string name);
    Move* makeMove();
    std::string getName();

private:
    std::string name;
};

#endif