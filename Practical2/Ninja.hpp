#pragma once

#include "Move.h"

class Ninja : public Move
{
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};