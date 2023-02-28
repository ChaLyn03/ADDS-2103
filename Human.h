#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human : public Player {
public:
    Human(std::string name = "Human");
    char makeMove();
private:
    std::string name;
};

#endif // HUMAN_H
