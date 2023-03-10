#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"
#include "Ninja.h"
#include "Robot.h"

class Monkey: public Move{
private:
    std::string name;
public:
    Monkey();
    std::string getName(); 
    bool compareMove(Move* opponentMove);

};

#endif