#include "Scissors.hpp"

std::string Scissors::getName() const
{
    return "Scissors";
}

bool Scissors::beats(const Move* other) const
{
    // Scissors always beats Paper
    return (other->getName() == "Paper");
}
