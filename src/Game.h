#pragma once
#include <string>
// #include "Map.h"
// #include "Player.h"

class Player;
class Map;

class Game{
    public:
        Game();
        Player* m_player;
        Map* m_map;
        void run();

    private:
        bool m_running;
        void processInput();
        void update();
        void render();
};