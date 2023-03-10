#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Robot.h"
#include "Pirate.h"
#include "Zombie.h"
#include "moveFactory.h"
#include <iostream>

int main()
{
    

    Player *player1 = new Computer();
    Player *player2 = new Human();
    Referee referee = Referee();

    Player *result = referee.refGame(player1, player2);

    if (result == player1)
    {
        std::cout << player1->getName() + " Wins\n";
    }
    else if (result == nullptr)
    {
        std::cout << "It's a Tie\n";
    }

    else if (result == player2)
    {
        std::cout << player2->getName() + " Wins\n";
    }
    
    delete player1;
    delete player2;

    return 0;
}