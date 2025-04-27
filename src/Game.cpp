#include "Game.h"
#include <iostream>
#include <conio.h>

Game::Game() : m_running(true) {}

void Game::run() {
    while(m_running){
        render();
        processInput();
        update();
    }
}