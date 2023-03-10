#include "Ninja.h"

Ninja::Ninja() : name("Ninja") {}

std::string Ninja::getName(){
    return name;
}

bool Ninja::compareMove(Move *opponentMove)
{
    if ((typeid(*opponentMove) == typeid(Pirate))||(typeid(*opponentMove) == typeid(Zombie)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}