#include "Rock.h"

Rock::Rock() : name("Rock") {}

std::string Rock::getName(){
    return name;
}

bool Rock::compareMove(Move *opponentMove)
{
    if (typeid(*opponentMove) == typeid(Scissors))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}