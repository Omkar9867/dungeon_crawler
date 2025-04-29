#pragma once
#include <vector>

class Player; //Forward declaration of Player class

class Map {
    public:
        static const int WIDTH = 10;
        static const int HEIGHT = 10;
        Map();
        bool isPositionValid(int x, int y) const;
        void draw(const Player& player) const; //Give me a reference to a Player object called player, and I promise not to change it (because of const)

    private:
        std::vector<std::vector<char>> m_tiles;
};