#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human mei("Mei");
    Computer computer;
    Referee referee;

    Player* winner = referee.refGame(&mei, &computer);

    if (winner == &mei) {
        std::cout << mei.getName() << " Wins" << std::endl;
    } else if (winner == &computer) {
        std::cout << computer.getName() << " Wins" << std::endl;
    } else {
        std::cout << "It's a Tie" << std::endl;
    }

    return 0;
}
