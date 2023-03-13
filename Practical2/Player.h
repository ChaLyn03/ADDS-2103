#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Move.h"

class Player {
public:
    virtual Move makeMove() = 0;
    virtual std::string getName() = 0;
    virtual std::vector<Move> getMoves() = 0;
};

#endif /* PLAYER_H */

