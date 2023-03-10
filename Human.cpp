#include <iostream>
#include "Human.h"

Human::Human()
{
    this->name = "Human";
}
Human::Human(std::string name) : name(name) {}

Move* Human::makeMove()
{

    std::cout << "Enter move: ";
    std::cin >> ;

    return move;
}
std::string Human::getName(){ return name; }