#include "Pirate.h"

Pirate::Pirate() : name("Pirate") {}

std::string Pirate::getName(){
    return name;
}

bool Pirate::compareMove(Move *opponentMove)
{
    if ((typeid(*opponentMove) == typeid(Robot))||(typeid(*opponentMove) == typeid(Monkey)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}