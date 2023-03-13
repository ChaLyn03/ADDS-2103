#ifndef MOVE_H
#define MOVE_H

// Enumeration representing the possible moves in the game
enum class MoveType {
    Rock,
    Paper,
    Scissors,
    Zombie,
    Robot,
    Pirate,
    Monkey,
    Ninja
};

// Class representing a move in the game
class Move {
public:
    // Constructor that takes a MoveType parameter
    explicit Move(MoveType type) : type_(type) {}

    // Getter method that returns the MoveType of this Move object
    MoveType getType() const { return type_; }

    // Static method that creates a Move object from a character input
    static Move fromChar(char c);

private:
    MoveType type_;
};

#endif /* MOVE_H */
