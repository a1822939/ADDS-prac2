#include "Rock.h"

Rock::Rock() : name("Rock") {}

bool Move::compareMove(Move *opponentMove)
{
    if (typeid(opponentMove) == typeid(Scissors))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}