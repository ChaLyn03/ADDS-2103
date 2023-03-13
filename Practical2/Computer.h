#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
//Taking computer class from abstract player class
class Computer : public Player {
public:
    //Inheriting makeMove and getName functions
    char makeMove();
    std::string getName();
};

#endif
