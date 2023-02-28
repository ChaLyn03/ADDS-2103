// main.cpp

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    std::string human_name;
    std::cout << "Enter your name: ";
    std::cin >> human_name;

    Human human(human_name);
    Computer computer;
    Referee referee;

    Player* winner = referee.refGame(&human, &computer);

    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }

    return 0;
}


