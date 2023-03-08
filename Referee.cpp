#include <iostream>
#include "Referee.h"

Referee::Referee()
{
}

Player *Referee::refGame(Player *player1, Player *player2)
{
    char move1, move2;
    move1 = player1->makeMove();
    move2 = player2->makeMove();
    if ((move1 == 'R' && move2 == 'S') || (move1 == 'P' && move2 == 'R') || (move1 == 'S' && move2 == 'P'))
    {
        return player1;
    }
    else if ((move1 == 'R' && move2 == 'R') || (move1 == 'P' && move2 == 'P') || (move1 == 'S' && move2 == 'S'))
    {
        return nullptr;
    }

    else if ((move1 == 'R' && move2 == 'P') || (move1 == 'P' && move2 == 'S') || (move1 == 'S' && move2 == 'R'))
    {
        return player2;
    }
    else
    {
        return nullptr;
    }
}
