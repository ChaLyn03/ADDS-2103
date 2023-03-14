#include "Referee.h"
#include <iostream>

Referee::Referee() {}

Referee::~Referee() {}

void Referee::refGame(Player* p1, Player* p2) {
    std::cout << "Rock Paper Scissors Robot Zombie Pirate Ninja Monkey!" << std::endl;
    std::cout << "Let's play!" << std::endl;
    int round = 1;
    int p1Wins = 0;
    int p2Wins = 0;
    int ties = 0;
    while (round <= 5) {
        std::cout << "Round " << round << "!" << std::endl;
        Move* p1Move = p1->makeMove();
        Move* p2Move = p2->makeMove();
        std::cout << "Player 1: " << p1Move->getName() << std::endl;
        std::cout << "Player 2: " << p2Move->getName() << std::endl;
        if (p1Move->beats(p2Move)) {
            std::cout << "Player 1 wins the round!" << std::endl;
            p1->learn(p2Move);
            p1Wins++;
        } else if (p2Move->beats(p1Move)) {
            std::cout << "Player 2 wins the round!" << std::endl;
            p2->learn(p1Move);
            p2Wins++;
        } else {
            std::cout << "Tie!" << std::endl;
            ties++;
        }
        round++;
    }
    std::cout << "Game over!" << std::endl;
    std::cout << "Player 1 wins: " << p1Wins << std::endl;
    std::cout << "Player 2 wins: " << p2Wins << std::endl;
    std::cout << "Ties: " << ties << std::endl;
}
