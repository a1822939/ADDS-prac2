#include "Paper.h"

Paper::Paper() : name("Paper") {}

bool Move::compareMove(Move *opponentMove)
{
    if (typeid(opponentMove) == typeid(Rock))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}