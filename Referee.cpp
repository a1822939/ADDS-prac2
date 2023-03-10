#include <iostream>
#include "Referee.h"

Referee::Referee()
{
}

Player *Referee::refGame(Player *player1, Player *player2)
{
    Move* move1, move2;
    move1 = player1->makeMove();
    move2 = player2->makeMove();

    

}
