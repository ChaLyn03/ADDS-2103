#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

//Inheriting abstract Player class
class Human : public Player {
public:
    //Setting default human name to "Human"
    Human(std::string name = "Human");
    //Straight inheritance of getName() from Player class
    char makeMove();
    std::string getName();
private:
    std::string name_;
};

#endif /* HUMAN_H */
