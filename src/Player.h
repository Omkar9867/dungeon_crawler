#pragma once

class Player{
    public:
        Player(int startX, int startY);
        int getX() const;
        int getY() const;

    private:
        int m_x;
        int m_y;
};