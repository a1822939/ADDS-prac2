#include <iostream>
#include "Human.h"

Human::Human()
{
    this->name = "Human";
}
Human::Human(std::string name) : name(name) {}

Move* Player::makeMove()
{
    std::string move;
    std::cout<<"Enter move: ";
    std::cin>>move;

    moveFactory humanMoveFactory;

    Move* humanMove = humanMoveFactory.createMove(move);

    return humanMove;
}
std::string Human::getName(){ return name; }