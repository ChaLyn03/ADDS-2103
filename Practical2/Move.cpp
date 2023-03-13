#include "Move.h"

Move Move::fromChar(char c) {
    switch (c) {
        case 'Rock':
            return Move(MoveType::Rock);
        case 'Paper':
            return Move(MoveType::Paper);
        case 'Scissors':
            return Move(MoveType::Scissors);
        case 'Zombie':
            return Move(MoveType::Zombie);
        case 'Robot':
            return Move(MoveType::Robot);
        case 'Pirate':
            return Move(MoveType::Pirate);
        case 'Monkey':
            return Move(MoveType::Monkey);
        case 'Ninja':
            return Move(MoveType::Ninja);
    }
}
