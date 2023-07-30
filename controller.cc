#include "controller.h"
#include <string>
#include "gamemap.h"
#include <iostream>
#include <map>
#include "combatmanager.h"
#include "constants.h"

using namespace std;


Controller::Controller(vector<vector<char>> map_layout, string race) {

    // set map layout, race of the player character, and npc movement = true
    GameMap *gm = new GameMap(map_layout, race);
    gameMap = gm;
}

Controller::~Controller() {
    delete gameMap;
}

// run games and return the ending state of the game as a string
string Controller::run_game() {
    gameMap->start();
    cout << "The game starts now: " << endl;

    while (true) {
        string cmd;
        cin >> cmd;
        if (cmd == "r") {
            return "restart";
        }
        // if a valid move command
        else if (m_dir[cmd] != 0) {
            // if the move is valid
            if (gameMap->moveCharacter(m_dir[cmd])) {
                // if the player reaches the stair
                if (gameMap->isStair()) {
                    if (gameMap->getLevel() == 5) {
                        cout << "Congratulations, you won! Your score is: " << gameMap->getScore() << endl;
                        return "won";
                    }
                    else {
                        cout << "You reached a new floor!" << endl;
                        gameMap->reset();
                        gameMap->start();
                        continue;
                    }
                }
                gameMap->printMap();
                continue;
            }
            // if the move is not valid
            else {
                cout << "Invalid move, please try again." << endl;
                continue;
            }
        }

        // if attack
        else if (cmd == "a") {
            cin >> cmd;
            if (m_dir[cmd] != 0) {
                gameMap->playerAtk(m_dir[cmd]);
                gameMap->printMap();
                continue;
            }
            else {
                cout << "Invalid attack, please try again" << endl;
            }
        }
        else if (cmd == "f") {
            gameMap->changeNPCmovement();
        }
        if (gameMap->isDead()) {
            cout << "Your HP is below 0, you lost!" << endl;
            return "lost";
        }
    }
}