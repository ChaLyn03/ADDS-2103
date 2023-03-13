#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

//Referee class definition for adjudicating the game
class Referee {
public:
    Referee();
    //Taking player pointers as parameters
    Player* refGame(Player* player1, Player* player2);
};

#endif /* REFEREE_H */
