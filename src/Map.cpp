#include "Map.h"
#include "Player.h"  // Now we need the full definition of Player
#include <iostream>  // for std::cout

// Constructor: Initializes the 2D map with '.' characters
Map::Map() {
    m_tiles = std::vector<std::vector<char>>(HEIGHT, std::vector<char>(WIDTH, '.'));
}

// Checks if a position is inside the map boundaries
bool Map::isPositionValid(int x, int y) const {
    return x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT;
}

// Draws the map with the player's current position marked
void Map::draw(const Player& player) const {
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            if (x == player.getX() && y == player.getY()) {
                std::cout << 'P';  // P for Player
            } else {
                std::cout << m_tiles[y][x];
            }
        }
        std::cout << '\n';
    }
}
