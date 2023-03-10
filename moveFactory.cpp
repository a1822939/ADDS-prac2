#include "moveFactory.h"

Move * moveFactory::createMove(std::string moveType)
{

    if (moveType == "Rock")
    {
        return new Rock();
    }
    else if (moveType == "Paper")
    {
        return new Paper();
    }
    else if (moveType == "Scissors")
    {
        return new Scissors();
    }
    else if (moveType == "Monkey")
    {
        return new Monkey();
    }
    else if (moveType == "Ninja")
    {
        return new Ninja();
    }
    else if (moveType == "Robot")
    {
        return new Robot();
    }
    else if (moveType == "Pirate")
    {
        return new Pirate();
    }
    else if (moveType == "Zombie")
    {
        return new Zombie();
    }
    {
        return nullptr;
    }
}