// Worked with Isaac Gasparini and Tommy Hick

#include <iostream>
#include "Computer.h"


Computer::Computer() : name("Computer") {}

Move* Computer::makeMove() {
    moveFactory computerMoveFactory;
    Move* computerMove = computerMoveFactory.createMove("Rock");

    return computerMove;
}

std::string Computer::getName(){ return name;}