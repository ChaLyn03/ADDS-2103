#pragma once

#include "Move.h"

class Monkey : public Move
{
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};