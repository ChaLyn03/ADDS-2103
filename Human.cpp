#include <iostream>
#include "Human.h"

Human::Human() : name("Human") {}

Human::Human(const std::string& name) : name(name) {}

char Human::makeMove() {
    std::cout << "Enter move: ";
    char move;
    std::cin >> move;
    return move;
}

std::string Human::getName() {
    return name;
}
