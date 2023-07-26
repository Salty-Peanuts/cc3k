#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <vector>
#include <string>
#include <map>
#include "./observer/subject.h"
#include "combatmanager.h"
#include "./characters/playercharacter.h"
#include "abstractobject.h"
#include "chamber.h"
using namespace std;


class GameMap : public Subject
{
    vector<vector<AbstractObject*>> game_map;
    vector<vector<AbstractObject*>> object_tiles;
    PlayerCharacter* player_character;
    CombatManager* attack;
    map<string, int> direction_map;
    vector<Chamber*> chambers;
    bool npc_movement;

 public:
    GameMap(vector<vector<AbstractObject*>> game_map, 
        vector<vector<AbstractObject*>> object_tiles,
        PlayerCharacter* player_character, 
        CombatManager* attack, 
        map<string, int> direction_map, 
        vector<Chamber*> chambers, 
        bool npc_movement);
    ~GameMap();
    void start();
    void addObject(AbstractObject* object);
    void deleteObject(AbstractObject* object);
    void moveCharacter(int dir);
    bool validMove(AbstractObject* object, int dir);
    void usePotion(string potion);
    void moveNPC();
    bool playerInRange(AbstractObject* object);
    void reset();
    bool isStair();
    void update();
};

#endif
