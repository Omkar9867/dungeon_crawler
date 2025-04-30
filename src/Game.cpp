#include "Game.h"
#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Map.h"
using namespace std;

Game::Game() : m_running(true), m_player(new Player(5, 5)), m_map(new Map()) {}

// Game::~Game() {
//     delete m_player; // Clean up dynamically allocated memory
//     delete m_map;
// }

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
    system("cls"); //Clear the console
    m_map->draw(m_player);
    cout << "Basic Game Framework" << endl;
    cout << "Press 'Q' to quit." << endl;
}