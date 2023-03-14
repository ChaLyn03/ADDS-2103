#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
public:
    Computer();
    Computer(std::vector<Move*> moves);
    virtual ~Computer();
    virtual Move* makeMove();
    virtual void learn(Move* opponentMove);
};

#endif
