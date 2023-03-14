#include "Computer.h"

Computer::Computer() {}

Computer::Computer(std::vector<Move*> moves) : Player(moves) {}

Computer::~Computer() {}

Move* Computer::makeMove() {
    return m_moves.at(0);
}

void Computer::learn(Move* opponentMove) {
    // do nothing
}
