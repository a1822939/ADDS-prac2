#include <iostream>
#include "Computer.h"


Computer::Computer() : name("Computer") {}

Move* Player::makeMove() {

    Move* rock = new Rock();

    return rock;
}

std::string Computer::getName(){ return name; }