#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <vector>

class Player {
public:
    Player();
    Player(std::vector<Move*> moves);
    virtual ~Player();
    virtual Move* makeMove() = 0;
    virtual void learn(Move* opponentMove) = 0;
protected:
    std::vector<Move*> m_moves;
    Move* m_lastMove;
};

#endif
