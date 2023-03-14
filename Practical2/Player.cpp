#include "Player.h"

Player::Player() : m_lastMove(nullptr) {}

Player::Player(std::vector<Move*> moves) : m_moves(moves), m_lastMove(nullptr) {}

Player::~Player() {}

