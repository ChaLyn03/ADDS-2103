#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human(std::string name = "Human");
    Move makeMove() override;
    std::string getName() override;
    std::vector<Move> getMoves() override;
private:
    std::string name_;
};

#endif /* HUMAN_H */
