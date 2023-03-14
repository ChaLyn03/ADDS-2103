#include "Robot.hpp"

std::string Robot::getName() const
{
    return "Robot";
}

bool Robot::beats(const Move* other) const
{
    // Robot beats Zombie and Monkey
    std::string otherName = other->getName();
    return (otherName == "Zombie" || otherName == "Monkey");
}
