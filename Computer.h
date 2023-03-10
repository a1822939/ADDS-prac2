#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "Move.h"
#include "moveFactory.h"

class Computer : public Player
{
private:
    std::string name;

public:
    Computer();
    std::string getName();
    Move *makeMove();
};

#endif