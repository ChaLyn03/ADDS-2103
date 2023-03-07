#include "Human.h"
#include <iostream>

// Constructing "Human" class with string type parameter "name"
Human::Human(std::string name) {
    name_ = name;
}

//Implementation of makeMove()
//Displaying entry prompt and storing value using makeMove() member
char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}

//Implementation of getName()
//Returning name from the name parameter
std::string Human::getName() {
    return name_;
}
