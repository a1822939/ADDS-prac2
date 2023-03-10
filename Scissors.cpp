#include "Scissors.h"

Scissors::Scissors() : name("Scissors") {}

std::string Scissors::getName(){
    return name;
}

bool Scissors::compareMove(Move *opponentMove)
{
    if (typeid(*opponentMove) == typeid(Paper))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}