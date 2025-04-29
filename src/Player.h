#pragma once

class Player{
    public:
        Player(int x, int y);
        void move(int dx, int dy);
        int getX() const;
        int getY() const;

    private:
        int m_x;
        int m_y;
};