#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors: public Move{
private:
    std::string name;
public:
    Scissors();
    std::string getName(); 
    bool compareMove(Move* opponentMove);
};

#endif