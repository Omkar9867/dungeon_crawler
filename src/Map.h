#pragma once

class Player;

class Map {
    public:
        static const int WIDTH = 10;
        static const int HEIGHT = 10;
        
        Map();
        void draw(const Player* player) const;

    private:
        char m_grid[HEIGHT][WIDTH];
};