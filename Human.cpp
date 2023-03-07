#include "Human.h"
#include <iostream>

Human::Human() {
    name_ = "Human";
}

Human::Human(std::string name) {
    name_ = name;
}

char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}

std::string Human::getName() {
    return name_;
}
