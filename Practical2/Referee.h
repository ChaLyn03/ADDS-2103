#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    Referee();
    virtual ~Referee();
    void refGame(Player* p1, Player* p2);
};

#endif
