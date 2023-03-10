#include "Scissors.h"

Scissors::Scissors() : name("Scissors") {}

bool Move::compareMove(Move *opponentMove)
{
    if (typeid(opponentMove) == typeid(Paper))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}