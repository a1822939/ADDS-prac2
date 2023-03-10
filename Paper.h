#ifndef PAPER_H
#define PAPER_H

#include "Move.h"
#include "Rock.h"

class Paper: public Move{
private:
    std::string name;
public:
    Paper();
    std::string getName(); 
    bool compareMove(Move* opponentMove);

};

#endif