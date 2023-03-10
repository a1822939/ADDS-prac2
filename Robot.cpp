#include "Robot.h"

Robot::Robot() : name("Robot") {}

std::string Robot::getName(){
    return name;
}

bool Robot::compareMove(Move *opponentMove)
{
    if ((typeid(*opponentMove) == typeid(Ninja))||(typeid(*opponentMove) == typeid(Zombie)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}