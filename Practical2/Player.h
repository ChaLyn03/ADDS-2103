// Abstract class "Player", containing two virtual members
// makeMove() and getName() that are inherited by the concrete classes
// "Human" and "Computer"
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
// makeMove() takes the character input from the user for the desired move
// getName() returns the name of user if passed, "Human" otherwise
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif /* PLAYER_H */
