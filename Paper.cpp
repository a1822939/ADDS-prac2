#include "Paper.h"

Paper::Paper() : name("Paper") {}

std::string Paper::getName(){
    return name;
}

bool Paper::compareMove(Move *opponentMove)
{
    if (typeid(*opponentMove) == typeid(Rock))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}