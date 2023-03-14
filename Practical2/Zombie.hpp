#pragma once

#include "Move.h"

class Zombie : public Move
{
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};
