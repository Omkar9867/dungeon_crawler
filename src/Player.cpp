#include "Player.h"

Player::Player(int x, int y) : m_x(x), m_y(y) {}

int Player::getX() const { return m_x; }
int Player::getY() const { return m_y; }