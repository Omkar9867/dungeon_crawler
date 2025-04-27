#pragma once
#include <string>

class Game{
    public:
        Game();
        void run();

    private:
        bool m_running;
        void processInput();
        void update();
        void render();
};