#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"

Zombie::Zombie() : name("Zombie") {}

std::string Zombie::getName(){
    return name;
}

bool Zombie::compareMove(Move *opponentMove)
{
    if ((typeid(*opponentMove) == typeid(Pirate)) || (typeid(*opponentMove) == typeid(Monkey)))
    {
        return true;
    }
    else
    {
        return false;
    }
}