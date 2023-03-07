#include "Referee.h"
#include <iostream>

//Empty referee constructor for referee class
Referee::Referee() {}

//refGame method of referee class taking player pointers as parameters
//returns another Player pointer
Player* Referee::refGame(Player* player1, Player* player2) {
    //calling and storing moves for both players
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    //determining winner of game with ties resulting in nullptr
    if (move1 == move2) {
        return nullptr;
    }
    //and conditions for winning as player 1 using dynamic logic
    //indifferent to computer always choosing Rock
    //could be paper or scissors and would still work
        if (move1 == 'R' && move2 == 'S' || move1 == 'S' && move2 == 'P' || move1 == 'P' && move2 == 'R') {
        std::cout << player1->getName() << " wins!" << std::endl;
        return player1;
    }
    //otherwise the second player wins
    std::cout << player2->getName() << " wins!" << std::endl;
    return player2;
}
