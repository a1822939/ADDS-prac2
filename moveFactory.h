#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H
#include <string>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Robot.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Move.h"

class moveFactory
{
private:

public:
    
    Move* createMove(std::string shapeType) {}

};
    
#endif