#pragma once

#include "Move.h"

class Paper : public Move
{
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};
