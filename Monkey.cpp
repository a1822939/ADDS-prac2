#include "Monkey.h"

Monkey::Monkey() : name("Monkey") {;}

std::string Monkey::getName(){
    return name;
}

bool Monkey::compareMove(Move *opponentMove)
{
    if ((typeid(*opponentMove) == typeid(Ninja))||(typeid(*opponentMove) == typeid(Robot)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}