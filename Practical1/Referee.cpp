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
        if (move1 == 'Rock' && move2 == 'Scissors' || move1 == 'Scissors' && move2 == 'Paper' || move1 == 'Paper' && move2 == 'Rock') {
        std::cout << player1->getName() << " wins!" << std::endl;
        return player1;
    }
    //otherwise the second player wins
    std::cout << player2->getName() << " wins!" << std::endl;
    return player2;
}
