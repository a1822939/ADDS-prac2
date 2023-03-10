#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate: public Move{
private:
    std::string name;
public:
    Pirate();
    std::string getName(); 
    bool compareMove(Move* opponentMove);

};

#endif