#include "Paper.hpp"

std::string Paper::getName() const
{
    return "Paper";
}

bool Paper::beats(const Move* other) const
{
    // Paper always beats Rock
    return (other->getName() == "Rock");
}
