#include "Human.h"
#include <iostream>
#include <string>

Human::Human() {}

Human::Human(std::vector<Move*> moves) : Player(moves) {}

Human::~Human() {}

Move* Human::makeMove() {
    std::string input;
    std::cout << "Enter your move: ";
    std::cin >> input;
    for (auto move : m_moves) {
        if (move->getName() == input) {
            m_lastMove = move;
            return move;
        }
    }
    std::cout << "Invalid move. Please try again." << std::endl;
    return makeMove();
}

void Human::learn(Move* opponentMove) {
    // do nothing
}
