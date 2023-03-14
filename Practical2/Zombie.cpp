#include "Zombie.hpp"

std::string Zombie::getName() const
{
    return "Zombie";
}

bool Zombie::beats(const Move* other) const
{
    // Zombie beats Pirate and Robot
    std::string otherName = other->getName();
    return (otherName == "Pirate" || otherName == "Robot");
}
