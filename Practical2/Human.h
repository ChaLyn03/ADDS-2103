#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human();
    Human(std::vector<Move*> moves);
    virtual ~Human();
    virtual Move* makeMove();
    virtual void learn(Move* opponentMove);
};

#endif
