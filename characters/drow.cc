#include "drow.h"

using namespace std;

Drow::Drow(int x, int y) :
    PlayerCharacter{x, y, 150, 25, 15} {}


Drow::~Drow() {}


int Drow::attack(AbstractCharacter *receiver) {
    // deals with if receiver is halfling (50% chance of missing attack)
    if (receiver->getRace() == "Halfling") {
        // randomly produces either 0 or 1
        int random = rand() % 2;

        if (random == 1) {
            return MISSED_ATTACK;
        }
    }

    int damage = ceil((100 / (100 + receiver->getDef())) * getAtk());
    receiver->getHP() -= damage;
    return damage;
}


string Drow::getRace() {
    return "Drow";
}


