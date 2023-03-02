#include "Human.h"
#include <iostream>

Human::Human(std::string name) : Player(name) {}

char Human::makeMove() {
    std::cout << "Enter move: ";
    char move;
    std::cin >> move;
    return move;
}

