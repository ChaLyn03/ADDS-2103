#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human();
    Human(std::string name);
    char makeMove();
    std::string getName();
private:
    std::string name_;
};

#endif /* HUMAN_H */
