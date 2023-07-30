#include "./passage.h"
using namespace std;

Passage::Passage(int x, int y) : FloorTiles{x, y, '#'} {}

Passage::~Passage() {}

bool Passage::isTraversible(AbstractObject* object) {
    if (object->identify() == "Player") {
        return true;
    } else {
        return false;
    }
}
