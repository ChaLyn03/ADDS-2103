#include "Rock.hpp"

std::string Rock::getName() const
{
    return "Rock";
}

bool Rock::beats(const Move* other) const
{
    // Rock always beats Scissors
    return (other->getName() == "Scissors");
}
