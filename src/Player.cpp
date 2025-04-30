#include "Player.h"

Player::Player(int startX, int startY) : m_x(startX), m_y(startY) {}

int Player::getX() const { return m_x; }
int Player::getY() const { return m_y; }