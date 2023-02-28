// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    virtual char makeMove() = 0;
    virtual std::string getName() { return ""; };
    virtual ~Player() {};
};

#endif // PLAYER_H