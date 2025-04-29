#include "Game.h"
#include <iostream>
#include <conio.h>
using namespace std;

Game::Game() : m_player(5, 5), m_running(true) {}

void Game::run() {
    while(m_running){
        render();
        processInput();
        update();
    }
}

void Game::processInput(){
    char input = _getch(); //Get a single character input from the user
    switch(toupper(input)){
        case 'Q': 
            m_running = false; //Quit the game
            break;
            // Add more controls later
    }
}

void Game::update(){
    // Game logic and state updates goes here
}

void Game::render(){
    //Draw the map
    m_map.draw(m_player);
    system("cls"); //Clear the console
    cout << "Basic Game Framework" << endl;
    cout << "Press 'Q' to quit." << endl;
}