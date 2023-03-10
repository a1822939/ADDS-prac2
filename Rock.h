#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
#include "Scissors.h"

class Rock : public Move
{
private:
    std::string name;
    
public:
    Rock();
    std::string getName(); 
    bool compareMove(Move* opponentMove);
};

#endif